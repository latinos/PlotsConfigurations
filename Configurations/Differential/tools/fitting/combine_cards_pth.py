#!/usr/bin/env python

import os
import sys
import shutil
import subprocess
from argparse import ArgumentParser

argParser = ArgumentParser(description = 'Select and edit the datacards to use in full fit and combine them.')
argParser.add_argument('--in', '-i', metavar = 'PATH', dest = 'inpath', default = 'datacards', help = 'Input directory name.')
argParser.add_argument('--out', '-o', metavar = 'PATH', dest = 'outpath', default = 'datacards_fullmodel', help = 'Output directory name.')

args = argParser.parse_args()
del sys.argv[1:]

import ROOT

try:
    shutil.rmtree(args.outpath)
except OSError:
    pass

pthBinning = [0., 20., 45., 80., 120., 200., 6500.]
split = [8, 8, 4, 3, 2, 2, 2]
dropMCStats = True
dropLumi = True

cards = []
ptbins = []
procIds = {} # it seems that we don't really need to have the process ids synched between the combined cards, but let's make them common

for ipt in range(len(pthBinning) - 1):
    low, high = pthBinning[ipt:ipt+2]
    ptbin = 'pth_%.0f_%.0f' % (low, high)
    ptbins.append(ptbin)

    if split[ipt] == 2:
        cutConfs = [('pt2lt20', 'mllVSmth_6x6'), ('pt2ge20', 'mllVSmth_8x9')]
    elif split[ipt] == 3:
        cutConfs = [('em_pt2lt20', 'mllVSmth_6x6'), ('me_pt2lt20', 'mllVSmth_6x6'), ('pt2ge20', 'mllVSmth_8x9')]
    elif split[ipt] == 4:
        cutConfs = [('em_pt2lt20', 'mllVSmth_6x6'), ('me_pt2lt20', 'mllVSmth_6x6'), ('em_pt2ge20', 'mllVSmth_8x9'), ('me_pt2ge20', 'mllVSmth_8x9')]
    elif split[ipt] == 8:
        cutConfs = [('emmp_pt2lt20', 'mllVSmth_6x6'), ('mmep_pt2lt20', 'mllVSmth_6x6')]
        cutConfs += [('epmm_pt2lt20', 'mllVSmth_6x6'), ('mpem_pt2lt20', 'mllVSmth_6x6')]
        cutConfs += [('emmp_pt2ge20', 'mllVSmth_8x9'), ('mmep_pt2ge20', 'mllVSmth_8x9')]
        cutConfs += [('epmm_pt2ge20', 'mllVSmth_8x9'), ('mpem_pt2ge20', 'mllVSmth_8x9')]
    elif split == 'sanity':
        cutConfs = [('pt2lt20', 'events'), ('pt2ge20', 'events')]

    for cut, histBinning in cutConfs:
        srName = 'sr_%s_%s' % (ptbin, cut)
        sourceDir = '%s/%s/%s' % (args.inpath, srName, histBinning)

        targetDir = '%s/%s/%s' % (args.outpath, srName, histBinning)
        os.makedirs(targetDir + '/shapes')

        histRepo = ROOT.TFile.Open(sourceDir + '/shapes/histos_%s.root' % srName)
        if not histRepo:
            sys.stderr.write('Missing file %s/shapes/histos_%s.root\n' % (sourceDir, srName))
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

            if '_hww_' in name and sumw > signalMax:
                signalMax = sumw

        # Drop signal processes that contribute less than 1% of the max (super-off diagonal in the response matrix)
        for name in list(nominalNames):
            if '_hww_' not in name:
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
        targetHistRepo = ROOT.TFile.Open(targetDir + '/shapes/histos_%s.root' % srName, 'recreate')

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
        if len(srName) >= (colw - 5):
            colw = len(srName) + 7

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
                target.write('bin'.ljust(80) + ''.join([srName.ljust(colw) * len(usedProcs)]) + '\n')

                procNames = source.readline().split()[1:]

                for name in procNames:
                    if name not in usedProcs:
                        continue
                    if name not in procIds:
                        if '_hww_' in name:
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
                    
                    if line.startswith('-'):
                        break
                    
                    words = line.split()
                    if 'autoMCStats' in words:
                        if dropMCStats:
                            continue
                        else:
                            target.write(line)

                    elif 'rateParam' in words:
                        continue

                    else:
                        nuisName = words[0]
                        if nuisName == 'lumi_13TeV' and dropLumi:
                            continue
                        
                        nuisType = words[1]
                        values = words[2:]
                        valueMap = dict(zip(procNames, values))

                        if nuisType == 'lnN':
                            for procName in procNames:
                                # drop scaling nuisances for free-floating processes
                                if procName.startswith('top') or procName.startswith('DY') or procName == 'WW' or procIds[procName] <= 0:
                                    valueMap[procName] = '-'

                        target.write(nuisName.ljust(60))
                        target.write(nuisType.ljust(20))
                        target.write(''.join([('%s' % valueMap[name]).ljust(colw) for name in usedProcs if '_hww_' in name]))
                        target.write(''.join([('%s' % valueMap[name]).ljust(colw) for name in usedProcs if '_hww_' not in name]))
                        target.write('\n')

                target.write(line)
            
        cards.append(targetDir + '/datacard.txt')

