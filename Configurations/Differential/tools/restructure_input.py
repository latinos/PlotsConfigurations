#!/usr/bin/env python

import os
import sys
import re
import ROOT

SIGNAL_FIDUCIAL_ONLY = False
SIGNAL_GGH_SEPARATE = True
SIGNAL_HWW_ONLY = True
BACKGROUND_MINOR_MERGE = False
INPUT_FAKE_FLAVORED = True
INPUT_MAJOR_SPLIT = None

sourcePath = sys.argv[1]
outputPath = sys.argv[2]
tag = sys.argv[3] #'ggHDifferential2016'
measurement = sys.argv[4]
try:
    year = sys.argv[5]
except IndexError:
    if '2016' in tag:
        year = '2016'
    elif '2017' in tag:
        year = '2017'
    else:
        raise RuntimeError('Cannot determine year')

### Load the configuration

samples = {}
with open('samples.py') as samplesfile:
    exec(samplesfile)
cuts = {}
with open('cuts.py') as cutsfile:
    exec(cutsfile)
nuisances = {}
with open('nuisances.py') as nuisancesfile:
    exec(nuisancesfile)

### How we merge the bins & categories

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

    def getTemplateSpec(recoOutBin, category):
        if category.startswith('pt2lt20'):
            return 'mllVSmth_6x6', 36
        else:
            return 'mllVSmth_8x9', 72

    #crCategories = ['0j', '1j', '2j', '3j', 'ge4j']

else:
    allBins = ['NJ_0', 'NJ_1', 'NJ_2', 'NJ_3', 'NJ_GE4']

    recoBinMerging = [
        ('NJ_0', ['NJ_0']),
        ('NJ_1', ['NJ_1']),
        ('NJ_2', ['NJ_2']),
        ('NJ_3', ['NJ_3']),
        ('NJ_GE4', ['NJ_GE4'])
    ]

    split = [8, 8, 1, 1, 1]

    def getTemplateSpec(recoOutBin, category):
        if recoOutBin in ['NJ_0', 'NJ_1']:
            if category.startswith('pt2lt20'):
                return 'mllVSmth_pt2lt20', 36
            else:
                return 'mllVSmth_pt2ge20', 72
        else:
            return 'mll_optim', 7

    crCategories = ['0j', '1j', '2j', '3j', 'ge4j']

### Sample merging configuration according to the flags at the beginning

backgrounds = {'DATA': ['DATA']}
signals = {}

ggH_hww = ['ggH_hww']
xH_hww = [
    'qqH_hww',
    'ZH_hww',
    'ggZH_hww',
    'WH_hww',
    'bbH_hww',
    'ttH_hww'
]
ggH_htt = ['ggH_htt']
xH_htt = ['qqH_htt', 'ZH_htt', 'WH_htt']

# temporary workaround - some missing samples
if year == '2016':
    minors = ['ggWW', 'Vg', 'WZgS_L', 'WZgS_H', 'VZ', 'VVV']
else:
    xH_hww.remove('bbH_hww')
    minors = ['ggWW', 'Vg', 'WZgS_H', 'VZ', 'VVV']

if SIGNAL_HWW_ONLY:
    if SIGNAL_GGH_SEPARATE:
        signals['ggH_hww'] = ggH_hww
        signals['xH_hww'] = xH_hww
    else:
        signals['smH_hww'] = ggH_hww + xH_hww

    backgrounds['htt'] = [(sample, [f + b for f in ['fid_', 'nonfid_'] for b in allBins]) for sample in (ggH_htt + xH_htt)]
else:
    if SIGNAL_GGH_SEPARATE:
        signals['ggH'] = ggH_hww + ggH_htt
        signals['xH'] = xH_hww + xH_htt
    else:
        signals['smH'] = ggH_hww + xH_hww + ggH_htt + xH_htt

if INPUT_FAKE_FLAVORED:
    backgrounds['Fake'] = ['Fake_em', 'Fake_me']
else:
    backgrounds['Fake'] = ['Fake', 'Fake']

if BACKGROUND_MINOR_MERGE:
    backgrounds['minor'] = minors
else:
    for name in minors:
        backgrounds[name] = [name]

