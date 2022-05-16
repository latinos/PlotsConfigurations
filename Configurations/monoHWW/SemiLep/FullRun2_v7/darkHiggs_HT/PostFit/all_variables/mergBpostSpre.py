import os
import ROOT
import argparse

parser = argparse.ArgumentParser()
parser.add_argument('--config'      , type=str, help='Configuration file (variables.py)')
parser.add_argument('--post-fit'    , type=str, help='Root file containing postfit histograms')
parser.add_argument('--pre-fit'     , type=str, help='Root file containing prefit histograms')
parser.add_argument('-o', '--output', type=str, help='Name of output file')
args = parser.parse_args()

handle = open(args.config, 'r')
exec(handle)
handle.close()

variables = {}
handle = open(variablesFile, 'r')
exec(handle)
handle.close()

cuts = {}
handle = open(cutsFile, 'r')
exec(handle)
handle.close()

structure = {}
handle = open(structureFile, 'r')
exec(handle)
handle.close()

signal = []
backg  = []
for samp in structure:
    if structure[samp]['isSignal'] > 0.: signal.append(samp)
    else: backg.append(samp)

# Output file is copy of post-fit
os.system('cp '+args.post_fit+' '+args.output)

def sync_hist(i_hist, o_hist):
    n_bins = o_hist.GetNbinsX()
    for i_bin in range(n_bins+2):
        i_val = i_hist.GetBinContent(i_bin)
        o_hist.SetBinContent(i_bin, i_val)
    

i_file = ROOT.TFile(args.pre_fit)
o_file = ROOT.TFile(args.output, 'UPDATE')
for cut in cuts:
    for var in variables:
        for sig in signal:
            h_name = cut+'/'+var+'/histo_'+sig
            #print(h_name)
            i_hist = i_file.Get(h_name)
            o_hist = o_file.Get(h_name)
            #print(i_hist, o_hist)

            if not i_hist: 
                print('WARNING: "'+h_name+'" did not exist in "'+args.pre_fit+'", -> skipping')
                continue
            if not o_hist: 
                print('WARNING: "'+h_name+'" did not exist in "'+args.output+'", -> skipping')
                continue

            sync_hist(i_hist, o_hist)

            o_file.cd(cut+'/'+var)
            o_hist.Write('', ROOT.TObject.kOverwrite)
            o_file.cd()

i_file.Close()
o_file.Close()
