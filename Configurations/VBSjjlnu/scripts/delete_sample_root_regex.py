from __future__ import print_function
import ROOT as R
import sys
import re 
import argparse

parser = argparse.ArgumentParser()
parser.add_argument("-i","--input", help="Input file", type=str)
parser.add_argument("-r","--regex", help="Regex", type=str)
parser.add_argument("-ev","--exclude-vars", help="Exclude vars", type=str, nargs="+")
parser.add_argument("-ec","--exclude-cuts", help="Exclude cuts", type=str, nargs="+")
args = parser.parse_args()

'''
This script deletes the sample histograms from all the cuts and variables. 
Both nominal and variations
'''

f = R.TFile(args.input, "UPDATE")
pattern = args.regex

f.ls()
for k in f.GetListOfKeys():
    if args.exclude_cuts and k.GetName() in args.exclude_cuts: continue
    print ("CUT", k.GetName())
    R.gDirectory.Cd(k.GetName())
    for z in R.gDirectory.GetListOfKeys():
        if args.exclude_vars and z.GetName() in args.exclude_vars: continue
        print (">> Var: ", z.GetName())
        R.gDirectory.Cd(z.GetName())
        #R.gDirectory.ls()
        to_delete = []
        for l in R.gDirectory.GetListOfKeys():
            if re.match(pattern, l.GetName()):
                print ("delete ", l.GetName())
                to_delete.append(l.GetName())
        for h in to_delete:
            R.gDirectory.Delete(h+";*")
        
        R.gDirectory.Cd("../")
    R.gDirectory.Cd("../")

f.Write()
f.Close()
