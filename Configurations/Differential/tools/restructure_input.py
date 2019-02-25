#!/usr/bin/env python

import os
import sys
import re
import time
import math
from array import array
import tempfile
argv = sys.argv
sys.argv = argv[:1]
import ROOT

FIRENZE = False

class SourceGetter(object):
    '''Tool to get source histograms'''

    tag = ''

    def __init__(self, path, sample = ''):
        if sample:
            self.source = ROOT.TFile.Open('%s/plots_%s_ALL_%s.root' % (path, self.tag, sample))
        else:
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

class HistogramMerger(object):
    '''Tool to restructure and merge histograms'''

    pt2confs = ['pt2lt20', 'pt2ge20']
    flavconfs = ['em', 'me']
    chrgconfs = ['pm', 'mp']
    split = []

    lnNSpecific = {}
    renormalizedVariations = {}
    perBinVariations = []

    recoBinMap = {}
    outBins = []
    crCategories = []

    def __init__(self):
        self.subsamples = []
        self.sourceDirectories = []

        self.getter = None

        self.outCutDir = None

    def getSRSourceDirectories(self, category):
        self.sourceDirectories = []
        for recoBin in self.recoBinMap[self._recoOutBin]:
            if category is None:
                for pt2 in self.pt2confs:
                    for flav in self.flavconfs:
                        for chrg in self.chrgconfs:
                            self.sourceDirectories.append('hww_%s_cat%s%s%s_%s' % (recoBin, pt2, flav, chrg, self.year))
    
            elif category in self.pt2confs:
                for flav in self.flavconfs:
                    for chrg in self.chrgconfs:
                        self.sourceDirectories.append('hww_%s_cat%s%s%s_%s' % (recoBin, category, flav, chrg, self.year))
    
            elif category in [pt2 + flav for pt2 in self.pt2confs for flav in self.flavconfs]:
                for chrg in self.chrgconfs:
                    self.sourceDirectories.append('hww_%s_cat%s%s_%s' % (recoBin, category, chrg, self.year))
    
            else:
                self.sourceDirectories.append('hww_%s_cat%s_%s' % (recoBin, category, self.year))
    
    def getCRSourceDirectories(self, sel):
        self.sourceDirectories = []

        if self._recoOutBin not in self.recoBinMap:
            return

        for recoBin in self.recoBinMap[self._recoOutBin]:
            if FIRENZE:
                recoBin = recoBin.replace('NJ_', '').lower() + 'j'
                self.sourceDirectories.append('hww_CR_cat%s_%s_%s' % (sel, recoBin, self.year))
            else:
                self.sourceDirectories.append('hww_CR_cat%s_%s_%s' % (recoBin, sel, self.year))
    
    ### Functions for actual merging steps
    
    def addFromOneDirectory(self, sample, sourceSample):
        outNominal = self._outNominals[self.outCutDir.GetName()][self.templateName]

        # pick up the nominal input
        inNominal = self.getter.get('histo_%s' % sourceSample)
    
        # then deal with variations
        for variation, outVariation in self._outVariations[self.outCutDir.GetName()][self.templateName].iteritems():
            if variation in self.lnNSpecific:
                lnNDef = self.lnNSpecific[variation]
    
                if sample in lnNDef:
                    inVariation = inNominal.Clone('histo_%s_%s' % (sourceSample, variation))
    
                    if type(lnNDef[sample]) is tuple:
                        # AsLnN type
                        inVariationSource = self.getter.get('histo_%s_%s' % (sourceSample, variation))
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
                inVariation = self.getter.get('histo_%s_%s' % (sourceSample, variation), noraise=True)
                
            if inVariation:
                if (sample, variation) in self.renormalizedVariations:
                    inVariation.Scale(self.renormalizedVariations[(sample, variation)])

                try:
                    outVariation.Add(inVariation)
                except:
                    print self.outCutDir.GetName(), self.templateName, outNominal.GetName(), variation
                    raise

                inVariation.Delete()
            else:
                outVariation.Add(inNominal)
    
        # unknown variations (only need to do this once per input sample in principle)
        for key in self.getter.getkeys():
            matches = re.match('histo_%s_(.+)$' % sourceSample, key.GetName())
            if not matches or matches.group(1) in self._outVariations[self.outCutDir.GetName()][self.templateName]:
                continue
    
            variation = matches.group(1)

            outVariation = self.newOutVariation(variation)
    
            inVariation = key.ReadObj()
            if (sample, variation) in self.renormalizedVariations:
                inVariation.Scale(self.renormalizedVariations[(sample, variation)])
            
            outVariation.Add(inVariation)
            inVariation.Delete()
    
        for variation, lnNDef in self.lnNSpecific.iteritems():
            if sample not in lnNDef or variation in self._outVariations[self.outCutDir.GetName()][self.templateName]:
                continue

            outVariation = self.newOutVariation(variation)
    
            inVariation = inNominal.Clone('histo_%s_%s' % (sourceSample, variation))
            if type(lnNDef) is tuple:
                # AsLnN type
                inVariationSource = self.getter.get('histo_%s_%s' % (sourceSample, variation))
                numer = inVariationSource.Integral()
                denom = inVariation.Integral()
                if numer > 0. and denom > 0.:
                    inVariation.Scale(numer / denom / lnNDef[sample][1])
            else:
                inVariation.Scale(lnNDef[sample])
    
            outVariation.Add(inVariation)
            inVariation.Delete()
   
        # finally update out nominal
        outNominal.Add(inNominal)
        inNominal.Delete()

    def newOutVariation(self, variation):
        outNominal = self._outNominals[self.outCutDir.GetName()][self.templateName]

        if variation in self.perBinVariations:
            if variation.endswith('Up'):
                variationCore = variation[:-2]
                updown = 'Up'
            else:
                variationCore = variation[:-4]
                updown = 'Down'

            outVariationName = '%s_%s_%s%s' % (outNominal.GetName(), variationCore, self._recoOutBin, updown)
        else:
            outVariationName = '%s_%s' % (outNominal.GetName(), variation)

        self.outCutDir.cd(self.templateName)
        outVariation = outNominal.Clone(outVariationName)
        outVariation.SetTitle(outVariationName)

        self._outVariations[self.outCutDir.GetName()][self.templateName][variation] = outVariation

        return outVariation
    
    def mergeSampleTemplate(self, sample):
        for sourceDirectory in self.sourceDirectories:
            self.getter.cd('%s/%s' % (sourceDirectory, self.templateName))
            for subsample in self.subsamples:
                if not subsample:
                    sourceSample = sample
                else:
                    sourceSample = '%s_%s' % (sample, subsample)
    
                self.addFromOneDirectory(sample, sourceSample)
   
    def mergeSample(self, templateSpecs, sample):
        for templateName, templateBins in templateSpecs:
            if not self.outCutDir.GetDirectory(templateName):
                self.outCutDir.mkdir(templateName)

            self.templateName = templateName

            try:
                outNominal = self._outNominals[self.outCutDir.GetName()][templateName]
            except KeyError:
                self.outCutDir.cd(self.templateName)
                if type(templateBins) is int:
                    outNominal = ROOT.TH1D(self._outNominalName, self._outNominalName, templateBins, 0., float(templateBins))
                elif type(templateBins) is tuple:
                    outNominal = ROOT.TH1D(self._outNominalName, self._outNominalName, *templateBins)
                elif type(templateBins) is list:
                    outNominal = ROOT.TH1D(self._outNominalName, self._outNominalName, len(templateBins) - 1, array('d', templateBins))
                    
                self._outNominals[self.outCutDir.GetName()][self.templateName] = outNominal
                self._outVariations[self.outCutDir.GetName()][self.templateName] = {}

            self.mergeSampleTemplate(sample)
    
    def restructureSR(self, output, sample):
        # merge sample from one sample at each output cut

        for dkey in output.GetListOfKeys():
            matches = re.match('hww_((?:PTH|NJ)_(?:[0-9]+|G[ET][0-9]+|[0-9]+_[0-9]+))(?:_cat(.+)|)_[0-9]+$', dkey.GetName())
            if not matches:
                continue

            recoOutBin = matches.group(1)
            category = matches.group(2)

            self._recoOutBin = recoOutBin
    
            self.getSRSourceDirectories(category)

            templateSpecs = [getTemplateSpec(recoOutBin, category)]
            if FIRENZE:
                templateSpecs.append(('events', (1, 0., 2.)))
            else:
                templateSpecs.append(('events', 1))
            self.outCutDir = output.GetDirectory(dkey.GetName())
           
            self.mergeSample(templateSpecs, sample)
    
    def restructureCR(self, output, sample):
        # merge sample from one sample at each output cut

        for dkey in output.GetListOfKeys():
            if FIRENZE:
                matches = re.match('hww_CR_cat(top|DY|WW)_((?:ge|)[0-4]j)_[0-9]+$', dkey.GetName())
            else:
                matches = re.match('hww_CR_cat((?:PTH|NJ)_(?:[0-9]+|G[ET][0-9]+|[0-9]+_[0-9]+))_(top|DY|WW)_[0-9]+$', dkey.GetName())

            if matches:
                if FIRENZE:
                    sel = matches.group(1)
                    recoOutBin = matches.group(2)
                    recoOutBin = 'NJ_' + recoOutBin[:-1].upper()
                else:
                    recoOutBin = matches.group(1)
                    sel = matches.group(2)

                self._recoOutBin = recoOutBin

                self.getCRSourceDirectories(sel)
            elif dkey.GetName().startswith('hww_CR'):
                self._recoOutBin = None
                self.sourceDirectories = [dkey.GetName()]
            else:
                continue

            if FIRENZE:
                templateSpecs = [('events', (1, 0., 2.))]
            else:
                templateSpecs = [('events', 1)]

            self.outCutDir = output.GetDirectory(dkey.GetName())
    
            self.mergeSample(templateSpecs, sample)

    def writeTarget(self, output):
        for dname, templates in self._outNominals.iteritems():
            for tname, histogram in templates.iteritems():
                output.cd('%s/%s' % (dname, tname))
                histogram.Write()
                histogram.Delete()

                for vh in self._outVariations[dname][tname].itervalues():
                    vh.Write()
                    vh.Delete()
    
    def createOutputAndMerge(self, outputPath, sourcePath, targets):
        ### Create the output directory structure first
        
        output = ROOT.TFile.Open(outputPath, 'recreate')
        ROOT.gROOT.GetListOfFiles().Remove(output)

        dnames = []
        for outBin, nsplit in zip(self.outBins, self.split):
            if nsplit == 8:
                for pt2 in self.pt2confs:
                    for flav in self.flavconfs:
                        for chrg in self.chrgconfs:
                            dnames.append('hww_%s_cat%s%s%s_%s' % (outBin, pt2, flav, chrg, self.year))
        
            elif nsplit == 4:
                for pt2 in self.pt2confs:
                    for flav in self.flavconfs:
                        dnames.append('hww_%s_cat%s%s_%s' % (outBin, pt2, flav, self.year))
        
            elif nsplit == 3:
                for flav in self.flavconfs:
                    dnames.append('hww_%s_catpt2lt20%s_%s' % (outBin, flav, self.year))

                dnames.append('hww_%s_catpt2ge20_%s' % (outBin, self.year))
        
            elif nsplit == 2:
                for pt2 in self.pt2confs:
                    dnames.append('hww_%s_cat%s_%s' % (outBin, pt2, self.year))
        
            elif nsplit == 1:
                dnames.append('hww_%s_%s' % (outBin, self.year))
        
        for cat in self.crCategories:
            dnames.append('hww_CR_cat%s_%s' % (cat, self.year))

        for dname in dnames:
            output.mkdir(dname)
        
        ### Now merge
        
        if os.path.isfile(sourcePath):
            self.getter = SourceGetter(sourcePath)
    
        for outSample, snames in targets:
            self._outNominals = dict((dname, dict()) for dname in dnames)
            self._outVariations = dict((dname, dict()) for dname in dnames)

            self._outNominalName = 'histo_%s' % outSample

            for sample in snames:
                if type(sample) is tuple:
                    self.subsamples = sample[1]
                    sample = sample[0]
                    print '%s/%s(%s) -> %s/%s' % (sourcePath, sample, ', '.join(self.subsamples), outputPath, outSample)
                else:
                    self.subsamples = ['']
                    print '%s/%s -> %s/%s' % (sourcePath, sample, outputPath, outSample)
        
                if os.path.isdir(sourcePath):
                    self.getter = SourceGetter(sourcePath, sample)

                # Signal region directories
                self.restructureSR(output, sample)
            
                # Control region directories
                self.restructureCR(output, sample)

                if os.path.isdir(sourcePath):
                    self.getter.close()

            self.writeTarget(output)
        
        output.Close()


