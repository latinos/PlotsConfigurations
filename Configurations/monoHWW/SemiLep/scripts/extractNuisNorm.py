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
parser.add_argument("-c", "--cut", help="cut to take", default="InCh_SR", type=str)
parser.add_argument("-v", "--var", help="variable to take (should not matter)", default="Events", type=str)
parser.add_argument("-s", "--sample", help="sample(s) to show (comma separated)", type=str)
parser.add_argument("-n", "--nuis", help="Nuisances to norm (e.g. QCDscale_WjetsUp, QCDscale_WjetsV0Var, ...)", type=str)
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

# Collect samples to do
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

nuis_list = args.nuis.split(',')

# Loop samples
for samp in samps:
    print('-- Sample: "'+samp+'"')

    # Loop nuisances
    for nuis in nuis_list:
        print('---- Nuisance: "'+nuis+'"')
        nom_name = args.cut+'/'+args.var+'/histo_'+samp
        nom = r_file.Get(nom_name).Clone()
        var = r_file.Get(nom_name+'_'+nuis).Clone()

        n_nom = nom.Integral()
        n_var = var.Integral()
        print('     nom: '+str(n_nom)+', var: '+str(n_var)+', ratio: '+str((n_nom+0.)/(n_var+0.)))
