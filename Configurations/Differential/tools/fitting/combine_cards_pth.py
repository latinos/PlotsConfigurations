#!/usr/bin/env python

import os
import sys
import shutil
import subprocess
from argparse import ArgumentParser

argParser = ArgumentParser(description = 'Select and edit the datacards to use in full fit and combine them.')
argParser.add_argument('--in', '-i', metavar = 'PATH', dest = 'inpath', default = 'datacards', help = 'Input directory name.')
argParser.add_argument('--out', '-o', metavar = 'PATH', dest = 'outpath', default = 'datacards_fullmodel', help = 'Output directory name.')
argParser.add_argument('--hdf5', '-H', action = 'store_true', dest = 'hdf5', help = 'Use text2hdf5.py.')

args = argParser.parse_args()
del sys.argv[1:]

import ROOT

try:
    shutil.rmtree(args.outpath)
except OSError:
    pass

dropMCStats = True
#dropLumi = True

cards = []
ptbins = []
procIds = {} # it seems that we don't really need to have the process ids synched between the combined cards, but let's make them common

for cut in os.listdir(args.inpath):
    isCR = ('_CR_' in cut)
    
    variable = os.listdir('%s/%s' % (args.inpath, cut))[0]
    
    sourceDir = '%s/%s/%s' % (args.inpath, cut, variable)
    targetDir = '%s/%s/%s' % (args.outpath, cut, variable)
    os.makedirs(targetDir + '/shapes')

    histRepo = ROOT.TFile.Open('%s/shapes/histos_%s.root' % (sourceDir, cut))
    if not histRepo:
        sys.stderr.write('Missing file %s/shapes/histos_%s.root\n' % (sourceDir, cut))
        sys.exit(1)

    # Only select processes with positive contributions
    nominalNames = []
    signalMax = 0.
    for key in histRepo.GetListOfKeys():
        name = key.GetName()
       
        if name.endswith('Up') or name.endswith('Down'):
            continue
        
        hist = key.ReadObj()
        sumw = hist.GetSumOfWeights()

        if sumw <= 0.:
            continue

        nominalNames.append(name)

        if 'smH' in name and sumw > signalMax:
            signalMax = sumw

    if not isCR:
        # Drop signal processes that contribute less than 1% of the max (super-off diagonal in the response matrix)
        for name in list(nominalNames):
            if 'smH' not in name:
                continue
            
            hist = histRepo.Get(name)
            sumw = hist.GetSumOfWeights()
            if sumw < 0.01 * signalMax:
                nominalNames.remove(name)

    # If a nuisance variation histogram goes negative, we need to fix it to nominal
    nuisancesToAdjust = []
    for key in histRepo.GetListOfKeys():
        name = key.GetName()
        hist = key.ReadObj()
        sumw = hist.GetSumOfWeights()
        if (name.endswith('Up') or name.endswith('Down')) and sumw <= 0.:
            for nom in nominalNames:
                if name.startswith(nom):
                    nuisancesToAdjust.append((nom, name))

    # Copy the histograms applying adjustments
    targetHistRepo = ROOT.TFile.Open(targetDir + '/shapes/histos_%s.root' % cut, 'recreate')

    for key in histRepo.GetListOfKeys():
        name = key.GetName()
        for nom in nominalNames:
            if name.startswith(nom):
                break
        else:
            continue    
        
        hist = key.ReadObj()

        targetHistRepo.cd()
        for nom, nuis in nuisancesToAdjust:
            if nuis == name:
                hist = histRepo.Get(nom).Clone(nuis)
        else:
            hist.SetDirectory(targetHistRepo)

        hist.Write()

    targetHistRepo.Close()

    colw = 30
    if len(cut) >= (colw - 5):
        colw = len(cut) + 7

    usedProcs = []
    for histName in nominalNames:
        usedProcs.append(histName.replace('histo_', ''))

    usedProcs.remove('Data')

    print sourceDir, '->', targetDir
    with open(targetDir + '/datacard.txt', 'w') as target:
        with open(sourceDir + '/datacard.txt') as source:
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
                    if 'smH' in name:
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
                    if dropMCStats:
                        continue
                    else:
                        target.write(line)
                        continue

                elif 'rateParam' in words:
                    continue

                nuisName = words[0]
                #if nuisName.startswith('lumi') and dropLumi:
                #    continue
                
                nuisType = words[1]
                values = words[2:]
                valueMap = dict(zip(procNames, values))

                #if nuisType == 'lnN':
                #    for procName in usedProcs:
                #        # drop scaling nuisances for free-floating processes
                #        if procName.startswith('top') or procName.startswith('DY') or procName == 'WW' or procIds[procName] <= 0:
                #            valueMap[procName] = '-'

                target.write(nuisName.ljust(60))
                target.write(nuisType.ljust(20))
                target.write(''.join([('%s' % valueMap[name]).ljust(colw) for name in usedProcs if '_hww_' in name]))
                target.write(''.join([('%s' % valueMap[name]).ljust(colw) for name in usedProcs if '_hww_' not in name]))
                target.write('\n')

            target.write(line)
        
    cards.append(targetDir + '/datacard.txt')

cmd = ['combineCards.py'] + cards

print ' '.join(cmd)

proc = subprocess.Popen(cmd, stdout = subprocess.PIPE, stderr = subprocess.PIPE)
out, err = proc.communicate()

if proc.returncode != 0:
    sys.stderr.write(err)
    sys.exit(1)

# Write combined datacard
with open(args.outpath + '/fullmodel.txt', 'w') as fullmodel:
    for line in out.strip().split('\n'):
        if line.startswith('kmax'):
            fullmodel.write('kmax * number of nuisance parameters\n')
        else:
            fullmodel.write(line + '\n')

    for nj in ['0j', '1j', '2j', '3j', 'ge4j']:
        fullmodel.write('CMS_hww_WWnorm{nj} rateParam * WW_{nj} 1.\n'.format(nj = nj))
        fullmodel.write('CMS_hww_topnorm{nj} rateParam * top_{nj} 1.\n'.format(nj = nj))
        fullmodel.write('CMS_hww_DYnorm{nj} rateParam * DY_{nj} 1.\n'.format(nj = nj))

    if not args.hdf5:
        # Add constraints
        for ic in range(len(ptbins) - 2):
            fullmodel.write('constr{ic} constr const{ic}_In[0.],RooFormulaVar::fconstr{ic}("@0+@2-2*@1",{{r_{low},r_{mid},r_{high}}}),delta[10.]\n'.format(ic = ic, low = ic, mid = ic + 1, high = ic + 2))

if args.hdf5:
    cmd = ['text2hdf5.py', args.outpath + '/fullmodel.txt', '-o', args.outpath + '/fullmodel.hdf5']
else:
    cmd = ['text2workspace.py', '-P', 'HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel', '--PO', 'verbose']
    for ibin, ptbin in enumerate(ptbins):
        cmd.append('--PO')
        cmd.append('map=.*/(gg|X)H_hww_%s_(incl|fid|nonfid):r_%d[1.,-3.,3.]' % (ptbin, ibin))

    cmd.extend([args.outpath + '/fullmodel.txt', '-o', args.outpath + '/fullmodel.root'])

print ' '.join(cmd)

proc = subprocess.Popen(cmd, stdout = subprocess.PIPE, stderr = subprocess.PIPE)
out, err = proc.communicate()

print out
print err
