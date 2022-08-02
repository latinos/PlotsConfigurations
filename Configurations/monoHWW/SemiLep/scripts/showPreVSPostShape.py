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
parser.add_argument("--pre-file", help="root file containing pre-fit shapes", type=str)
parser.add_argument("--post-file", help="root file containing post-fit shapes", type=str)
#parser.add_argument("-r", "--redo", help="forcefully redo comma seperated samples", type=str)
#parser.add_argument("-e", "--exclude", help="skip comma seperated samples", type=str)
parser.add_argument("-c", "--cut", help="cut to show", default="InCh_SR", type=str)
parser.add_argument("-v", "--var", help="variable to show", type=str)
parser.add_argument("-s", "--sample", help="sample(s) to show (comma separated)", default="Wjets", type=str)

parser.add_argument("--r-range",  help="1 + value is max range for ratio (default 0.4)", default=0.4, type=float)
parser.add_argument("-l", "--log", help="Set log scale in upper pad", action="store_true")
parser.add_argument("--hide-stat", help="Do not show stat in ratio panel", action="store_true")
parser.add_argument("--save", help="save the image", action="store_true")
parser.add_argument("--auto-scale", help="automatically scale range for ratio", action="store_true")
parser.add_argument("-o", "--output", help="output file", default=".", type=str)
parser.add_argument("-b", "--batch", help="Run in batch mode", action="store_true")
args = parser.parse_args()

pr_file = ROOT.TFile(args.pre_file)
po_file = ROOT.TFile(args.post_file)


samps = args.sample.split(',')
#exit()

pr_hist = None
po_hist  = None
for samp in samps:
    print('-- Sample: "'+samp+'"')
    # Fill nominal
    hist_name = args.cut+'/'+args.var+'/histo_'+samp
    pr_hist = copy.deepcopy(pr_file.Get(hist_name))    
    po_hist = copy.deepcopy(po_file.Get(hist_name))    

    ROOT.gStyle.SetOptStat(0)
    canvas = ROOT.TCanvas('canvas', 'canvas', 700, 600)
    pad1 = ROOT.TPad('pad1', 'pad1',0,0.3,1,1)
    pad1.SetBottomMargin(0)
    pad1.Draw()
    pad2 = ROOT.TPad('pad2', 'pad2',0,0,1,0.3)
    pad2.SetTopMargin(0)
    pad2.Draw()

    pr_hist.SetLineColor(1)
    po_hist.SetLineColor(632) #Blue: 600
    
    canvas.cd()
    pad1.cd()
    
    po_hist.SetTitle(samp)
    legend = ROOT.TLegend(0.7,0.8,0.9,0.9)
    legend.AddEntry(pr_hist, 'pre-fit', 'l')    
    legend.AddEntry(po_hist, 'post-fit', 'l')    

    po_hist.Draw('hist')
    pr_hist.Draw('hist SAME')
    legend.Draw()   
 
    if args.log:
        print('Setting log scale')
        pad1.SetLogy()
        #ROOT.gPad.SetLogy()
    
    canvas.cd()
    pad2.cd()
    
    ratio_hist = po_hist.Clone()
    norm_hist = pr_hist.Clone()
    
    norm_hist.Divide(pr_hist)
    ratio_hist.Divide(pr_hist)
    
    ratio_hist.SetTitle('')
    
    if args.auto_scale:
        max_list = [ratio_hist.GetBinContent(ratio_hist.GetMaximumBin()), 1.] 
        min_list = [ratio_hist.GetBinContent(ratio_hist.GetMinimumBin()), 1.] 
        y_max = max(max_list)+0.1
        y_min = min(min_list)-0.1
        print('Extrema', y_max, y_min)
        ratio_hist.GetYaxis().SetRangeUser(y_min, y_max)
    else:
        ratio_hist.GetYaxis().SetRangeUser(1.-args.r_range, 1.+args.r_range)
    
    if args.hide_stat:
        ratio_hist.Draw('hist')
        norm_hist.Draw('hist SAME')
    else:
        ratio_hist.Draw('')
        norm_hist.Draw('hist SAME')
    
    #canvas.cd()
    if args.save:
        if not os.path.isdir(args.output): os.mkdir(args.output)
        name_tag = args.output +'/PreVSPostFit_'+args.cut+'_'+args.var+'_'+samp
        canvas.SaveAs(name_tag+'.png')
    else:
        canvas.Update()
        raw_input('cont')
