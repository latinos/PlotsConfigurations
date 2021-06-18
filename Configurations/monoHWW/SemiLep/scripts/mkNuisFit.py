import os
import re
import sys
import json
import time
import copy
import ROOT
import argparse
import subprocess

parser = argparse.ArgumentParser()
parser.add_argument("--config", help="configuration file", type=str)
#parser.add_argument("-r", "--redo", help="forcefully redo comma seperated samples", type=str)
#parser.add_argument("-e", "--exclude", help="skip comma seperated samples", type=str)
parser.add_argument("-c", "--cut", help="cut to fit", type=str)
parser.add_argument("-v", "--var", help="var to fit", type=str)
parser.add_argument("-s", "--sample", help="sample to fit", type=str)
parser.add_argument("-n", "--nuis", help="nuisance to fit ", type=str)
parser.add_argument("--no-scale", action = 'store_true', help="do not scale the samples to 1/n")
args = parser.parse_args()


handle = open(args.config, 'r')
exec(handle)
handle.close()

#cuts = {}
#handle = open(cutsFile, 'r')
#exec(handle)
#handle.close()
#
#samples = {}
#handle = open(samplesFile, 'r')
#exec(handle)
#handle.close()
#
#nuisances = {}
#handle = open(nuisancesFile, 'r')
#exec(handle)
#handle.close()
#
#structure = {}
#handle = open(structureFile, 'r')
#exec(handle)
#handle.close()


r_file = ROOT.TFile(outputDir+'/plots_'+tag+'.root')

samples = args.sample.split(',')
for sample in samples:
    nom_name = args.cut+'/'+args.var+'/histo_'+sample
    nom = r_file.Get(nom_name)
    up = r_file.Get(nom_name+'_'+args.nuis+'Up')
    do = r_file.Get(nom_name+'_'+args.nuis+'Down')

    up_r = copy.deepcopy(up)
    up_r.Divide(nom)
    up_r.Draw()
    raw_input('Up var')

    do_r = copy.deepcopy(do)
    do_r.Divide(nom)
    do_r.Draw()
    raw_input('Do var')


