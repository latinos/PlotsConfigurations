#!/usr/bin/env python

import os
import sys
import re
import time
import copy
import math
import array
import collections
import tempfile
import logging

import LatinoAnalysis.ShapeAnalysis.utils as utils
from update_nuisances import update_nuisances

argv = sys.argv
sys.argv = argv[:1]
import ROOT

NOHIGGS = False
SRONLY = False
PTHGT200 = True

logging.basicConfig(level=logging.WARNING)

class SourceGetter(object):
    '''Tool to get source histograms'''

    tag = ''

    def __init__(self, path='', sample=''):
        self.source = None
        self.path = ''
        self.sample = ''
        if path:
            self.open(path, sample=sample)

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

    def open(self, path, sample=''):
        if path != self.path or sample != self.sample:
            self.close()
            if not sample:
                logging.info('Opening file %s', path)
                self.source = ROOT.TFile.Open(path)
            else:
                logging.info('Opening file %s/plots_%s_ALL_%s.root', path, self.tag, sample)
                self.source = ROOT.TFile.Open('%s/plots_%s_ALL_%s.root' % (path, self.tag, sample))

            ROOT.gROOT.GetListOfFiles().Remove(self.source)

        if not self.source:
            raise RuntimeError(path)

        self.path = path
        self.sample = sample

        self.cwd = ''

    def close(self):
        if self.source is not None:
            logging.info('Closing source file')
            self.source.Close()
            self.source = None
            self.path = ''
            self.sample = ''


def nonnegatify(histogram):
    for iX in range(1, histogram.GetNbinsX() + 1):
        if histogram.GetBinContent(iX) < 0.:
            histogram.SetBinContent(iX, 0.)


