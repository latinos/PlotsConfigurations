import ROOT as R
import sys

f = R.TFile(sys.argv[1], "UPDATE")
varname = sys.argv[2]
factor = float(sys.argv[3])


f.ls()
for k in f.GetListOfKeys():
    #enter cut
    R.gDirectory.Cd(k.GetName())

    print "IN cut:", k.GetName()
    for var in R.gDirectory.GetListOfKeys():
        print "var: ", var.GetName()
        if var.GetName() != varname: continue

        histos_to_saves = []
        R.gDirectory.Cd(var.GetName())
        for shape in R.gDirectory.GetListOfKeys():
            print "...", shape.GetName()
            histo = R.gDirectory.Get(shape.GetName())
            histo.Scale(factor)
            histos_to_saves.append(histo)
            
        for hist in histos_to_saves:
            hist.Write(hist.GetName(), R.TObject.kOverwrite)
            
        R.gDirectory.Cd("../")

    R.gDirectory.Cd("../")

f.Write()
f.Close()
