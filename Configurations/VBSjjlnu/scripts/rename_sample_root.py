import ROOT as R
import sys
import argparse

'''
This script can be used to rename a nominal shape in every cut and variable
'''

parser = argparse.ArgumentParser()
parser.add_argument("-i","--input", help="Input file", type=str)
parser.add_argument("--sample", help="Sample", type=str)
parser.add_argument("--rename", help="Rename",type=str)
args = parser.parse_args()

f = R.TFile(args.input, "UPDATE")

for k in f.GetListOfKeys():
    R.gDirectory.Cd(k.GetName())
    for z in R.gDirectory.GetListOfKeys():
        R.gDirectory.Cd(z.GetName())
        
        h = R.gDirectory.Get("histo_"+args.sample)
        h.SetName("histo_"+args.rename)
        h.Write()
            
        R.gDirectory.Cd("../")

    R.gDirectory.Cd("../")

# Already writter
#f.Write()
f.Close()