class HistogramMerger(object):
    '''Tool to restructure and merge histograms'''

    pt2confs = ['pt2lt20', 'pt2ge20']
    flavconfs = ['em', 'me']
    chrgconfs = ['pm', 'mp']
    split = []

    subsampleRmap = {}

    variations = {}

    recoBinMap = {}
    outBins = []

    templateSpecs = []
    secondarySpecs = []

    asLnNPooling = None

    psVariation = ''
    ueVariation = ''

    def addFromOneDirectory(self, inSample, outNominal, outHistograms):
        logging.debug('addFromOneDirectory %s %s', inSample, outNominal.GetName())
        # pick up the nominal input
        inNominal = self._getter.get('histo_%s' % inSample)

        inCategory = self._getter.cwd[:self._getter.cwd.find('/')]

        logging.debug('inCategory %s', inCategory)

        outNominalName = outNominal.GetName()
        outSample = outNominalName.replace('histo_', '')
        outDir = outNominal.GetDirectory()
        templateName = outDir.GetName()
        outCatDir = outDir.GetMother()
        outCatName = outCatDir.GetName()
        outVariations = outHistograms[(outCatName, templateName, outSample)][1]

        logging.debug('output %s %s', outSample, outCatName)

        for vname, variation in self.variations.iteritems():
            if outSample not in variation['appliesTo']:
                continue
            if variation['cuts'] is not None and outCatName not in variation['cuts']:
                continue

            logging.debug('Variation %s applies to %s/%s', vname, outSample, outCatName)

            try:
                outVariationUp, outVariationDown = outVariations[vname]
            except KeyError:
                outVariationUp, outVariationDown = self.newOutVariation(vname, variation, outNominal)
                outVariations[vname] = (outVariationUp, outVariationDown)

            if inSample in variation['inSamples']:
                logging.debug('Sample has %s shift', variation['originalType'])
                if variation['originalType'] == 'lnN':
                    inVariationUp = inNominal.Clone('histo_%s_%sUp' % (inSample, vname))
                    inVariationUp.Scale(variation['factors'][inSample][0])
                    inVariationDown = inNominal.Clone('histo_%s_%sDown' % (inSample, vname))
                    inVariationDown.Scale(variation['factors'][inSample][1])
                else:
                    if variation['copyfrom'] is not None:
                        logging.debug('Copying from %s', variation['copyfrom'])
                        inVariationUp = self._getter.get('histo_%s_%sUp' % (inSample, variation['copyfrom']))
                        inVariationDown = self._getter.get('histo_%s_%sDown' % (inSample, variation['copyfrom']))
                    else:
                        inVariationUp = self._getter.get('histo_%s_%sUp' % (inSample, vname))
                        inVariationDown = self._getter.get('histo_%s_%sDown' % (inSample, vname))

                    if variation['AsLnN'] > 0.:
                        sumwup = inVariationUp.GetSumOfWeights()
                        sumwdown = inVariationDown.GetSumOfWeights()

                        inVariationUp.Reset()
                        inVariationDown.Reset()
                        if inNominal.GetSumOfWeights() > 0.:
                            inVariationUp.Add(inNominal, variation['AsLnN'] * sumwup / inNominal.GetSumOfWeights())
                            inVariationDown.Add(inNominal, variation['AsLnN'] * sumwdown / inNominal.GetSumOfWeights())

                if inSample in variation['renormalization']:
                    logging.debug('Renormalize by %s', variation['renormalization'][inSample])
                    inVariationUp.Scale(variation['renormalization'][inSample][0])
                    inVariationDown.Scale(variation['renormalization'][inSample][1])

                outVariationUp.Add(inVariationUp)
                outVariationDown.Add(inVariationDown)
            else:
                logging.debug('No variation from input %s', inSample)
                outVariationUp.Add(inNominal)
                outVariationDown.Add(inNominal)

        # finally update out nominal
        outNominal.Add(inNominal)
        logging.debug('outNominal sumw %f', outNominal.GetSumOfWeights())
        inNominal.Delete()

    def newOutVariation(self, vname, variation, outNominal):
        logging.debug('Making variation %s out of nominal %s', vname, outNominal.GetName())

        if variation['perRecoBin']:
            outCategory = outNominal.GetDirectory().GetMother().GetName()
            _, recoOutBin, _ = self.parseDirectoryName(outCategory)

            outVariationName = '%s_%s_%s' % (outNominal.GetName(), vname, recoOutBin)
        else:
            outVariationName = '%s_%s' % (outNominal.GetName(), vname)

        outNominal.GetDirectory().cd()
        outVariationUp = outNominal.Clone(outVariationName + 'Up')
        outVariationUp.SetTitle(outVariationName + 'Up')
        outVariationDown = outNominal.Clone(outVariationName + 'Down')
        outVariationDown.SetTitle(outVariationName + 'Down')

        return outVariationUp, outVariationDown

    def mergeSample(self, inSample, outSample, sourceDirectories, outCatDir, outHistograms):
        logging.debug('\n\nmergeSample %s, %s, %s', inSample, outSample, outCatDir.GetName())
        
        outCatName = outCatDir.GetName()
        
        for templateName, templateBinning in self.templateSpecs:
            logging.debug('\nmergeSample for %s', templateName)
            try:
                outNominal = outHistograms[(outCatName, templateName, outSample)][0]
            except KeyError:
                outCatDir.cd(templateName)
                outNominal = HistogramMerger.makeTH1('histo_%s' % outSample, templateBinning)
                outHistograms[(outCatName, templateName, outSample)] = (outNominal, {})

            for sourceDirectory in sourceDirectories:
                self._getter.cd('%s/%s' % (sourceDirectory, templateName))
                self.addFromOneDirectory(inSample, outNominal, outHistograms)

    def createSecondaries(self, outCatDir):
        for secondaryName, secondaryBinning, primaryName, primaryBins in self.secondarySpecs:
            outCatDir.mkdir(secondaryName)

            sourceDir = outCatDir.GetDirectory(primaryName)
            for key in sourceDir.GetListOfKeys():
                primary = key.ReadObj()

                outCatDir.cd(secondaryName)
                secondary = HistogramMerger.makeTH1(primary.GetName(), secondaryBinning)

                for ix, binrange in enumerate(primaryBins):
                    cont = 0.
                    err2 = 0.
                    for ibin in binrange:
                        cont += primary.GetBinContent(ibin)
                        err2 += math.pow(primary.GetBinError(ibin), 2.)

                    secondary.SetBinContent(ix + 1, cont)
                    secondary.SetBinError(ix + 1, math.sqrt(err2))

                secondary.Write()

    def renormalizeUEPS(self, inSample):
        """
        Renormalize UE and PS uncertainty variations to the signal region volume.
        """
        nominalTotal = 0.
        varTotals = dict(('%s%s' % (n, v), 0.) for n in [self.ueVariation, self.psVariation] for v in ['Up', 'Down'])

        allSourceBins = set()
        for outBin in self.outBins:
            allSourceBins.update(self.recoBinMap[outBin])

        self._getter.cd('')
        for ckey in self._getter.getkeys():
            cut = ckey.GetName()
            region, recoBin, _ = self.parseDirectoryName(cut)
            if region == 'CR' or recoBin not in allSourceBins:
                continue

            self._getter.cd('%s/events' % cut)

            hnom = self._getter.get('histo_%s' % inSample)

            nominalTotal += hnom.GetBinContent(1)

            for var in varTotals.iterkeys():
                hvar = self._getter.get('histo_%s_%s' % (inSample, var))
                varTotals[var] += hvar.GetBinContent(1)

        self._getter.cd('')
        for ckey in self._getter.getkeys():
            cut = ckey.GetName()
            region, recoBin, _ = self.parseDirectoryName(cut)
            if recoBin not in allSourceBins:
                continue

            self._getter.cd(cut)

            #for vkey in self._getter.getkeys():
            #    variable = vkey.GetName()
            for variable, _ in self.templateSpecs:
                for var, denom in varTotals.iteritems():
                    if denom == 0.:
                        continue

                    hvar = self._getter.get('%s/histo_%s_%s' % (variable, inSample, var))
                    hvar.Scale(nominalTotal / denom)

    def poolAsLnN(self, inSample):
        nominalpool = {}
        varpool = {}
        
        for ckey in self._getter.getkeys():
            cut = ckey.GetName()
            for ipool, pats in enumerate(self.asLnNPooling):
                for pat in pats:
                    if re.match(pat, cut):
                        break
                else:
                    continue
                break
            else:
                continue
            
            self._getter.cd(cut)
            
            #for vkey in self._getter.getkeys():
            #    variable = vkey.GetName()
            for variable, _ in self.templateSpecs:
                try:
                    nominalpool[(ipool, variable)].append(cut)
                except KeyError:
                    nominalpool[(ipool, variable)] = [cut]
                
                for vname, variation in self.variations.iteritems():
                    if variation['originalType'] == 'lnN' or variation['AsLnN'] <= 0. or inSample not in variation['inSamples']:
                        continue

                    if (ipool, variable) not in varpool:
                        varpool[(ipool, variable)] = {}
                    try:
                        varpool[(ipool, variable)][vname].append(cut)
                    except KeyError:
                        varpool[(ipool, variable)][vname] = [cut]

        self._getter.cd('')

        for (ipool, variable), nominals in nominalpool.iteritems():
            if (ipool, variable) not in varpool:
                continue

            hnominal = {}
            
            total = 0.
            for cut in nominals:
                histo = self._getter.get('%s/%s/histo_%s' % (cut, variable, inSample))
                hnominal[cut] = histo
                total += histo.GetSumOfWeights()

            for vname, cuts in varpool[(ipool, variable)].iteritems():
                variation = self.variations[vname]

                for vdir in ['Up', 'Down']:
                    v = 0.
                    for cut in cuts:
                        histo = self._getter.get('%s/%s/histo_%s_%s%s' % (cut, variable, inSample, vname, vdir))
                        v += histo.GetSumOfWeights()

                    for cut in cuts:
                        histo = self._getter.get('%s/%s/histo_%s_%s%s' % (cut, variable, inSample, vname, vdir))
                        histo.Reset()
                        if total > 0.:
                            histo.Add(hnominal[cut], variation['AsLnN'] * v / total)
    
    def restructure(self, output, inSample, outSample, outHistograms):
        # merge sample from one sample at each output cut

        for catkey in output.GetListOfKeys():
            sourceDirectories = self.cutMerging[catkey.GetName()]
            
            outCatDir = output.GetDirectory(catkey.GetName())
           
            self.mergeSample(inSample, outSample, sourceDirectories, outCatDir, outHistograms)

    def writePrimaries(self, outHistograms):
        """
        Make all bin content non-negative and write to output
        """

        for (nominal, variations) in outHistograms.itervalues():
            outDir = nominal.GetDirectory()
            outDir.cd()
            
            nonnegatify(nominal)

            nominalSumW = nominal.GetSumOfWeights()

            for vv in variations.itervalues():
                for vh in vv:
                    nonnegatify(vh)
    
                    if nominalSumW > 0. and vh.GetSumOfWeights() / nominalSumW < 1.e-4:
                        vname = vh.GetName()
                        vh.Delete()
                        vh = nominal.Clone(vname)
                        vh.Scale(1.5e-4)
    
                    vh.Write()
                    vh.Delete()

            nominal.Write()
            nominal.Delete()
    
    def createOutputAndMerge(self, outputPath, sourcePath, targets):
        ### Create the output directory structure first
        
        output = ROOT.TFile.Open(outputPath, 'recreate')
        ROOT.gROOT.GetListOfFiles().Remove(output)

        ### Make the directory structure into the file first
        for category in self.cutMerging.iterkeys():
            output.mkdir(category)
            for templateName, _ in self.templateSpecs:
                output.mkdir('%s/%s' % (category, templateName))
        
        ### Now merge
        if os.path.isfile(sourcePath):
            self._getter = SourceGetter(sourcePath)
        else:
            self._getter = SourceGetter()
    
        for outSample, inSamples in targets:
            outHistograms = {}

            for inSample in inSamples:
                print '%s/%s -> %s/%s' % (sourcePath, inSample, outputPath, outSample)

                if os.path.isdir(sourcePath):
                    if inSample in self.subsampleRmap:
                        sourceSample = self.subsampleRmap[inSample]
                    else:
                        sourceSample = inSample

                    self._getter.open(sourcePath, sourceSample)

                if (self.ueVariation in HistogramMerger.variations and inSample in HistogramMerger.variations[self.ueVariation]['inSamples']) or \
                        (self.psVariation in HistogramMerger.variations and inSample in HistogramMerger.variations[self.psVariation]['inSamples']):
                    self.renormalizeUEPS(inSample)

                if self.asLnNPooling is not None:
                    self.poolAsLnN(inSample)

                self.restructure(output, inSample, outSample, outHistograms)

            self.writePrimaries(outHistograms)

        # come back here
        for catkey in output.GetListOfKeys():
            self.createSecondaries(output.GetDirectory(catkey.GetName()))
        
        output.Close()

    def parseDirectoryName(self, name):
        matches = re.match('hww_((?:PTH|NJ)_(?:[0-9]+|G[ET][0-9]+|[0-9]+_[0-9]+))(?:_cat(.+)|)_[0-9]+$', name)
        if matches:
            recoOutBin = matches.group(1)
            category = matches.group(2)
            return 'SR', recoOutBin, category

        matches = re.match('hww_CR_cat((?:PTH|NJ)_(?:[0-9]+|G[ET][0-9]+|[0-9]+_[0-9]+))_(top|DY|WW)_[0-9]+$', name)
        if matches:
            recoOutBin = matches.group(1)
            cr = matches.group(2)
            return 'CR', recoOutBin, cr

        return '', '', ''

    @staticmethod
    def makeTH1(name, bins):
        if type(bins) is int:
            hout = ROOT.TH1D(name, name, bins, 0., float(bins))
        elif type(bins) is tuple:
            hout = ROOT.TH1D(name, name, *bins)
        elif type(bins) is list:
            hout = ROOT.TH1D(name, name, len(bins) - 1, array.array('d', bins))

        hout.Sumw2()

        return hout


