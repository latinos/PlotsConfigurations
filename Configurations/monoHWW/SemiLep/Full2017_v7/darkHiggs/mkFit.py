import os
import re
import sys
import json
import time
import ROOT
import argparse
import subprocess

parser = argparse.ArgumentParser()
parser.add_argument("--config", help="configuration file", type=str)
#parser.add_argument("-r", "--redo", help="forcefully redo comma seperated samples", type=str)
#parser.add_argument("-e", "--exclude", help="skip comma seperated samples", type=str)
parser.add_argument("-c", "--cut", help="cut to fit", default="InCh_SB", type=str)
parser.add_argument("-v", "--var", help="var to fit", default="newBDT_Ada13Var_fine2", type=str)
parser.add_argument("-s", "--sample", help="sample to fit", default="Wjets", type=str)
args = parser.parse_args()


handle = open(args.config, 'r')
exec(handle)
handle.close()

cuts = {}
handle = open(cutsFile, 'r')
exec(handle)
handle.close()

samples = {}
handle = open(samplesFile, 'r')
exec(handle)
handle.close()

nuisances = {}
handle = open(nuisancesFile, 'r')
exec(handle)
handle.close()

structure = {}
handle = open(structureFile, 'r')
exec(handle)
handle.close()

r_file = ROOT.TFile(outputDir+'/plots_'+tag+'.root')
nom_name = args.cut+'/'+args.var+'/histo_'+args.sample
dat_name = args.cut+'/'+args.var+'/histo_DATA'
nominal = copy.deepcopy(r_file.Get(nom_name))
rest = None
nuis = None
data = copy.deepcopy(r_file.Get(dat_name))
ratio = copy.deepcopy(data)

if not nominal: print('nom none')
if not data: print('dat none')

for samp in structure:
    if args.sample in samp: continue
    if 'DATA' in samp: continue
    if structure[samp]['isSignal'] > 0.1: continue 
    temp = r_file.Get(args.cut+'/'+args.var+'/histo_'+samp)
    if not temp: print(samp+' none')
    if rest is None: rest = copy.deepcopy(temp)
    else: rest.Add(temp)

ratio.Add(rest, -1.)

n_ratio = rest.Integral(1, ratio.GetNbinsX()+1)
n_nom = rest.Integral(1, nominal.GetNbinsX()+1)

nominal.Scale(1./(n_nom+0.))
ratio.Scale(1./(n_ratio+0.))

nominal.Draw()
raw_input('cont')
ratio.Draw()
raw_input('cont')

ratio.Divide(nominal)
ratio.Draw()

raw_input('cont')

