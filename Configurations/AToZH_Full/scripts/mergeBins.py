from ROOT import *

histfile = TFile("/afs/cern.ch/work/s/srudrabh/AZH/postprocessing/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/AToZH_Full/2017_v9/datacards_AZH_2017_v9_ellipsefit_500_350/breq_SR/ptzVSdeltam/shapes/histos_breq_SR.root","UPDATE")

nbins_dm = 6
nbins_ptz = 6

# Get merging pattern from ttZ
hist_ref = histfile.Get("histo_ttZ")
merging_map = {}
ibin_merged = 0
for ibin_dm in range(nbins_dm):
    for ibin_ptz in range(nbins_ptz):
        bin1d = ibin_dm * nbins_ptz + ibin_ptz
        if hist_ref.GetBinContent(bin1d+1) <= 0.1 and ibin_ptz != 0: # merge this bin
            merging_map[ibin_merged].append(bin1d+1)
        else:
            ibin_merged += 1
            merging_map[ibin_merged] = [bin1d+1]

histnames = [histkey.GetName() for histkey in histfile.GetListOfKeys()]
for histname in histnames:
    hist = histfile.Get(histname)

    hist_merged = TH1D(histname,histname,len(merging_map.keys()),0,len(merging_map.keys()))
    for ibin_merged in merging_map:
        total = 0.0
        for ibin_orig in merging_map[ibin_merged]:
            total += hist.GetBinContent(ibin_orig)
        hist_merged.SetBinContent(ibin_merged,total)
        
    hist_merged.Write(histname,TObject.kOverwrite)

