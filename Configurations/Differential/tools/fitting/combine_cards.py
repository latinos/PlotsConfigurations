#!/usr/bin/env python

import os
import sys
import shutil
import math
import re
import subprocess
from argparse import ArgumentParser

argParser = ArgumentParser(description='Select and edit the datacards to use in full fit and combine them.')
argParser.add_argument('--in', '-i', metavar='PATH', dest='inpath', default='datacards', help='Input directory name.')
argParser.add_argument('--out', '-o', metavar='PATH', dest='outpath', default='datacards_fullmodel', help='Output directory name.')
argParser.add_argument('--drop-mcstats', '-M', metavar='PATTERN', dest='dropMCStats', nargs='*', help='Drop MC stats from specific cuts specified by regex.')
argParser.add_argument('--drop-nuisance', '-N', metavar='PARAM', dest='dropNuisance', nargs='+', help='Drop specific nuisances.')
argParser.add_argument('--only-fullmodel', '-O', action='store_true', dest='onlyFullModel', help='Keep only the full model card.')
argParser.add_argument('--just-combine', '-C', action='store_true', dest='justCombine', help='Do not run text2workspace.')
argParser.add_argument('--float-background', '-f', metavar='NAME=BKG[,BKG]', dest='floatingBackgrounds', nargs='+', default=['WW=WW', 'top=top', 'DY=DY'], help='Backgrounds to float.')
argParser.add_argument('--exclude', '-x', metavar='PATTERN', dest='exclude', nargs='+', help='Exclude cards matching regular expression patterns.')
argParser.add_argument('--hdf5', '-H', action='store_true', dest='hdf5', help='Use text2hdf5.py.')

args = argParser.parse_args()
del sys.argv[1:]

import ROOT

try:
    shutil.rmtree(args.outpath)
except OSError:
    pass

cmd = ['combineCards.py']
procIds = {} # it seems that we don't really need to have the process ids synched between the combined cards, but let's make them common

cuts = []
observableBins = []

def isSignal(name):
    return (re.match('.+H_hww', name) is not None)

def isPOI(name):
    if isSignal(name):
        return True
    return False

os.makedirs(args.outpath)

floatingBackgrounds = []
for expr in args.floatingBackgrounds:
    pname, procs = expr.split('=')
    floatingBackgrounds.append((pname, procs.split(',')))

# Copy the histograms applying adjustments
targetFullHistRepo = ROOT.TFile.Open('%s/histos.root' % args.outpath, 'recreate')

