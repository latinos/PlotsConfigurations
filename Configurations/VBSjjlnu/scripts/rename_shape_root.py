import ROOT as R
import sys

f = R.TFile(sys.argv[1], "UPDATE")
shape_name = sys.argv[2]
new_shape_name = sys.argv[3]

samples = ["Wjets_jpt3","Wjets_deta2_jpt2", "Wjets_deta1_jpt2",
                "Wjets_deta2_jpt1","Wjets_deta1_jpt1", 
                "Wjets_boost1", "Wjets_boost2"]

samples= ["VBS"]

f.ls()
for k in f.GetListOfKeys():
    print(k)
    R.gDirectory.Cd(k.GetName())
    for z in R.gDirectory.GetListOfKeys():
        R.gDirectory.Cd(z.GetName())
        for l in R.gDirectory.GetListOfKeys():
            for wb in samples:
                if "histo_"+wb+"_"+shape_name+"Down" == l.GetName():
                    print(l.GetName(),"histo_"+wb+"_"+shape_name+"Down" )
                    obj = R.gDirectory.Get(l.GetName())
                    print(obj)
                    obj.SetName("histo_" + wb+"_"+new_shape_name+"Down")
                    obj.Write()
                if "histo_"+wb+"_"+shape_name+"Up" == l.GetName():
                    print(l.GetName(),"histo_"+wb+"_"+shape_name+"Down" )
                    obj = R.gDirectory.Get(l.GetName())
                    print(obj)
                    obj.SetName("histo_" + wb+"_"+new_shape_name+"Up")
                    obj.Write()
            
        R.gDirectory.Cd("../")

    R.gDirectory.Cd("../")

f.Write()
f.Close()
