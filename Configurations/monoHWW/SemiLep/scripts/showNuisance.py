import os
import re
import sys
import copy
import json
import time
import ROOT
import argparse
import subprocess

parser = argparse.ArgumentParser()
parser.add_argument("--config", help="configuration file", default=None, type=str)
parser.add_argument("--root-file", help="root file path", default=None, type=str)
#parser.add_argument("-r", "--redo", help="forcefully redo comma seperated samples", type=str)
#parser.add_argument("-e", "--exclude", help="skip comma seperated samples", type=str)
parser.add_argument("-c", "--cut", help="cut to show", default="InCh_SR", type=str)
parser.add_argument("-v", "--var", help="variable to show", type=str)
parser.add_argument("-n", "--nuis", help="nuisance to show", type=str)
parser.add_argument("-s", "--sample", help="sample(s) to show (comma separated)", default="Wjets", type=str)
parser.add_argument("--r-range",  help="1 + value is max range for ratio (default 0.4)", default=0.4, type=float)
parser.add_argument("-l", "--log", help="Set log scale in upper pad", action="store_true")
parser.add_argument("--hide-stat", help="Do not show stat in ratio panel", action="store_true")
parser.add_argument("--save", help="save the image", action="store_true")
parser.add_argument("--do-signal", help="also do all signal samples", action="store_true")
parser.add_argument("--auto-scale", help="automatically scale range for ratio", action="store_true")
parser.add_argument("-o", "--output", help="output file", default=".", type=str)
parser.add_argument("-b", "--batch", help="Run in batch mode", action="store_true")
parser.add_argument("--draw-together", help="draw nuis together", action="store_true")
args = parser.parse_args()

if not args.config is None: 
    handle = open(args.config, 'r')
    exec(handle)
    handle.close()
    
    r_file = ROOT.TFile(outputDir+'/plots_'+tag+'.root')
elif not args.root_file is None:
    r_file = ROOT.TFile(args.root_file)
else:
    raise ValueError('--config and --root-file can\'t both be None')


if 'ALL' in args.sample:
    samps = []
    keys = r_file.Get(args.cut).Get(args.var).GetListOfKeys()
    for skey in keys:
        name = skey.GetName()
        if not name.startswith('histo_'): continue
        if not name.endswith('Up') and not name.endswith('Down'):
            samp = name.replace('histo_', '')
            if 'darkHiggs' in samp and not args.do_signal: 
                if not 'mhs_160_mx_100_mZp_500' in samp: continue
            print(name, samp)
            
            if samp not in samps: samps.append(samp)
else: samps = args.sample.split(',')
#exit()

