import ROOT as R
import sys

'''
This script can be used to rename a systematic shape removing the name
of the samples. 

In practice it does the opposite of the split scriot. 
'''

f = R.TFile(sys.argv[1], "UPDATE")
shape_name = sys.argv[2]

samples = []
for ir in range(1,22):
    samples.append("Wjets_res_"+str(ir))
for ir in range(1,8):
    samples.append("Wjets_boost_"+str(ir))


for k in f.GetListOfKeys():
    print(k)
    R.gDirectory.Cd(k.GetName())
    for z in R.gDirectory.GetListOfKeys():
        R.gDirectory.Cd(z.GetName())
        for l in R.gDirectory.GetListOfKeys():

            for sample  in samples:
                oldshape = sample + "_" + shape_name +"_"+ sample

                if "histo_"+oldshape+"Down" == l.GetName():
                    # print(l.GetName(),"histo_"+oldshape+"Down" )
                    obj = R.gDirectory.Get(l.GetName())
                    obj.SetName("histo_" + sample+"_"+shape_name + "_WjetsDown")
                    obj.Write()
                if "histo_"+oldshape+"Up" == l.GetName():
                    # print(l.GetName(),"histo_"+oldshape+"Down" )
                    obj = R.gDirectory.Get(l.GetName())
                    obj.SetName("histo_" + sample+"_"+shape_name+  "_WjetsUp")
                    obj.Write()
            
        R.gDirectory.Cd("../")

    R.gDirectory.Cd("../")

#f.Write()
f.Close()
