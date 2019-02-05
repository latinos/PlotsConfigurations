#!/usr/bin/env python

import os
import sys
import re
import ROOT

# merge pt bins
# renormalize signal variation histograms
# merge signal
# merge background

sourceDir = sys.argv[1]
outputPath = sys.argv[2]
tag = sys.argv[3] #'ggHDifferential2016'
measurement = sys.argv[4]

if measurement == 'ptH':
    allBins = ['PTH_0_20', 'PTH_20_30', 'PTH_30_45', 'PTH_45_60', 'PTH_60_80', 'PTH_80_100', 'PTH_100_120', 'PTH_120_155', 'PTH_155_200', 'PTH_200_260', 'PTH_260_350', 'PTH_GT350']

    binMerging = [
        ('PTH_0_20', ['PTH_0_20']),
        ('PTH_20_45', ['PTH_20_30', 'PTH_30_45']),
        ('PTH_45_80', ['PTH_45_60', 'PTH_60_80']),
        ('PTH_80_120', ['PTH_80_100', 'PTH_100_120']),
        ('PTH_120_200', ['PTH_120_155', 'PTH_155_200']),
        ('PTH_200_350', ['PTH_200_260', 'PTH_260_350']),
        ('PTH_GT350', ['PTH_GT350'])
    ]

    split = [8, 8, 4, 3, 2, 2, 2]

else:
    allBins = ['NJ_0', 'NJ_1', 'NJ_2', 'NJ_3', 'NJ_GE4']

    binMerging = [
        ('NJ_0', ['NJ_0']),
        ('NJ_1', ['NJ_1']),
        ('NJ_2', ['NJ_2']),
        ('NJ_3', ['NJ_3']),
        ('NJ_GE4', ['NJ_GE4'])
    ]

    split = [8, 8, 2, 2, 2]

binMap = dict(binMerging)
# temporary bugfix
if measurement == 'njet':
    for key in binMap:
        src = ['NJ_hww_' + b for b in binMap[key]]
        binMap[key] = src
    
signals = [
    'ggH_hww',
    'qqH_hww',
    'ZH_hww',
    'ggZH_hww',
    'WH_hww',
    'bbH_hww',
    'ttH_hww'
]

backgrounds = {'Fake': ['Fake']}
if tag == 'ggHDifferential2016':
    backgrounds['minor'] = ['ggWW', 'Vg', 'WZgS_L', 'WZgS_H', 'VZ', 'VVV']
else:
    signals.remove('bbH_hww')
    backgrounds['minor'] = ['ggWW', 'Vg', 'WZgS', 'VZ', 'VVV']
    
backgrounds['htt'] = []
for sample in ['ggH_htt', 'qqH_htt', 'ZH_htt', 'WH_htt']:
    backgrounds['htt'].append((sample, allBins))

for nj in ['0j', '1j', '2j', '3j', 'ge4j']:
    backgrounds['WW_%s' % nj] = [('WW', [nj])]
    backgrounds['top_%s' % nj] = [('top', [nj])]
    backgrounds['DY_%s' % nj] = [('DY', [nj])]

pt2confs = ['pt2lt20', 'pt2ge20']
lepconfs = ['emmp', 'epmm', 'mmep', 'mpem']

def getSourceDirectories(recoOutBin, category):
    sourceDirectories = []
    for recoBin in binMap[recoOutBin]:
        if category is None:
            for pt2 in pt2confs:
                for lep in lepconfs:
                    sourceDirectories.append('hww_%s_cat%s%s' % (recoBin, lep, pt2))

        elif category.startswith('pt2'):
            for lep in lepconfs:
                sourceDirectories.append('hww_%s_cat%s%s' % (recoBin, lep, category))

        elif category.startswith('empt2'):
            for lep in ['epmm', 'emmp']:
                sourceDirectories.append('hww_%s_cat%s%s' % (recoBin, lep, category[2:]))

        elif category.startswith('mept2'):
            for lep in ['mpem', 'mmep']:
                sourceDirectories.append('hww_%s_cat%s%s' % (recoBin, lep, category[2:]))

        else:
            sourceDirectories.append('hww_%s_cat%s' % (recoBin, category))

    return sourceDirectories

