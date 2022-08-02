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
#parser.add_argument("-c", "--cut", help="cut(s) included in norm (comma seperated)", type=str)
#parser.add_argument("-v", "--var", help="variable to take ", default="Events", type=str)
parser.add_argument("-n", "--nuis", help="nuisance to rename", type=str)
parser.add_argument("--name", help="new nuisance name", type=str)
#parser.add_argument("-s", "--sample", help="sample(s) to normalise (comma separated)", type=str)
parser.add_argument("--write", help="create outupt (otherwise dry run only)", action="store_true")
#parser.add_argument("--lnN", help="treat as if you want to replace shape by lnN", action="store_true")
#parser.add_argument("--do-signal", help="also do all signal samples", action="store_true")
parser.add_argument("-o", "--output", help="output file (if none given overwrite original)", default=None, type=str)
#parser.add_argument("-b", "--batch", help="Run in batch mode", action="store_true")
args = parser.parse_args()

if not args.config is None: 
    handle = open(args.config, 'r')
    exec(handle)
    handle.close()
   
    file_n = outputDir+'/plots_'+tag+'.root'
elif not args.root_file is None:
    file_n = args.root_file
else:
    raise ValueError('--config and --root-file can\'t both be None')

if not args.write:
    r_file = ROOT.TFile(file_n)
else:
    org_name = file_n
    new_name = org_name
    if not args.output is None: new_name = args.output
    if not org_name == new_name: 
        if not os.path.exists(new_name): os.system('cp '+org_name+' '+new_name)
    r_file = ROOT.TFile(new_name, 'UPDATE') 
    
cuts = []
for key in r_file.GetListOfKeys():
    name = key.GetName()
    if not name in cuts: cuts.append(name)

variables = []
for cut in cuts:
    for key in r_file.Get(cut).GetListOfKeys():
        name = key.GetName()
        if not name in variables: variables.append(name)

print('Found cuts: '+str(cuts))
print('Found vars: '+str(variables))

old_name = args.nuis
new_name = args.name

for cut in cuts:
    print('Cut: '+cut)
    for var in variables:
        print(' - Var: '+var)

        # Make sure cut var combo exists
        if not r_file.Get(cut).Get(var):
            print(' -- "'+cut+'/'+var+'" not found -> skipped')
            continue
        
        # Collect histogram names to rename
        all_histos = []
        for key in r_file.Get(cut).Get(var).GetListOfKeys():
            name = key.GetName()
            if old_name in name: all_histos.append(name)
        print(' -- Found histo\'s to rename: '+str(all_histos))

        # Rename 
        for name in all_histos:
            alt_name = name.replace(old_name, new_name)
            print(' -- change: "'+name+'" -> "'+alt_name+'"')
            if not args.write: continue
            obj = r_file.Get(cut).Get(var).Get(name)
            obj.SetName(alt_name)

            r_file.cd(cut+'/'+var)
            obj.Write('', ROOT.TObject.kOverwrite)
            r_file.cd()

