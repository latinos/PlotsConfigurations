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
parser.add_argument("--config", help="configuration file", type=str)
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
parser.add_argument("-b", "--batch", help="Run in batch mode", action="store_true")
args = parser.parse_args()


handle = open(args.config, 'r')
exec(handle)
handle.close()

#cuts = {}
#handle = open(cutsFile, 'r')
#exec(handle)
#handle.close()

#samples = {}
#handle = open(samplesFile, 'r')
#exec(handle)
#handle.close()

#nuisances = {}
#handle = open(nuisancesFile, 'r')
#exec(handle)
#handle.close()

#structure = {}
#handle = open(structureFile, 'r')
#exec(handle)
#handle.close()


r_file = ROOT.TFile(outputDir+'/plots_'+tag+'.root')

samps = args.sample.split(',')
nominal = None
up_var  = None
do_var  = None
for samp in samps:
    # Fill nominal
    nom_name = args.cut+'/'+args.var+'/histo_'+samp
    if nominal is None: nominal = copy.deepcopy(r_file.Get(nom_name))    
    else: nominal.Add(r_file.Get(nom_name))

    # Fill up
    up_name = nom_name+'_'+args.nuis+'Up'
    if up_var is None: up_var = copy.deepcopy(r_file.Get(up_name))
    else: up_var.Add(r_file.Get(nom_name))

    # Fill do
    do_name = nom_name+'_'+args.nuis+'Down'
    if do_var is None: do_var = copy.deepcopy(r_file.Get(do_name))
    else: do_var.Add(r_file.Get(nom_name))

print(type(nominal))

nominal.SetLineColor(1)
up_var.SetLineColor(2)
do_var.SetLineColor(4)

#nominal.SetLineStyle(10)

#nominal.Draw('L')
ROOT.gStyle.SetOptStat(0)

canvas = ROOT.TCanvas('canvas', 'canvas', 600, 700)
pad1 = ROOT.TPad('pad1', 'pad1',0,0.3,1,1)
pad1.SetBottomMargin(0)
pad1.Draw()
pad1.cd()

up_var.SetTitle(args.sample+' '+args.nuis)

up_var.Draw('hist')
nominal.Draw('hist SAME')
do_var.Draw('hist SAME')

if args.log:
    print('Setting log scale')
    pad1.SetLogy()
    #ROOT.gPad.SetLogy()

canvas.cd()
pad2 = ROOT.TPad('pad2', 'pad2',0,0,1,0.3)
pad2.SetTopMargin(0)
pad2.Draw()
pad2.cd()

nominal_r = nominal.Clone()
up_var_r = up_var.Clone()
do_var_r = do_var.Clone()

nominal_r.Divide(nominal)
up_var_r.Divide(nominal)
do_var_r.Divide(nominal)

up_var_r.SetTitle('')

up_var_r.GetYaxis().SetRangeUser(1.-args.r_range, 1.+args.r_range);

if args.hide_stat:
    up_var_r.Draw('hist')
    nominal_r.Draw('hist SAME')
    do_var_r.Draw('hist SAME')
else:
    up_var_r .Draw('')
    nominal_r.Draw('hist SAME')
    do_var_r .Draw('SAME')

canvas.cd()
if args.save:
    name_tag = args.nuis+'_'+'+'.join(samps)
    canvas.SaveAs(name_tag+'.png')
else:
    raw_input('cont')

