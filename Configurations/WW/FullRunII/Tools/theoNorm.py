from ROOT import TFile, TH1
import collections
import json
import sys
import re
import os

TH1.AddDirectory(0)

doTable = False

if len(sys.argv) < 2:
    print "Usage: python theoNorm.py <diffVar>"
    exit()

diffVar = sys.argv[1]
if diffVar == "inclusive":
    shortname = "incl"
    nbins = 1
elif diffVar == "njets":
    shortname = "njet"
    nbins = 4
elif diffVar == "dphijj":
    shortname = "dphijj"
    nbins = 14
elif diffVar == "leadinglepPT":
    shortname = "leadinglepPT"
    nbins = 8
elif diffVar == "subleadinglepPT":
    shortname = "subleadinglepPT"
    nbins = 7
elif diffVar == "mll":
    shortname = "mll"
    nbins = 12
elif diffVar == "ptll":
    shortname = "ptll"
    nbins = 10
elif diffVar == "ptWW":
    shortname = "ptWW"
    nbins = 7
elif diffVar == "mjj":
    shortname = "mjj"
    nbins = 11
elif diffVar == "jetpt0":
    shortname = "jetpt0"
    nbins = 11
elif diffVar == "jetpt1":
    shortname = "jetpt1"
    nbins = 6
else:
    print 'Allowed variables are: inclusive, njets, dphijj, mjj, jetpt0, jetpt1, leadlepPT, sublepPT, mll, ptll, ptWW'
    exit()

subsamples = ["B%d"%i for i in xrange(nbins)]

nuisances = ["PS_ISR","PS_FSR","QCDscale_WW","CMS_hww_WWresum","CMS_hww_WWqscale","pdf_WW"]

for era in ["2016_HIPM","2016_noHIPM","2017","2018"]:

    filename = "../Full%s_v9/%s/TheoUnc/rootFile/plots_WW%s_v9_%s_TheoUnc.root"%(era,diffVar,era,shortname)
    if not os.path.isfile(filename):
        print "Warning: %s does not exist. Will not make WWnorm.json for this era."%(filename)
        continue

    f0 = TFile(filename)
    nfdict = collections.OrderedDict()

    # Normalize WW theoretical variations
    for nuisance in nuisances:
        nfdict[nuisance] = {}

        for sample in ['WW','ggWW']:
            if ('CMS_hww_WW' in nuisance or 'pdf' in nuisance) and sample == 'ggWW':
                continue

            for subsample in subsamples:
                h_nom  = f0.Get("presel/events/histo_%s_%s"%(sample,subsample))
                h_up   = f0.Get("presel/events/histo_%s_%s_%sUp"%(sample,subsample,nuisance))
                h_down = f0.Get("presel/events/histo_%s_%s_%sDown"%(sample,subsample,nuisance))
                norm_up   = 1.0 if h_up.Integral() == 0 else h_nom.Integral()/h_up.Integral()
                norm_down = 1.0 if h_down.Integral() == 0 else h_nom.Integral()/h_down.Integral()
            
                nfdict[nuisance][sample+'_'+subsample] = [norm_up,norm_down]

    with open("../Full%s_v9/%s/WWnorm.json"%(era,diffVar),"w") as outfile:
        json.dump(nfdict, outfile, indent=4)
