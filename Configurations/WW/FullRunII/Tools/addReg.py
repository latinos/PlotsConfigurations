import sys
import shutil
from optparse import OptionParser
parser = OptionParser()
(options, args) = parser.parse_args()
options.bin = True 
options.noJMax = False
options.nuisancesToExclude = ''
options.verbose = 1
options.stat = False
options.allowNoSignal = True

if len(args) != 2:
    print 'Usage: python addReg.py <datacard.txt> <regularization type>'
    exit()

import ROOT
ROOT.gROOT.SetBatch(True)
ROOT.gSystem.Load("libHiggsAnalysisCombinedLimit")

from HiggsAnalysis.CombinedLimit.DatacardParser import *

dc = parseCard(file(args[0]), options)

procs = dc.processes
sigs  = [p for p in procs if 'WW_B' in p]
nsig = len(sigs)/2

if args[1] == "TUnfold":

    newfile = args[0].replace('.txt','_TUnfoldReg.txt')
    shutil.copyfile(args[0],newfile)

    bins  = dc.bins
    sums = []
    for idx in xrange(nsig):
        sums.append(sum([dc.exp[ib][sig] for sig in ['WW_B{}'.format(idx),'ggWW_B{}'.format(idx)] for ib in bins if sig in dc.exp[ib].keys()]))
    sumtot = sum(sums)
    fracs = [s/sumtot for s in sums]

    with open(newfile,'a') as f:
        for idx in xrange(1,nsig-1):
            constraint = "constr{} constr (r_{}-1.)*({})+(r_{}-1.)*({})-2*(r_{}-1.)*({}) {{r_{},r_{},r_{}}} delta[0.03]\n".format(idx,idx-1,fracs[idx-1],idx+1,fracs[idx+1],idx,fracs[idx],idx-1,idx,idx+1)
            f.write(constraint)

elif args[1] == "SVD":

    newfile = args[0].replace('.txt','_SVDReg.txt')
    shutil.copyfile(args[0],newfile)

    with open(newfile,'a') as f:
        constraint = "constr0 constr r_1-r_0 {{r_0,r_1}} delta[0.03]\n"
        f.write(constraint)
        for idx in xrange(1,nsig-1):
            constraint = "constr{} constr r_{}-2*r_{}+r_{} {{r_{},r_{},r_{}}} delta[0.03]\n".format(idx,idx-1,idx,idx+1,idx-1,idx,idx+1)
            f.write(constraint)
        constraint = "constr{} constr r_{}-r_{} {{r_{},r_{}}} delta[0.03]\n".format(nsig-1,nsig-1,nsig-2,nsig-1,nsig-2)
        f.write(constraint)

else:
    print 'Regularization type must be TUnfold or SVD'
