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
parser.add_argument("-o", "--output", help="output file containing edited nuisances, if none given add '_edit' to input file", default=None, type=str)
parser.add_argument("--edit-config", help="Edit dictionary with everything that needs to be done, when not given look at --cut, --var, --nuis", default=None, type=str)
parser.add_argument("-c", "--cut", help="cut(s) to adapt (comma seperated)", default=None, type=str)
parser.add_argument("-v", "--var", help="variable to do (ALL to do all)", default=None, type=str)
parser.add_argument("-n", "--nuis", help="nuisance to edit", default=None, type=str)
parser.add_argument("-s", "--sample", help="Samples to manipulate (comma separated)", default=None, type=str)
parser.add_argument("-e", "--edits", help="Edits to preform (avg, )", default='avg', type=str)
parser.add_argument("--show", help="Show manipulation", action="store_true")
parser.add_argument("--save", help="Save manipulation plots", action="store_true")
parser.add_argument("--no-write", help="Do not write ouput", action="store_true")
parser.add_argument("-b", "--batch", help="Run in batch mode", action="store_true")

#parser.add_argument("--write", help="create outupt (otherwise dry run only)", action="store_true")
#parser.add_argument("--lnN", help="treat as if you want to replace shape by lnN", action="store_true")
#parser.add_argument("--do-signal", help="also do all signal samples", action="store_true")
#parser.add_argument("-o", "--output", help="output file (if none given overwrite original)", default=None, type=str)
#parser.add_argument("-b", "--batch", help="Run in batch mode", action="store_true")
args = parser.parse_args()

i_file_n = args.input
o_file_n = args.output
if o_file_n is None: o_file_n = i_file_n.replace('.root', '_edit.root')

if i_file_n == o_file_n: raise ValueError('Input and output file must be different')

if not args.no_write: 
    if not os.path.exists(o_file_n):
        print('Copying content of input file to output file')
        os.system('cp '+i_file_n+' '+o_file_n)


i_file = ROOT.TFile(i_file_n) 
o_file = ROOT.TFile(o_file_n, 'UPDATE') 

## Digest things to do

# Find all cuts
cuts_all = []
for key in i_file.GetListOfKeys():
    cuts_all.append(key.GetName())
print('All found cuts: '+str(cuts_all))

# Find all variables
vars_all = []
for key in i_file.Get(cuts_all[0]).GetListOfKeys():
    vars_all.append(key.GetName())
print('All found variables: '+str(vars_all))

# Load edit config if given else look at other options
if not args.edit_config is None:
    edit_dict = {}
    handle = open(args.edit_config, 'r')
    exec(handle)
    handle.close()
else:
    edit_dict = {}
    edit_dict[args.nuis] = {}
    edit_dict[args.nuis]['cuts'] = args.cut.split(',')
    edit_dict[args.nuis]['vars'] = args.var.split(',')
    edit_dict[args.nuis]['samps'] = args.sample.split(',')
    edit_dict[args.nuis]['edits'] = args.edits.split(',')

# Replace ALL by all_list
for nuis in edit_dict:
    if edit_dict[nuis]['cuts'] == ['ALL']: edit_dict[nuis]['cuts'] = cuts_all
    if edit_dict[nuis]['vars'] == ['ALL']: edit_dict[nuis]['vars'] = vars_all

#cuts = args.cut.split(',')
#samps = args.sample.split(',')
#if 'ALL' in args.var:
#    var_l = []
#    for key in i_file.Get(cuts[0]).GetListOfKeys():
#        var_l.append(key.GetName())
#else:
#    var_l = args.var.split(',')

# Get rid of annoying stat box
ROOT.gStyle.SetOptStat(0)