def makeCutMerging(cuts, outBins, recoBinMap, splitScheme):
    cutMerging = collections.defaultdict(list)

    srpattern = '(.+_)((?:PTH|NJ)_[0-9GET]+(?:_[0-9]+|))_cat(pt2(?:lt|ge)20)([em][em])([mp][mp])_([0-9]+)$'
    crpattern = '(.+_CR_cat)((?:PTH|NJ)_[0-9GET]+(?:_[0-9]+|))_(.+_[0-9]+)$'

    recoBinRMap = {}
    for out, ins in recoBinMap.iteritems():
        recoBinRMap.update((i, out) for i in ins)
    
    for cut in cuts:
        matches = re.match(srpattern, cut)
        if matches:
            outBin = recoBinRMap[matches.group(2)]
            iout = outBins.index(outBin)

            if splitScheme[iout] == 8:
                outcut = ('%s{out}_cat%s%s%s_%s' % tuple(matches.group(i) for i in [1, 3, 4, 5, 6])).format(out=outBin)
                cutMerging[outcut].append(cut)
            elif splitScheme[iout] == 4 or \
                 splitScheme[iout] == 3 and matches.group(3) == 'pt2lt20':
                outcut = ('%s{out}_cat%s%s_%s' % tuple(matches.group(i) for i in [1, 3, 4, 6])).format(out=outBin)
                cutMerging[outcut].append(cut)
            elif splitScheme[iout] == 3 and matches.group(3) == 'pt2ge20' or \
                 splitScheme[iout] == 2:
                outcut = ('%s{out}_cat%s_%s' % tuple(matches.group(i) for i in [1, 3, 6])).format(out=outBin)
                cutMerging[outcut].append(cut)
            elif splitScheme[iout] == 1:
                outcut = ('%s{out}_%s' % tuple(matches.group(i) for i in [1, 6])).format(out=outBin)
                cutMerging[outcut].append(cut)

            continue

        matches = re.match(crpattern, cut)
        if matches:
            outBin = recoBinRMap[matches.group(2)]
            iout = outBins.index(outBin)

            outcut = ('%s{out}_%s' % tuple(matches.group(i) for i in [1, 3])).format(out=outBin)
            cutMerging[outcut].append(cut)

            continue

    return cutMerging


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
    
    argParser = ArgumentParser(description='Restructure the input into a ROOT file containing only the plots needed for a differential measurement.')
    argParser.add_argument('sourcePath', metavar='PATH', help='Input ROOT file / directory name.')
    argParser.add_argument('outputPath', metavar='PATH', help='Output ROOT file name.')
    argParser.add_argument('observable', metavar='OBS', help='Observable name.')
    argParser.add_argument('--tag', '-t', metavar='TAG', dest='tag', default='', help='Tag name when input is a directory.')
    argParser.add_argument('--year', '-y', metavar='YEAR', dest='year', default='', help='Year.')
    argParser.add_argument('--signal-fiducial-only', action='store_true', dest='signal_fiducial_only', help='Signal is fiducial only.')
    argParser.add_argument('--signal-no-fiducial', action='store_true', dest='signal_no_fiducial', help='No fiducial cut on signal.')
    argParser.add_argument('--signal-ggH-separate', action='store_true', dest='signal_ggH_separate', help='Separate ggH and xH in signal.')
    argParser.add_argument('--signal-separate', action='store_true', dest='signal_separate', help='Separate Higgs processes.')
    argParser.add_argument('--signal-hww-only', action='store_true', dest='signal_hww_only', help='Signal is HWW only.')
    argParser.add_argument('--background-minor-merge', action='store_true', dest='background_minor_merge', help='Merge minor backgrounds into one sample.')
    argParser.add_argument('--input-fake-flavored', action='store_true', dest='input_fake_flavored', help='Input Fake sample is split into Fake_em and Fake_me.')
    argParser.add_argument('--aslnn-category-pool', action='store_true', dest='aslnn_category_pool', help='Compute the lnN value for AsLnN shape uncertainties across categories.')
    argParser.add_argument('--gen-inclusive', action='store_true', dest='gen_inclusive', help='Create an input for an inclusive cross section measurement.')
    argParser.add_argument('--make-asimov-with-bias', metavar='SAMPLE=bias', nargs='+', dest='make_asimov_with_bias', help='Replace histo_DATA with an Asimov dataset with biased sample scales')
    argParser.add_argument('--num-processes', '-j', metavar='N', dest='num_processes', type=int, default=1, help='Number of parallel processes.')
    
    args = argParser.parse_args()

    if not args.year:
        if '2016' in args.tag:
            args.year = '2016'
        elif '2017' in args.tag:
            args.year = '2017'
        elif '2018' in args.tag:
            args.year = '2018'
        else:
            raise RuntimeError('Cannot determine year')

    if args.observable == 'ptH':
        obsname = 'PTH'
    elif args.observable == 'njet':
        obsname = 'NJ'
        
    ### Load the configuration

    _samples_noload = True
    samples = {}
    with open('samples.py') as samplesfile:
        exec(samplesfile)

    cuts = {}
    with open('cuts.py') as cutsfile:
        exec(cutsfile)

    nuisances = {}
    with open('nuisances.py') as nuisancesfile:
        exec(nuisancesfile)

    subsamplemap = dict(utils.flatten_samples(samples))
    for sname in signals:
        for sub in list(subsamplemap[sname]):
            if obsname not in sub:
                subsamplemap[sname].remove(sub)

    for cut in cuts.keys():
        if obsname not in cut:
            cuts.pop(cut)
    
    categorymap = dict(utils.flatten_cuts(cuts))

    utils.update_nuisances_with_subsamples(nuisances, subsamplemap.items())
    utils.update_nuisances_with_categories(nuisances, categorymap.items())
        
    ### How we merge the bins & categories

    HistogramMerger.templateSpecs = [
        ('mllVSmth_8x9', 72),
        ('mllVSmth_6x6', 36),
        ('met', (50, 20., 220.)),
        ('ptll', (20, 0., 200.)),
        ('dphill', (20, 0., 3.14)),
        ('mll', (31,0.,310.)),
        ('mth', (30, 0., 300.))
    ]
    HistogramMerger.templateSpecs.append(('events', 1))

    HistogramMerger.secondarySpecs = [
        ('mllfit', [10., 25., 35., 40., 45., 50., 55., 70., 90., 210.], 'mllVSmth_8x9', [range(i + 1, i + 73, 9) for i in range(9)]),
        ('mthfit', [60., 80., 90., 100., 110., 120., 130., 150., 200.], 'mllVSmth_8x9', [range(i * 9 + 1, i * 9 + 10) for i in range(8)]),
        ('mthfitww', [60., 80., 90., 100., 110., 120., 130., 150., 200.], 'mllVSmth_8x9', [range(i * 9 + 9, i * 9 + 10) for i in range(8)]),
        ('mllVSmth_4x3', 12, 'mllVSmth_8x9', [(range(i + j + 1, i + j + 4) + range(i + j + 10, i + j + 13)) for j in range(0, 72, 18) for i in range(0, 9, 3)]),
        ('mllVSmth_3x3', 9, 'mllVSmth_6x6', [(range(i + j + 1, i + j + 3) + range(i + j + 7, i + j + 9)) for j in range(0, 36, 12) for i in range(0, 6, 2)]),
        ('mllVSmth_2x2', 4, 'mllVSmth_6x6', [(range(i + j + 1, i + j + 4) + range(i + j + 7, i + j + 10) + range(i + j + 13, i + j + 16)) for j in range(0, 36, 18) for i in range(0, 6, 3)])
    ]

    HistogramMerger.observable = args.observable

    for sname, subsamples in subsamplemap.iteritems():
        HistogramMerger.subsampleRmap.update(('%s_%s' % (sname, subsample), sname) for subsample in subsamples)

    if args.observable == 'ptH':
        if PTHGT200:
            HistogramMerger.outBins = ['PTH_0_20', 'PTH_20_45', 'PTH_45_80', 'PTH_80_120', 'PTH_120_200', 'PTH_GT200']
        else:
            HistogramMerger.outBins = ['PTH_0_20', 'PTH_20_45', 'PTH_45_80', 'PTH_80_120', 'PTH_120_200', 'PTH_200_350', 'PTH_GT350']

        HistogramMerger.recoBinMap = {
            'PTH_0_20': ['PTH_0_10', 'PTH_10_15', 'PTH_15_20'],
            'PTH_20_45': ['PTH_20_30', 'PTH_30_45'],
            'PTH_45_80': ['PTH_45_60', 'PTH_60_80'],
            'PTH_80_120': ['PTH_80_100', 'PTH_100_120'],
            'PTH_120_200': ['PTH_120_155', 'PTH_155_200']
        }
        if PTHGT200:
            HistogramMerger.recoBinMap['PTH_GT200'] = ['PTH_200_260', 'PTH_260_350', 'PTH_GT350']
            HistogramMerger.split = [4, 4, 4, 3, 2, 2]
        else:
            HistogramMerger.recoBinMap['PTH_200_350'] = ['PTH_200_260', 'PTH_260_350']
            HistogramMerger.recoBinMap['PTH_GT350'] = ['PTH_GT350']
            HistogramMerger.split = [4, 4, 4, 3, 2, 2, 1]
    
    else:
        HistogramMerger.outBins = ['NJ_0', 'NJ_1', 'NJ_2', 'NJ_3', 'NJ_GE4']
        
        HistogramMerger.recoBinMap = {
            'NJ_0': ['NJ_0'],
            'NJ_1': ['NJ_1'],
            'NJ_2': ['NJ_2'],
            'NJ_3': ['NJ_3'],
            'NJ_GE4': ['NJ_GE4']
        }

        HistogramMerger.split = [4, 4, 2, 1, 1]
    
    ### Sample merging
    
    sampleMerging = {}

    if not args.make_asimov_with_bias:
        sampleMerging['DATA'] = ['DATA']

    if args.input_fake_flavored:
        sampleMerging['Fake_em'] = ['Fake_em']
        sampleMerging['Fake_me'] = ['Fake_me']
    else:
        sampleMerging['Fake'] = ['Fake']

    minors = ['ggWW', 'WWewk', 'Vg', 'VgS_L', 'VgS_H', 'VZ', 'VVV']
    
    if args.background_minor_merge:
        sampleMerging['minor'] = minors
    else:
        for name in minors:
            sampleMerging[name] = [name]

    sampleMerging['WW'] = ['WW']
    sampleMerging['top'] = ['top']
    sampleMerging['DY'] = ['DY']

    ggH_hww = ['ggH_hww']
    xH_hww = [
        'qqH_hww',
        'ZH_hww',
        'ggZH_hww',
        'WH_hww',
        'ttH_hww'
    ]
    ggH_htt = ['ggH_htt']
    if args.year == '2018':
        xH_htt = ['qqH_htt']
    else:
        xH_htt = ['qqH_htt', 'ZH_htt', 'WH_htt']

    if not NOHIGGS:
        if args.signal_hww_only:
            if args.signal_separate:
                sampleMerging['ggH_htt'] = [sname for sname in samples if sname.startswith('ggH_htt')]
                for proc in xH_htt:
                    sampleMerging[proc] = [sname for sname in samples if sname.startswith(proc)]
            else:
                sampleMerging['htt'] = []
                for proc in ggH_htt + xH_htt:
                    sampleMerging['htt'].extend(sname for sname in samples if sname.startswith(proc))
                if args.signal_fiducial_only:
                    sampleMerging['nonfid'] = [sname for sname in samples if 'nonfid_' in sname and 'hww' in sname]

        elif args.signal_fiducial_only:
            sampleMerging['nonfid'] = [sname for sname in samples if 'nonfid_' in sname]

    # Set signal sample merging

    signalSamples = []    
    if not NOHIGGS:
        if args.signal_hww_only:
            if args.signal_separate:
                signalSamples.append(('ggH_hww', ggH_hww))
                for proc in xH_hww:
                    signalSamples.append((proc, [proc]))
            elif args.signal_ggH_separate:
                signalSamples.append(('ggH_hww', ggH_hww))
                signalSamples.append(('xH_hww', xH_hww))
            else:
                signalSamples.append(('smH_hww', ggH_hww + xH_hww))
        else:
            if args.signal_ggH_separate:
                signalSamples.append(('ggH', ggH_hww + ggH_htt))
                signalSamples.append(('xH', xH_hww + xH_htt))
            else:
                signalSamples.append(('smH', ggH_hww + xH_hww + ggH_htt + xH_htt))

    # Sample merging configuration according to the flags at the beginning

    if args.gen_inclusive:
        genBinMerging = [('NJ_GE0', sum(HistogramMerger.recoBinMap.itervalues(), []))]
    else:
        genBinMerging = []
        for outBin in HistogramMerger.outBins:
            genBinMerging.append((outBin, HistogramMerger.recoBinMap[outBin]))
    
    for target, snames in signalSamples:
        for genOutBin, genSourceBins in genBinMerging: # merge histograms from source truth bins
            if args.signal_fiducial_only:
                subsamples = ['fid_' + bin for bin in genSourceBins]
            elif args.signal_no_fiducial:
                subsamples = genSourceBins
            else:
                subsamples = ['fid_' + bin for bin in genSourceBins] + ['nonfid_' + bin for bin in genSourceBins]

            sampleMerging['%s_%s' % (target, genOutBin)] = ['%s_%s' % (sname, sub) for sname in snames for sub in subsamples]

    ### Cut merging

    HistogramMerger.cutMerging = makeCutMerging(cuts, HistogramMerger.outBins, HistogramMerger.recoBinMap, HistogramMerger.split)

    HistogramMerger.year = args.year
    SourceGetter.tag = args.tag

    ### Prepare nuisance editing

    newNuisances = update_nuisances(nuisances, samples, cuts, sampleMerging, HistogramMerger.cutMerging)
    
    HistogramMerger.variations = {}

    for nuisanceName, nuisance in newNuisances.iteritems():
        if nuisanceName == 'stat' or nuisance['type'] == 'lnN':
            continue

        appliesTo = set(nuisance['samples'].iterkeys()) & set(sampleMerging.iterkeys())

        if len(appliesTo) == 0:
            continue

        variation = HistogramMerger.variations[nuisance['name']] = {}
        variation['appliesTo'] = appliesTo
        variation['originalType'] = nuisances[nuisanceName]['type']
        variation['inSamples'] = set(nuisances[nuisanceName]['samples'].iterkeys())
        variation['cuts'] = nuisance['cuts'] if 'cuts' in nuisance else None

        variation['renormalization'] = {}

        variation['perRecoBin'] = ('perRecoBin' in nuisance and nuisance['perRecoBin'])
        if 'copyfrom' in nuisance:
            variation['copyfrom'] = nuisances[nuisance['copyfrom']]['name']
        else:
            variation['copyfrom'] = None

        if variation['originalType'] == 'lnN':
            variation['factors'] = {}

            for sname, vdef in nuisances[nuisanceName]['samples'].iteritems():
                if '/' in vdef:
                    vdef = tuple(reversed(vdef.split('/')))
    
                if type(vdef) is list or type(vdef) is tuple:
                    variation['factors'][sname] = (float(vdef[0]), float(vdef[1]))
                else:
                    variation['factors'][sname] = (float(vdef), 1. / float(vdef))

        else:
            variation['AsLnN'] = float(nuisance['AsLnN']) if 'AsLnN' in nuisance else 0.

        if nuisance['name'].startswith('PS'):
            HistogramMerger.psVariation = nuisance['name']
        elif nuisance['name'].startswith('UE'):
            HistogramMerger.ueVariation = nuisance['name']

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

        if nname in ['PS', 'UE']:
            continue
            
        try:
            variation = HistogramMerger.variations[nname]
        except KeyError:
            continue

        sup = 1. / hup.GetBinContent(iX)
        sdown = 1. / hdown.GetBinContent(iX)

        if sname in subsamplemap:
            variation['renormalization'].update(('%s_%s' % (sname, sub), (sup, sdown)) for sub in subsamplemap[sname])
        else:
            variation['renormalization'][sname] = (sup, sdown)
    
    source.Close()

    if args.aslnn_category_pool:
        HistogramMerger.asLnNPooling = []
        for outBin in HistogramMerger.outBins:
            HistogramMerger.asLnNPooling.append(['hww_%s_.+' % outBin]),

    ### Create jobs

    jobArgs = sampleMerging.items()

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
    
            proc = multiprocessing.Process(target = mergeOne, args = (args.sourcePath, jobArg, queue))
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