if INPUT_MAJOR_SPLIT == 'NJ':
    for nj in ['0j', '1j', '2j', '3j', 'ge4j']:
        backgrounds['WW_%s' % nj] = [('WW', [nj])]
        backgrounds['top_%s' % nj] = [('top', [nj])]
        backgrounds['DY_%s' % nj] = [('DY', [nj])]
elif INPUT_MAJOR_SPLIT == 'PTH':
    pass
elif INPUT_MAJOR_SPLIT is None:
    backgrounds['WW'] = ['WW']
    backgrounds['top'] = ['top']
    backgrounds['DY'] = ['DY']

genBinMerging = []
if SIGNAL_FIDUCIAL_ONLY:
    backgrounds['nonfid'] = [(s, ['nonfid_' + b for b in allBins]) for s in sum(signals.values(), [])]

    for outBin, sourceBins in recoBinMerging:
        genBinMerging.append((outBin, ['fid_' + s for s in sourceBins]))
else:
    for outBin, sourceBins in recoBinMerging:
        genBinMerging.append((outBin, ['fid_' + s for s in sourceBins] + ['nonfid_' + s for s in sourceBins]))

### How to merge the cuts

recoBinMap = dict(recoBinMerging)

pt2confs = ['pt2lt20', 'pt2ge20']
flavconfs = ['em', 'me']
chrgconfs = ['pm', 'mp']

def getSourceDirectories(recoOutBin, category):
    sourceDirectories = []
    for recoBin in recoBinMap[recoOutBin]:
        if category is None:
            for pt2 in pt2confs:
                for flav in flavconfs:
                    for chrg in chrgconfs:
                        sourceDirectories.append('hww_%s_cat%s%s%s_%s' % (recoBin, pt2, flav, chrg, year))

        elif category in pt2confs:
            for flav in flavconfs:
                for chrg in chrgconfs:
                    sourceDirectories.append('hww_%s_cat%s%s%s_%s' % (recoBin, category, flav, chrg, year))

        elif category in [pt2 + flav for pt2 in pt2confs for flav in flavconfs]:
            for chrg in chrgconfs:
                sourceDirectories.append('hww_%s_cat%s%s_%s' % (recoBin, category, chrg, year))

        else:
            sourceDirectories.append('hww_%s_cat%s_%s' % (recoBin, category, year))

    return sourceDirectories

### Prepare nuisance editing

lnNSpecific = {}
for nuisance in nuisances.itervalues():
    if 'type' not in nuisance or 'samples' not in nuisance:
        continue

    if nuisance['type'] != 'lnN' and 'AsLnN' not in nuisance:
        continue

    # if there is no mixing of affected and unaffected samples, we let the nuisance stay as lnN
    mixing = False
    for sname in nuisance['samples']:
        for target, snames in signals.items() + backgrounds.items():
            if sname in snames:
                if len(set(snames) - set(nuisance['samples'].keys())) != 0:
                    # snames (merge list) and the sample list in nuisance only partially overlaps
                    mixing = True
                break
        if mixing:
            break

    if not mixing:
        continue

    if nuisance['type'] == 'lnN':
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

    elif nuisance['type'] == 'shape' and 'AsLnN' in nuisance and float(nuisance['AsLnN']) >= 1.:
        lnNUp = lnNSpecific[nuisance['name'] + 'Up'] = {}
        lnNDown = lnNSpecific[nuisance['name'] + 'Down'] = {}
        for sname, vdef in nuisance['samples'].iteritems():
            lnNUp[sname] = ('histo', float(nuisance['AsLnN']))
            lnNDown[sname] = ('histo', float(nuisance['AsLnN']))

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

### Create the output directory structure first

output = ROOT.TFile.Open(outputPath, 'recreate')
ROOT.gROOT.GetListOfFiles().Remove(output)

for (outBin, _), nsplit in zip(recoBinMerging, split):
    if nsplit == 8:
        for pt2 in pt2confs:
            for flav in flavconfs:
                for chrg in chrgconfs:
                    output.mkdir('hww_%s_cat%s%s%s_%s' % (outBin, pt2, flav, chrg, year))

    elif nsplit == 4:
        for pt2 in pt2confs:
            for flav in flavconfs:
                output.mkdir('hww_%s_cat%s%s_%s' % (outBin, pt2, flav, year))

    elif nsplit == 3:
        for flav in flavconfs:
            output.mkdir('hww_%s_catpt2lt20%s_%s' % (outBin, flav, year))
        output.mkdir('hww_%s_catpt2ge20_%s' % (outBin, year))

    elif nsplit == 2:
        for pt2 in pt2confs:
            output.mkdir('hww_%s_cat%s_%s' % (outBin, pt2, year))

    elif nsplit == 1:
        output.mkdir('hww_%s_%s' % (outBin, year))