crs = ['dycr_0j', 'dycr_1j', 'dycr_ge2j']
crs += ['topcr_0j', 'topcr_1j', 'topcr_ge2j']

for cr in crs:
    targetDir = '%s/%s/events' % (args.outpath, cr)
    sourceDir = '%s/%s/events' % (args.inpath, cr)

    os.makedirs(targetDir + '/shapes')
    
    with open(targetDir + '/datacard.txt', 'w') as target:
        with open(sourceDir + '/datacard.txt') as source:
            for line in source:
                if line.startswith('lumi_13TeV') and dropLumi:
                    continue
                elif ' rateParam ' in line:
                    continue

                if line.startswith('kmax'):
                    target.write('kmax * number of nuisance parameters\n')
                else:
                    target.write(line)
                
    cards.append(targetDir + '/datacard.txt')

    shutil.copyfile(sourceDir + '/shapes/histos_%s.root' % cr, targetDir + '/shapes/histos_%s.root' % cr)

print 'Combining:', cards

proc = subprocess.Popen(['combineCards.py'] + cards, stdout = subprocess.PIPE, stderr = subprocess.PIPE)
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

    fullmodel.write('CMS_hww_Topnorm0j rateParam * top_0j 1.\n')
    fullmodel.write('CMS_hww_Topnorm1j rateParam * top_1j 1.\n')
    fullmodel.write('CMS_hww_Topnormge2j rateParam * top_ge2j 1.\n')
    fullmodel.write('CMS_hww_DYnorm0j rateParam * DY_0j 1.\n')
    fullmodel.write('CMS_hww_DYnorm1j rateParam * DY_1j 1.\n')
    fullmodel.write('CMS_hww_DYnormge2j rateParam * DY_ge2j 1.\n')
        
    fullmodel.write('CMS_hww_WWnorm rateParam * WW 1.\n')

    # Add constraints
    for ic in range(len(ptbins) - 2):
        fullmodel.write('constr{ic} constr const{ic}_In[0.],RooFormulaVar::fconstr{ic}("@0+@2-2*@1",{{r_{low},r_{mid},r_{high}}}),delta[10.]\n'.format(ic = ic, low = ic, mid = ic + 1, high = ic + 2))

cmd = ['text2workspace.py', '-P', 'HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel', '--PO', 'verbose']
for ibin, ptbin in enumerate(ptbins):
    cmd.append('--PO')
    cmd.append('map=.*/(gg|X)H_hww_%s_(incl|fid|nonfid):r_%d[1.,-3.,3.]' % (ptbin, ibin))

cmd.extend([args.outpath + '/fullmodel.txt', '-o', args.outpath + '/fullmodel.root'])

proc = subprocess.Popen(cmd, stdout = subprocess.PIPE, stderr = subprocess.PIPE)
out, err = proc.communicate()

print out
print err
