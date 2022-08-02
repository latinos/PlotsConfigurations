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
variables = []
for key in r_file.Get(cuts_norm[0]).GetListOfKeys():
    variables.append(key.GetName())

if 'Events' in variables:
    var_def = 'Events'
else:
    var_def = variables[0]

cuts_todo = []
for key in r_file.GetListOfKeys():
    cuts_todo.append(key.GetName())
print('Found cuts: '+str(cuts_todo))

for nuis in uncert_todo:
    print('Nuisance: '+nuis)
    for samp in samples_todo:
        print('-- Sample: '+samp)
        
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

        print('---- Up norm factor: nom/up='+str(up_f)+', Down norm factor: nom/do='+str(do_f)+' (yields '+str(n_nom)+'/'+str(n_up)+'/'+str(n_do)+')')

        if not args.write: continue
        for cut in cuts_todo:
            for var in variables:
                up = r_file.Get(cut+'/'+var+'/histo_'+samp+'_'+nuis+'Up')
                do = r_file.Get(cut+'/'+var+'/histo_'+samp+'_'+nuis+'Down')
        
                up.Scale(up_f)
                do.Scale(do_f)

                r_file.cd(cut+'/'+var)
                
                up.Write('', ROOT.TObject.kOverwrite)
                do.Write('', ROOT.TObject.kOverwrite)
                r_file.cd()