def mergeOne(sourcePath, jobArg, queue):
    tmpdir = tempfile.mkdtemp()
    outputPath = '%s/out.root' % tmpdir
    merger = HistogramMerger()
    merger.createOutputAndMerge(outputPath, sourcePath, [jobArg])

    queue.put(outputPath)


if __name__ == '__main__':
    sys.argv = argv

    import multiprocessing
    import Queue
    import subprocess
    import shutil
    from argparse import ArgumentParser
    
    argParser = ArgumentParser(description = 'Restructure the input into a ROOT file containing only the plots needed for a differential measurement.')
    argParser.add_argument('sourcePath', metavar = 'PATH', help = 'Input ROOT file / directory name.')
    argParser.add_argument('outputPath', metavar = 'PATH', help = 'Output ROOT file name.')
    argParser.add_argument('observable', metavar = 'OBS', help = 'Observable name.')
    argParser.add_argument('--tag', '-t', metavar = 'TAG', dest = 'tag', default = '', help = 'Tag name when input is a directory.')
    argParser.add_argument('--year', '-y', metavar = 'YEAR', dest = 'year', default = '', help = 'Year.')
    argParser.add_argument('--signal-fiducial-only', action = 'store_true', dest = 'signal_fiducial_only', help = 'Signal is fiducial only.')
    argParser.add_argument('--signal-ggH-separate', action = 'store_true', dest = 'signal_ggH_separate', help = 'Separate ggH and xH in signal.')
    argParser.add_argument('--signal-hww-only', action = 'store_true', dest = 'signal_hww_only', help = 'Signal is HWW only.')
    argParser.add_argument('--background-minor-merge', action = 'store_true', dest = 'background_minor_merge', help = 'Merge minor backgrounds into one sample.')
    argParser.add_argument('--input-fake-flavored', action = 'store_true', dest = 'input_fake_flavored', help = 'Input Fake sample is split into Fake_em and Fake_me.')
    argParser.add_argument('--input-major-split', metavar = '(NJ|PTH)', dest = 'input_major_split', help = 'Input sample is split in reco bins of NJ or PTH.')
    argParser.add_argument('--make-asimov-with-bias', metavar = 'SAMPLE=bias', nargs = '+', dest = 'make_asimov_with_bias', help = 'Replace histo_DATA with an Asimov dataset with biased sample scales')
    argParser.add_argument('--num-processes', '-j', metavar = 'N', dest = 'num_processes', type = int, default = 1, help = 'Number of parallel processes.')
    
    args = argParser.parse_args()

    if not args.year:
        if '2016' in args.tag:
            args.year = '2016'
        elif '2017' in args.tag:
            args.year = '2017'
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

    if args.observable == 'ptH':
        HistogramMerger.outBins = ['PTH_0_20', 'PTH_20_45', 'PTH_45_80', 'PTH_80_120', 'PTH_120_200', 'PTH_200_350', 'PTH_GT350']
    
        HistogramMerger.recoBinMap = {
            'PTH_0_20': ['PTH_0_10', 'PTH_10_15', 'PTH_15_20'],
            'PTH_20_45': ['PTH_20_30', 'PTH_30_45'],
            'PTH_45_80': ['PTH_45_60', 'PTH_60_80'],
            'PTH_80_120': ['PTH_80_100', 'PTH_100_120'],
            'PTH_120_200': ['PTH_120_155', 'PTH_155_200'],
            'PTH_200_350': ['PTH_200_260', 'PTH_260_350'],
            'PTH_GT350': ['PTH_GT350']
        }
    
        HistogramMerger.split = [8, 8, 4, 3, 2, 2, 1]
    
        def getTemplateSpec(recoOutBin, category):
            if category is None or category.startswith('pt2lt20'):
                return 'mllVSmth_6x6', 36
            else:
                return 'mllVSmth_8x9', 72

        HistogramMerger.crCategories = []
        for sel in ['top', 'DY', 'WW']:
            HistogramMerger.crCategories.extend('%s_%s' % (outBin, sel) for outBin in HistogramMerger.outBins)
    
    else:
        HistogramMerger.outBins = ['NJ_0', 'NJ_1', 'NJ_2', 'NJ_3', 'NJ_GE4']
    
        HistogramMerger.recoBinMap = {
            'NJ_0': ['NJ_0'],
            'NJ_1': ['NJ_1'],
            'NJ_2': ['NJ_2'],
            'NJ_3': ['NJ_3'],
            'NJ_GE4': ['NJ_GE4']
        }

        if FIRENZE:
            HistogramMerger.split = [8, 8, 1, 1, 1]
        else:
            #HistogramMerger.split = [8, 8, 2, 2, 2]
            HistogramMerger.split = [8, 8, 1, 1, 1]
    
        def getTemplateSpec(recoOutBin, category):
            if FIRENZE:
                if recoOutBin in ['NJ_0', 'NJ_1']:
                    if category.startswith('pt2lt20'):
                        return 'mllVSmth_pt2lt20', 36
                    else:
                        return 'mllVSmth_pt2ge20', 72
                elif recoOutBin == 'NJ_2':
                    return 'mllVSmth_2j', 36
                else:
                    return 'mll_optim', [12.,30.,50.,70.,90.,110.,150.,200.]
            else:
                if category is None or category.startswith('pt2lt20'):
                    return 'mllVSmth_6x6', 36
                else:
                    return 'mllVSmth_8x9', 72

        if FIRENZE:
            crs = ['top', 'DY']
        else:
            crs = ['top', 'DY', 'WW']

        HistogramMerger.crCategories = []
        for sel in crs:
            if FIRENZE:
                HistogramMerger.crCategories.extend('%s_%sj' % (sel, nj) for nj in ['0', '1', '2', '3', 'ge4'])
            else:
                HistogramMerger.crCategories.extend('%s_%s' % (outBin, sel) for outBin in HistogramMerger.outBins)
    
    ### Sample merging configuration according to the flags at the beginning
    
    allBins = sum((HistogramMerger.recoBinMap[outBin] for outBin in HistogramMerger.outBins), [])

    if args.make_asimov_with_bias:
        backgrounds = {}
    else:
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
    if args.year == '2016':
        minors = ['ggWW', 'Vg', 'WZgS_L', 'WZgS_H', 'VZ', 'VVV']
    else:
        xH_hww.remove('bbH_hww')
        minors = ['ggWW', 'Vg', 'WZgS_H', 'VZ', 'VVV']
    
    if args.signal_hww_only:
        if args.signal_ggH_separate:
            signals['ggH_hww'] = ggH_hww
            signals['xH_hww'] = xH_hww
        else:
            signals['smH_hww'] = ggH_hww + xH_hww
    
        backgrounds['htt'] = [(sample, [f + b for f in ['fid_', 'nonfid_'] for b in allBins]) for sample in (ggH_htt + xH_htt)]
    else:
        if args.signal_ggH_separate:
            signals['ggH'] = ggH_hww + ggH_htt
            signals['xH'] = xH_hww + xH_htt
        else:
            signals['smH'] = ggH_hww + xH_hww + ggH_htt + xH_htt
    
    if args.input_fake_flavored:
        backgrounds['Fake'] = ['Fake_em', 'Fake_me']
    else:
        backgrounds['Fake'] = ['Fake']
    
    if args.background_minor_merge:
        backgrounds['minor'] = minors
    else:
        for name in minors:
            backgrounds[name] = [name]
    
    if args.input_major_split == 'NJ':
        for nj in ['0j', '1j', '2j', '3j', 'ge4j']:
            backgrounds['WW_%s' % nj] = [('WW', [nj])]
            backgrounds['top_%s' % nj] = [('top', [nj])]
            backgrounds['DY_%s' % nj] = [('DY', [nj])]
    elif args.input_major_split == 'PTH':
        pass
    elif args.input_major_split is None:
        backgrounds['WW'] = ['WW']
        backgrounds['top'] = ['top']
        backgrounds['DY'] = ['DY']
    
    genBinMerging = []
    if args.signal_fiducial_only:
        backgrounds['nonfid'] = [(s, ['nonfid_' + b for b in allBins]) for s in sum(signals.values(), [])]
    
        for outBin in HistogramMerger.outBins:
            genBinMerging.append((outBin, ['fid_' + s for s in HistogramMerger.recoBinMap[outBin]]))
    else:
        for outBin in HistogramMerger.outBins:
            genBinMerging.append((outBin, ['fid_' + s for s in HistogramMerger.recoBinMap[outBin]] + ['nonfid_' + s for s in HistogramMerger.recoBinMap[outBin]]))

    HistogramMerger.year = args.year
    SourceGetter.tag = args.tag
    
    ### Prepare nuisance editing
    
    HistogramMerger.lnNSpecific = {}
    HistogramMerger.perBinVariations = []
    for nuisance in nuisances.itervalues():
        if 'perRecoBin' in nuisance and nuisance['perRecoBin']:
            HistogramMerger.perBinVariations.append(nuisance['name'] + 'Up')
            HistogramMerger.perBinVariations.append(nuisance['name'] + 'Down')
        
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
            lnNUp = HistogramMerger.lnNSpecific[nuisance['name'] + 'Up'] = {}
            lnNDown = HistogramMerger.lnNSpecific[nuisance['name'] + 'Down'] = {}
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
            lnNUp = HistogramMerger.lnNSpecific[nuisance['name'] + 'Up'] = {}
            lnNDown = HistogramMerger.lnNSpecific[nuisance['name'] + 'Down'] = {}
            for sname, vdef in nuisance['samples'].iteritems():
                lnNUp[sname] = ('histo', float(nuisance['AsLnN']))
                lnNDown[sname] = ('histo', float(nuisance['AsLnN']))
    
    HistogramMerger.renormalizedVariations = {}
    source = ROOT.TFile.Open(os.path.dirname(__file__) + '/renormalize_theoretical_%s.root' % args.year)
    hup = source.Get('up')
    hdown = source.Get('down')
    for iX in range(1, hup.GetNbinsX() + 1):
        name = hup.GetXaxis().GetBinLabel(iX)

        if '/' in name:
            # TODO: we should make it all in this format
            sname, nname = name.split('/')
        else:
            sname = 'ggH_hww'
            nname = name

        sup = 1. / hup.GetBinContent(iX)
        sdown = 1. / hdown.GetBinContent(iX)
      
        HistogramMerger.renormalizedVariations[(sname, nname + 'Up')] = sup
        HistogramMerger.renormalizedVariations[(sname, nname + 'Down')] = sdown
    
    source.Close()

    binnedSignals = {}
    for target, snames in signals.iteritems():
        for genOutBin, genSourceBins in genBinMerging: # merge histograms from source truth bins
            binnedSignals['%s_%s' % (target, genOutBin)] = [(sname, genSourceBins) for sname in snames]

    jobArgs = binnedSignals.items() + backgrounds.items()

    if args.num_processes == 1:
        merger = HistogramMerger()
        merger.createOutputAndMerge(args.outputPath, args.sourcePath, jobArgs)

    else:
        queue = multiprocessing.Queue()

        processes = []
        outputs = []
    
        def checkProcess():
            for proc in list(processes):
                if not proc.is_alive():
                    # clear up the queue first
                    while True:
                        try:
                            outputs.append(queue.get(False))
                        except Queue.Empty:
                            break
    
                    proc.join()
                    processes.remove(proc)
    
        for jobArg in jobArgs:
            while len(processes) >= args.num_processes:
                time.sleep(1)
                checkProcess()
    
            proc = multiprocessing.Process(target = mergeOne, name = target, args = (args.sourcePath, jobArg, queue))
            proc.start()
            processes.append(proc)
    
        while len(processes) != 0:
            time.sleep(1)
            checkProcess()
    
        while True:
            try:
                outputs.append(queue.get(False))
            except Queue.Empty:
                break
    
        proc = subprocess.Popen(['haddfast', '-f', args.outputPath] + outputs)
        proc.communicate()
    
        for path in outputs:
            shutil.rmtree(os.path.dirname(path))

    if args.make_asimov_with_bias:
        scales = {}
        for expr in args.make_asimov_with_bias:
            sample, _, sval = expr.partition('=')
            scales[sample] = float(sval)
        
        output = ROOT.TFile.Open(args.outputPath, 'update')
        for ckey in output.GetListOfKeys():
            cdir = ckey.ReadObj()
            for vkey in cdir.GetListOfKeys():
                cdir.cd(vkey.GetName())
                hobs = None
                for sname, _ in jobArgs:
                    hsample = ROOT.gDirectory.Get('histo_' + sname)
                    if hobs is None:
                        hobs = hsample.Clone('histo_DATA')
                        hobs.Reset()

                    if sname in scales:
                        hsample.Scale(scales[sname])

                    hobs.Add(hsample)

                for ix in range(1, hobs.GetNbinsX() + 1):
                    hobs.SetBinContent(ix, max(0., round(hobs.GetBinContent(ix))))
                    hobs.SetBinError(ix, math.sqrt(hobs.GetBinContent(ix)))

                hobs.Write()
                hobs.Delete()