for cut in sorted(os.listdir(args.inpath)):
    if cut == 'nuisances.py':
        continue
    
    isCR = ('_CR_' in cut)

    if isCR and '_WW' in cut:
        continue

    if args.exclude:
        try:
            next(pat for pat in args.exclude if re.match(pat, cut))
        except StopIteration:
            pass
        else:
            continue

    cuts.append(cut)

    if isCR:
        matches = re.match('hww_CR_cat((?:PTH|NJ)_(?:[0-9]+|G[ET][0-9]+|[0-9]+_[0-9]+))_[a-zA-Z]+_[0-9]+$', cut)
    else:
        matches = re.match('hww_((?:PTH|NJ)_(?:[0-9]+|G[ET][0-9]+|[0-9]+_[0-9]+))(?:_cat(.+)|)_[0-9]+$', cut)

    obsBin = matches.group(1)
    if obsBin not in observableBins:
        observableBins.append(obsBin)

    if isCR:
        variable = 'events'
    else:
        variable = next(v for v in os.listdir('%s/%s' % (args.inpath, cut)) if v.startswith('mllVSmth') or v == 'mll_optim')
    
    sourceDir = '%s/%s/%s' % (args.inpath, cut, variable)
    targetDir = '%s/%s/%s' % (args.outpath, cut, variable)
    os.makedirs('%s/shapes' % targetDir)

    histRepo = ROOT.TFile.Open('%s/shapes/histos_%s.root' % (sourceDir, cut))
    if not histRepo:
        sys.stderr.write('Missing file %s/shapes/histos_%s.root\n' % (sourceDir, cut))
        sys.exit(1)

    # Only select processes with positive contributions
    nominalTemplates = {}
    signalMax = 0.
    for key in histRepo.GetListOfKeys():
        name = key.GetName()
        if name.endswith('Up') or name.endswith('Down'):
            continue
        
        hist = key.ReadObj()

        sumw = hist.GetSumOfWeights()

        if sumw == 0. and name != 'histo_Data':
            print cut, name, 'has null nominal'
        else:
            nominalTemplates[name] = hist

        if isSignal(name) and sumw > signalMax:
            signalMax = sumw

    # Drop processes that contribute less than 1% of the max (super-off diagonal in the response matrix)
    for name, hist in nominalTemplates.items():
        if not isSignal(name):
            continue
        
        sumw = hist.GetSumOfWeights()
        if sumw < 0.01 * signalMax and name != 'histo_Data':
            print 'Dropping', name, 'from', cut, '(%f << %f)' % (sumw, signalMax)
            nominalTemplates.pop(name).Delete()

    # Copy the histograms applying adjustments
    if not args.onlyFullModel:
        targetHistRepo = ROOT.TFile.Open('%s/shapes/histos_%s.root' % (targetDir, cut), 'recreate')

    targetFullHistDir = targetFullHistRepo.mkdir(cut)
    targetFullHistDir.cd()

    for key in histRepo.GetListOfKeys():
        name = key.GetName()

        targetFullHistDir.cd()

        try:
            hist = nominalTemplates[name]
            nominal = name
            varsuffix = ''
        except KeyError:
            try:
                nominal = next(key for key in nominalTemplates if name.startswith(key + '_'))
            except StopIteration:
                # nominal is dropped
                continue

            varsuffix = name[len(nominal):]

            hist = key.ReadObj()
            if hist.GetSumOfWeights() <= 0.:
                hist.Delete()
                hist = nominalTemplates[nominal].Clone(name)
                hist.Scale(1.5e-4)

        targetFullHistDir.cd()
        hist.SetDirectory(targetFullHistDir)
        hist.Write()

        if not args.onlyFullModel:
            targetHistRepo.cd()
            hist.SetDirectory(targetHistRepo)
            hist.Write()

        if name != nominal:
            hist.Delete()

    if not args.onlyFullModel:
        targetHistRepo.Close()

    colw = 30
    if len(cut) >= (colw - 5):
        colw = len(cut) + 7

    usedProcs = []
    for histName in nominalTemplates:
        usedProcs.append(histName.replace('histo_', ''))

    usedProcs.remove('Data')

    print sourceDir, '->', targetDir
    with open('%s/datacard.txt' % targetDir, 'w') as target:
        with open('%s/datacard.txt' % sourceDir) as source:
            # Header
            saidObs = False
            while True:
                line = source.readline()
                
                if line.startswith('observation'):
                    saidObs = True
                if saidObs and line.startswith('bin'):
                    break

                if line.startswith('kmax'):
                    target.write('kmax * number of nuisance parameters\n')
                else:
                    target.write(line)

            # bin and processes
            target.write('bin'.ljust(80) + ''.join([cut.ljust(colw) * len(usedProcs)]) + '\n')

            procNames = source.readline().split()[1:]

            for name in procNames:
                if name not in usedProcs:
                    continue
                if name not in procIds:
                    if isPOI(name):
                        procId = min(procIds.values() + [1]) - 1
                    else:
                        procId = max(procIds.values() + [0]) + 1

                    procIds[name] = procId

            usedSignals = [name for name in usedProcs if procIds[name] <= 0]
            usedSignals.sort(key = lambda sname: int(re.match('.+_(?:PTH|NJ)_(?:GE|GT|)([0-9]+)', sname).group(1)))
            usedBkgs = [name for name in usedProcs if procIds[name] > 0]
            # reorder
            usedProcs = usedSignals + usedBkgs

            target.write('process'.ljust(80))
            target.write(''.join([name.ljust(colw) for name in usedProcs]))
            target.write('\n')
            
            # discard one line because we use our own process ids
            source.readline()

            target.write('process'.ljust(80))
            target.write(''.join([('%d' % procIds[name]).ljust(colw) for name in usedProcs]))
            target.write('\n')

            rates = map(float, source.readline().split()[1:])
            rateMap = dict(zip(procNames, rates))

            target.write('rate'.ljust(80))
            target.write(''.join([('%-.4f' % rateMap[name]).ljust(colw) for name in usedProcs]))
            target.write('\n')

            target.write(source.readline())

            # nuisances
            while True:
                line = source.readline()
                
                if not line or line.startswith('-'):
                    break
                
                words = line.split()

                if 'autoMCStats' in words:
                    if args.hdf5:
                        continue
                    if args.dropMCStats is not None:
                        if len(args.dropMCStats) == 0:
                            continue

                        matches = False
                        for pat in args.dropMCStats:
                            if re.match(pat, cut):
                                matches = True
                                break
                        if matches:
                            continue

                    target.write(line)
                    continue

                elif 'rateParam' in words:
                    continue

                nuisName = words[0]

                if args.dropNuisance is not None and nuisName in args.dropNuisance:
                    continue
                
                nuisType = words[1]
                values = words[2:]
                valueMap = dict(zip(procNames, values))

                target.write(nuisName.ljust(60))
                target.write(nuisType.ljust(20))
                target.write(''.join([('%s' % valueMap[name]).ljust(colw) for name in usedProcs]))
                target.write('\n')

            target.write(line)
        
    cmd.append('%s=%s/datacard.txt' % (cut, os.path.realpath(targetDir)))

