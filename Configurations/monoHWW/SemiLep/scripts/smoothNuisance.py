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
parser.add_argument("-c", "--cut", help="cut(s) to adapt (comma seperated)", type=str)
parser.add_argument("-v", "--var", help="variable to do (ALL to do all)", default="ALL", type=str)
parser.add_argument("-n", "--nuis", help="nuisance to propagate", type=str)
parser.add_argument("-s", "--sample", help="sample to manipulate", type=str)

#parser.add_argument("--write", help="create outupt (otherwise dry run only)", action="store_true")
#parser.add_argument("--lnN", help="treat as if you want to replace shape by lnN", action="store_true")
#parser.add_argument("--do-signal", help="also do all signal samples", action="store_true")
#parser.add_argument("-o", "--output", help="output file (if none given overwrite original)", default=None, type=str)
#parser.add_argument("-b", "--batch", help="Run in batch mode", action="store_true")
args = parser.parse_args()

r_file = ROOT.TFile(args.input, 'UPDATE')

cuts = args.cut.split(',')
if 'ALL' in args.var:
    var_l = []
    for key in r_file.Get(cuts[0]).GetListOfKeys():
        var_l.append(key.GetName())
else:
    var_l = args.var.split(',')

for cut in cuts:
    print('Cut: '+cut)
    #var = args.var
    for var in var_l: 
        print(' -- Variable: '+var)
        samp = args.sample
        nuis = args.nuis
        nom_name = cut+'/'+var+'/histo_'+samp

        # Get input shapes
        i_nom = r_file.Get(nom_name)
        i_up  = r_file.Get(nom_name+'_'+nuis+'Up')
        i_do  = r_file.Get(nom_name+'_'+nuis+'Down')

        # Make output shapes
        o_up = copy.deepcopy(i_up)
        o_do = copy.deepcopy(i_do)

        # Smoothen
        n_bins = i_nom.GetNbinsX()
        for i_bin in range(1, n_bins+1):
            if n_bins == 1: continue
            for var_str in ['up', 'do']:
                if var_str == 'up':
                    i_hist = i_up   
                    o_hist = o_up
                else:    
                    i_hist = i_do   
                    o_hist = o_do
                idx_prev = i_bin-1
                idx_next = i_bin+1

                # if at edge take mean of proceeding/preceeding 2 bins instead
                if i_bin == 1: idx_prev = i_bin
                elif i_bin == n_bins: idx_next = i_bin

                curr_nom_val = i_nom.GetBinContent(i_bin)     
                prev_nom_val = i_nom.GetBinContent(idx_prev)     
                next_nom_val = i_nom.GetBinContent(idx_next)     

                curr_val = i_hist.GetBinContent(i_bin)
                prev_val = i_hist.GetBinContent(idx_prev)
                next_val = i_hist.GetBinContent(idx_next)

                curr_rel_val = 1.
                prev_rel_val = 1.
                next_rel_val = 1.
                if not curr_nom_val == 0.:
                    curr_rel_val = (curr_val+0.)/(curr_nom_val+0.)
                if not prev_nom_val == 0.:
                    prev_rel_val = (prev_val+0.)/(prev_nom_val+0.)
                if not next_nom_val == 0.:
                    next_rel_val = (next_val+0.)/(next_nom_val+0.)

                curr_err = i_hist.GetBinError(i_bin)
                prev_err = i_hist.GetBinError(idx_prev)
                next_err = i_hist.GetBinError(idx_next)

                # Calculate effective MC events
                n_curr_eff = (curr_val**2+0.)/(curr_err**2+0.0000000001)
                n_prev_eff = (prev_val**2+0.)/(prev_err**2+0.0000000001)
                n_next_eff = (next_val**2+0.)/(next_err**2+0.0000000001)
         
                # Replace curr val by weighted mean of surrounding bins 
                #print('curr val='+str(curr_val), 'prev val='+str(prev_val), 'next val='+str(next_val), 'curr nom val='+str(curr_nom_val))
                #print('curr rel val='+str(curr_rel_val), 'prev rel val='+str(prev_rel_val), 'next rel val='+str(next_rel_val))
                mean_rel = (n_curr_eff*curr_rel_val + n_prev_eff*prev_rel_val + n_next_eff*next_rel_val + 0.)/(n_curr_eff + n_prev_eff + n_next_eff + 0.)
                #mean_rel = (curr_rel_val + prev_rel_val + next_rel_val + 0.)/(3.)
                repl_val = mean_rel*curr_nom_val
                o_hist.SetBinContent(i_bin, repl_val) 
                
                print(' -- bin '+str(i_bin)+' curr rel val='+str(curr_rel_val)+', mean rel val='+str(mean_rel))

        # Write the histograms
        print(' -- Overwriting ')
        r_file.cd(cut+'/'+var)
        #print(' -- Overwriting1')
        o_up.Write('', ROOT.TObject.kOverwrite)
        #print(' -- Overwriting2')
        o_do.Write('', ROOT.TObject.kOverwrite)
        #print(' -- Overwriting3')
        r_file.cd()    


