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
parser.add_argument('--signal'      , action = 'store', type = str, dest = 'signal', default='ALL', help = 'Name of signal sample')
parser.add_argument('--to-data'     , action = 'store_true', help = 'Normalize to data')

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

#samples = {}
#handle = open(samplesFile, 'r')
#exec(handle)
#handle.close()

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
#if not args.signal in samples: raise IOError('signal "'+args.signal+'" not found in '+samplesFile)

bkg_dict = {}
for part in groupPlot:
    if groupPlot[part]['isSignal']: continue
    bkg_dict[part] = {}
    bkg_dict[part]['total'] = []
    bkg_dict[part]['err2'] = []
    bkg_dict[part]['rel'] = []
tot_bkg_dict = {}
tot_bkg_dict['ALL'] = {}
tot_bkg_dict['ALL']['total'] = []

sng_dict = {}
for part in structure:
    if not structure[part]['isSignal']: continue
    #if not args.signal in part: continue
    if not 'ALL' in args.signal:
        if not args.signal in part: continue
    sng_dict[part] = {}
    sng_dict[part]['total'] = []
    sng_dict[part]['err2'] = []
    sng_dict[part]['rel'] = []

data_dict = {}
data_dict['DATA'] = {}
data_dict['DATA']['total'] = []


r_file_n = outputDir+'/plots_'+tag+'.root'
r_file = ROOT.TFile(r_file_n)
if not r_file: print(r_file_n+' not found')
root_dir = args.cut+'/'+args.var+'/'

tot_bins = None
# Fill bkg's 
for part in bkg_dict:
    for samp in groupPlot[part]['samples']:
        histo_name = root_dir + 'histo_' + samp
        curr_histo = r_file.Get(histo_name)
        if not curr_histo:
            print('Histogram not found: '+histo_name)
            continue
        n_bins = curr_histo.GetNbinsX()
        if tot_bins is None: tot_bins = n_bins
        if not tot_bins == n_bins: print('Bins Issue')
        if not len(bkg_dict[part]['total']) == n_bins: 
            bkg_dict[part]['total'] = [0]*n_bins
            bkg_dict[part]['err2'] = [0]*n_bins
            bkg_dict[part]['rel'] = [1.]*n_bins
        if not len(tot_bkg_dict['ALL']['total']) == n_bins: 
            tot_bkg_dict['ALL']['total'] = [0]*n_bins
        for i_bin in range(1,n_bins+1):
            bkg_dict[part]['total'][i_bin-1] += curr_histo.GetBinContent(i_bin)
            bkg_dict[part]['err2'][i_bin-1] += curr_histo.GetBinError(i_bin)**2
            tot_bkg_dict['ALL']['total'][i_bin-1] += curr_histo.GetBinContent(i_bin)

# Fill sng's
for samp in sng_dict:
    histo_name = root_dir + 'histo_' + samp
    curr_histo = r_file.Get(histo_name)
    if not curr_histo:
        print('Histogram not found: '+histo_name)
        continue
    n_bins = curr_histo.GetNbinsX()
    if tot_bins is None: tot_bins = n_bins
    if not tot_bins == n_bins: print('Bins Issue')
    if not len(sng_dict[samp]['total']) == n_bins: 
        sng_dict[samp]['total'] = [0]*n_bins
        sng_dict[samp]['err2'] = [0]*n_bins
        sng_dict[samp]['rel'] = [1.]*n_bins
    for i_bin in range(1,n_bins+1):
        sng_dict[samp]['total'][i_bin-1] += curr_histo.GetBinContent(i_bin)
        sng_dict[samp]['err2'][i_bin-1] += curr_histo.GetBinError(i_bin)**2

# Fill data
for samp in data_dict:
    histo_name = root_dir + 'histo_' + samp
    curr_histo = r_file.Get(histo_name)
    if not curr_histo:
        print('Histogram not found: '+histo_name)
        continue
    n_bins = curr_histo.GetNbinsX()
    if tot_bins is None: tot_bins = n_bins
    if not tot_bins == n_bins: print('Bins Issue')
    if not len(data_dict[samp]['total']) == n_bins: 
        data_dict[samp]['total'] = [0]*n_bins
    for i_bin in range(1,n_bins+1):
        data_dict[samp]['total'][i_bin-1] += curr_histo.GetBinContent(i_bin)

# Set relatives
for idx in range(tot_bins):
    for part in bkg_dict:
        val = float(bkg_dict[part]['total'][idx])
        if args.to_data: norm = max(float(data_dict['DATA']['total'][idx]), 0.00001)
        else           : norm = max(float(tot_bkg_dict['ALL']['total'][idx]), 0.00001)
        bkg_dict[part]['rel'][idx] = val/norm
    for part in sng_dict:
        val = float(sng_dict[part]['total'][idx])
        if args.to_data: norm = max(float(data_dict['DATA']['total'][idx]), 0.00001)
        else           : norm = max(float(tot_bkg_dict['ALL']['total'][idx]), 0.00001)
        sng_dict[part]['rel'][idx] = val/norm

# Prints
print('__BACKGROUNDS__')
for part in bkg_dict:
    #print('  - '+part+': '+str(bkg_dict[part]['rel']))
    print('  - '+part+':')
    for idx in range(-1*args.l_nbins, 0):
        y_t = bkg_dict[part]['total'][idx]/max(bkg_dict[part]['rel'][idx], 0.00001)
        y = bkg_dict[part]['total'][idx]
        y_r = bkg_dict[part]['rel'][idx]
        e = math.sqrt(bkg_dict[part]['err2'][idx])
        e_r = e/max(y_t, 0.00001)
        info_str = 'yield {0:.2f} ({1:.2f}%),\t error {2:.2f} ({3:.2f}%)'.format(y, y_r*100., e, e_r*100.)
        print('    - bin '+str(idx)+': '+info_str)

print('__SIGNAL__')
for part in sng_dict:
    print('  - '+part+': '+str(sng_dict[part]['rel']))