targetFullHistRepo.Close()

# list of signal proc name ordered by decreasing process id (and therefore in physical order coming from structure.py)
signalProcs = [x[1] for x in sorted(((pid, pname) for pname, pid in procIds.items() if pid <= 0 and isSignal(pname)), reverse = True)]

observableBins.sort(key = lambda s: int(re.match('[^0-9]+([0-9]+)', s).group(1)))

# now run combineCards.py (output goes to stdout)
print ' '.join(cmd)

proc = subprocess.Popen(cmd, stdout = subprocess.PIPE, stderr = subprocess.PIPE)
out, err = proc.communicate()

if proc.returncode != 0:
    sys.stderr.write(err)
    sys.exit(1)

# Write combined datacard
# We need a version without the regularization terms because combineCards cannot handle constr lines yet
with open('%s/fullmodel_unreg.txt' % args.outpath, 'w') as card_out:
    outFullPath = os.path.realpath(args.outpath)
    binNames = None
    procNames = None
    inNuisances = False
    theoretical = []
    luminosity = []
    experimental = []
    
    for line in out.strip().split('\n'):
        line = line.replace(outFullPath + '/', '')

        # overwrite certain lines
        if line.startswith('kmax'):
            # will be adding rateParam and regularization terms
            card_out.write('kmax * number of nuisance parameters\n')
            card_out.write(('-' * 100) + '\n')
            card_out.write('shapes *        * histos.root $CHANNEL/histo_$PROCESS $CHANNEL/histo_$PROCESS_$SYSTEMATIC\n')
            card_out.write('shapes data_obs * histos.root $CHANNEL/histo_Data\n')
        elif line.startswith('shapes'):
            # take histograms from a single file - already taken care of above
            continue
        else:
            card_out.write(line + '\n')

        if line.startswith('bin'):
            if binNames is None:
                binNames = []
            else:
                # we want the second line
                binNames = line.split()[1:]

        if line.startswith('process') and procNames is None:
            procNames = line.split()[1:]

        if line.startswith('rate'):
            inNuisances = True
            continue

        if inNuisances and not line.startswith('-') and 'autoMCStats' not in line:
            nuis = line.split()[0]
            if nuis.startswith('CMS_'):
                experimental.append(nuis)
            elif nuis.startswith('lumi'):
                luminosity.append(nuis)
            else:
                theoretical.append(nuis)

    for pname, procs in floatingBackgrounds:
        for obsBin in observableBins:
            if args.hdf5:
                line = 'CMS_hww_%snorm_%s   lnN   ' % (pname, obsBin)
                for bin, proc in zip(binNames, procNames):
                    if obsBin in bin and proc in procs:
                        line += ' 6.00 '
                    else:
                        line += ' - '
    
                card_out.write(line + '\n')
            else:
                nuis = 'CMS_hww_{pname}norm_{obsBin}'.format(pname=pname, obsBin=obsBin)
                theoretical.append(nuis)
                for proc in procs:
                    card_out.write('{nuis} rateParam *{obsBin}* {proc} 1.00 [0.,10.]\n'.format(nuis=nuis, obsBin=obsBin, proc=proc))

    card_out.write('theoretical group = %s\n' % (' '.join(theoretical)))
    card_out.write('luminosity group = %s\n' % (' '.join(luminosity)))
    card_out.write('experimental group = %s\n' % (' '.join(experimental)))

