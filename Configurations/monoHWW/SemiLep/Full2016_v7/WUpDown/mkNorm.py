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
parser.add_argument("-c", "--cut", help="cut to show (comma seperated)", default="InCh_SR", type=str)
#parser.add_argument("-v", "--var", help="variable to show", type=str)
#parser.add_argument("-n", "--nuis", help="nuisance to show", type=str)
#parser.add_argument("-s", "--sample", help="sample(s) to show (comma separated)", default="Wjets", type=str)
#parser.add_argument("--r-range",  help="1 + value is max range for ratio (default 0.4)", default=0.4, type=float)
#parser.add_argument("-l", "--log", help="Set log scale in upper pad", action="store_true")
#parser.add_argument("--hide-stat", help="Do not show stat in ratio panel", action="store_true")
#parser.add_argument("--save", help="save the image", action="store_true")
parser.add_argument("-o", "--output", help="output file name (no extension, tag and cut will be added)", default="weight_scales", type=str)
parser.add_argument("--tag", help="tag between sample name and Up: histo_<sample_name><tag>_Up (comma separated)", default="", type=str)
parser.add_argument("--invert", help="save up/nom and do/nom in stread of inverse", action="store_true")
parser.add_argument("--sum-cuts", help="Do norm to sum of cuts", action="store_true")
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

cuts_todo = args.cut.split(',')
tags_todo = args.tag.split(',')


variable = 'Events'

r_file = ROOT.TFile(outputDir+'/plots_'+tag+'.root')

samps = []
keys = r_file.Get(cuts_todo[0]).Get(variable).GetListOfKeys()
for key in keys:
    name = key.GetName()
    if name.startswith('histo_') and name.endswith(tags_todo[0]+'_Up'): 
        samp = name.replace('histo_', '').replace(tags_todo[0]+'_Up', '')
        samps.append(samp)

nominal = None
up_var  = None
do_var  = None

for cur_tag in tags_todo:
    print('Current tag: '+cur_tag)
    sum_nom = {}
    sum_up  = {}
    sum_do  = {}
    for cur_cut in cuts_todo:
        print('-- Current cut: '+cur_cut)
        if not args.sum_cuts:
            file_name = args.output+cur_tag+'_'+cur_cut+'.txt'
            o_file = open(file_name, 'w')
            if not args.invert: o_file.write('#'+'\t'.join(['Sample', 'nom/up', 'nom/do'])+'\n')
            else: o_file.write('#'+'\t'.join(['Sample', 'up/nom', 'do/nom'])+'\n')
        for samp in samps:
            if not samp in sum_nom:
                sum_nom[samp] = 0
                sum_up[samp] = 0
                sum_do[samp] = 0
            # Fill nominal
            nom_name = cur_cut+'/'+variable+'/histo_'+samp
            nominal = copy.deepcopy(r_file.Get(nom_name))    
            if not nominal: print(nom_name+' not found in '+outputDir+'/plots_'+tag+'.root')
            n_nom = nominal.Integral()
            sum_nom[samp] += n_nom       
 
            # Fill up
            up_name = nom_name+cur_tag+'_Up'
            up_var = copy.deepcopy(r_file.Get(up_name))
            n_up = up_var.Integral()
            sum_up[samp] += n_up       
        
            # Fill do
            do_name = nom_name+cur_tag+'_Down'
            do_var = copy.deepcopy(r_file.Get(do_name))
            n_do = do_var.Integral()
            sum_do[samp] += n_do       
            if not args.invert:
                print(samp+':\t'+str(n_nom/n_up)+'\t'+str(n_nom/n_do))
                if not args.sum_cuts: o_file.write('\t'.join([samp, str(n_nom/n_up), str(n_nom/n_do)])+'\n')
            else:
                print(samp+':\t'+str(n_up/n_nom)+'\t'+str(n_do/n_nom))
                if not args.sum_cuts: o_file.write('\t'.join([samp, str(n_up/n_nom), str(n_do/n_nom)])+'\n')
        if not args.sum_cuts:o_file.close()

    # Sum cuts
    if args.sum_cuts:
        file_name = args.output+cur_tag+'.txt'
        o_file = open(file_name, 'w')
        if not args.invert: o_file.write('#'+'\t'.join(['Sample', 'nom/up', 'nom/do'])+'\n')
        else: o_file.write('#'+'\t'.join(['Sample', 'up/nom', 'do/nom'])+'\n')
        for samp in sum_nom:
            if not args.invert:
                print(samp+':\t'+str(sum_nom[samp]/sum_up[samp])+'\t'+str(sum_nom[samp]/sum_do[samp]))
                o_file.write('\t'.join([samp, str(sum_nom[samp]/sum_up[samp]), str(sum_nom[samp]/sum_do[samp])])+'\n')
            else:
                print(samp+':\t'+str(sum_up[samp]/sum_nom[samp])+'\t'+str(sum_do[samp]/sum_nom[samp]))
                o_file.write('\t'.join([samp, str(sum_up[samp]/sum_nom[samp]), str(sum_do[samp]/sum_nom[samp])])+'\n')
             
