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
parser.add_argument("-s", "--sample", help="sample to normalize", type=str)
#parser.add_argument("-c", "--channel", help="channel to normalize to", type=str)
args = parser.parse_args()

nuis_list = args.nuis.split(',')
samp_list = args.sample.split(',')

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
        if line.startswith('process') and 'Wjets' in line:
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
    
    #print(' - Finding norm factors')
    #up_norm = 1.
    #do_norm = 1.
    #for idx in range(-1, (n_nuis-1)*-1, -1):
    #    #print(' -- '+' '+str(idx)+' '+str(proc_line_f[idx])+' '+str(nuis_line_f[idx])+' '+str(chan_line_f[idx]))
    #    chan = chan_line_f[idx]
    #    samp = proc_line_f[idx]
    #    val = nuis_line_f[idx]
    #
    #    if args.channel in chan and args.sample in samp:
    #        if '-' == val: raise ValueError('Trying to normalize to "-"')
    #        elif '/' in val:
    #            up_norm = float(val.split('/')[0])
    #            do_norm = float(val.split('/')[1])
    #        else: up_norm = float(val)
    #        print(' -- Norm factors: '+str(up_norm) + ', '+str(do_norm))    
    
    print(' - Adapting lnN values')
    new_nuis_line_f = copy.deepcopy(nuis_line_f)
    for idx in range(-1, (n_nuis-1)*-1, -1):
        #print(' -- '+' '+str(idx)+' '+str(proc_line_f[idx])+' '+str(nuis_line_f[idx])+' '+str(chan_line_f[idx]))
        chan = chan_line_f[idx]
        samp = proc_line_f[idx]
        val = nuis_line_f[idx]
        new_val = '-'
    
        if samp in samp_list:
            if '-' == val: print(' -- Already "-"')
            #elif '/' in val:
            #    up_val = (float(val.split('/')[0])+0.)/(up_norm+0.)
            #    do_val = (float(val.split('/')[1])+0.)/(do_norm+0.)
            #    #new_val = str(round(up_val,4))+'/'+str(round(do_val,4))
            #    new_val = '{:.4f}/{:.4f}'.format(up_val, do_val) 
            else: 
                #up_val = (float(val)+0.)/(up_norm+0.)
                #new_val = str(round(up_val,4))
                new_val = '-'
            #print(nuis_line_f[idx], new_nuis_line_f[idx])
            new_nuis_line_f[idx] = new_val
            #print(nuis_line_f[idx], new_nuis_line_f[idx])
            print(' -- Replaced val: '+new_val+' ('+val+')')
    
    #print(nuis_line_f)
    #print(new_nuis_line_f)
    print(' - Reconstructing line')
    nuis_line_s = nuis_line.split(' ')
    new_nuis_line_s = [] #copy.deepcopy(nuis_line_s)
    nuis_idx = 0
    skip_blanc = 0
    for idx,bit in enumerate(nuis_line_s):
        if bit == nuis_line_f[nuis_idx]:
            add_str = ''
            len_diff = len(nuis_line_f[nuis_idx]) - len(new_nuis_line_f[nuis_idx])
            if len_diff > 0: add_str = ' '*len_diff
            if len_diff < 0: skip_blanc = abs(len_diff)
            #new_nuis_line_s[idx] = new_nuis_line_f[nuis_idx]
            new_nuis_line_s.append(new_nuis_line_f[nuis_idx]+add_str)
            nuis_idx += 1
            if nuis_idx >= len(nuis_line_f): nuis_idx -= 1
        else:
            if bit == '':
                if skip_blanc > 0:
                    skip_blanc -= 1
                    continue
                else: new_nuis_line_s.append(bit)
            else:
                new_nuis_line_s.append(bit)
    new_nuis_line = ' '.join(new_nuis_line_s)
    print(' -- Old line: '+nuis_line)
    print(' -- New line: '+new_nuis_line)
            
    
    
    print(' - Writing')
    o_file = open(args.datacard, 'w')
    #lines = o_file.readlines()
    
    for line in lines:
        if nuis_line in line:
            o_file.write(new_nuis_line+'\n')
        else:
            o_file.write(line)
    
    o_file.close()



 
