import ROOT as R
import sys

f = R.TFile(sys.argv[1], "UPDATE")
#sample_name = sys.argv[2]

samples = ['VBS','VBS_dipoleRecoil','top','DATA','Fake','VVV','VV','VgS','Vg','DY','VBF-V', 'ggWW']
for ir in range(1,22):
    samples.append("Wjets_res_"+str(ir))
for ir in range(1,8):
    samples.append("Wjets_boost_"+str(ir))

if len(sys.argv)>2:
    samples = sys.argv[2:]


for sample_name in samples:
    #f.ls()
    for k in f.GetListOfKeys():
        #print(k)
        R.gDirectory.Cd(k.GetName())
        for z in R.gDirectory.GetListOfKeys():
            #print(z)
            R.gDirectory.Cd(z.GetName())
            for l in R.gDirectory.GetListOfKeys():
                if "histo_" + sample_name == l.GetName():
                    print ("delete ", l.GetName())
                    R.gDirectory.Delete(l.GetName()+";*")
            R.gDirectory.Cd("../")

        R.gDirectory.Cd("../")

f.Write()
f.Close()
