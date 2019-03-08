#!/usr/bin/env python

from ROOT import *
import sys
import numpy as np
import array

regions = ['hww2l2v_13TeV_of2j_vbf', 'hww2l2v_13TeV_of2j_vbf_lowmjj', 'hww2l2v_13TeV_of2j_vbf_highmjj', 'hww2l2v_13TeV_of2j_vbf_lowpurity', 'hww2l2v_13TeV_top_of2j_vbf', 'hww2l2v_13TeV_dytt_of2j_vbf']

variables = ['class013_6bin']#, 'class013_5bin', 'class013_4bin', 'class013_3bin']

nominals = ['histo_DY', 'histo_top', 'histo_WW', 'histo_WWewk', 'histo_ggWW', 'histo_Vg', 'histo_WZgS_L', 'histo_WZgS_H', 'histo_VZ', 'histo_VVV', 'histo_ggH_hww', 'histo_qqH_hww', 'histo_ZH_hww', 'histo_ggZH_hww', 'histo_WH_hww', 'histo_bbH_hww', 'histo_ttH_hww', 'histo_ggH_htt', 'histo_qqH_htt', 'histo_ZH_htt', 'histo_WH_htt', 'histo_Fake_em', 'histo_Fake_me']


def kill_bin(inputfile, region, variable):
	current_dir = inputfile.Get(region+'/'+variable)
	current_dir.cd()
	nextiter = TIter(current_dir.GetListOfKeys())
    
	h_to_update = []
	bin_index = []

	key = nextiter()
	h_to_update.append(key.ReadObj())
	htot = h_to_update[0].Clone()
	while (True):
		key = nextiter()
		if (key == None):
			for i in range(0,htot.GetNbinsX()):
                		if (htot.GetBinContent(i) != 0):
                   			bin_index.append(i)
			break
		h_to_update.append(key.ReadObj())
		if h_to_update[len(h_to_update)-1].GetName() in nominals:
			htot.Add(h_to_update[len(h_to_update)-1])
	for h in h_to_update:
		hnew = TH1F(h.GetName(), h.GetTitle(), len(bin_index), 0, len(bin_index))
		for i in range(len(bin_index)):
			hnew.SetBinContent(i+1, h.GetBinContent(bin_index[i]))
			hnew.SetBinError(i+1, h.GetBinError(bin_index[i]))
		hnew.Write(h.GetName(), TObject.kOverwrite)

inputfile = TFile(sys.argv[1], "update")
for region in regions:
    for variable in variables:
        kill_bin(inputfile, region, variable)
