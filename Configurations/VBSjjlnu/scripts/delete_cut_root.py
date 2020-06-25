import ROOT as R
import sys

f = R.TFile(sys.argv[1], "UPDATE")
cut_name = sys.argv[2]

f.ls()
for k in f.GetListOfKeys():
    if cut_name in k.GetName():
        R.gDirectory.Delete(k.GetName()+";1")

f.Write()
f.Close()
