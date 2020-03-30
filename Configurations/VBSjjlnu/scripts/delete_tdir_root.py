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
        if z.GetName() == "whad_pt":
            for l in R.gDirectory.GetListOfKeys():
                if "top" in l.GetName():
                    R.gDirectory.Delete(l.GetName()+";1")
        R.gDirectory.Cd("../")

    R.gDirectory.Cd("../")

f.Write()
f.Close()
