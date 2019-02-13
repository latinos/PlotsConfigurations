#!/usr/bin/env python

import os
import sys
import re
import ROOT

SIGNAL_FIDUCIAL_ONLY = False
SIGNAL_HWW_ONLY = True

sourcePath = sys.argv[1]
outputPath = sys.argv[2]
tag = sys.argv[3] #'ggHDifferential2016'
measurement = sys.argv[4]

samples = {}
with open('samples.py') as samplesfile:
    exec(samplesfile)
cuts = {}
with open('cuts.py') as cutsfile:
    exec(cutsfile)
nuisances = {}
with open('nuisances.py') as nuisancesfile:
    exec(nuisancesfile)

if measurement == 'ptH':
    allBins = ['PTH_0_20', 'PTH_20_30', 'PTH_30_45', 'PTH_45_60', 'PTH_60_80', 'PTH_80_100', 'PTH_100_120', 'PTH_120_155', 'PTH_155_200', 'PTH_200_260', 'PTH_260_350', 'PTH_GT350']

    recoBinMerging = [
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

    recoBinMerging = [
        ('NJ_0', ['NJ_0']),
        ('NJ_1', ['NJ_1']),
        ('NJ_2', ['NJ_2']),
        ('NJ_3', ['NJ_3']),
        ('NJ_GE4', ['NJ_GE4'])
    ]

    split = [8, 8, 2, 2, 2]

backgrounds = {}
    
signals = [
    'ggH_hww',
    'qqH_hww',
    'ZH_hww',
    'ggZH_hww',
    'WH_hww',
    'bbH_hww',
    'ttH_hww'
]

htt = ['ggH_htt', 'qqH_htt', 'ZH_htt', 'WH_htt']

if SIGNAL_HWW_ONLY:
    mergedSignal = 'smH_hww'
    backgrounds['htt'] = [(sample, [f + b for f in ['fid_', 'nonfid_'] for b in allBins]) for sample in htt]
else:
    mergedSignal = 'smH'
    signals += htt

backgrounds['Fake'] = ['Fake']
if tag == 'ggHDifferential2016':
    backgrounds['minor'] = ['ggWW', 'Vg', 'WZgS_L', 'WZgS_H', 'VZ', 'VVV']
else:
    signals.remove('bbH_hww')
    backgrounds['minor'] = ['ggWW', 'Vg', 'WZgS', 'VZ', 'VVV']
    
for nj in ['0j', '1j', '2j', '3j', 'ge4j']:
    backgrounds['WW_%s' % nj] = [('WW', [nj])]
    backgrounds['top_%s' % nj] = [('top', [nj])]
    backgrounds['DY_%s' % nj] = [('DY', [nj])]

genBinMerging = []
if SIGNAL_FIDUCIAL_ONLY:
    backgrounds['nonfid'] = [(sample, ['nonfid_' + b for b in allBins]) for s in signals]

    for outBin, sourceBins in recoBinMerging:
        genBinMerging.append((outBin, ['fid_' + s for s in sourceBins]))
else:
    for outBin, sourceBins in recoBinMerging:
        genBinMerging.append((outBin, ['fid_' + s for s in sourceBins] + ['nonfid_' + s for s in sourceBins]))

recoBinMap = dict(recoBinMerging)

pt2confs = ['pt2lt20', 'pt2ge20']
lepconfs = ['emmp', 'epmm', 'mmep', 'mpem']

def getSourceDirectories(recoOutBin, category):
    sourceDirectories = []
    for recoBin in recoBinMap[recoOutBin]:
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

lnNSpecific = {}
for nuisance in nuisances.itervalues():
    if 'type' not in nuisance or nuisance['type'] != 'lnN':
        continue
    if 'samples' in nuisance:
        lnNUp = lnNSpecific[nuisance['name'] + 'Up'] = {}
        lnNDown = lnNSpecific[nuisance['name'] + 'Down'] = {}
        for sname, vdef in nuisance['samples'].iteritems():
            if '/' in vdef:
                vdef = tuple(reversed(vdef.split('/')))

            if type(vdef) is list or type(vdef) is tuple:
                lnNUp[sname] = float(vdef[0])
                lnNDown[sname] = float(vdef[1])
            else:
                lnNUp[sname] = float(vdef)
                lnNDown[sname] = 2. - float(vdef)


signalTheoretical = {}
source = ROOT.TFile.Open(os.path.dirname(__file__) + '/rescale_thu.root')
hup = source.Get('hup')
hdown = source.Get('hdown')
for iX in range(1, hup.GetNbinsX() + 1):
  name = hup.GetXaxis().GetBinLabel(iX)
  sup = 1. / hup.GetBinContent(iX)
  sdown = 1. / hdown.GetBinContent(iX)

  signalTheoretical[name + 'Up'] = sup
  signalTheoretical[name + 'Down'] = sdown

source.Close()

output = ROOT.TFile.Open(outputPath, 'recreate')
ROOT.gROOT.GetListOfFiles().Remove(output)

for (outBin, _), nsplit in zip(recoBinMerging, split):
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

class SourceGetter(object):
    def __init__(self, path):
        self.source = ROOT.TFile.Open(path)
        if not self.source:
            raise RuntimeError(path)

        ROOT.gROOT.GetListOfFiles().Remove(self.source)
        self.cwd = ''

    def cd(self, path):
        self.cwd = path

    def pwd(self):
        return self.source.GetName() + ':' + self.cwd

    def get(self, name, noraise=False):
        h = self.source.Get(self.cwd + '/' + name)
        if not h and not noraise:
            raise RuntimeError(self.pwd() + '/' + name + ' not accessible')

        return h

    def getkeys(self):
        d = self.source.GetDirectory(self.cwd)
        if not d:
            raise RuntimeError(self.pwd() + ' not accessible')

        return d.GetListOfKeys()

    def close(self):
        self.source.Close()


if os.path.isfile(sourcePath):
    getter = SourceGetter(sourcePath)

knownVariations = []
for sample in signals:
    if os.path.isdir(sourcePath):
        getter = SourceGetter('%s/plots_%s_ALL_%s.root' % (sourcePath, tag, sample))

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
    
            for genOutBin, genSourceBins in genBinMerging: # merge histograms from source truth bins
                outNominalName = 'histo_%s_%s' % (mergedSignal, genOutBin)
                outNominal = outDir.Get('%s/%s' % (templateName, outNominalName))
                if not outNominal:
                    outDir.cd(templateName)
                    outNominal = ROOT.TH1D(outNominalName, outNominalName, templateBins, 0., float(templateBins))
                    _histograms.append(outNominal)
    
                outVariations = {}
                for variation in knownVariations:
                    outVariationName = 'histo_%s_%s_%s' % (mergedSignal, genOutBin, variation)
                    outVariation = outDir.Get('%s/%s' % (templateName, outVariationName))
                    if not outVariation:
                        outDir.cd(templateName)
                        outVariation = outNominal.Clone(outVariationName)
                        _histograms.append(outVariation)
                        outVariation.SetTitle(outVariationName)
    
                    outVariations[variation] = outVariation
    
                for sourceDirectory in sourceDirectories:
                    getter.cd('%s/%s' % (sourceDirectory, templateName))
                    #print '%s/%s/%s' % (source.GetName(), sourceDirectory, templateName)
                    for genSourceBin in genSourceBins:
                        # pick up the nominal input
                        #print 'histo_%s_%s' % (sample, genSourceBin)
                        inNominal = getter.get('histo_%s_%s' % (sample, genSourceBin))
    
                        # then deal with variations
                        for variation, outVariation in outVariations.iteritems():
                            if variation in lnNSpecific:
                                if sample in lnNSpecific[variation]:
                                    inVariation = inNominal.Clone('histo_%s_%s_%s' % (sample, genSourceBin, variation))
                                    inVariation.Scale(lnNSpecific[variation][sample])
                                else:
                                    inVariation = None
                            else:
                                inVariation = getter.get('histo_%s_%s_%s' % (sample, genSourceBin, variation), noraise=True)
                                
                            if inVariation:
                                #print '%s/%s/%s/%s -> %s/%s/%s' % (source.GetName(), sourceDirectory, templateName, inVariation.GetName(), outDir.GetName(), templateName, outVariation.GetName())
                                if variation in signalTheoretical:
                                    inVariation.Scale(signalTheoretical[variation])
                                
                                outVariation.Add(inVariation)
                                inVariation.Delete()
                            else:
                                #print '%s/%s/%s/%s -> %s/%s/%s' % (source.GetName(), sourceDirectory, templateName, inNominal.GetName(), outDir.GetName(), templateName, outVariation.GetName())
                                outVariation.Add(inNominal)
    
                        # unknown variations
                        if sampleFirst:
                            for key in getter.getkeys():
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

                                inVariation = key.ReadObj()
                                if variation in signalTheoretical:
                                    inVariation.Scale(signalTheoretical[variation])
                                
                                outVariation.Add(inVariation)
                                inVariation.Delete()
        
                                knownVariations.append(variation)
                                outVariations[variation] = outVariation

                            for variation, lnNDef in lnNSpecific.iteritems():
                                if variation in knownVariations or sample not in lnNDef:
                                    continue

                                outVariationName = 'histo_smH_hww_%s_%s' % (genOutBin, variation)
                                outDir.cd(templateName)
                                outVariation = outNominal.Clone(outVariationName)
                                _histograms.append(outVariation)
                                outVariation.SetTitle(outVariationName)

                                inVariation = inNominal.Clone('histo_%s_%s_%s' % (sample, genSourceBin, variation))
                                inVariation.Scale(lnNDef[sample])
                                outVariation.Add(inVariation)
                                inVariation.Delete()
        
                                knownVariations.append(variation)
                                outVariations[variation] = outVariation
    
                            sampleFirst = False

                        # finally update out nominal
                        print '%s/%s -> %s/%s/%s' % (getter.pwd(), inNominal.GetName(), outDir.GetName(), templateName, outNominal.GetName())
                        outNominal.Add(inNominal)
                        inNominal.Delete()


    if os.path.isdir(sourcePath):
        getter.close()

backgrounds['DATA'] = ['DATA']

knownVariations = []
for outSample, snames in backgrounds.iteritems():
    outNominalName = 'histo_%s' % outSample
    
    for sample in snames:
        if type(sample) is tuple:
            subsamples = ['%s_%s' % (sample[0], s) for s in sample[1]]
            sample = sample[0]
        else:
            subsamples = [sample]

        if os.path.isdir(sourcePath):
            getter = SourceGetter('%s/plots_%s_ALL_%s.root' % (sourcePath, tag, sample))

        # Signal region directories
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
                    getter.cd('%s/%s' % (sourceDirectory, templateName))
    
                    for subsample in subsamples:
                        # pick up the nominal input
                        inNominal = getter.get('histo_%s' % subsample)
            
                        # then deal with variations
                        for variation, outVariation in outVariations.iteritems():
                            if variation in lnNSpecific:
                                if sample in lnNSpecific[variation]:
                                    inVariation = inNominal.Clone('histo_%s_%s' % (subsample, variation))
                                    inVariation.Scale(lnNSpecific[variation][sample])
                                else:
                                    inVariation = None
                            else:
                                inVariation = getter.get('histo_%s_%s' % (subsample, variation), noraise=True)

                            if inVariation:
                                outVariation.Add(inVariation)
                                inVariation.Delete()
                            else:
                                outVariation.Add(inNominal)
            
                        # unknown variations
                        if sampleFirst:
                            for key in getter.getkeys():
                                matches = re.match('histo_%s_(.+)$' % subsample, key.GetName())
                                if not matches or matches.group(1) in knownVariations:
                                    continue
            
                                variation = matches.group(1)
                                outVariationName = 'histo_%s_%s' % (outSample, variation)
                                outDir.cd(templateName)
                                outVariation = outNominal.Clone(outVariationName)
                                _histograms.append(outVariation)
                                outVariation.SetTitle(outVariationName)

                                inVariation = key.ReadObj()
                                outVariation.Add(inVariation)
                                inVariation.Delete()
            
                                knownVariations.append(variation)
                                outVariations[variation] = outVariation

                            for variation, lnNDef in lnNSpecific.iteritems():
                                if variation in knownVariations or sample not in lnNDef:
                                    continue

                                outVariationName = 'histo_%s_%s' % (outSample, variation)
                                outDir.cd(templateName)
                                outVariation = outNominal.Clone(outVariationName)
                                _histograms.append(outVariation)
                                outVariation.SetTitle(outVariationName)

                                inVariation = inNominal.Clone('histo_%s_%s' % (subsample, variation))
                                inVariation.Scale(lnNDef[sample])
                                outVariation.Add(inVariation)
                                inVariation.Delete()
        
                                knownVariations.append(variation)
                                outVariations[variation] = outVariation
            
                            sampleFirst = False
            
                        # finally update out nominal
                        print '%s/%s -> %s/%s/%s' % (getter.pwd(), inNominal.GetName(), outDir.GetName(), templateName, outNominal.GetName())
                        outNominal.Add(inNominal)
                        inNominal.Delete()

        # Control region directories
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
                
            getter.cd('%s/%s' % (sourceDirectory, templateName))

            for subsample in subsamples:
                # pick up the nominal input
                inNominal = getter.get('histo_%s' % subsample)
    
                # then deal with variations
                for variation, outVariation in outVariations.iteritems():
                    if variation in lnNSpecific:
                        if sample in lnNSpecific[variation]:
                            inVariation = inNominal.Clone('histo_%s_%s' % (subsample, variation))
                            inVariation.Scale(lnNSpecific[variation][sample])
                        else:
                            inVariation = None
                    else:
                        inVariation = getter.get('histo_%s_%s' % (subsample, variation), noraise=True)

                    if inVariation:
                        outVariation.Add(inVariation)
                        inVariation.Delete()
                    else:
                        outVariation.Add(inNominal)
    
                # unknown variations
                if sampleFirst:
                    for key in getter.getkeys():
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

                    for variation, lnNDef in lnNSpecific.iteritems():
                        if variation in knownVariations or sample not in lnNDef:
                            continue

                        outVariationName = 'histo_%s_%s' % (outSample, variation)
                        outDir.cd(templateName)
                        outVariation = outNominal.Clone(outVariationName)
                        _histograms.append(outVariation)
                        outVariation.SetTitle(outVariationName)

                        inVariation = inNominal.Clone('histo_%s_%s' % (subsample, variation))
                        inVariation.Scale(lnNDef[sample])
                        outVariation.Add(inVariation)
                        inVariation.Delete()

                        knownVariations.append(variation)
                        outVariations[variation] = outVariation
    
                    sampleFirst = False
    
                # finally update out nominal
                print '%s/%s -> %s/%s/%s' % (getter.pwd(), inNominal.GetName(), outDir.GetName(), templateName, outNominal.GetName())
                outNominal.Add(inNominal)
                inNominal.Delete()

        if os.path.isdir(sourcePath):
            getter.close()
    
output.Write()
output.Close()
