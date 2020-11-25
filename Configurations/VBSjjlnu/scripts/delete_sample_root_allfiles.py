import ROOT as R
import sys

samples = ['VBS','top','DATA','Fake','Wjets_HT','VVV','VV','VgS','Vg','DY','VBF-V']
tag = sys.argv[1]

for s in samples:
    print "working on sample: ",s

    f = R.TFile("plots_{}_{}.root".format(tag, s), "UPDATE")
    sample_name = s

    f.ls()
    for k in f.GetListOfKeys():
        print(k)
        R.gDirectory.Cd(k.GetName())
        for z in R.gDirectory.GetListOfKeys():
            print(z)
            R.gDirectory.Cd(z.GetName())
            for l in R.gDirectory.GetListOfKeys():
                if "histo_" + sample_name == l.GetName():
                    print "delete ", l.GetName()
                    R.gDirectory.Delete(l.GetName()+";1")
            R.gDirectory.Cd("../")

        R.gDirectory.Cd("../")

    f.Write()
    f.Close()
