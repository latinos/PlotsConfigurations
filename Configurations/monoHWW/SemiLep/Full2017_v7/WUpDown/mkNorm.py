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
#parser.add_argument("-v", "--var", help="variable to show", type=str)
#parser.add_argument("-n", "--nuis", help="nuisance to show", type=str)
#parser.add_argument("-s", "--sample", help="sample(s) to show (comma separated)", default="Wjets", type=str)
#parser.add_argument("--r-range",  help="1 + value is max range for ratio (default 0.4)", default=0.4, type=float)
#parser.add_argument("-l", "--log", help="Set log scale in upper pad", action="store_true")
#parser.add_argument("--hide-stat", help="Do not show stat in ratio panel", action="store_true")
#parser.add_argument("--save", help="save the image", action="store_true")
parser.add_argument("-o", "--output", help="output file", default="weight_scales.txt", type=str)
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

variable = 'Events'

r_file = ROOT.TFile(outputDir+'/plots_'+tag+'.root')

samps = []
keys = r_file.Get(args.cut).Get(variable).GetListOfKeys()
for key in keys:
    name = key.GetName()
    if name.startswith('histo_') and name.endswith('_Up'): 
        samp = name.replace('histo_', '').replace('_Up', '')
        samps.append(samp)

nominal = None
up_var  = None
do_var  = None

o_file = open(args.output, 'w')
o_file.write('#'+'\t'.join(['Sample', 'nom/up', 'nom/do'])+'\n')
for samp in samps:
    # Fill nominal
    nom_name = args.cut+'/'+variable+'/histo_'+samp
    nominal = copy.deepcopy(r_file.Get(nom_name))    
    n_nom = nominal.Integral()

    # Fill up
    up_name = nom_name+'_Up'
    up_var = copy.deepcopy(r_file.Get(up_name))
    n_up = up_var.Integral()

    # Fill do
    do_name = nom_name+'_Down'
    do_var = copy.deepcopy(r_file.Get(do_name))
    n_do = do_var.Integral()

    print(samp+':\t'+str(n_nom/n_up)+'\t'+str(n_nom/n_do))
    o_file.write('\t'.join([samp, str(n_nom/n_up), str(n_nom/n_do)])+'\n')
o_file.close()