# Average each bin over itself and neigbours
def average_neig_bins(nom, var_hist, weighted=False, iterations=1):
    hist = var_hist.Clone()
    if iterations == 0: return hist
    n_bins = nom.GetNbinsX()
    for i_bin in range(1, n_bins+1):
        val_prev = var_hist.GetBinContent(i_bin - 1)
        val_curr = var_hist.GetBinContent(i_bin)
        val_next = var_hist.GetBinContent(i_bin + 1)

        w_prev = nom.GetBinContent(i_bin - 1)
        w_curr = nom.GetBinContent(i_bin)
        w_next = nom.GetBinContent(i_bin + 1)

        if i_bin == 1: 
            val_prev = val_curr
            w_prev = w_curr
        if i_bin == n_bins:    
            val_next = val_curr
            w_next = w_curr

        if not weighted:
            w_prev = 1.
            w_curr = 1.
            w_next = 1.

        tot_w = w_prev + w_curr + w_next + 0.
        if tot_w > 0.: mean = (val_prev*w_prev + val_curr*w_curr + val_next*w_next + 0.)/(tot_w + 0.)
        else: mean = 0.
        hist.SetBinContent(i_bin, mean)
    #return hist
    return average_neig_bins(nom, hist, weighted, iterations-1)

# Average last X bins
def average_last_X(nom, var_hist, last_x):
    hist = var_hist.Clone()
    n_bins = hist.GetNbinsX()

    st_edit_bin = n_bins- last_x+1

    n_nom_last_x = nom.Integral(st_edit_bin, n_bins)
    n_var_last_x = var_hist.Integral(st_edit_bin, n_bins)
    rel_last_x = (n_var_last_x+0.)/(n_nom_last_x+0.)   

    for i_bin in range(1, n_bins+1):
        if i_bin < st_edit_bin: continue
        nom_curr = nom.GetBinContent(i_bin)
        val_new = nom_curr * rel_last_x

        hist.SetBinContent(i_bin, val_new)
    return hist

# Get max/min of hists
def get_hist_extremum(hist_list, max_val=True):
    ext_list = []
    for hist in hist_list:
        if max_val: ext_bin = hist.GetMaximumBin()
        else: ext_bin = hist.GetMinimumBin()
        ext_list.append(hist.GetBinContent(ext_bin))

    if max_val: return max(ext_list)
    else: return min(ext_list)