for cat in crCategories:
    output.mkdir('hww_CR_catDY_%s_%s' % (cat, year))
    output.mkdir('hww_CR_cattop_%s_%s' % (cat, year))

### Tool to get source histograms

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

        if h:
            h.GetXaxis().SetLimits(0., float(h.GetNbinsX()))

        return h

    def getkeys(self):
        d = self.source.GetDirectory(self.cwd)
        if not d:
            raise RuntimeError(self.pwd() + ' not accessible')

        return d.GetListOfKeys()

    def close(self):
        self.source.Close()

### Functions for actual merging steps

def addFromOneDirectory(sample, sourceSample, targetSample, getter, sourceDirectory, outDir, templateName, outNominal, outVariations, knownVariations):
    # pick up the nominal input
    #print 'histo_%s' % sourceSample
    inNominal = getter.get('histo_%s' % sourceSample)

    # then deal with variations
    for variation, outVariation in outVariations.iteritems():
        if variation in lnNSpecific:
            lnNDef = lnNSpecific[variation]

            if sample in lnNDef:
                inVariation = inNominal.Clone('histo_%s_%s' % (sourceSample, variation))

                if type(lnNDef[sample]) is tuple:
                    # AsLnN type
                    inVariationSource = getter.get('histo_%s_%s' % (sourceSample, variation))
                    numer = inVariationSource.Integral()
                    denom = inVariation.Integral()
                    if numer > 0. and denom > 0.:
                        inVariation.Scale(numer / denom / lnNDef[sample][1])
                else:
                    # float values
                    inVariation.Scale(lnNDef[sample])
            else:
                inVariation = None
        else:
            inVariation = getter.get('histo_%s_%s' % (sourceSample, variation), noraise=True)
            
        if inVariation:
            #print '%s/%s/%s/%s -> %s/%s/%s' % (source.GetName(), sourceDirectory, templateName, inVariation.GetName(), outDir.GetName(), templateName, outVariation.GetName())
            if variation in signalTheoretical:
                inVariation.Scale(signalTheoretical[variation])
            
            outVariation.Add(inVariation)
            inVariation.Delete()
        else:
            #print '%s/%s/%s/%s -> %s/%s/%s' % (source.GetName(), sourceDirectory, templateName, inNominal.GetName(), outDir.GetName(), templateName, outVariation.GetName())
            outVariation.Add(inNominal)

    # unknown variations (only need to do this once per input sample in principle)
    for key in getter.getkeys():
        matches = re.match('histo_%s_(.+)$' % sourceSample, key.GetName())
        if not matches or matches.group(1) in knownVariations:
            continue

        variation = matches.group(1)
        outVariationName = 'histo_%s_%s' % (targetSample, variation)
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

        outVariationName = 'histo_%s_%s' % (targetSample, variation)
        outDir.cd(templateName)
        outVariation = outNominal.Clone(outVariationName)
        _histograms.append(outVariation)
        outVariation.SetTitle(outVariationName)

        inVariation = inNominal.Clone('histo_%s_%s' % (sourceSample, variation))
        if type(lnNDef) is tuple:
            # AsLnN type
            inVariationSource = getter.get('histo_%s_%s' % (sourceSample, variation))
            numer = inVariationSource.Integral()
            denom = inVariation.Integral()
            if numer > 0. and denom > 0.:
                inVariation.Scale(numer / denom / lnNDef[sample][1])
        else:
            inVariation.Scale(lnNDef[sample])

        outVariation.Add(inVariation)
        inVariation.Delete()

        knownVariations.append(variation)
        outVariations[variation] = outVariation

    # finally update out nominal
    print '%s/%s -> %s/%s/%s' % (getter.pwd(), inNominal.GetName(), outDir.GetName(), templateName, outNominal.GetName())
    outNominal.Add(inNominal)
    inNominal.Delete()

