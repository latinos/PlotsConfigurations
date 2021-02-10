import ROOT as R
import sys
import argparse

parser = argparse.ArgumentParser()
parser.add_argument("-i","--input", help="Input file", type=str)
parser.add_argument("-n","--nuisances", help="Nuisances", type=str, nargs="+")
args = parser.parse_args()


f = R.TFile(args.input, "UPDATE")

# samples = ['VBS','top','DATA','Fake','Wjets_HT','VVV','VV','VgS','Vg','DY','VBF-V','ggWW']
# for ir in range(1,7):
#     samples.append("Wjets_HT_res_"+str(ir))
# for ir in range(1,6):
#     samples.append("Wjets_HT_boost_"+str(ir))

# samples = ['VBF-V']

    #f.ls()
for k in f.GetListOfKeys():
    #print(k)
    R.gDirectory.Cd(k.GetName())
    for z in R.gDirectory.GetListOfKeys():
        #print(z)
        print ">>> ", k.GetName(), z.GetName()
        R.gDirectory.Cd(z.GetName())

        for nuisance_name in args.nuisances:
            #Delete boh up and down
            R.gDirectory.Delete("*_"+nuisance_name+"*;*")
                   
        R.gDirectory.Cd("../")

    R.gDirectory.Cd("../")

f.Write()
f.Close()
