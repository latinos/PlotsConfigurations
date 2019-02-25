#!/usr/bin/env python

import os
import sys
import shutil
import re
import subprocess
from argparse import ArgumentParser

argParser = ArgumentParser(description = 'Select and edit the datacards to use in full fit and combine them.')
argParser.add_argument('--in', '-i', metavar = 'PATH', dest = 'inpath', default = 'datacards', help = 'Input directory name.')
argParser.add_argument('--out', '-o', metavar = 'PATH', dest = 'outpath', default = 'datacards_fullmodel', help = 'Output directory name.')
argParser.add_argument('--drop-mcstats', '-M', action = 'store_true', dest = 'dropMCStats', help = 'Drop MC stats (for test only).')
argParser.add_argument('--only-fullmodel', '-O', action = 'store_true', dest = 'onlyFullModel', help = 'Keep only the full model card.')
argParser.add_argument('--just-combine', '-C', action = 'store_true', dest = 'justCombine', help = 'Do not run text2workspace.')
argParser.add_argument('--hdf5', '-H', action = 'store_true', dest = 'hdf5', help = 'Use text2hdf5.py.')

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
    return 'smH' in name or 'ggH' in name or 'xH' in name

os.makedirs(args.outpath)

# Copy the histograms applying adjustments
targetFullHistRepo = ROOT.TFile.Open('%s/histos.root' % args.outpath, 'recreate')

for cut in os.listdir(args.inpath):
    if cut == 'nuisances.py':
        continue
    
    isCR = ('_CR_' in cut)

    if isCR and '_WW' in cut:
        continue

    cuts.append(cut)

    if not isCR:
        matches = re.match('hww_((?:PTH|NJ)_(?:[0-9]+|G[ET][0-9]+|[0-9]+_[0-9]+))(?:_cat(.+)|)_[0-9]+$', cut)
        obsBin = matches.group(1)
        if obsBin not in observableBins:
            observableBins.append(obsBin)
    
    variable = os.listdir('%s/%s' % (args.inpath, cut))[0]
    
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

        if sumw == 0.:
            print cut, name, 'has null nominal'
        else:
            nominalTemplates[name] = hist

        if isSignal(name) and sumw > signalMax:
            signalMax = sumw

    if not isCR:
        # Drop signal processes that contribute less than 1% of the max (super-off diagonal in the response matrix)
        for name, hist in nominalTemplates.items():
            if not isSignal(name):
                continue
            
            sumw = hist.GetSumOfWeights()
            if sumw < 0.01 * signalMax:
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

        if name in nominalTemplates:
            hist = nominalTemplates[name]
        else:
            hist = key.ReadObj()
            
        hist.SetDirectory(targetFullHistDir)
        hist.Write()

        if not args.onlyFullModel:
            targetHistRepo.cd()
            hist.SetDirectory(targetHistRepo)
            hist.Write()

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
                    if isSignal(name):
                        procId = min(procIds.values() + [1]) - 1
                    else:
                        procId = max(procIds.values() + [0]) + 1

                    procIds[name] = procId

            usedSignals = [name for name in usedProcs if procIds[name] <= 0]
            usedBkgs = [name for name in usedProcs if procIds[name] > 0]

            target.write('process'.ljust(80))
            target.write(''.join([name.ljust(colw) for name in usedSignals]))
            target.write(''.join([name.ljust(colw) for name in usedBkgs]))
            target.write('\n')
            
            # discard one line because we use our own process ids
            source.readline()

            target.write('process'.ljust(80))
            target.write(''.join([('%d' % procIds[name]).ljust(colw) for name in usedSignals]))
            target.write(''.join([('%d' % procIds[name]).ljust(colw) for name in usedBkgs]))
            target.write('\n')

            rates = map(float, source.readline().split()[1:])
            rateMap = dict(zip(procNames, rates))

            target.write('rate'.ljust(80))
            target.write(''.join([('%-.4f' % rateMap[name]).ljust(colw) for name in usedSignals]))
            target.write(''.join([('%-.4f' % rateMap[name]).ljust(colw) for name in usedBkgs]))
            target.write('\n')

            target.write(source.readline())

            # nuisances
            while True:
                line = source.readline()
                
                if not line or line.startswith('-'):
                    break
                
                words = line.split()

                if 'autoMCStats' in words:
                    if args.dropMCStats or args.hdf5:
                        continue
                    else:
                        target.write(line)
                        continue

                elif 'rateParam' in words:
                    continue

                nuisName = words[0]
                
                nuisType = words[1]
                values = words[2:]
                valueMap = dict(zip(procNames, values))

                target.write(nuisName.ljust(60))
                target.write(nuisType.ljust(20))
                target.write(''.join([('%s' % valueMap[name]).ljust(colw) for name in usedProcs if '_hww_' in name]))
                target.write(''.join([('%s' % valueMap[name]).ljust(colw) for name in usedProcs if '_hww_' not in name]))
                target.write('\n')

            target.write(line)
        
    cmd.append('%s=%s/datacard.txt' % (cut, os.path.realpath(targetDir)))

