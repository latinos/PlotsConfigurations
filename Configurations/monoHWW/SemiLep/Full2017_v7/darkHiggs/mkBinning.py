import os
import copy
import ROOT
import argparse

parser = argparse.ArgumentParser(description = "Receive the parameters")
parser.add_argument('--config', action = 'store', type = str, dest = 'cfg', help = 'Input configuration file')
parser.add_argument('--var'   , action = 'store', type = str, dest = 'var', default='newBDT_Ada13Var', help = 'Variable to optimize binning')
parser.add_argument('--cut'   , action = 'store', type = str, dest = 'cut', default='InCh_SR', help = 'Cut to optimize binning')
parser.add_argument('--last-nbins'  , action = 'store', type = int, dest = 'l_nbins', default=3, help = 'Optimize last n bins')
parser.add_argument('--events-bkg'  , action = 'store', type = int, dest = 'n_event', default=20, help = 'Request at least n events in bkg bin')
args = parser.parse_args()


handle = open(args.cfg, 'r')
exec(handle)
handle.close()

cuts = {}
handle = open(cutsFile, 'r')
exec(handle)
handle.close()

variables = {}
handle = open(variablesFile, 'r')
exec(handle)
handle.close()

samples = {}
handle = open(samplesFile, 'r')
exec(handle)
handle.close()

nuisances = {}
structure = {}
handle = open(structureFile, 'r')
exec(handle)
handle.close()


if not args.var in variables: raise IOError('Variable "'+args.var+'" not found in '+variablesFile)
if not args.cut in cuts: raise IOError('Cut "'+args.cut+'" not found in '+cutsFile)

bkg  = [samp for samp in structure if not structure[samp]['isSignal'] and not structure[samp]['isData']]
top  = ['top']
wjet = ['Wjets']

n_bins = variables[args.var]['range'][0]


r_file_n = outputDir+'/plots_'+tag+'.root'
r_file = ROOT.TFile(r_file_n)
root_dir = args.cut+'/'+args.var+'/'

bkg_hist  = None
top_hist  = None
wjet_hist = None

print('Adding histograms:')
for samp in bkg:
    histo_name = root_dir + 'histo_' + samp 
    curr_histo = r_file.Get(histo_name)
    print(' - '+histo_name)    

    if bkg_hist is None: bkg_hist = copy.deepcopy(curr_histo)
    else: bkg_hist.Add(curr_histo)

    if samp in top:
        if top_hist is None: top_hist = copy.deepcopy(curr_histo)
        else: top_hist.Add(curr_histo)
        
    if samp in wjet:
        if wjet_hist is None: wjet_hist = copy.deepcopy(curr_histo)
        else: wjet_hist.Add(curr_histo)

start_bin = n_bins
for bin_idx in range(args.l_nbins):
    for ib in range(start_bin,0,-1):
        nbkg  = bkg_hist.Integral(ib,start_bin)
        ntop  = top_hist.Integral(ib,start_bin)
        nwjet = wjet_hist.Integral(ib,start_bin)
        if nbkg > args.n_event and ntop > 1 and nwjet > 1:
            start_bin = ib
            print(str(bin_idx)+' bin found: '+str(bkg_hist.GetBinLowEdge(ib))+ ', counts: '+str(nbkg)+', '+str(nwjet)+', '+str(ntop))
            break




