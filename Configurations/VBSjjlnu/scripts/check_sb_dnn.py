from __future__ import print_function
import ROOT as R 
from collections import defaultdict
import argparse 
from math import sqrt

parser = argparse.ArgumentParser()
parser.add_argument("-i", "--inputfile", type=str, help="input file")
parser.add_argument("-s", "--samples", nargs="+", type=str, help="background samples")
parser.add_argument("-b", "--bins",nargs="+", type=int, help="Bins to analyse")
args = parser.parse_args()


file = R.TFile(args.inputfile)

bins = defaultdict(dict)
total = defaultdict(float)

for s in args.samples:
    h1 = file.Get("histo_"+s)
    #print(h1)
    for b in args.bins:
        bins[b][s] = h1.GetBinContent(b)
        total[s] += h1.GetBinContent(b)

print("| bin |", end="")
for s in args.samples: 
    print(s +" | ", end="")

print("tot backgroun | s/sqrt(b)| s/sqrt(b+10%)|")
print("|---"*(len(args.samples)+4) +"|")



for b, values in bins.items():
    totb = 0
    tots = 0
    print("| {} ".format(b), end="")
    for s in args.samples:
        yie = values[s]
        if not s =="VBS":  totb += yie
        else:  tots = yie 
        print("| {:.2f} ".format(yie), end="")
    print("| {:.2f} | {:.2f} | {:.2f}|".format( totb, tots/sqrt(totb),tots/sqrt(totb+ (0.10*totb)**2)) )

totb = 0
tots = 0
print("| tot ", end="")
for s in args.samples:
    yie = total[s]
    if not s =="VBS":  totb += yie
    else:  tots = yie 
    print("| {:.2f} ".format(yie), end="")
print("| {:.2f} | {:.2f} | {:.2f}|".format( totb, tots/sqrt(totb), tots/sqrt(totb+ (0.10*totb)**2) ))