def getTemplateSpec(category):
    if category.endswith('pt2lt20'):
        return 'mllVSmth_6x6', 36
    else:
        return 'mllVSmth_8x9', 72


output = ROOT.TFile.Open(outputPath, 'recreate')
ROOT.gROOT.GetListOfFiles().Remove(output)

for (outBin, _), nsplit in zip(binMerging, split):
    if nsplit == 8:
        for pt2 in pt2confs:
            for lep in lepconfs:
                output.mkdir('hww_%s_cat%s%s' % (outBin, lep, pt2))

    elif nsplit == 4:
        for pt2 in pt2confs:
            for lep in ['em', 'me']:
                output.mkdir('hww_%s_cat%s%s' % (outBin, lep, pt2))

    elif nsplit == 3:
        for lep in ['em', 'me']:
            output.mkdir('hww_%s_cat%spt2lt20' % (outBin, lep))
        output.mkdir('hww_%s_catpt2ge20' % outBin)

    elif nsplit == 2:
        for pt2 in pt2confs:
            output.mkdir('hww_%s_cat%s' % (outBin, pt2))

    elif nsplit == 1:
        output.mkdir('hww_%s' % outBin)

for nj in ['0j', '1j', '2j', '3j', 'ge4j']:
    output.mkdir('hww_CR_catDYreco%s' % nj)
    output.mkdir('hww_CR_cattopreco%s' % nj)

_histograms = []

knownVariations = []
for sample in signals:
    source = ROOT.TFile.Open('%s/plots_%s_ALL_%s.root' % (sourceDir, tag, sample))
    ROOT.gROOT.GetListOfFiles().Remove(source)

    sampleFirst = True
    for dkey in output.GetListOfKeys():
        matches = re.match('hww_((?:PTH|NJ)_(?:[0-9]+|G[ET][0-9]+|[0-9]+_[0-9]+))(?:_cat(.+)|)$', dkey.GetName())
        if not matches:
            continue
        
        recoOutBin = matches.group(1)
        category = matches.group(2)

        sourceDirectories = getSourceDirectories(recoOutBin, category)

        outDir = output.GetDirectory(dkey.GetName())

        for templateName, templateBins in [getTemplateSpec(category), ('events', 1)]:
            if not outDir.GetDirectory(templateName):
                outDir.mkdir(templateName)
    
            for genOutBin, genSourceBins in binMerging: # merge histograms from source truth bins
                outNominalName = 'histo_smH_hww_%s' % genOutBin
                outNominal = outDir.Get('%s/%s' % (templateName, outNominalName))
                if not outNominal:
                    outDir.cd(templateName)
                    outNominal = ROOT.TH1D(outNominalName, outNominalName, templateBins, 0., float(templateBins))
                    _histograms.append(outNominal)
    
                outVariations = {}
                for variation in knownVariations:
                    outVariationName = 'histo_smH_hww_%s_%s' % (genOutBin, variation)
                    outVariation = outDir.Get('%s/%s' % (templateName, outVariationName))
                    if not outVariation:
                        outDir.cd(templateName)
                        outVariation = outNominal.Clone(outVariationName)
                        _histograms.append(outVariation)
                        outVariation.SetTitle(outVariationName)
    
                    outVariations[variation] = outVariation
    
                for sourceDirectory in sourceDirectories:
                    d = source.GetDirectory('%s/%s' % (sourceDirectory, templateName))
                    #print '%s/%s/%s' % (source.GetName(), sourceDirectory, templateName)
                    for genSourceBin in genSourceBins:
                        # pick up the nominal input
                        #print 'histo_%s_%s' % (sample, genSourceBin)
                        inNominal = d.Get('histo_%s_%s' % (sample, genSourceBin))
    
                        # then deal with variations
                        for variation, outVariation in outVariations.iteritems():
                            inVariation = d.Get('histo_%s_%s_%s' % (sample, genSourceBin, variation))
                            if inVariation:
                                #print '%s/%s/%s/%s -> %s/%s/%s' % (source.GetName(), sourceDirectory, templateName, inVariation.GetName(), outDir.GetName(), templateName, outVariation.GetName())
                                outVariation.Add(inVariation)
                            else:
                                #print '%s/%s/%s/%s -> %s/%s/%s' % (source.GetName(), sourceDirectory, templateName, inNominal.GetName(), outDir.GetName(), templateName, outVariation.GetName())
                                outVariation.Add(inNominal)
    
                        # unknown variations
                        if sampleFirst:
                            for key in d.GetListOfKeys():
                                matches = re.match('histo_%s_%s_(.+)$' % (sample, genSourceBin), key.GetName())
                                if not matches or matches.group(1) in knownVariations:
                                    continue
        
                                variation = matches.group(1)
                                outVariationName = 'histo_smH_hww_%s_%s' % (genOutBin, variation)
                                outDir.cd(templateName)
                                outVariation = outNominal.Clone(outVariationName)
                                _histograms.append(outVariation)
                                outVariation.SetTitle(outVariationName)
                                #print '%s/%s/%s/%s -> %s/%s/%s' % (source.GetName(), sourceDirectory, templateName, key.GetName(), outDir.GetName(), templateName, outVariation.GetName())
                                outVariation.Add(key.ReadObj())
        
                                knownVariations.append(variation)
                                outVariations[variation] = outVariation
    
                            sampleFirst = False
    
                        # finally update out nominal
                        print '%s/%s/%s/%s -> %s/%s/%s' % (source.GetName(), sourceDirectory, templateName, inNominal.GetName(), outDir.GetName(), templateName, outNominal.GetName())
                        outNominal.Add(inNominal)

    source.Close()

