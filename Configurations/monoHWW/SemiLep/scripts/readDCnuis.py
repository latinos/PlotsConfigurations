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
parser.add_argument("--datacard", help="datacard path", type=str)
parser.add_argument("-n", "--nuis", help="nuisance to show", type=str)
#parser.add_argument("-s", "--sample", help="sample to normalize", type=str)
#parser.add_argument("-c", "--channel", help="channel to normalize to", type=str)
args = parser.parse_args()

nuis_list = args.nuis.split(',')
#samp_list = args.sample.split(',')

def split_line(line):
    tmp_line = line.split(' ')
    while '' in tmp_line:
        tmp_line.remove('')
    return tmp_line
    
for nuis in nuis_list:
    print('Nuisance: '+nuis)
    o_file = open(args.datacard, 'r')
    lines = o_file.readlines()
    o_file.close()
    
    proc_line = ''
    nuis_line = '' 
    chan_line = '' 
    for line in lines:
        if line.startswith('process') and 'top' in line:
            proc_line = line.replace('\n', '')
        if line.startswith(nuis):
            nuis_line = line.replace('\n', '')
        if line.startswith('bin') and len(split_line(line)) > 4:
            chan_line = line.replace('\n', '')
    
    proc_line_f = split_line(proc_line)
    nuis_line_f = split_line(nuis_line)
    chan_line_f = split_line(chan_line)
    
    #print('proc line : '+str(proc_line_f), len(proc_line_f))
    #print('nuis line : '+str(nuis_line_f), len(nuis_line_f))
    #print('chan line : '+str(chan_line_f), len(chan_line_f))
    
    n_nuis = len(nuis_line_f)
    all_chans = []
    all_samps = []
    samps_dict = {}
    
    print(' - Collect info')
    for idx in range(-1, (n_nuis-1)*-1, -1):
        #print(idx)
        #print(' -- '+' '+str(idx)+' '+str(proc_line_f[idx])+' '+str(nuis_line_f[idx])+' '+str(chan_line_f[idx]))

        chan = chan_line_f[idx]
        samp = proc_line_f[idx]
        val = nuis_line_f[idx]
        
        if not chan in all_chans: all_chans.append(chan)
        if not samp in all_samps: all_samps.append(samp)

        if not samp in samps_dict: samps_dict[samp] = {}
        samps_dict[samp][chan] = val
    # fill potential gaps
    for smp in all_samps:
        if not smp in samps_dict: samps_dict[smp] = {}
        for chn in all_chans:
            if not chn in samps_dict[smp]: samps_dict[smp][chn] = '/'

    print(' - Print info')
    all_chans.sort()
    all_samps.sort()
    
    prt_str = '{:>35} :'.format('Sample')
    for chn in all_chans:
        prt_str+='\t{:14}'.format(chn)
    print(prt_str)
    for smp in all_samps:
        prt_str = '{:>35} :'.format(smp)
        for chn in all_chans:
            prt_str+='\t{:14}'.format(samps_dict[smp][chn])
        print(prt_str)


 
