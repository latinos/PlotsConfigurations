from ROOT import *
import os
import json

if os.path.exists("WWnorm.json") :
    with open('WWnorm.json') as f:
        data = f.read()
        norms = json.loads(data)
else:
    print("No WW norm file! Exiting")
    exit()

for year in ["2016","2017","2018"]:
    f0 = TFile("../Full%s_v7/njets/rootFile/plots_WW%s_v7_njets_15Apr.root"%(year,year),"UPDATE")
    for cutkey in f0.GetListOfKeys():
        cutdir = f0.Get(cutkey.GetName())
        for varkey in cutdir.GetListOfKeys():
            histdir = cutdir.Get(varkey.GetName())
            for nuis in norms[year]:
                for sample in norms[year][nuis]:
                    for ivar,var in enumerate(["Up","Down"]):
                        histname = "histo_%s_%s%s"%(str(sample),str(nuis),var)
                        try:
                            hist = histdir.Get(histname)
                            hist.Scale(norms[year][nuis][sample][ivar])
                        except:
                            print "Couldn't scale "+histname
    f0.Write("",TObject.kOverwrite)



