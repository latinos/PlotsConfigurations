import os
import math
import copy
import ROOT
import argparse

parser = argparse.ArgumentParser(description = "Receive the parameters")
parser.add_argument('--config', action = 'store', type = str, dest = 'cfg', help = 'Input configuration to extract samples')
args = parser.parse_args()


handle = open(args.cfg, 'r')
exec(handle)
handle.close()

samples = {}
handle = open(samplesFile, 'r')
exec(handle)
handle.close()

cuts = {}
#handle = open(cutsFile, 'r')
#exec(handle)
#handle.close()

nuisances = {}
handle = open(nuisancesFile, 'r')
exec(handle)
handle.close()

missing_files = []
for nuis in nuisances:
    if not 'folderUp' in nuisances[nuis]: continue
    folder_up = nuisances[nuis]['folderUp']
    folder_do = nuisances[nuis]['folderDown']
    var_folder = [folder_up, folder_do]
    print(folder_up, folder_do)
    for samp in nuisances[nuis]['samples']:
        if samp not in samples: 
            print('-- "'+samp+'" not found in samples --> skipped')
            continue
        for fil in samples[samp]['name']:
            eff_fil = fil.split('/')[-1]
            for var_dir in var_folder:
                var_file = var_dir + '/'+eff_fil
                if not os.path.isfile(var_file):
                    if not var_file in missing_files: missing_files.append(var_file)

print('Missing files:')
print('')
for fil in missing_files:
    print(fil)



#all_files = []
#for samp in samples:
#    #print(samp, samples[samp])
#    if 'isData' in samples[samp]: continue
#    for fil in samples[samp]['name']:
#        if not fil in all_files: all_files.append(fil)
#     
#
#for fil in all_files:
#    #dcap://maite.iihe.ac.be/
#    eff_fil = fil.replace('dcap://maite.iihe.ac.be/', '').replace('#', '')
#    print(eff_fil)
