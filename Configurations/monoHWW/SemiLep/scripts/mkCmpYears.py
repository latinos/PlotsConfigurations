import os
import re
import sys
import copy
import ROOT
import argparse
import subprocess

parser = argparse.ArgumentParser()
parser.add_argument("--config", help="configuration file", type=str)
#parser.add_argument("-r", "--redo", help="forcefully redo comma seperated samples", type=str)
#parser.add_argument("-e", "--exclude", help="skip comma seperated samples", type=str)
parser.add_argument("-c", "--cut", help="cut to show", default="InCh_SB", type=str)
parser.add_argument("-v", "--var", help="var to show", default="Puppimet", type=str)
parser.add_argument("-s", "--sample", help="sample to compare", default="Wjets", type=str)
args = parser.parse_args()

run2 = {
    '2016' : 600, 
    '2017' : 632, 
    '2018' : 432
}

base_dir = '/afs/cern.ch/user/s/svanputt/work/monoHiggs/PR/CMSSW_10_6_5/src/PlotsConfigurations/Configurations/monoHWW/SemiLep/'
histo_list = {}
legend = ROOT.TLegend(0.5, 0.5, 0.9, 0.9)
canvas = ROOT.TCanvas('canvas', 'canvas', 600, 600)
first = True
for year in run2:

    config_file = base_dir + 'Full'+year+'_v7/darkHiggs'
    handle = open(config_file + '/'+args.config, 'r')
    exec(handle)
    handle.close()

    #lumi = 41.5   
 
    r_file = ROOT.TFile(config_file + '/' + outputDir+'/plots_'+tag+'.root')
    histo_name = args.cut+'/'+args.var+'/histo_'+args.sample
    histo_list[year] = copy.deepcopy(r_file.Get(histo_name))

    n_year = histo_list[year].GetEntries()
    #histo_list[year].Scale(1./(n_year+0.))
    histo_list[year].Scale(1./(lumi+0.))

    histo_list[year].SetLineColor(run2[year])
    legend.AddEntry(histo_list[year], year)

    if first: 
        histo_list[year].Draw()
        first = False
    else: histo_list[year].Draw('same')

legend.Draw('same') 
canvas.Update()
raw_input('cont')

y18on17 = copy.deepcopy(histo_list['2018'])
y18on17.Divide(histo_list['2017'])
y18on17.Draw()
raw_input('cont')
y16on17 = copy.deepcopy(histo_list['2016'])
y16on17.Divide(histo_list['2017'])
y16on17.Draw()
raw_input('cont')
y18on16 = copy.deepcopy(histo_list['2018'])
y18on16.Divide(histo_list['2016'])
y18on16.Draw()
raw_input('cont')
