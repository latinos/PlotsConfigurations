import ROOT as R
import sys

f = R.TFile(sys.argv[1], "UPDATE")

f.ls()
for k in f.GetListOfKeys():
    print(k)
    R.gDirectory.Cd(k.GetName())
    for z in R.gDirectory.GetListOfKeys():
        print(z)
        R.gDirectory.Cd(z.GetName())
        R.gDirectory.Delete("histo_DY;1")
        R.gDirectory.Cd("../")

    R.gDirectory.Cd("../")

f.Write()
f.Close()