nominal = None
up_var  = None
do_var  = None
all_nuis_shown = []
for samp in samps:
    print('-- Sample: "'+samp+'"')
    # Fill nominal
    nom_name = args.cut+'/'+args.var+'/histo_'+samp
    nominal = copy.deepcopy(r_file.Get(nom_name))    

    if 'ALL' in args.nuis:
        nuis_list = []
        keys = r_file.Get(args.cut).Get(args.var).GetListOfKeys()
        for key in keys:
            name = key.GetName()
            if 'histo_'+samp+'_' in name: 
                if name.endswith('Up'):
                    nuis = name.replace('histo_'+samp+'_', '').replace('Up', '')
                    #print(name , nuis)
                    if nuis not in nuis_list: nuis_list.append(nuis)
        #exit()
    else: nuis_list = args.nuis.split(',')
    cur_it = 0
    ROOT.gStyle.SetOptStat(0)
    canvas = ROOT.TCanvas('canvas', 'canvas', 700, 600)
    pad1 = ROOT.TPad('pad1', 'pad1',0,0.3,1,1)
    pad1.SetBottomMargin(0)
    pad1.Draw()
    pad2 = ROOT.TPad('pad2', 'pad2',0,0,1,0.3)
    pad2.SetTopMargin(0)
    pad2.Draw()
    up_var = {}
    do_var = {}
    up_var_r = {}
    do_var_r = {}
    for nuis in nuis_list:
        print('---- Nuisance: "'+nuis+'"')
        # Fill up
        up_name = nom_name+'_'+nuis+'Up'
        up_var[nuis] = copy.deepcopy(r_file.Get(up_name))

        # Fill do
        do_name = nom_name+'_'+nuis+'Down'
        do_var[nuis] = copy.deepcopy(r_file.Get(do_name))

        if not up_var[nuis]: 
            print('---- Waring: up var not found -> skipping')
            continue
        if not do_var[nuis]: 
            print('---- Waring: do var not found -> skipping')
            continue

        if nuis not in all_nuis_shown: all_nuis_shown.append(nuis)
        #print(type(nominal))
        
        nominal.SetLineColor(1)
        up_var[nuis].SetLineColor(632+(cur_it*2))
        do_var[nuis].SetLineColor(600+(cur_it*2))
        
        #nominal.SetLineStyle(10)
        
        #nominal.Draw('L')
        #ROOT.gStyle.SetOptStat(0)
        
        canvas.cd()
        #canvas = ROOT.TCanvas('canvas', 'canvas', 700, 600)
        #pad1 = ROOT.TPad('pad1', 'pad1',0,0.3,1,1)
        #pad1.SetBottomMargin(0)
        #pad1.Draw()
        pad1.cd()
        
        up_var[nuis].SetTitle(samp+' '+nuis)
        
        if cur_it < 1: up_var[nuis].Draw('hist')
        else: up_var[nuis].Draw('hist SAME')
        nominal.Draw('hist SAME')
        do_var[nuis].Draw('hist SAME')
        
        if args.log:
            print('Setting log scale')
            pad1.SetLogy()
            #ROOT.gPad.SetLogy()
        
        canvas.cd()
        #pad2 = ROOT.TPad('pad2', 'pad2',0,0,1,0.3)
        #pad2.SetTopMargin(0)
        #pad2.Draw()
        pad2.cd()
        
        nominal_r = nominal.Clone()
        up_var_r[nuis] = up_var[nuis].Clone()
        do_var_r[nuis] = do_var[nuis].Clone()
        
        nominal_r.Divide(nominal)
        up_var_r[nuis].Divide(nominal)
        do_var_r[nuis].Divide(nominal)
        
        up_var_r[nuis].SetTitle('')
       
        if args.auto_scale:
            max_list = [up_var_r[nuis].GetBinContent(up_var_r[nuis].GetMaximumBin()), do_var_r[nuis].GetBinContent(do_var_r[nuis].GetMaximumBin()), 1.] 
            min_list = [up_var_r[nuis].GetBinContent(up_var_r[nuis].GetMinimumBin()), do_var_r[nuis].GetBinContent(do_var_r[nuis].GetMinimumBin()), 1.] 
            y_max = max(max_list)+0.005
            y_min = min(min_list)-0.005
            print('Extrema', y_max, y_min)
            up_var_r[nuis].GetYaxis().SetRangeUser(y_min, y_max)
        else:
            up_var_r[nuis].GetYaxis().SetRangeUser(1.-args.r_range, 1.+args.r_range)
        
        if args.hide_stat:
            if cur_it < 1: up_var_r[nuis].Draw('hist')
            else: up_var_r[nuis].Draw('hist SAME')
            nominal_r.Draw('hist SAME')
            do_var_r[nuis].Draw('hist SAME')
        else:
            if cur_it < 1: up_var_r[nuis].Draw('')
            else: up_var_r[nuis].Draw('SAME')
            nominal_r.Draw('hist SAME')
            do_var_r[nuis] .Draw('SAME')
        
        #canvas.cd()
        if args.save:
            if not os.path.isdir(args.output): os.mkdir(args.output)
            name_tag = args.output +'/'+ nuis+'__'+samp
            canvas.SaveAs(name_tag+'.png')
        else:
            if not args.draw_together: 
                canvas.Update()
                raw_input('cont')
        if args.draw_together: cur_it += 1
    if args.draw_together: 
        canvas.Update()
        raw_input('cont')
all_nuis_shown.sort()
print('List of nuisances: '+str(all_nuis_shown))
