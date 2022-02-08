import os
import math
import copy
import ROOT
import argparse

parser = argparse.ArgumentParser(description = "Receive the parameters")
parser.add_argument('--config', action = 'store', type = str, dest = 'cfg', help = 'Input configuration file')
parser.add_argument('--var'   , action = 'store', type = str, dest = 'var', default='newBDT_Ada13Var', help = 'Variable to optimize binning (list allowed)')
parser.add_argument('--cut'   , action = 'store', type = str, dest = 'cut', default='InCh_SR', help = 'Cut to optimize binning')
parser.add_argument('--last-nbins'  , action = 'store', type = int, dest = 'l_nbins', default=1, help = 'Optimize last n bins')
parser.add_argument('--signal'      , action = 'store', type = str, dest = 'signal', default='darkHiggs_mhs_160_mx_100_mZp_500', help = 'Name of signal sample')
args = parser.parse_args()


handle = open(args.cfg, 'r')
exec(handle)
handle.close()

#cuts = {}
#handle = open(cutsFile, 'r')
#exec(handle)
#handle.close()
#
#variables = {}
#handle = open(variablesFile, 'r')
#exec(handle)
#handle.close()
#
#samples = {}
#handle = open(samplesFile, 'r')
#exec(handle)
#handle.close()

nuisances = {}
structure = {}
handle = open(structureFile, 'r')
exec(handle)
handle.close()

def last_nbins_content(hist, last_n):
    n_bins = hist.GetNbinsX()
    b_sum = 0.
    for i_bin in range(n_bins+1-last_n, n_bins+1):
        b_sum += hist.GetBinContent(i_bin)
    return b_sum

#if not args.cut in cuts: raise IOError('Cut "'+args.cut+'" not found in '+cutsFile)

bkg  = [samp for samp in structure if not structure[samp]['isSignal'] and not structure[samp]['isData']]
print(bkg)

var_list = args.var.split(',')

if 'ALL' in args.signal or 'all' in args.signal: 
    sig_list = [samp for samp in structure if structure[samp]['isSignal']]
else:
    sig_list = args.signal.split(',')
for var in var_list:
    print('Variable: '+var)
    #if not var in variables: raise IOError('Variable "'+var+'" not found in '+variablesFile)
    
    #n_bins = variables[var]['range'][0]
    
    r_file_n = outputDir+'/plots_'+tag+'.root'
    r_file = ROOT.TFile(r_file_n)
    if not r_file: print(r_file_n+' not found')
    print(r_file_n)
    root_dir = args.cut+'/'+var+'/'
    
    bkg_hist  = None
    #top_hist  = None
    #wjet_hist = None
    sgn_hist  = None
    
    #print('Adding histograms:')
    for samp in bkg:
        histo_name = root_dir + 'histo_' + samp 
        curr_histo = r_file.Get(histo_name)
        if not curr_histo: print(histo_name+' not found')
        #print(' - '+histo_name)    
    
        if bkg_hist is None: bkg_hist = copy.deepcopy(curr_histo)
        else: bkg_hist.Add(curr_histo)
   
    n_bkg = last_nbins_content(bkg_hist, args.l_nbins) 

    for signal in sig_list: 
        print(' - Signal: '+signal) 
        # get signal histo
        histo_name = root_dir + 'histo_' + signal
        curr_histo = r_file.Get(histo_name)
        sgn_hist = copy.deepcopy(curr_histo)
    
        n_sgn = last_nbins_content(sgn_hist, args.l_nbins) 
       
        sig = (n_sgn + 0.) / (math.sqrt(n_bkg + n_sgn) + 0.)
        print(' - Significance of last '+str(args.l_nbins)+' bins: '+ str(sig) + ' ('+str(n_sgn) + ', ' + str(n_bkg) + ')') 
