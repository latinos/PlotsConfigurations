import os
import math
import copy
import ROOT
import argparse

parser = argparse.ArgumentParser(description = "Receive the parameters")
parser.add_argument('--config', action = 'store', type = str, dest = 'cfg', help = 'Input configuration file')
parser.add_argument('--var'   , action = 'store', type = str, dest = 'var', default='newBDT_Ada13Var', help = 'Variable to optimize binning (list allowed)')
parser.add_argument('--cut'   , action = 'store', type = str, dest = 'cut', default='InCh_SR', help = 'Cut to optimize binning')
parser.add_argument('--last-nbins'  , action = 'store', type = int, dest = 'l_nbins', default=3, help = 'Optimize last n bins')
parser.add_argument('--events-bkg'  , action = 'store', type = int, dest = 'n_event', default=20, help = 'Request at least n events in bkg bin')
parser.add_argument('--eff-events'  , action = 'store', type = int, dest = 'n_eff_event', default=None, help = 'Request at least n effective events in bkg bin')
parser.add_argument('--binning'  , action = 'store', type = str, dest = 'n_binning', default=None, help = 'events per bin from last to higher example: 10,10,10,20,...')
parser.add_argument('--signal'      , action = 'store', type = str, dest = 'signal', default='darkHiggs_mhs_160_mx_100_mZp_400', help = 'Name of signal sample')
parser.add_argument('-p', '--plot-sig', action = 'store_true', help = 'Plot significance vs cut')
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


if not args.cut in cuts: raise IOError('Cut "'+args.cut+'" not found in '+cutsFile)

bkg  = [samp for samp in structure if not structure[samp]['isSignal'] and not structure[samp]['isData']]
top  = ['top']
wjet = ['Wjets']

binning_list = None
if args.n_binning is not None: binning_list = [int(b) for b in args.n_binning.split(',')]

var_list = args.var.split(',')

if 'ALL' in args.signal or 'all' in args.signal: 
    sig_list = [samp for samp in structure if structure[samp]['isSignal']]
else:
    sig_list = args.signal.split(',')
