import os
import math
import copy
import ROOT
import argparse

parser = argparse.ArgumentParser(description = "Receive the parameters")
parser.add_argument('--config', action = 'store', type = str, dest = 'cfg', help = 'Input configuration file')
parser.add_argument('--var'   , action = 'store', type = str, dest = 'var', default='newBDT_Ada13Var', help = 'Variable to optimize binning')
parser.add_argument('--cut'   , action = 'store', type = str, dest = 'cut', default='InCh_SR', help = 'Cut to optimize binning')
parser.add_argument('--last-nbins'  , action = 'store', type = int, dest = 'l_nbins', default=3, help = 'Optimize last n bins')
parser.add_argument('--signal'      , action = 'store', type = str, dest = 'signal', default='darkHiggs_mhs_160_mx_100_mZp_400', help = 'Name of signal sample')

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

legend = {}
groupPlot = {}
plot = {}
handle = open(plotFile, 'r')
exec(handle)
handle.close()


if not args.var in variables: raise IOError('Variable "'+args.var+'" not found in '+variablesFile)
if not args.cut in cuts: raise IOError('Cut "'+args.cut+'" not found in '+cutsFile)
if not args.signal in samples: raise IOError('signal "'+args.signal+'" not found in '+samplesFile)

bkg_dict = {}
for part in groupPlot:
    if groupPlot[part]['isSignal']: continue
    bkg_dict[part] = {}
    bkg_dict[part]['total'] = 0.
    bkg_dict[part]['lastn'] = 0.

sng_dict = {}
for part in groupPlot:
    if not groupPlot[part]['isSignal']: continue
    if not args.signal in part: continue
    sng_dict[part] = {}
    sng_dict[part]['total'] = 0.
    sng_dict[part]['lastn'] = 0.

r_file_n = outputDir+'/plots_'+tag+'.root'
r_file = ROOT.TFile(r_file_n)
if not r_file: print(r_file_n+' not found')
root_dir = args.cut+'/'+args.var+'/'
for part in groupPlot:
    #print(part)
    if not part in bkg_dict and not part in sng_dict: continue
    #print('found')
    for samp in groupPlot[part]['samples']:
        histo_name = root_dir + 'histo_' + samp
        #print(histo_name)
        curr_histo = r_file.Get(histo_name)
        n_bins = curr_histo.GetNbinsX()    #Integral(1, ratio.GetNbinsX()+1) 
        if part in bkg_dict:
                bkg_dict[part]['total'] += curr_histo.Integral(1, n_bins+1) 
                bkg_dict[part]['lastn'] += curr_histo.Integral(n_bins+1-args.l_nbins, n_bins+1) 
        if part in sng_dict:
                sng_dict[part]['total'] += curr_histo.Integral(1, n_bins+1) 
                sng_dict[part]['lastn'] += curr_histo.Integral(n_bins+1-args.l_nbins, n_bins+1) 

tot_count_bkg   = 0.
tot_count_bkg_n = 0.
tot_count_sng   = 0.
tot_count_sng_n = 0.
for part in bkg_dict:
    print('Total       '                    +part+' in '+args.cut+': '+str(bkg_dict[part]['total']))
    print('Last '+str(args.l_nbins)+' bins '+part+' in '+args.cut+': '+str(bkg_dict[part]['lastn']))
    tot_count_bkg   += bkg_dict[part]['total']
    tot_count_bkg_n += bkg_dict[part]['lastn']
for part in sng_dict:
    print('Total       '                    +part+' in '+args.cut+': '+str(sng_dict[part]['total']))
    print('Last '+str(args.l_nbins)+' bins '+part+' in '+args.cut+': '+str(sng_dict[part]['lastn']))
    tot_count_sng   += sng_dict[part]['total']
    tot_count_sng_n += sng_dict[part]['lastn']

sig_tot   = tot_count_sng/math.sqrt(tot_count_sng + tot_count_bkg)
sig_tot_n = tot_count_sng_n/math.sqrt(tot_count_sng_n + tot_count_bkg_n)
print('Total in       '+args.cut+': background '+str(tot_count_bkg)+', signal '+str(tot_count_sng)+', S/sqrt(S+B) '+str(sig_tot))
print('Last '+str(args.l_nbins)+' bins in '+args.cut+': background '+str(tot_count_bkg_n)+', signal '+str(tot_count_sng_n)+', S/sqrt(S+B) '+str(sig_tot_n))