# Full model with regularization terms
with open('%s/fullmodel.txt' % args.outpath, 'w') as card_out:
    with open('%s/fullmodel_unreg.txt' % args.outpath) as card_unreg:
        for line in card_unreg:
            card_out.write(line)

    if args.hdf5:
        card_out.write('regularization regGroup = {signalProcs}\n'.format(signalProcs = ' '.join(signalProcs)))
    else:
        for ic in range(len(observableBins) - 2):
            card_out.write('constr{ic} constr @3*(@0-2*@1+@2) r_{low},r_{mid},r_{high},regularize[0.] delta[10.]\n'.format(ic = ic, low = ic, mid = ic + 1, high = ic + 2))

if args.onlyFullModel:
    for cut in cuts:
        shutil.rmtree('%s/%s' % (args.outpath, cut))

if args.justCombine:
    sys.exit(0)

if args.hdf5:
    pass
    #cmd = ['text2hdf5.py', '%s/fullmodel_unreg.txt' % args.outpath, '-o', '%s/fullmodel_unreg.hdf5' % args.outpath]
    #
    #print ' '.join(cmd)
    #proc = subprocess.Popen(cmd)
    #proc.communicate()
    #
    #cmd = ['text2hdf5.py', '%s/fullmodel_reg.txt' % args.outpath, '-o', '%s/fullmodel_reg.hdf5' % args.outpath]
    #
    #print ' '.join(cmd)
    #proc = subprocess.Popen(cmd)
    #proc.communicate()

else:
    #text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO 'map=.*/smH.*_NJ_0:r_0[1, -5, 5]' --PO 'map=.*/smH.*_NJ_1:r_1[1, -5, 5]' --PO 'map=.*/smH.*_NJ_2:r_2[1, -5, 5]' --PO 'map=.*/smH.*_NJ_3:r_3[1, -5, 5]' --PO 'map=.*/smH.*_NJ_GE4:r_4[1, -5, 5]' Full2016.txt -o Full2016.root

    cmdbase = ['text2workspace.py', '-P', 'HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel', '--PO', 'verbose']
    for ibin, obsBin in enumerate(observableBins):
        cmdbase.append('--PO')
        cmdbase.append('map=.*/.*H_hww_%s:r_%d[1.,-10.,10.]' % (obsBin, ibin))

    cmd = list(cmdbase)
    cmd.extend(['%s/fullmodel.txt' % args.outpath, '-o', '%s/fullmodel.root' % args.outpath])

    print ' '.join(cmd)
    proc = subprocess.Popen(cmd)
    proc.communicate()
