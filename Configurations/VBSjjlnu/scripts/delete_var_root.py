import ROOT as R
import sys

f = R.TFile(sys.argv[1], "UPDATE")

f.ls()
for k in f.GetListOfKeys():
    R.gDirectory.Cd(k.GetName())
    R.gDirectory.Delete(sys.argv[2]+";*")

    R.gDirectory.Cd("../")

f.Write()
f.Close()
