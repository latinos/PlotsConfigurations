#!/usr/bin/env python

from ROOT import *
import sys
import numpy as np
import array

regions = ['hww2l2v_13TeV_of2j_vbf', 'hww2l2v_13TeV_of2j_vbf_0p1_1', 'hww2l2v_13TeV_of2j_vbf_0p1_2', 'hww2l2v_13TeV_of2j_vbf_0p1_3', 'hww2l2v_13TeV_of2j_vbf_0p1_4', 'hww2l2v_13TeV_of2j_vbf_0p2_1','hww2l2v_13TeV_of2j_vbf_0p2_2', 'hww2l2v_13TeV_of2j_vbf_0p2_3', 'hww2l2v_13TeV_of2j_vbf_0p2_4', 'hww2l2v_13TeV_of2j_vbf_0p3_1', 'hww2l2v_13TeV_of2j_vbf_0p3_2', 'hww2l2v_13TeV_of2j_vbf_0p3_3', 'hww2l2v_13TeV_of2j_vbf_0p3_4', 'hww2l2v_13TeV_of2j_vbf_0p05_1', 'hww2l2v_13TeV_of2j_vbf_0p05_2', 'hww2l2v_13TeV_of2j_vbf_0p05_3', 'hww2l2v_13TeV_of2j_vbf_0p05_4', 'hww2l2v_13TeV_of2j_vbf_0p15_1', 'hww2l2v_13TeV_of2j_vbf_0p15_2', 'hww2l2v_13TeV_of2j_vbf_0p15_3', 'hww2l2v_13TeV_of2j_vbf_0p15_4', 'hww2l2v_13TeV_top_of2j', 'hww2l2v_13TeV_dytt_of2j']

variables = ['class0']

nominals = ['histo_DY', 'histo_top', 'histo_WW', 'histo_WWewk', 'histo_ggWW', 'histo_Vg', 'histo_VgS', 'histo_VZ', 'histo_VVV', 'histo_Fake_em', 'histo_Fake_me']


def kill_bin(inputfile, region, variable):
	current_dir = inputfile.Get(region+'/'+variable)
	print region, variable
        current_dir.cd()
	nextiter = TIter(current_dir.GetListOfKeys())
    
	h_to_update = []
	bin_index = []

	#key = nextiter()
	#h_to_update.append(key.ReadObj())
	#htot = h_to_update[0].Clone()
	flag = 0
	while (True):
		key = nextiter()
		if (key == None):
			for i in range(1,htot.GetNbinsX()+1):
                		if (htot.GetBinContent(i) != 0):
                   			bin_index.append(i)
			break
		h_to_update.append(key.ReadObj())
		if h_to_update[len(h_to_update)-1].GetName() in nominals:
			if flag == 0:
				htot=h_to_update[len(h_to_update)-1].Clone()
				flag = 1
			else:
				htot.Add(h_to_update[len(h_to_update)-1])
        
        #htot.Draw()
        #b=raw_input()

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
