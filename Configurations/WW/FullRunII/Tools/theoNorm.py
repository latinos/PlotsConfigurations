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
elif diffVar == "leadlepPT":
    shortname = "leadlepPT"
    nbins = 13
elif diffVar == "sublepPT":
    shortname = "sublepPT"
    nbins = 13
elif diffVar == "mll":
    shortname = "mll"
    nbins = 13
elif diffVar == "ptll":
    shortname = "ptll"
    nbins = 13
elif diffVar == "mjj":
    shortname = "mjj"
    nbins = 12
elif diffVar == "jetpt0":
    shortname = "jetpt0"
    nbins = 12
elif diffVar == "jetpt1":
    shortname = "jetpt1"
    nbins = 8
else:
    print 'Allowed variables are: inclusive, njets, dphijj, mjj, jetpt0, jetpt1, leadlepPT, sublepPT, mll, ptll.'
    exit()

subsamples = ["B%d"%i for i in xrange(nbins)]

nuis_by_year = {
    "2016" : ["QCDscale_WW","pdf_WW_2016"],
    "2017" : ["QCDscale_WW"]+["pdf_WW_%d_2017"%i for i in range(1,33)],
    "2018" : ["QCDscale_WW"]+["pdf_WW_%d_2018"%i for i in range(1,33)],
}

nfdict = collections.OrderedDict()

for year in ["2016","2017","2018"]:

    filename = "../Full%s_v7/%s/TheoUnc/rootFile/plots_WW%s_v7_%s_TheoUnc.root"%(year,diffVar,year,shortname)
    if not os.path.isfile(filename):
        print "Warning: %s does not exist. Will not make WWnorm.json for this year."%(filename)
        continue

    f0 = TFile(filename)
    nfdict[year] = {}

    # Normalize WW theoretical variations
    for nuisance in nuis_by_year[year]:
        if 'pdf' in nuisance and '2016' not in nuisance:
            nuisname = "pdf_WW_eigen%s"%(nuisance.split("_")[2])
        else:
            nuisname = nuisance

        nfdict[year][nuisname] = {}

        for subsample in subsamples:
            h_nom  = f0.Get("presel/nCleanGenJet/histo_WW_%s"%(subsample))
            h_up   = f0.Get("presel/nCleanGenJet/histo_WW_%s_%sUp"%(subsample,nuisance))
            h_down = f0.Get("presel/nCleanGenJet/histo_WW_%s_%sDown"%(subsample,nuisance))
            norm_up   = h_nom.Integral()/h_up.Integral()
            norm_down = h_nom.Integral()/h_down.Integral()
            
            nfdict[year][nuisname]['WW_'+subsample] = [norm_up,norm_down]

    # PS_ISR / PS_FSR

    if year == '2018':
        samples = collections.OrderedDict()
        handle = open('../Full%s_v7/%s/TheoUnc/samples.py'%(year,diffVar),'r')
        exec(handle)
        handle.close()

        allsamples = [sample for sample in samples.keys()]
        allsamples.remove('WW')
        allsamples.remove('ggWW')
        allsamples = allsamples + ['WW_'+subsample for subsample in subsamples] + ['WW_nonfid']
        allsamples = allsamples + ['ggWW_'+subsample for subsample in subsamples] + ['ggWW_nonfid']

        for ps in ['ISR','FSR']:
            print('--------------------------------------------')
            print('Copy these values to nuisances.py for PS_'+ps)
            print('--------------------------------------------')

            if '2016' in nfdict: nfdict['2016']['PS_'+ps] = {}
            if '2017' in nfdict: nfdict['2017']['PS_'+ps] = {}
            nfdict['2018']['PS_'+ps] = {}

            for sample in allsamples:
                weight = [0]*8
                h_nom = f0.Get("presel/nCleanGenJet/histo_%s"%(sample))

                if h_nom.Integral() <= 0:
                    continue

                # Calculate PS weights
                h_up   = f0.Get("presel/nCleanGenJet/histo_%s_PS_%sUp"%(sample,ps))
                h_down = f0.Get("presel/nCleanGenJet/histo_%s_PS_%sDown"%(sample,ps))
                for ijet in range(4):
                    if h_nom.GetBinContent(ijet+1) == 0: 
                        weight[0+ijet] = 1.0
                        weight[4+ijet] = 1.0
                    else : 
                        weight[0+ijet] = h_up.GetBinContent(ijet+1)/h_nom.GetBinContent(ijet+1)
                        weight[4+ijet] = h_down.GetBinContent(ijet+1)/h_nom.GetBinContent(ijet+1)
                if sample in [base+"_"+subsample for base in ['WW','ggWW'] for subsample in subsamples]:
                    norm_up   = h_nom.Integral()/h_up.Integral()
                    norm_down = h_nom.Integral()/h_down.Integral()
                    for ijet in range(4):
                        weight[0+ijet] = weight[0+ijet]*norm_up
                        weight[4+ijet] = weight[4+ijet]*norm_down
                    if '2016' in nfdict: nfdict['2016']["PS_"+ps][sample] = weight
                    if '2017' in nfdict: nfdict['2017']["PS_"+ps][sample] = weight
                    nfdict['2018']["PS_"+ps][sample] = [norm_up,norm_down]
                elif 'nonfid' in sample:
                    if '2016' in nfdict: nfdict['2016']["PS_"+ps][sample] = weight
                    if '2017' in nfdict: nfdict['2017']["PS_"+ps][sample] = weight
                else:
                    if doTable:
                        print("{sample} {} {} {} {} {} {} {} {}".format(*weight,sample=sample))
                    else:
                        print("'{sample}' : ['{}*(nCleanGenJet==0) + {}*(nCleanGenJet==1) + {}*(nCleanGenJet==2) + {}*(nCleanGenJet>=3)', '{}*(nCleanGenJet==0) + {}*(nCleanGenJet==1) + {}*(nCleanGenJet==2) + {}*(nCleanGenJet>=3)'],".format(*weight,sample=sample))

for year in ['2016','2017','2018']:
    if year in nfdict:
        with open("../Full%s_v7/%s/WWnorm.json"%(year,diffVar),"w") as outfile:
            json.dump(nfdict[year], outfile, indent=4)