for var in var_list:
    print('Variable: '+var)
    if not var in variables: raise IOError('Variable "'+var+'" not found in '+variablesFile)
    
    n_bins = variables[var]['range'][0]
    
    r_file_n = outputDir+'/plots_'+tag+'.root'
    r_file = ROOT.TFile(r_file_n)
    root_dir = args.cut+'/'+var+'/'
    
    bkg_hist  = None
    top_hist  = None
    wjet_hist = None
    sgn_hist  = None
    
    #print('Adding histograms:')
    for samp in bkg:
        histo_name = root_dir + 'histo_' + samp 
        curr_histo = r_file.Get(histo_name)
        if not curr_histo: print(histo_name+' not found')
        #print(' - '+histo_name)    
    
        if bkg_hist is None: bkg_hist = copy.deepcopy(curr_histo)
        else: bkg_hist.Add(curr_histo)
    
        if samp in top:
            if top_hist is None: top_hist = copy.deepcopy(curr_histo)
            else: top_hist.Add(curr_histo)
            
        if samp in wjet:
            if wjet_hist is None: wjet_hist = copy.deepcopy(curr_histo)
            else: wjet_hist.Add(curr_histo)

    if args.n_eff_event is not None:
        print('__effective_MC_stat__')
        start_bin = n_bins
        binning = []
        for bin_idx in range(args.l_nbins):
            nbkg = 0
            ntop = 0
            nwjet = 0
            bkg_sumW2 = 0
            top_sumW2 = 0
            wjet_sumW2 = 0
            for ib in range(start_bin,0,-1):
                nbkg += bkg_hist.GetBinContent(ib)
                ntop += top_hist.GetBinContent(ib)
                nwjet += wjet_hist.GetBinContent(ib)
                bkg_sumW2 += (bkg_hist.GetBinError(ib))**2
                top_sumW2 += (top_hist.GetBinError(ib))**2
                wjet_sumW2 += (wjet_hist.GetBinError(ib))**2
                nbkg_eff = (nbkg**2+0.)/(bkg_sumW2+0.0000000001)
                ntop_eff = (ntop**2+0.)/(top_sumW2+0.0000000001)
                nwjet_eff = (nwjet**2+0.)/(wjet_sumW2+0.0000000001)
                if nbkg_eff > args.n_eff_event:
                    start_bin = ib -1
                    binning.append(bkg_hist.GetBinLowEdge(ib))
                    print(str(bin_idx)+' bin found: '+str(bkg_hist.GetBinLowEdge(ib))+ ', counts: '+str(nbkg_eff)+', W+jets: '+str(nwjet_eff)+', top: '+str(ntop_eff)+', (yields:'+str(nbkg)+'/'+str(nwjet)+'/'+str(ntop)+')')
                    break
        binning.reverse()
        print('Binning: '+str(binning))
        print('__effective_Wjet_stat__')
        start_bin = n_bins
        binning = []
        for bin_idx in range(args.l_nbins):
            nbkg = 0
            ntop = 0
            nwjet = 0
            bkg_sumW2 = 0
            top_sumW2 = 0
            wjet_sumW2 = 0
            for ib in range(start_bin,0,-1):
                nbkg += bkg_hist.GetBinContent(ib)
                ntop += top_hist.GetBinContent(ib)
                nwjet += wjet_hist.GetBinContent(ib)
                bkg_sumW2 += (bkg_hist.GetBinError(ib))**2
                top_sumW2 += (top_hist.GetBinError(ib))**2
                wjet_sumW2 += (wjet_hist.GetBinError(ib))**2
                nbkg_eff = (nbkg**2+0.)/(bkg_sumW2+0.0000000001)
                ntop_eff = (ntop**2+0.)/(top_sumW2+0.0000000001)
                nwjet_eff = (nwjet**2+0.)/(wjet_sumW2+0.0000000001)
                if nwjet_eff > args.n_eff_event:
                    start_bin = ib -1
                    binning.append(bkg_hist.GetBinLowEdge(ib))
                    print(str(bin_idx)+' bin found: '+str(bkg_hist.GetBinLowEdge(ib))+ ', counts: '+str(nbkg_eff)+', W+jets: '+str(nwjet_eff)+', top: '+str(ntop_eff)+', (yields:'+str(nbkg)+'/'+str(nwjet)+'/'+str(ntop)+')')
                    break
        binning.reverse()
        print('Binning: '+str(binning))

    print('__yields__')
    if binning_list is None:
        start_bin = n_bins
        binning = []
        for bin_idx in range(args.l_nbins):
            for ib in range(start_bin,0,-1):
                nbkg  = bkg_hist.Integral(ib,start_bin)
                ntop  = top_hist.Integral(ib,start_bin)
                nwjet = wjet_hist.Integral(ib,start_bin)
                if nbkg > args.n_event and ntop > 1 and nwjet > 1:
                    start_bin = ib -1
                    binning.append(bkg_hist.GetBinLowEdge(ib))
                    print(str(bin_idx)+' bin found: '+str(bkg_hist.GetBinLowEdge(ib))+ ', counts: '+str(nbkg)+', W+jets: '+str(nwjet)+', top: '+str(ntop))
                    break
        binning.reverse()
        print('Binning: '+str(binning))
    else:
        start_bin = n_bins
        binning = []
        for bin_idx in range(len(binning_list)):
            for ib in range(start_bin,0,-1):
                nbkg  = bkg_hist.Integral(ib,start_bin)
                ntop  = top_hist.Integral(ib,start_bin)
                nwjet = wjet_hist.Integral(ib,start_bin)
                if nbkg > binning_list[bin_idx] and ntop > 1 and nwjet > 1:
                    start_bin = ib -1
                    binning.append(bkg_hist.GetBinLowEdge(ib))
                    print(str(bin_idx)+' bin found: '+str(bkg_hist.GetBinLowEdge(ib))+ ', counts: '+str(nbkg)+', W+jets: '+str(nwjet)+', top: '+str(ntop))
                    break
        binning.reverse()
        print('Binning: '+str(binning))

   
    for signal in sig_list: 
        # get signal histo
        histo_name = root_dir + 'histo_' + signal
        curr_histo = r_file.Get(histo_name)
        sgn_hist = copy.deepcopy(curr_histo)
        
        
        # find max significance bin
        n_bins_bkg = curr_histo.GetNbinsX()
        max_sig_bin = -1.
        max_sig = 0.
        
        sig_graph = None
        sig_graph_idx = 0
        if args.plot_sig: sig_graph = ROOT.TGraph()
        
        for bin_idx in range(1, n_bins_bkg+2, 1):
            nbkg  = bkg_hist.Integral(bin_idx,n_bins_bkg+1)
            nsgn  = sgn_hist.Integral(bin_idx,n_bins_bkg+1)
            sig = 0
            if max(nsgn, 0) > 0: sig = max(nsgn, 0)/math.sqrt(max(nbkg, 0) + max(nsgn, 0))
            low_edge = bkg_hist.GetBinLowEdge(bin_idx)
            if args.plot_sig: 
                sig_graph.SetPoint(sig_graph_idx, low_edge, sig)
                sig_graph_idx += 1
            if sig > max_sig: 
                max_sig = sig
                max_sig_bin = bkg_hist.GetBinLowEdge(bin_idx)
        
        print('Max significance bin ('+signal+'): '+str(max_sig_bin)+', with significance of '+str(max_sig))
        
        
        if args.plot_sig:
            sig_graph.Draw('AC*')
            raw_input('exit')
