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

#variables = {}
#handle = open(variablesFile, 'r')
#exec(handle)
#handle.close()

#cuts_norm = {}
#handle = open(cuts_normFile, 'r')
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
    if not org_name == new_name: 
        if not os.path.exists(new_name): os.system('cp '+org_name+' '+new_name)
    r_file = ROOT.TFile(new_name, 'UPDATE') 
    

cuts_norm = args.cut.split(',')
samples_todo = args.sample.split(',')
uncert_todo = args.nuis.split(',')
variables_list = []
for key in r_file.Get(cuts_norm[0]).GetListOfKeys():
    variables_list.append(key.GetName())
#variables_list = variables.keys()

if 'Events' in variables_list:
    var_def = 'Events'
else:
    var_def = variables_list[0]
#elif 'Puppimet' in variables_list:
#    var_def = 'Puppimet'

cuts_todo = []
for key in r_file.GetListOfKeys():
    cuts_todo.append(key.GetName())
print('Found cuts: '+str(cuts_todo))

for samp in samples_todo:
    print('Sample: '+samp)

    # Catch case: do ALL nuisances (is sample dependant)
    if 'ALL' in args.nuis:
        print(' looking for ALL nuisances')
        #print(' looking in '+cuts_norm[0]+'/'+var_def)
        uncert_todo = []
        keys = r_file.Get(cuts_norm[0]).Get(var_def).GetListOfKeys()
        for key in keys:
            name = key.GetName()
            #if 'Wjets' in name: print('   - name: '+name)
            if 'histo_'+samp+'_' in name: 
                if name.endswith('Up'):
                    nuis = name.replace('histo_'+samp+'_', '').replace('Up', '')
                    #print(name , nuis)
                    if nuis not in uncert_todo: uncert_todo.append(nuis)
        uncert_todo.sort()
        print(' found nuisances: '+str(uncert_todo))

    for nuis in uncert_todo:
        print('-- Nuisance: '+nuis)

        # Skip stat
        if nuis.startswith('ibin') and nuis.endswith('stat'): 
            print('---- Bin stat nuis skipped')
            continue
            
        #Check if nuis exists for this samp
        if not r_file.Get(cuts_norm[0]+'/'+var_def+'/histo_'+samp+'_'+nuis+'Up'):
            print('---- No "'+nuis+'" found for this sample')
            continue
        
        n_nom = 0
        n_up  = 0
        n_do  = 0
    
        for cut in cuts_norm:
            n_nom += r_file.Get(cut+'/'+var_def+'/histo_'+samp).Integral()
            n_up  += r_file.Get(cut+'/'+var_def+'/histo_'+samp+'_'+nuis+'Up').Integral()
            n_do  += r_file.Get(cut+'/'+var_def+'/histo_'+samp+'_'+nuis+'Down').Integral()

        up_f = n_nom/n_up
        do_f = n_nom/n_do 
        if up_f > 1.5 or up_f < 0.5 or do_f > 1.5 or do_f < 0.5: print('WARNING: large normalisation detected')

        print('---- Up norm factor: nom/up='+str(up_f)+', Down norm factor: nom/do='+str(do_f)+' (yields '+str(n_nom)+'/'+str(n_up)+'/'+str(n_do)+')')

        if not args.write: continue
        for cut in cuts_todo:
            for var in variables_list:

                # Check if var exists for this cut
                if not r_file.Get(cut+'/'+var):
                    print('---- Variable "'+var+'" not found for cut "'+cut+'"')
                    continue

                up = r_file.Get(cut+'/'+var+'/histo_'+samp+'_'+nuis+'Up')
                do = r_file.Get(cut+'/'+var+'/histo_'+samp+'_'+nuis+'Down')
        
                up.Scale(up_f)
                do.Scale(do_f)

                r_file.cd(cut+'/'+var)
                
                up.Write('', ROOT.TObject.kOverwrite)
                do.Write('', ROOT.TObject.kOverwrite)
                r_file.cd()

