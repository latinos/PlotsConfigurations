import sys
import os
import json
from ROOT import *

sample_splitting = {
    'Vg' : ['Wg','WgS','Zg','ZgS'],
    'Higgs' : ['ggH_hww','qqH_hww','WH_hww','ZH_hww','ggZH_hww','ttH_hww','ggH_htt','qqH_htt','WH_htt','ZH_htt']
}

if len(sys.argv) < 2:
    print "Usage: python getFrac.py <diffVar>"
    exit()

diffVar = sys.argv[1]
if diffVar == "inclusive":
    shortname = diffVar[:4]
else:
    shortname = diffVar

#for year in ['2016','2017','2018']:
for year in ['2018']:
    filename = "../Full%s_v7/%s/rootFile/plots_WW%s_v7_%s.root"%(year,diffVar,year,shortname) #Fix path once separate configs exist
    if not os.path.isfile(filename):
        print "Warning: %s does not exist."%(filename)
        continue

    f0 = TFile(filename)
    ratios = {}
    for cutkey in f0.GetListOfKeys():
        cut = cutkey.GetName()
        ratios[cut] = {}
        for sample in sample_splitting:
            ratios[cut][sample] = {}
            for subsample in sample_splitting[sample]:
                hist = f0.Get(cutkey.GetName()+"/events/histo_"+subsample)
                ratios[cut][sample][subsample] = hist.Integral()
            total = sum(ratios[cut][sample].values())
            for subsample in sample_splitting[sample]:
                ratios[cut][sample][subsample] = ratios[cut][sample][subsample]/total

    with open("../Full%s_v7/%s/sampleFrac.json"%(year,diffVar),"w") as outfile:
        json.dump(ratios, outfile, indent=4)