for nuis in edit_dict:
    cuts  = edit_dict[nuis]['cuts']
    var_l = edit_dict[nuis]['vars']
    samps = edit_dict[nuis]['samps']
    edits = edit_dict[nuis]['edits']

    for samp in samps:
        for cut in cuts:
            print('Cut: '+cut)
            for var in var_l: 
                print(' -- Variable: '+var)
                nom_name = cut+'/'+var+'/histo_'+samp
        
                # Get input shapes
                i_nom = i_file.Get(nom_name).Clone()
                i_up  = i_file.Get(nom_name+'_'+nuis+'Up').Clone()
                i_do  = i_file.Get(nom_name+'_'+nuis+'Down').Clone()
                
                # Check if ok
                if not i_nom: print('WARNING: "'+nom_name+'" not found in "'+args.input+'"')
                if not i_up: print('WARNING: "'+nom_name+'_'+nuis+'Up'+'" not found in "'+args.input+'"')
                if not i_do: print('WARNING: "'+nom_name+'_'+nuis+'Down'+'" not found in "'+args.input+'"')
        
                # Make relative shapes
                i_rel_up = i_up.Clone()
                i_rel_do = i_do.Clone()
                i_rel_up.Divide(i_nom)
                i_rel_do.Divide(i_nom)

                o_rel_up = i_rel_up.Clone()
                o_rel_do = i_rel_do.Clone()
       
                # Strategy to edit:
                #   Every edit will change the relative output shape   
                #   Order is important, edit will take prrevious changed shape as input   
   
                for edit in edits:
                    print(' ---- executing '+edit)
                    if edit == 'avg': 
                        # Average rel directly
                        #o_rel_up = average_neig_bins(i_nom, i_rel_up, weighted=False)
                        #o_rel_do = average_neig_bins(i_nom, i_rel_do, weighted=False)
                        o_rel_up = average_neig_bins(i_nom, i_rel_up, weighted=True)
                        o_rel_do = average_neig_bins(i_nom, i_rel_do, weighted=True)
                        #o_rel_up = average_neig_bins(i_nom, o_rel_up, weighted=True, iterations=2)
                        #o_rel_do = average_neig_bins(i_nom, o_rel_do, weighted=True, iterations=2)
                    elif 'avg' in edit:
                        iterate = int(edit.replace('avg', ''))
                        o_rel_up = average_neig_bins(i_nom, o_rel_up, weighted=True, iterations=iterate)
                        o_rel_do = average_neig_bins(i_nom, o_rel_do, weighted=True, iterations=iterate)
                    elif 'mergel' in edit:
                        #print('Merge last ')
                        last_n = int(edit.replace('mergel', ''))
                        print('Merge last '+str(last_n)+' bins')
                        i_up_tmp = average_last_X(i_nom, i_up, last_n)
                        i_do_tmp = average_last_X(i_nom, i_do, last_n)
                        o_rel_up = i_up_tmp.Clone()
                        o_rel_do = i_do_tmp.Clone()
                        o_rel_up.Divide(i_nom)
                        o_rel_do.Divide(i_nom)
 
         
    
                # Show
                if args.show or args.save:
                    canvas = ROOT.TCanvas('canvas', 'canvas', 600, 600)
                    legend = ROOT.TLegend(0.6, 0.8, 0.9, 0.9)

                    ones = i_nom.Clone()
                    ones.Divide(i_nom)
                    ones.SetLineColor(1)
 
                    ones2 = ones.Clone()
                    ones2.SetLineStyle(2)   
 
                    y_max = get_hist_extremum([i_rel_up, i_rel_do, o_rel_up, o_rel_do], max_val=True)
                    y_min = get_hist_extremum([i_rel_up, i_rel_do, o_rel_up, o_rel_do], max_val=False)
                    scale = y_max - y_min
    
                    i_rel_up.SetLineColor(2)
                    o_rel_up.SetLineColor(2)
                    i_rel_do.SetLineColor(4)
                    o_rel_do.SetLineColor(4)
    
                    i_rel_up.SetLineStyle(2)
                    i_rel_do.SetLineStyle(2)
    
                    i_rel_up.GetYaxis().SetRangeUser(y_min-0.1*scale, y_max+0.3*scale)
                    i_rel_up.SetTitle(nuis+' '+samp+' '+cut+' '+var)
 
                    i_rel_up.Draw('hist')
                    i_rel_do.Draw('hist same')
                    o_rel_up.Draw('hist same')
                    o_rel_do.Draw('hist same')
                    ones.Draw('hist same')

                    legend.AddEntry(ones2, 'Un-edited', 'l')
                    legend.AddEntry(ones, 'Edited', 'l')
                    legend.Draw()

                    if args.save:
                        plot_name = 'NuisEdit_'+nuis+'_'+samp+'_'+cut+'_'+var+'.png'
                        save_dir = 'NuisEditPlots'
                        if not os.path.isdir(save_dir): os.mkdir(save_dir)
                        canvas.SaveAs(save_dir+'/'+plot_name)
                    if args.show:
                        raw_input('next')

                # Strategy to propagate error:
                #   Never change nominal in target file    
                #   Make up/do var by taking nominal and scaling by edited ratio hist   

                if not args.no_write: 
                    # Get output histograms
                    o_nom = o_file.Get(nom_name)
                    o_up  = o_file.Get(nom_name+'_'+nuis+'Up')
                    o_do  = o_file.Get(nom_name+'_'+nuis+'Down')
                    if not o_nom: print('"'+nom_name+'" not found in '+args.output)
        
                    # Propagate relative shapes
                    n_bins = o_nom.GetNbinsX()
                    for i_bin in range(n_bins+2):
                        nom_val = o_nom.GetBinContent(i_bin)
                        up_f = o_rel_up.GetBinContent(i_bin)
                        do_f = o_rel_do.GetBinContent(i_bin)
        
                        o_up.SetBinContent(i_bin, nom_val*up_f)    
                        o_do.SetBinContent(i_bin, nom_val*do_f)    
        
                    # Write the histograms
                    o_file.cd(cut+'/'+var)
                    o_up.Write('', ROOT.TObject.kOverwrite)
                    o_do.Write('', ROOT.TObject.kOverwrite)
                    o_file.cd()    

if not args.no_write: 
    print('Results stored in '+o_file_n)
