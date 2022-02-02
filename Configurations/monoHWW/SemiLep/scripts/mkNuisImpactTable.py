import os
import math
import copy
import ROOT
import argparse
from collections import OrderedDict

parser = argparse.ArgumentParser(description = "Receive the parameters")
parser.add_argument('--config', action = 'store', type = str,               help = 'Input configuration file', default=None)
parser.add_argument('--root-file',                type = str,               help = 'root file path', default=None)
parser.add_argument('--var'   , action = 'store', type = str, dest = 'var', help = 'Variable, should not matter')
parser.add_argument('--cut'   , action = 'store', type = str, dest = 'cut', help = 'Cut to show (comma separated)')
parser.add_argument('--save',                                               help='save the table', action='store_true')
parser.add_argument('-o', '--output',                                       help='output dir', default='.', type=str)

args = parser.parse_args()

# Open root file
if not args.config is None: 
    handle = open(args.config, 'r')
    exec(handle)
    handle.close()
    
    samples = {}
    handle = open(samplesFile, 'r')
    exec(handle)
    handle.close()
    
    nuisances = {}
    handle = open(nuisancesFile, 'r')
    exec(handle)
    handle.close()

    # Collect all lnN nuis
    nuises_lnn = []
    for nuis in nuisances:
        if  nuisances[nuis]['type'] == 'lnN':
            if not nuis in nuises_lnn: nuises_lnn.append(nuis)

    r_file = ROOT.TFile(outputDir+'/plots_'+tag+'.root')
elif not args.root_file is None:
    r_file = ROOT.TFile(args.root_file)
    nuisances = {}
    nuises_lnn = []
else:
    raise ValueError('--config and --root-file can\'t both be None')

cuts = args.cut.split(',')

# Collect samples to do 
samps = []
keys = r_file.Get(cuts[0]).Get(args.var).GetListOfKeys()
for skey in keys:
    name = skey.GetName()
    if not name.startswith('histo_'): continue
    if not name.endswith('Up') and not name.endswith('Down'):
        samp = name.replace('histo_', '')
        if 'darkHiggs' in samp: continue 
        if 'QCDscale' in samp: continue 
        if 'DATA' in samp: continue 
        #print(name, samp)
        if samp not in samps: 
            samps.append(samp)
samps.sort()
print('Found Samples: '+str(samps))

# Collect nuisances to do
nuises = []
keys = r_file.Get(cuts[0]).Get(args.var).GetListOfKeys()
for skey in keys:
    name = skey.GetName()
    if not name.startswith('histo_'): continue
    for samp in samps:
        if not name.startswith('histo_'+samp+'_'): continue
        if name.endswith('Down'):
            nuis = name.replace('histo_'+samp+'_', '').replace('Down', '')
            print(name, samp, nuis)
            if not nuis in nuises: nuises.append(nuis)
nuises.sort()
print('Found Nuisances: '+str(nuises))
print('Found lnN Nuisances: '+str(nuises_lnn))

# Initialize dict
count_dict = {}
nuises_lnn_names = []
for cut in cuts:
    count_dict[cut] = {}
    count_dict[cut]['nominal'] = 0.
    count_dict[cut]['data'] = 0.
    for nuis in nuises:
        count_dict[cut][nuis] = {}
        count_dict[cut][nuis]['up'] = 0.
        count_dict[cut][nuis]['do'] = 0.
    for nuis in nuises_lnn:
        nuis_name = nuisances[nuis]['name']
        if not nuis_name in nuises_lnn_names: nuises_lnn_names.append(nuis_name)
        count_dict[cut][nuis_name] = {}
        count_dict[cut][nuis_name]['up'] = 0.
        count_dict[cut][nuis_name]['do'] = 0.
nuises_lnn_names.sort()

# Fill count dict
for cut in cuts:
    print('Cut: '+cut)
    dat_name = cut + '/' + args.var + '/histo_DATA'
    count_dict[cut]['data'] = r_file.Get(dat_name).Integral()
    for samp in samps:
        print('-- Adding '+samp+' to nominal')
        nom_name = cut + '/' + args.var + '/histo_' + samp
        nom = r_file.Get(nom_name).Clone()
        n_nom = nom.Integral()
        count_dict[cut]['nominal'] += n_nom
        for nuis in nuises:
            up = r_file.Get(nom_name+'_'+nuis+'Up') 
            do = r_file.Get(nom_name+'_'+nuis+'Down')
           
            # If up or do histo does not exist, then nuis does not exist for this samp
            if up: count_dict[cut][nuis]['up'] += up.Integral()
            else: count_dict[cut][nuis]['up'] += n_nom

            if do: count_dict[cut][nuis]['do'] += do.Integral()
            else: count_dict[cut][nuis]['do'] += n_nom

        for nuis in nuises_lnn:
            nuis_name = nuisances[nuis]['name']
            lnn = 1.
            if samp in nuisances[nuis]['samples']: 
                #print(nuisances[nuis]['samples'][samp])
                lnn = float(nuisances[nuis]['samples'][samp])
            count_dict[cut][nuis_name]['up'] += n_nom*lnn
            count_dict[cut][nuis_name]['do'] += n_nom*(2.-lnn)

# Sanity check
for cut in cuts:
    print(cut+': data='+str(count_dict[cut]['data'])+', exp='+str(count_dict[cut]['nominal']))


# Print out result
prt_str = '{:>25} |'.format('Region')
for cut in cuts:
    prt_str += '\t{:>13}'. format(cut)
print(prt_str)
prt_str = '{:25} |'.format('Nuisance')
for cut in cuts:
    prt_str += '\t{:>5}/{:>5} %'. format('up','down')
print(prt_str)
print('-'*77)
for nuis in nuises:
    prt_str = '{:25} |'.format(nuis)
    for cut in cuts:
        r_up = (count_dict[cut][nuis]['up'] + 0.)/(count_dict[cut]['nominal'] + 0.)
        r_do = (count_dict[cut][nuis]['do'] + 0.)/(count_dict[cut]['nominal'] + 0.)

        r_up_p = (1. - r_up)*100.
        r_do_p = (1. - r_do)*100.
        
        prt_str += '\t{:5.2f}/{:5.2f} %'.format(r_up_p, r_do_p)
    print(prt_str)
for nuis in nuises_lnn_names:
    prt_str = '{:25} |'.format(nuis)
    for cut in cuts:
        r_up = (count_dict[cut][nuis]['up'] + 0.)/(count_dict[cut]['nominal'] + 0.)
        r_do = (count_dict[cut][nuis]['do'] + 0.)/(count_dict[cut]['nominal'] + 0.)

        r_up_p = (1. - r_up)*100.
        r_do_p = (1. - r_do)*100.
        
        prt_str += '\t{:5.2f}/{:5.2f} %'.format(r_up_p, r_do_p)
    print(prt_str)
