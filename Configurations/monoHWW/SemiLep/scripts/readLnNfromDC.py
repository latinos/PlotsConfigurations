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
args = parser.parse_args()

o_file = open(args.datacard, 'r')
lines = o_file.readlines()
o_file.close()

proc_line = ''
nuis_line = '' 
for line in lines:
    if line.startswith('process') and 'Wjets' in line:
        proc_line = line.replace('\n', '')
    if line.startswith(args.nuis):
        nuis_line = line.replace('\n', '')

def split_line(line):
    tmp_line = line.split(' ')
    while '' in tmp_line:
        tmp_line.remove('')
    return tmp_line

proc_line_f = split_line(proc_line)
nuis_line_f = split_line(nuis_line)

print('proc line : '+str(proc_line_f), len(proc_line_f))
print('nuis line : '+str(nuis_line_f), len(nuis_line_f))

n_nuis = len(nuis_line_f)

for idx in range(-1, (n_nuis-1)*-1, -1):
    print(idx, proc_line_f[idx], nuis_line_f[idx])
