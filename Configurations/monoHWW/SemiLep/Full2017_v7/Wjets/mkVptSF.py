import os
import time
import copy
import ROOT
import array

cfg = 'conf.py'
variable = 'LHE_Vpt_bins'
#variable = 'LHE_Vpt'
NLO_sample = 'Wjets_NLOpt'
LO_sample = 'Wjets_HT'
handle = open(cfg, 'r')
exec(handle)
handle.close()

cuts = {}
handle = open(cutsFile, 'r')
exec(handle)
handle.close()

variables = {}
handle = open(variablesFile, 'r')
exec(handle)
handle.close()

samples = {}
handle = open(samplesFile, 'r')
exec(handle)
handle.close()

r_file_n = outputDir+'/plots_'+tag+'.root'
r_file = ROOT.TFile(r_file_n)
NLO_histograms = {}
LO_histograms  = {}

lowest_Vpt = 50.

# Check if variable is there
if variable not in variables: raise IOError('Variable "'+variable+'" not found in "'+variablesFile+'"')

# Check if NLO and LO samples are there
for samp in [NLO_sample, LO_sample]:
    if samp not in samples: raise IOError('Sample "'+samp+'" not found in "'+samplesFile+'"')

print('Collecting histograms')
for cut in cuts:
    if not 'InCh' in cut: continue
    print(' - cut: '+cut)
    NLO_histograms[cut] = r_file.Get(cut+'/'+variable+'/histo_'+NLO_sample)
    LO_histograms[cut]  = r_file.Get(cut+'/'+variable+'/histo_'+LO_sample)

    nNLO_tot = 0
    nLO_tot = 0
    for ib in range(NLO_histograms[cut].GetNbinsX()+2):
        nNLO = NLO_histograms[cut].GetBinContent(ib)
        nLO  = LO_histograms[cut].GetBinContent(ib) 
        l = NLO_histograms[cut].GetBinLowEdge(ib)
        h = l+NLO_histograms[cut].GetBinWidth(ib)
        if l > lowest_Vpt-(lowest_Vpt/100.): 
            nNLO_tot += nNLO
            nLO_tot  += nLO
    for ib in range(NLO_histograms[cut].GetNbinsX()+2):
        nNLO = NLO_histograms[cut].GetBinContent(ib)
        nLO  = LO_histograms[cut].GetBinContent(ib) 
        l = NLO_histograms[cut].GetBinLowEdge(ib)
        h = l+NLO_histograms[cut].GetBinWidth(ib)
        fac = 1.
        if nNLO > 0.:
            fac = (nNLO/nLO)*(nLO_tot/nNLO_tot)

        print(' -- bin ['+str(l)+'-'+str(h)+']: '+str(fac))
    #print(' - tot contents: NLO '+str(nNLO_tot) + ', LO '+str(nLO_tot))

