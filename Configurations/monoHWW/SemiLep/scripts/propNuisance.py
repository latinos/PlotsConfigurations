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
parser.add_argument("-i", "--input", help="input file containing source distributions", type=str)
parser.add_argument("-o", "--output", help="output file containing year to manipulate", type=str)
parser.add_argument("-c", "--cut", help="cut(s) to adapt (comma seperated)", type=str)
parser.add_argument("-v", "--var", help="variable to do (ALL to do all)", default="ALL", type=str)
parser.add_argument("-n", "--nuis", help="nuisance to propagate", type=str)
parser.add_argument("-s", "--sample", help="Samples to manipulate (comma separated)", type=str)
parser.add_argument("--in-sample", help="Sample name in input file (only works for 1 sample at the time)", type=str, default=None)
parser.add_argument("--smooth", help="smoothen fluctuations: if bin much higher then prev -> average of neighbours", action="store_true")

#parser.add_argument("--write", help="create outupt (otherwise dry run only)", action="store_true")
#parser.add_argument("--lnN", help="treat as if you want to replace shape by lnN", action="store_true")
#parser.add_argument("--do-signal", help="also do all signal samples", action="store_true")
#parser.add_argument("-o", "--output", help="output file (if none given overwrite original)", default=None, type=str)
#parser.add_argument("-b", "--batch", help="Run in batch mode", action="store_true")
args = parser.parse_args()


i_file = ROOT.TFile(args.input) 
o_file = ROOT.TFile(args.output, 'UPDATE') 

cuts = args.cut.split(',')
samps = args.sample.split(',')
nuises = args.nuis.split(',')
if 'ALL' in args.var:
    var_l = []
    for key in i_file.Get(cuts[0]).GetListOfKeys():
        var_l.append(key.GetName())
else:
    var_l = args.var.split(',')

for samp in samps:
    for cut in cuts:
        print('Cut: '+cut)
        #var = args.var
        for var in var_l: 
            print(' -- Variable: '+var)
            for nuis in nuises:

                # Check if var exists for this cut
                if not o_file.Get(cut+'/'+var):
                    print('---- Variable "'+var+'" not found for cut "'+cut+'"')
                    continue

                #samp = args.sample
                #nuis = args.nuis
                if 'SAMPLE' in nuis: 
                    nuis = nuis.replace('SAMPLE', samp.split('_')[0])
                print(' ---- Nuisance: '+nuis)

                nom_name = cut+'/'+var+'/histo_'+samp
                i_nom_name = nom_name
                if not args.in_sample is None: i_nom_name = cut+'/'+var+'/histo_'+args.in_sample
        
                # Get input shapes
                i_nom = i_file.Get(i_nom_name)
                i_up  = i_file.Get(i_nom_name+'_'+nuis+'Up')
                i_do  = i_file.Get(i_nom_name+'_'+nuis+'Down')
                
                # Check if ok
                if not i_nom: print('WARNING: "'+i_nom_name+'" not found in "'+args.input+'"')
                if not i_up: print('WARNING: "' +i_nom_name+'_'+nuis+'Up'+'" not found in "'+args.input+'"')
                if not i_do: print('WARNING: "' +i_nom_name+'_'+nuis+'Down'+'" not found in "'+args.input+'"')
        
                # Make relative shapes
                rel_up = copy.deepcopy(i_up)
                rel_do = copy.deepcopy(i_do)
                rel_up.Divide(i_nom)
                rel_do.Divide(i_nom)
        
                # Check for gaps
                n_bins = i_nom.GetNbinsX()
                for i_bin in range(n_bins+2):
                    if i_nom.GetBinContent(i_bin) <= 0:
                        if i_bin == 0 or i_bin == n_bins+1:
                            continue 
                        elif i_nom.GetBinContent(i_bin-1) <= 0:
                            next_val = rel_up.GetBinContent(i_bin+1)
                            rel_up.SetBinContent(i_bin, next_val)
        
                            next_val = rel_do.GetBinContent(i_bin+1)
                            rel_do.SetBinContent(i_bin, next_val)
        
                        elif i_nom.GetBinContent(i_bin+1) <= 0:
                            prev_val = rel_up.GetBinContent(i_bin+1)
                            rel_up.SetBinContent(i_bin, prev_val)
        
                            prev_val = rel_do.GetBinContent(i_bin+1)
                            rel_do.SetBinContent(i_bin, prev_val)
        
                        else:
                            next_val = rel_up.GetBinContent(i_bin+1)
                            prev_val = rel_up.GetBinContent(i_bin+1)
                            mean_val = (next_val + prev_val + 0.)/2.
                            rel_up.SetBinContent(i_bin, mean_val)
        
                            next_val = rel_do.GetBinContent(i_bin+1)
                            prev_val = rel_do.GetBinContent(i_bin+1)
                            mean_val = (next_val + prev_val + 0.)/2.
                            rel_do.SetBinContent(i_bin, mean_val)
                        print(' ---- Gap filling: filled bin '+str(i_bin))
        
                # Smoothen
                if args.smooth:
                    sm_th = 0.1
                    for i_bin in range(1, n_bins+1):
                        if n_bins == 1: continue
                        for histo in [rel_up, rel_do]:
                            curr_val = histo.GetBinContent(i_bin)
                            prev_val = histo.GetBinContent(i_bin-1)
                            next_val = histo.GetBinContent(i_bin+1)
                            repl_val = None
                            if i_bin == 1:
                                if abs(curr_val - next_val) > sm_th:
                                    repl_val = next_val
                            elif i_bin == n_bins:
                                if abs(curr_val - prev_val) > sm_th:
                                    repl_val = prev_val
                            else:
                                if abs(curr_val - prev_val) > sm_th:
                                    repl_val = (prev_val + next_val +0.)/2.
                            if not repl_val is None:
                                #print('DEBUG: ',i_bin,n_bins,curr_val, curr_val - prev_val)
                                print(' ---- Smoothening: replacing bin '+str(i_bin)+' value '+str(curr_val)+' by '+str(repl_val))
                                histo.SetBinContent(i_bin, repl_val) 
        
        
        
                # Get output histograms
                o_nom = o_file.Get(nom_name)
                o_up  = o_file.Get(nom_name+'_'+nuis+'Up')
                o_do  = o_file.Get(nom_name+'_'+nuis+'Down')
                if not o_nom: print('"'+nom_name+'" not found in '+args.output)
        
                # Propagate relative shapes
                n_bins = o_nom.GetNbinsX()
                for i_bin in range(n_bins+2):
                    nom_val = o_nom.GetBinContent(i_bin)
                    up_f = rel_up.GetBinContent(i_bin)
                    do_f = rel_do.GetBinContent(i_bin)
        
                    o_up.SetBinContent(i_bin, nom_val*up_f)    
                    o_do.SetBinContent(i_bin, nom_val*do_f)    
        
                # Write the histograms
                o_file.cd(cut+'/'+var)
                o_up.Write('', ROOT.TObject.kOverwrite)
                o_do.Write('', ROOT.TObject.kOverwrite)
                o_file.cd()    


