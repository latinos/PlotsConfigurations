import ROOT as R
import sys

f = R.TFile(sys.argv[1], "UPDATE")
shape_name = sys.argv[2]

samples= {
    "Wjets": ["Wjets_jpt3","Wjets_deta2_jpt2", "Wjets_deta1_jpt2",
                "Wjets_deta2_jpt1","Wjets_deta1_jpt1", 
                "Wjets_boost1", "Wjets_boost2"],
    "top" : ["top"],
    "VBS": ["VBS"]
}
f.ls()
for k in f.GetListOfKeys():
    print(k)
    R.gDirectory.Cd(k.GetName())
    for z in R.gDirectory.GetListOfKeys():
        R.gDirectory.Cd(z.GetName())
        for l in R.gDirectory.GetListOfKeys():

            for sample_name, samples_list in samples.items():
                new_shape_name = shape_name +"_"+ sample_name
                for sample in samples_list:
                    if "histo_"+sample+"_"+shape_name+"Down" == l.GetName():
                        print(l.GetName(),"histo_"+sample+"_"+shape_name+"Down" )
                        obj = R.gDirectory.Get(l.GetName())
                        obj.SetName("histo_" + sample+"_"+new_shape_name+"Down")
                        obj.Write()
                    if "histo_"+sample+"_"+shape_name+"Up" == l.GetName():
                        print(l.GetName(),"histo_"+sample+"_"+shape_name+"Down" )
                        obj = R.gDirectory.Get(l.GetName())
                        obj.SetName("histo_" + sample+"_"+new_shape_name+"Up")
                        obj.Write()
            
        R.gDirectory.Cd("../")

    R.gDirectory.Cd("../")

f.Write()
f.Close()
