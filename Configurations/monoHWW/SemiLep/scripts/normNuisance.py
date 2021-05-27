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
parser.add_argument("-c", "--cut", help="cut(s) included in norm (comma seperated)", type=str)
#parser.add_argument("-v", "--var", help="variable to take ", default="Events", type=str)
parser.add_argument("-n", "--nuis", help="nuisance(s) to normalise (comma separated)", type=str)
parser.add_argument("-s", "--sample", help="sample(s) to normalise (comma separated)", type=str)
parser.add_argument("--write", help="create outupt (otherwise dry run only)", action="store_true")
#parser.add_argument("--lnN", help="treat as if you want to replace shape by lnN", action="store_true")
#parser.add_argument("--do-signal", help="also do all signal samples", action="store_true")
parser.add_argument("-o", "--output", help="output file (if none given overwrite original)", default=None, type=str)
#parser.add_argument("-b", "--batch", help="Run in batch mode", action="store_true")
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


if not args.write:
    r_file = ROOT.TFile(outputDir+'/plots_'+tag+'.root')
else:
    org_name = outputDir+'/plots_'+tag+'.root'
    new_name = org_name
    if not args.output is None: new_name = args.output
    if not org_name == new_name: os.system('cp '+org_name+' '+new_name)
    r_file = ROOT.TFile(new_name, 'UPDATE') 
    

cuts = args.cut.split(',')
samples_todo = args.sample.split(',')
uncert_todo = args.nuis.split(',')
variables = []
for key in r_file.Get(cuts[0]).GetListOfKeys():
    variables.append(key.GetName())
if 'Events' in variables:
    var_def = 'Events'
else:
    var_def = variables[0]

for nuis in uncert_todo:
    print('Nuisance: '+nuis)
    for samp in samples_todo:
        print('-- Sample: '+samp)
        
        #Check if nuis exists for this samp
        if not r_file.Get(cuts[0]+'/'+var_def+'/histo_'+samp+'_'+nuis+'Up'):
            print('---- No "'+nuis+'" found for this sample')
            continue
        
        n_nom = 0
        n_up  = 0
        n_do  = 0
    
        for cut in cuts:
            n_nom += r_file.Get(cut+'/'+var_def+'/histo_'+samp).Integral()
            n_up  += r_file.Get(cut+'/'+var_def+'/histo_'+samp+'_'+nuis+'Up').Integral()
            n_do  += r_file.Get(cut+'/'+var_def+'/histo_'+samp+'_'+nuis+'Down').Integral()

        up_f = n_nom/n_up
        do_f = n_nom/n_do 

        print('---- Up norm factor: nom/up='+str(up_f)+', Down norm factor: nom/do='+str(do_f)+' (yields '+str(n_nom)+'/'+str(n_up)+'/'+str(n_do)+')')

        if not args.write: continue
        for cut in cuts:
            for var in variables:
                up = r_file.Get(cut+'/'+var+'/histo_'+samp+'_'+nuis+'Up')
                do = r_file.Get(cut+'/'+var+'/histo_'+samp+'_'+nuis+'Down')
        
                up.Scale(up_f)
                do.Scale(do_f)

                r_file.cd(cut+'/'+var)
                
                up.Write('', ROOT.TObject.kOverwrite)
                do.Write('', ROOT.TObject.kOverwrite)
                r_file.cd()

#        
#
#
#
#if 'ALL' in args.sample:
#    samps = []
#    keys = r_file.Get(args.cut.split(',')[0]).Get(args.var).GetListOfKeys()
#    for skey in keys:
#        name = skey.GetName()
#        if not name.startswith('histo_'): continue
#        if not name.endswith('Up') and not name.endswith('Down'):
#            samp = name.replace('histo_', '')
#            if 'darkHiggs' in samp and not args.do_signal: 
#                if not 'mhs_160_mx_100_mZp_500' in samp: continue
#
#            # var test
#            var_name = args.cut.split(',')[0]+'/'+args.var+'/histo_'+samp+'_'+args.nuis.split(',')[0]+'Up'
#            if not r_file.Get(var_name): continue 
#            print(name, samp)
#
#            if samp not in samps: samps.append(samp)
#else: samps = args.sample.split(',')
##exit()
#
#for samp in samps:
#    nominal = None
#    up_var = None
#    do_var = None
#    for cut in args.cut.split(','):
#        #print('-- Sample: "'+samp+'"')
#        # Fill nominal
#        nom_name = cut+'/'+args.var+'/histo_'+samp
#        if nominal is None: nominal = copy.deepcopy(r_file.Get(nom_name))    
#        else: nominal.Add(r_file.Get(nom_name))
#
#        if 'ALL' in args.nuis:
#            nuis_list = []
#            keys = r_file.Get(cut).Get(args.var).GetListOfKeys()
#            for key in keys:
#                name = key.GetName()
#                if 'histo_'+samp+'_' in name: 
#                    if name.endswith('Up'):
#                        nuis = name.replace('histo_'+samp+'_', '').replace('Up', '')
#                        #print(name , nuis)
#                        if nuis not in nuis_list: nuis_list.append(nuis)
#            #exit()
#        else: nuis_list = args.nuis.split(',')
#        if len(nuis_list) > 1: raise ValueError('Multiple nuis not supported for now')
#        for nuis in nuis_list:
#            #print('---- Nuisance: "'+nuis+'"')
#            # Fill up
#            up_name = nom_name+'_'+nuis+'Up'
#            tmp_up = r_file.Get(up_name)
#            if not tmp_up: 
#                print('---- Waring: up var not found -> skipping')
#                continue
#            if up_var is None: up_var = copy.deepcopy(tmp_up)
#            else: up_var.Add(tmp_up)
#
#            # Fill do
#            do_name = nom_name+'_'+nuis+'Down'
#            tmp_do = r_file.Get(do_name)
#            if not tmp_do: 
#                print('---- Waring: do var not found -> skipping')
#                continue
#            if do_var is None: do_var = copy.deepcopy(tmp_do)
#            else: do_var.Add(tmp_do)
#
#
#            n_nom = nominal.Integral()
#            n_up = up_var.Integral()
#            n_do = do_var.Integral()
#    if args.lnN:
#        print('Nuisance "'+nuis+'", sample "'+samp+'" : up/nom='+str(n_up/n_nom)+', do/nom='+str(n_do/n_nom)+' (yields '+str(n_nom)+'/'+str(n_up)+'/'+str(n_do)+')')
#    else: 
#        print('Nuisance "'+nuis+'", sample "'+samp+'" : nom/up='+str(n_nom/n_up)+', nom/do='+str(n_nom/n_do)+' (yields '+str(n_nom)+'/'+str(n_up)+'/'+str(n_do)+')')
#
