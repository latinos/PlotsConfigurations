import sys
import os
import json
from ROOT import *

append = ''

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

for year in ['2016_HIPM','2016_noHIPM','2017','2018']:
    filename = "../Full{}_v9/{}/rootFile{}/plots_WW{}_v9_{}{}.root".format(year,diffVar,append,year,shortname,append) #Fix path once separate configs exist
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
                histname = cutkey.GetName()+"/events/histo_"+subsample
                hist = f0.Get(histname)
                ratios[cut][sample][subsample] = hist.Integral()
            total = sum(ratios[cut][sample].values())
            for subsample in sample_splitting[sample]:
                if total != 0:
                    ratios[cut][sample][subsample] = ratios[cut][sample][subsample]/total
                else:
                    ratios[cut][sample][subsample] = 1.0

    with open("../Full%s_v9/%s/sampleFrac%s.json"%(year,diffVar,append),"w") as outfile:
        json.dump(ratios, outfile, indent=4)

