'''
Ratio normalized( Data ) / normalized( MC )


'''

import ROOT as R
import sys
import argparse
from math import sqrt

parser = argparse.ArgumentParser()
parser.add_argument("--file", type=str, help="mkShape rootFile")
parser.add_argument("--var",type=str, help="Variable whose disrtibution is used to compute the new set of weights")
parser.add_argument("--shape1", type=str, help="Shape1")
parser.add_argument("--shapes2", nargs="+", type=str, help="Shape2")
parser.add_argument("--cat", type=str, help="Category (only a single category is considered!)")
args = parser.parse_args()

file = args.file
cat = args.cat

f = R.TFile(file)

h1 = f.Get(cat + "/"+ args.var + "/histo_" + args.shape1)
h2 = None 

for s2 in args.shapes2:
    h = f.Get(cat + "/"+ args.var + "/histo_" + s2)
    if h2 == None:
        h2 = h
    else:
        h2.Add(h)


hratio = h1.Clone("ratio")
hratio.Divide(h2)

for i in range(hratio.GetNbinsX()+1):
    print("Bin {} : hratio: {}".format(i,hratio.GetBinContent(i)))