targetFullHistRepo.Close()

# list of signal proc name ordered by decreasing process id (and therefore in physical order coming from structure.py)
signalProcs = [x[1] for x in sorted(((pid, pname) for pname, pid in procIds.items() if pid <= 0), reverse = True)]

observableBins.sort(key = lambda s: int(re.match('[^0-9]+([0-9]+)', s).group(1)))

# now run combineCards.py (output goes to stdout)
print ' '.join(cmd)

proc = subprocess.Popen(cmd, stdout = subprocess.PIPE, stderr = subprocess.PIPE)
out, err = proc.communicate()

if proc.returncode != 0:
    sys.stderr.write(err)
    sys.exit(1)

# Write combined datacard
with open('%s/fullmodel.txt' % args.outpath, 'w') as fullmodel:
    outFullPath = os.path.realpath(args.outpath)
    binNames = None
    procNames = None
    
    for line in out.strip().split('\n'):
        line = line.replace(outFullPath + '/', '')

        # overwrite certain lines
        if line.startswith('kmax'):
            # will be adding rateParam and regularization terms
            fullmodel.write('kmax * number of nuisance parameters\n')
            fullmodel.write(('-' * 100) + '\n')
            fullmodel.write('shapes *        * histos.root $CHANNEL/histo_$PROCESS $CHANNEL/histo_$PROCESS_$SYSTEMATIC\n')
            fullmodel.write('shapes data_obs * histos.root $CHANNEL/histo_Data\n')
        elif line.startswith('shapes'):
            # take histograms from a single file - already taken care of above
            continue
        else:
            fullmodel.write(line + '\n')

        if line.startswith('bin'):
            if binNames is None:
                binNames = []
            else:
                # we want the second line
                binNames = line.split()[1:]

        if line.startswith('process') and procNames is None:
            procNames = line.split()[1:]
    
    for sname in ['WW', 'top', 'DY']:
        for obsBin in observableBins:
            if args.hdf5:
                # temporary until I figure out how to implement rateParams in texthdf5
                line = 'CMS_hww_%snorm_%s   lnN   ' % (sname, obsBin)
                for bin, proc in zip(binNames, procNames):
                    if obsBin in bin and proc == sname:
                        line += ' 6.00 '
                    else:
                        line += ' - '
    
                fullmodel.write(line + '\n')
            else:
                fullmodel.write('CMS_hww_{sname}norm_{obsBin} rateParam *{obsBin}* {sname} 1.00\n'.format(sname = sname, obsBin = obsBin))

if not args.hdf5:
    with open('%s/fullmodel.txt' % args.outpath) as fullmodel:
        with open('%s/fullmodel_unreg.txt' % args.outpath, 'w') as fullmodel_unreg:
            fullmodel_unreg.write(fullmodel.read())

    # Add constraints. In hdf5 version we do this when running combinetf.py
    with open('%s/fullmodel.txt' % args.outpath, 'a') as fullmodel:
        for ic in range(len(observableBins) - 2):
            fullmodel.write('constr{ic} constr const{ic}_In[0.],RooFormulaVar::fconstr{ic}("@0+@2-2*@1",{{r_{low},r_{mid},r_{high}}}),delta[10.]\n'.format(ic = ic, low = ic, mid = ic + 1, high = ic + 2))

if args.onlyFullModel:
    for cut in cuts:
        shutil.rmtree('%s/%s' % (args.outpath, cut))

if args.justCombine:
    sys.exit(0)

if args.hdf5:
    cmd = ['text2hdf5.py', '%s/fullmodel.txt' % args.outpath, '-o', '%s/fullmodel.hdf5' % args.outpath]

    print ' '.join(cmd)
    proc = subprocess.Popen(cmd)
    proc.communicate()

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

    cmd = list(cmdbase)
    cmd.extend(['%s/fullmodel_unreg.txt' % args.outpath, '-o', '%s/fullmodel_unreg.root' % args.outpath])

    print ' '.join(cmd)
    proc = subprocess.Popen(cmd)
    proc.communicate()
