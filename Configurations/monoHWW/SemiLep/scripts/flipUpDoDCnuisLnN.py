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
    
    print(' - Flippin')
    nuis_line_s = nuis_line.split(' ')
    new_nuis_line_s = copy.deepcopy(nuis_line_s)
    for idx,bit in enumerate(nuis_line_s):
        if '/' in bit:
            new_bit = bit.split('/')[1]+'/'+bit.split('/')[0]
            new_nuis_line_s[idx] = new_bit
            #print(' -- Old: '+bit+', New: '+new_bit)


    
    print(' - Reconstructing line')
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



 
