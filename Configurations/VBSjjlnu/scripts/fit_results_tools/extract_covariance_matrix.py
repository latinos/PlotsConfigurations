#Script to make correlation matrix of fixed size, showing correlations between signal strengths and nuisances with highest correlations
#Argument: multidimfit*.root produced when running MultiDimFit in combine and using --saveFitResult, or fitDiagnostics*.root produced when running FitDiagnostics

import ROOT as R
from ROOT import TFile
from itertools import combinations
import sys
import re
import argparse
from operator import itemgetter


parser = argparse.ArgumentParser()
parser.add_argument("-i","--input", type=str)
parser.add_argument("-o","--output", type=str)
parser.add_argument("-p","--parameters", type=str, nargs="+")
parser.add_argument("--fit", type=str, default="fit_s")
conf = parser.parse_args()



filename = conf.input
f0 = TFile(filename)

fit_result = f0.Get(conf.fit)
if fit_result == None:
    print 'Input file must be a multidimfit*.root file containing a fit_mdf object (produced by using --saveFitResult when running MultiDimFit in combine) or a fitDiagnostics*.root file containing a fit_s object (produced by running FitDiagnostics in combine)'
    exit()

arglist = fit_result.floatParsFinal()
args = [arglist.at(i).GetName() for i in xrange(0,len(arglist))]
sigstrength = [s for s in args if (s.startswith('r_') or s == 'r')]
nuisances = [n for n in args if not (n.startswith('r_') or n == 'r')]

pars = fit_result.floatParsFinal()


results = []

for nuis in nuisances:
    par = pars.find(nuis)
    nuis_val = par.getVal()
    nuis_err = par.getError()
    r_corr = fit_result.correlation("r",nuis)
    
    results.append((nuis, nuis_val, nuis_err, r_corr))
    
results = sorted(results, key=lambda a: abs(a[-1]), reverse=True)

out = open(conf.output,"w")
out.write("parameter;bestfit;err;corr\n")
for nuis, nuis_val, nuis_err, r_corr in results:
    print("{:} : {:.3f} +- {:.3f}, (corr: {:.3f})".format(nuis, nuis_val, nuis_err, r_corr))
    out.write("{};{};{};{}\n".format(nuis, nuis_val,nuis_err, r_corr))

out.close()