backgrounds['DATA'] = ['DATA']

knownVariations = []
for outSample, samples in backgrounds.iteritems():
    outNominalName = 'histo_%s' % outSample
    
    for sample in samples:
        if type(sample) is tuple:
            subsamples = ['%s_%s' % (sample[0], s) for s in sample[1]]
            sample = sample[0]
        else:
            subsamples = [sample]
        
        source = ROOT.TFile.Open('%s/plots_%s_ALL_%s.root' % (sourceDir, tag, sample))
        ROOT.gROOT.GetListOfFiles().Remove(source)
    
        sampleFirst = True
        for dkey in output.GetListOfKeys():
            matches = re.match('hww_((?:PTH|NJ)_(?:[0-9]+|G[ET][0-9]+|[0-9]+_[0-9]+))(?:_cat(.+)|)$', dkey.GetName())
            if not matches:
                continue
            
            recoOutBin = matches.group(1)
            category = matches.group(2)
    
            sourceDirectories = getSourceDirectories(recoOutBin, category)
    
            outDir = output.GetDirectory(dkey.GetName())
    
            for templateName, templateBins in [getTemplateSpec(category), ('events', 1)]:
                if not outDir.GetDirectory(templateName):
                    outDir.mkdir(templateName)
    
                outNominal = outDir.Get('%s/%s' % (templateName, outNominalName))
                if not outNominal:
                    outDir.cd(templateName)
                    outNominal = ROOT.TH1D(outNominalName, outNominalName, templateBins, 0., float(templateBins))
                    _histograms.append(outNominal)
        
                outVariations = {}
                for variation in knownVariations:
                    outVariationName = 'histo_%s_%s' % (outSample, variation)
                    outVariation = outDir.Get('%s/%s' % (templateName, outVariationName))
                    if not outVariation:
                        outDir.cd(templateName)
                        outVariation = outNominal.Clone(outVariationName)
                        _histograms.append(outVariation)
                        outVariation.SetTitle(outVariationName)
        
                    outVariations[variation] = outVariation
        
                for sourceDirectory in sourceDirectories:
                    d = source.GetDirectory('%s/%s' % (sourceDirectory, templateName))
    
                    for subsample in subsamples:
                        # pick up the nominal input
                        inNominal = d.Get('histo_%s' % subsample)
            
                        # then deal with variations
                        for variation, outVariation in outVariations.iteritems():
                            inVariation = d.Get('histo_%s_%s' % (subsample, variation))
                            if inVariation:
                                outVariation.Add(inVariation)
                            else:
                                try:
                                    outVariation.Add(inNominal)
                                except:
                                    print source.GetName(), sourceDirectory, templateName, 'histo_%s' % subsample
                                    raise
            
                        # unknown variations
                        if sampleFirst:
                            for key in d.GetListOfKeys():
                                matches = re.match('histo_%s_(.+)$' % subsample, key.GetName())
                                if not matches or matches.group(1) in knownVariations:
                                    continue
            
                                variation = matches.group(1)
                                outVariationName = 'histo_%s_%s' % (outSample, variation)
                                outDir.cd(templateName)
                                outVariation = outNominal.Clone(outVariationName)
                                _histograms.append(outVariation)
                                outVariation.SetTitle(outVariationName)
                                outVariation.Add(key.ReadObj())
            
                                knownVariations.append(variation)
                                outVariations[variation] = outVariation
            
                            sampleFirst = False
            
                        # finally update out nominal
                        print '%s/%s/%s/%s -> %s/%s/%s' % (source.GetName(), sourceDirectory, templateName, inNominal.GetName(), outDir.GetName(), templateName, outNominal.GetName())
                        outNominal.Add(inNominal)

        sampleFirst = True
        for dkey in output.GetListOfKeys():
            if not dkey.GetName().startswith('hww_CR'):
                continue

            outDir = output.GetDirectory(dkey.GetName())
    
            templateName, templateBins = 'events', 1

            if not outDir.GetDirectory(templateName):
                outDir.mkdir(templateName)

            outNominal = outDir.Get('%s/%s' % (templateName, outNominalName))
            if not outNominal:
                outDir.cd(templateName)
                outNominal = ROOT.TH1D(outNominalName, outNominalName, templateBins, 0., float(templateBins))
                _histograms.append(outNominal)
    
            outVariations = {}
            for variation in knownVariations:
                outVariationName = 'histo_%s_%s' % (outSample, variation)
                outVariation = outDir.Get('%s/%s' % (templateName, outVariationName))
                if not outVariation:
                    outDir.cd(templateName)
                    outVariation = outNominal.Clone(outVariationName)
                    _histograms.append(outVariation)
                    outVariation.SetTitle(outVariationName)
    
                outVariations[variation] = outVariation

            sourceDirectory = dkey.GetName()
                
            d = source.GetDirectory('%s/%s' % (sourceDirectory, templateName))

            for subsample in subsamples:
                # pick up the nominal input
                inNominal = d.Get('histo_%s' % subsample)
    
                # then deal with variations
                for variation, outVariation in outVariations.iteritems():
                    inVariation = d.Get('histo_%s_%s' % (subsample, variation))
                    if inVariation:
                        outVariation.Add(inVariation)
                    else:
                        try:
                            outVariation.Add(inNominal)
                        except:
                            print source.GetName(), sourceDirectory, templateName, 'histo_%s' % subsample
                            raise
    
                # unknown variations
                if sampleFirst:
                    for key in d.GetListOfKeys():
                        matches = re.match('histo_%s_(.+)$' % subsample, key.GetName())
                        if not matches or matches.group(1) in knownVariations:
                            continue
    
                        variation = matches.group(1)
                        outVariationName = 'histo_%s_%s' % (outSample, variation)
                        outDir.cd(templateName)
                        outVariation = outNominal.Clone(outVariationName)
                        _histograms.append(outVariation)
                        outVariation.SetTitle(outVariationName)
                        outVariation.Add(key.ReadObj())
    
                        knownVariations.append(variation)
                        outVariations[variation] = outVariation
    
                    sampleFirst = False
    
                # finally update out nominal
                print '%s/%s/%s/%s -> %s/%s/%s' % (source.GetName(), sourceDirectory, templateName, inNominal.GetName(), outDir.GetName(), templateName, outNominal.GetName())
                outNominal.Add(inNominal)

    
        source.Close()
    
output.Write()
output.Close()