def mergeOneDirectory(sample, subsamples, targetSample, getter, sourceDirectories, outDir, templateName, templateBins, knownVariations):
    outNominalName = 'histo_%s' % targetSample
    outNominal = outDir.Get('%s/%s' % (templateName, outNominalName))
    if not outNominal:
        outDir.cd(templateName)
        outNominal = ROOT.TH1D(outNominalName, outNominalName, templateBins, 0., float(templateBins))
        _histograms.append(outNominal)

    outVariations = {}
    for variation in knownVariations:
        outVariationName = 'histo_%s_%s' % (targetSample, variation)
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
        for subsample in subsamples:
            if not subsample:
                sourceSample = sample
            else:
                sourceSample = '%s_%s' % (sample, subsample)

            addFromOneDirectory(sample, sourceSample, targetSample, getter, sourceDirectory, outDir, templateName, outNominal, outVariations, knownVariations)

def restructureDirectory(sample, subsamples, targetSample, getter, sourceDirectories, outDir, templateSpecs, knownVariations):
    for templateName, templateBins in templateSpecs:
        if not outDir.GetDirectory(templateName):
            outDir.mkdir(templateName)

        if subsamples == 'gen':
            for genOutBin, genSourceBins in genBinMerging: # merge histograms from source truth bins
                targetGenBin = '%s_%s' % (targetSample, genOutBin)
                mergeOneDirectory(sample, genSourceBins, targetGenBin, getter, sourceDirectories, outDir, templateName, templateBins, knownVariations)
        else:
            mergeOneDirectory(sample, subsamples, targetSample, getter, sourceDirectories, outDir, templateName, templateBins, knownVariations)

def restructureSR(sample, subsamples, targetSample, getter, knownVariations):
    for dkey in output.GetListOfKeys():
        matches = re.match('hww_((?:PTH|NJ)_(?:[0-9]+|G[ET][0-9]+|[0-9]+_[0-9]+))(?:_cat(.+)|)_[0-9]+$', dkey.GetName())
        if not matches:
            continue
        
        recoOutBin = matches.group(1)
        category = matches.group(2)

        sourceDirectories = getSourceDirectories(recoOutBin, category)
        templateSpecs = [getTemplateSpec(recoOutBin, category), ('events', 1)]
        outDir = output.GetDirectory(dkey.GetName())
        
        restructureDirectory(sample, subsamples, targetSample, getter, sourceDirectories, outDir, templateSpecs, knownVariations)

def restructureCR(sample, subsamples, targetSample, getter, knownVariations):
    for dkey in output.GetListOfKeys():
        if not dkey.GetName().startswith('hww_CR'):
            continue

        sourceDirectories = [dkey.GetName()]
        templateSpecs = [('events', 1)]
        outDir = output.GetDirectory(dkey.GetName())

        restructureDirectory(sample, subsamples, targetSample, getter, sourceDirectories, outDir, templateSpecs, knownVariations)

### Now merge

if os.path.isfile(sourcePath):
    getter = SourceGetter(sourcePath)

### Loop over signals and merge

for targetSignal, snames in signals.iteritems():
    knownVariations = []
    for sample in snames:
        if os.path.isdir(sourcePath):
            getter = SourceGetter('%s/plots_%s_ALL_%s.root' % (sourcePath, tag, sample))
    
        # Signal region directories
        restructureSR(sample, 'gen', targetSignal, getter, knownVariations)
    
        # Control region directories
        restructureCR(sample, 'gen', targetSignal, getter, knownVariations)
    
        if os.path.isdir(sourcePath):
            getter.close()

### Loop over non-signal samples and merge

for outSample, snames in backgrounds.iteritems():
    knownVariations = []
    for sample in snames:
        if type(sample) is tuple:
            subsamples = sample[1]
            sample = sample[0]
        else:
            subsamples = ['']

        if os.path.isdir(sourcePath):
            getter = SourceGetter('%s/plots_%s_ALL_%s.root' % (sourcePath, tag, sample))

        # Signal region directories
        restructureSR(sample, subsamples, outSample, getter, knownVariations)

        # Control region directories
        restructureCR(sample, subsamples, outSample, getter, knownVariations)

        if os.path.isdir(sourcePath):
            getter.close()
    
output.Write()
output.Close()
