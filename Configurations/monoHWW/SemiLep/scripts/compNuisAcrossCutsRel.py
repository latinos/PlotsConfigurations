import os
import math
import copy
import ROOT
import argparse
from collections import OrderedDict
import LatinoAnalysis.ShapeAnalysis.tdrStyle as tdrStyle

parser = argparse.ArgumentParser(description = "Receive the parameters")
parser.add_argument('--config', action = 'store', type = str,               help = 'Input configuration file', default=None)
parser.add_argument('--root-file',                type = str,               help = 'root file path', default=None)
parser.add_argument('--var'   , action = 'store', type = str, dest = 'var', help = 'Variable, should not matter')
parser.add_argument('--cut1'  , action = 'store', type = str, dest = 'cut1', help = 'Cut1 (ratio = cut1/cut2)')
parser.add_argument('--cut2'  , action = 'store', type = str, dest = 'cut2', help = 'Cut2 (ratio = cut1/cut2)')
parser.add_argument('--y-title'  , action = 'store', type = str, dest = 'y_title', help = 'Y axis title', default='')
parser.add_argument('--as-lnN',                                             help='treat, "AsLnN" indeed as lnN', action='store_true')
parser.add_argument('--save',                                               help='save the table', action='store_true')
parser.add_argument('-o', '--output',                                       help='output dir', default='.', type=str)
parser.add_argument('-b', '--batch', help='Run in batch mode', action='store_true')

args = parser.parse_args()

# Open root file
if not args.config is None: 
    handle = open(args.config, 'r')
    exec(handle)
    handle.close()
    
    samples = {}
    handle = open(samplesFile, 'r')
    exec(handle)
    handle.close()
    
    nuisances = {}
    handle = open(nuisancesFile, 'r')
    exec(handle)
    handle.close()

    variables = {}
    handle = open(variablesFile, 'r')
    exec(handle)
    handle.close()
 
    plot = {}
    groupPlot = {}
    legend = {}
    handle = open(plotFile, 'r')
    exec(handle)
    handle.close()
    

    # Collect all lnN nuis
    nuises_lnn = []
    for nuis in nuisances:
        if  nuisances[nuis]['type'] == 'lnN':
            if not nuis in nuises_lnn: nuises_lnn.append(nuis)

    # Collect AsLnN nuis
    nuises_as_lnn = []
    nuises_as_lnn_names = []
    for nuis in nuisances:
        if 'AsLnN' in nuisances[nuis] and int(nuisances[nuis]['AsLnN']) > 0:
            nuis_name =  nuisances[nuis]['name']
            if not nuis in nuises_as_lnn: nuises_as_lnn.append(nuis)
            if not nuis_name in nuises_as_lnn_names: nuises_as_lnn_names.append(nuis_name)

    r_file = ROOT.TFile(outputDir+'/plots_'+tag+'.root')
elif not args.root_file is None:
    r_file = ROOT.TFile(args.root_file)
    nuisances = {}
    plot = {}
    variables = { args.var : 'variable'}
    nuises_lnn = []
    nuises_as_lnn = []
    nuises_as_lnn_names = []
else:
    raise ValueError('--config and --root-file can\'t both be None')

cuts = [args.cut1, args.cut2] #args.cut.split(',')

### Histogram tools
# Clone histo to empty one
def make_clear_copy(hist):
    clear_hist = hist.Clone()
    n_bins = clear_hist.GetNbinsX()
    for i_bin in range(n_bins+2):
        clear_hist.SetBinContent(i_bin, 0.)
        clear_hist.SetBinError(i_bin, 0.)
    return clear_hist

# Update error2 hists 
def update_err2(err2_up, err2_do, nominal, hist_up, hist_do):
    n_bins = nominal.GetNbinsX()
    for i_bin in range(n_bins+2):
        up_val = hist_up.GetBinContent(i_bin)
        do_val = hist_do.GetBinContent(i_bin)
        nom_val = nominal.GetBinContent(i_bin)

        e2_up_val = err2_up.GetBinContent(i_bin)
        e2_do_val = err2_do.GetBinContent(i_bin)

        if up_val > nom_val:
            new_e2_up_val = e2_up_val + (up_val - nom_val)**2
            new_e2_do_val = e2_do_val + (do_val - nom_val)**2
        else:
            new_e2_up_val = e2_up_val + (do_val - nom_val)**2
            new_e2_do_val = e2_do_val + (up_val - nom_val)**2

        err2_up.SetBinContent(i_bin, new_e2_up_val)
        err2_do.SetBinContent(i_bin, new_e2_do_val)

# Sqrt of hist
def sqrt_hist(hist):
    sqrt_hist = hist.Clone()
    n_bins = sqrt_hist.GetNbinsX()
    for i_bin in range(n_bins+2):
        val = hist.GetBinContent(i_bin)
        sqrt_hist.SetBinContent(i_bin, math.sqrt(val))
    return sqrt_hist

# Create TGraphAsymmErrors
def hists_2_tge(nominal, err_up, err_do):
    tge = ROOT.TGraphAsymmErrors()
    n_bins = nominal.GetNbinsX()
    for i_bin in range(n_bins):
        y = nominal.GetBinContent(i_bin+1)
        y_e_up = err_up.GetBinContent(i_bin+1)
        y_e_do = err_do.GetBinContent(i_bin+1)
        x = nominal.GetBinCenter(i_bin+1)
        x_e = (nominal.GetBinWidth(i_bin+1) +0.)/(2.)
        
        tge.SetPoint(i_bin, x, y)
        tge.SetPointError(i_bin, x_e, x_e, y_e_do, y_e_up)
    return tge

### Real work
# Collect samples to do 
samps = []
keys = r_file.Get(cuts[0]).Get(args.var).GetListOfKeys()
for skey in keys:
    name = skey.GetName()
    if not name.startswith('histo_'): continue
    if not name.endswith('Up') and not name.endswith('Down'):
        samp = name.replace('histo_', '')
        if 'darkHiggs' in samp: continue 
        if 'QCDscale' in samp: continue 
        if 'pdf_weight' in samp: continue 
        if 'DATA' in samp: continue 
        if len(plot) > 0 and not samp in plot: continue 
        #print(name, samp)
        if samp not in samps: 
            samps.append(samp)
samps.sort()
print('Found Samples: '+str(samps))

# Collect nuisances to do
nuises = []
keys = r_file.Get(cuts[0]).Get(args.var).GetListOfKeys()
for skey in keys:
    name = skey.GetName()
    if not name.startswith('histo_'): continue
    for samp in samps:
        if not name.startswith('histo_'+samp+'_'): continue
        if name.endswith('Down'):
            nuis = name.replace('histo_'+samp+'_', '').replace('Down', '')
            if args.as_lnN and nuis in nuises_as_lnn_names: continue
            #print(name, samp, nuis)
            if not nuis in nuises: nuises.append(nuis)
nuises.sort()
print('Found Nuisances: '+str(nuises))
print('Found lnN Nuisances: '+str(nuises_lnn))
if args.as_lnN: print('Found as lnN Nuisances: '+str(nuises_as_lnn_names))

# Initialize dict
count_dict = {}
nuises_lnn_names = []
for cut in cuts:
    count_dict[cut] = {}
    count_dict[cut]['nominal'] = None
    count_dict[cut]['data']    = None
    for nuis in nuises:
        count_dict[cut][nuis] = {}
        count_dict[cut][nuis]['up'] = None
        count_dict[cut][nuis]['do'] = None
    for nuis in nuises_lnn:
        nuis_name = nuisances[nuis]['name']
        if not nuis_name in nuises_lnn_names: nuises_lnn_names.append(nuis_name)
        count_dict[cut][nuis_name] = {}
        count_dict[cut][nuis_name]['up'] = None
        count_dict[cut][nuis_name]['do'] = None
    if args.as_lnN:
        for nuis in nuises_as_lnn:
            nuis_name = nuisances[nuis]['name']
            if not nuis_name in nuises_as_lnn_names: nuises_as_lnn_names.append(nuis_name)
            count_dict[cut][nuis_name] = {}
            count_dict[cut][nuis_name]['up'] = None
            count_dict[cut][nuis_name]['do'] = None
nuises_lnn_names.sort()

# Fill count dict
for cut in cuts:
    print('Filling cut: '+cut)
    dat_name = cut + '/' + args.var + '/histo_DATA'
    count_dict[cut]['data'] = r_file.Get(dat_name).Clone()
    for samp in samps:

        # Fill nominal
        nom = None
        nom_name = cut + '/' + args.var + '/histo_' + samp
        nom = r_file.Get(nom_name).Clone()
        n_nom = nom.Integral()
        if count_dict[cut]['nominal'] is None: count_dict[cut]['nominal'] = nom
        else: count_dict[cut]['nominal'].Add(nom)

        # Fill nuisances
        for nuis in nuises:
            up = r_file.Get(nom_name+'_'+nuis+'Up') 
            do = r_file.Get(nom_name+'_'+nuis+'Down')

            # If up or do histo does not exist, then nuis does not exist for this samp
            if not up: up = nom.Clone()
            if not do: do = nom.Clone()

            if count_dict[cut][nuis]['up'] is None: count_dict[cut][nuis]['up'] = up
            else: count_dict[cut][nuis]['up'].Add(up)           

            if count_dict[cut][nuis]['do'] is None: count_dict[cut][nuis]['do'] = do
            else: count_dict[cut][nuis]['do'].Add(do)           

        for nuis in nuises_lnn:
            nuis_name = nuisances[nuis]['name']
            lnn = 1.
            if samp in nuisances[nuis]['samples']: 
                lnn = float(nuisances[nuis]['samples'][samp])

            up = nom.Clone()
            up.Scale(lnn)
            do = nom.Clone()
            do.Scale(2.-lnn)

            if count_dict[cut][nuis_name]['up'] is None: count_dict[cut][nuis_name]['up'] = up
            else: count_dict[cut][nuis_name]['up'].Add(up)           

            if count_dict[cut][nuis_name]['do'] is None: count_dict[cut][nuis_name]['do'] = do
            else: count_dict[cut][nuis_name]['do'].Add(do)          

        if args.as_lnN:
            for nuis in nuises_as_lnn:
                nuis_name = nuisances[nuis]['name']
                #print(nom_name+'_'+nuis_name+'Up')
                up = r_file.Get(nom_name+'_'+nuis+'Up') 
                do = r_file.Get(nom_name+'_'+nuis+'Down')

                # If up or do histo does not exist, then nuis does not exist for this samp
                if not up: up = nom.Clone()
                else: 
                    n_up = up.Integral() 
                    lnn_up = (n_up+0.)/(n_nom+0.)
                    up = nom.Clone()
                    up.Scale(lnn_up)
                    
                if not do: do = nom.Clone()
                else:
                    n_do = do.Integral()
                    lnn_do = (n_do+0.)/(n_nom+0.)
                    do = nom.Clone()
                    do.Scale(lnn_do)

                if count_dict[cut][nuis_name]['up'] is None: count_dict[cut][nuis_name]['up'] = up
                else: count_dict[cut][nuis_name]['up'].Add(up)           

                if count_dict[cut][nuis_name]['do'] is None: count_dict[cut][nuis_name]['do'] = do
                else: count_dict[cut][nuis_name]['do'].Add(do)          
 
        #print('-- Nominal 7th bin content: '+str(count_dict[cut]['nominal'].GetBinContent(7)))

# Create fractions cut1/cut2 or cuts[0]/cuts[1]
r_cut = cuts[0]+'_by_'+cuts[1]
count_dict[r_cut] = {}
for key in ['data', 'nominal']:
    count_dict[r_cut][key] = count_dict[cuts[0]][key].Clone()
    count_dict[r_cut][key].Divide(count_dict[cuts[1]][key])

for nuis in count_dict[cuts[0]]:
    if nuis in ['data', 'nominal']: continue
    count_dict[r_cut][nuis] = {}
    for var in ['up', 'do']:
        count_dict[r_cut][nuis][var] = count_dict[cuts[0]][nuis][var].Clone()
        count_dict[r_cut][nuis][var].Divide(count_dict[cuts[1]][nuis][var])

# Create error hists
for cut in count_dict:
    count_dict[cut]['err2_up'] = make_clear_copy(count_dict[cut]['nominal'])
    count_dict[cut]['err2_do'] = make_clear_copy(count_dict[cut]['nominal'])

    for nuis in count_dict[cut]:
        if nuis in ['data', 'nominal', 'err2_up', 'err2_do']: continue
        update_err2(count_dict[cut]['err2_up'], count_dict[cut]['err2_do'], count_dict[cut]['nominal'], count_dict[cut][nuis]['up'], count_dict[cut][nuis]['do'])

    count_dict[cut]['err_up'] = sqrt_hist(count_dict[cut]['err2_up'])
    count_dict[cut]['err_do'] = sqrt_hist(count_dict[cut]['err2_do'])
    count_dict[cut]['tge'] = hists_2_tge(count_dict[cut]['nominal'], count_dict[cut]['err_up'], count_dict[cut]['err_do'])

# Create data/expected ratio's
for cut in count_dict:
    count_dict[cut]['ratio'] = count_dict[cut]['data'].Clone()
    count_dict[cut]['ratio'].Divide(count_dict[cut]['nominal'])

    count_dict[cut]['ones'] = count_dict[cut]['nominal'].Clone()
    count_dict[cut]['ones'].Divide(count_dict[cut]['nominal'])

    count_dict[cut]['r_err_up'] = count_dict[cut]['err_up'].Clone()
    count_dict[cut]['r_err_up'].Divide(count_dict[cut]['nominal'])

    count_dict[cut]['r_err_do'] = count_dict[cut]['err_do'].Clone()
    count_dict[cut]['r_err_do'].Divide(count_dict[cut]['nominal'])
    count_dict[cut]['r_tge'] = hists_2_tge(count_dict[cut]['ones'], count_dict[cut]['r_err_up'], count_dict[cut]['r_err_do'])

# Now start plotting
canvas = {}

# Set style
tdrStyle.setTDRStyle()
ROOT.TGaxis.SetExponentOffset(-0.03, 0.00,"y")
def set_axis_style(hist):
    xaxis = hist.GetXaxis()
    xaxis.SetLabelFont ( 42)
    xaxis.SetLabelOffset( 0.025)
    xaxis.SetLabelSize ( 0.1)
    xaxis.SetNdivisions ( 505)
    xaxis.SetTitleFont ( 42)
    xaxis.SetTitleOffset( 1.35)   
    xaxis.SetTitleSize ( 0.11)
    
    yaxis = hist.GetYaxis()
    yaxis.CenterTitle ( )
    yaxis.SetLabelFont ( 42)
    yaxis.SetLabelOffset( 0.02)
    yaxis.SetLabelSize ( 0.1)
    yaxis.SetNdivisions ( 505)
    yaxis.SetTitleFont ( 42)
    yaxis.SetTitleOffset( .6)
    yaxis.SetTitleSize ( 0.11)


for cut in count_dict:

    # Get ymax
    max_l = []
    min_l = []
    for curve in ['data', 'nominal']:
        max_l.append(count_dict[cut][curve].GetBinContent(count_dict[cut][curve].GetMaximumBin()))
        min_l.append(count_dict[cut][curve].GetBinContent(count_dict[cut][curve].GetMinimumBin()))
    max_y = max(max_l)
    min_y = min(min_l)

    canvas[cut] = {}
    canvas[cut]['c'] = ROOT.TCanvas('canvas_'+cut, cut, 800, 800)
    canvas[cut]['p1'] = ROOT.TPad('pad1_'+cut, 'pad1',0,0.3,1,1)
    canvas[cut]['p1'].SetTopMargin(0.098)
    canvas[cut]['p1'].SetBottomMargin(0)
    canvas[cut]['p1'].Draw()
    canvas[cut]['p2'] = ROOT.TPad('pad2_'+cut, 'pad2',0,0,1,0.3)
    canvas[cut]['p2'].SetTopMargin(0)
    canvas[cut]['p2'].SetBottomMargin(0.392)
    canvas[cut]['p2'].Draw()

    # Upper pad
    canvas[cut]['c'].cd()
    canvas[cut]['p1'].cd() 
    # Data
    #set_axis_style(count_dict[cut]['data'])
    count_dict[cut]['data'].GetYaxis().SetRangeUser(min_y - (max_y - min_y)*0.1, max_y + (max_y - min_y)*1.)
    count_dict[cut]['data'].GetYaxis().SetTitle('Events / bin')
    if cut == r_cut: count_dict[cut]['data'].GetYaxis().SetTitle(args.y_title)
    count_dict[cut]['data'].SetLineColor(1)
    count_dict[cut]['data'].SetLineWidth(2)
    count_dict[cut]['data'].SetMarkerColor(1)
    count_dict[cut]['data'].SetMarkerSize(1)
    count_dict[cut]['data'].SetMarkerStyle(20)
    count_dict[cut]['data'].Draw('p') 
    # MC
    count_dict[cut]['nominal'].SetLineColor(601)
    count_dict[cut]['nominal'].SetLineWidth(2)
    count_dict[cut]['nominal'].SetMarkerColor(601)
    count_dict[cut]['nominal'].SetMarkerSize(1)
    count_dict[cut]['nominal'].SetMarkerStyle(20)
    count_dict[cut]['nominal'].Draw('same p')
    # Error band 
    count_dict[cut]['tge'].SetLineColor(12)
    count_dict[cut]['tge'].SetFillColor(12)
    count_dict[cut]['tge'].SetLineWidth(2)
    count_dict[cut]['tge'].SetFillStyle(3004)
    count_dict[cut]['tge'].Draw('2')
    # Legend
    canvas[cut]['leg'] = ROOT.TLegend(0.7, 0.65, 0.9, 0.85)
    canvas[cut]['leg'].SetFillColor(0)
    canvas[cut]['leg'].SetTextFont(42)
    canvas[cut]['leg'].SetTextSize(0.035)
    canvas[cut]['leg'].SetLineColor(0)
    canvas[cut]['leg'].SetShadowColor(0)
    canvas[cut]['leg'].AddEntry(count_dict[cut]['data'], 'Data', 'EPL')
    canvas[cut]['leg'].AddEntry(count_dict[cut]['nominal'], 'Expected total', 'EPL')
    canvas[cut]['leg'].AddEntry(count_dict[cut]['tge'], 'systematic error', 'F')
    canvas[cut]['leg'].Draw()

    
    # Lower pad
    canvas[cut]['c'].cd()
    canvas[cut]['p2'].cd()
    # Data
    set_axis_style(count_dict[cut]['ratio'])
    count_dict[cut]['ratio'].GetYaxis().SetRangeUser(0.8, 1.2)
    count_dict[cut]['ratio'].GetYaxis().SetTitle('Data/Expected')
    count_dict[cut]['ratio'].GetXaxis().SetTitle(variables[args.var]['xaxis'])
    count_dict[cut]['ratio'].SetLineColor(1)
    count_dict[cut]['ratio'].SetLineWidth(2)
    count_dict[cut]['ratio'].SetMarkerColor(1)
    count_dict[cut]['ratio'].SetMarkerSize(1)
    count_dict[cut]['ratio'].SetMarkerStyle(20)
    count_dict[cut]['ratio'].Draw('p') 
    # MC
    count_dict[cut]['ones'].SetLineColor(601)
    count_dict[cut]['ones'].SetLineWidth(2)
    count_dict[cut]['ones'].SetMarkerColor(601)
    count_dict[cut]['ones'].SetMarkerSize(1)
    count_dict[cut]['ones'].SetMarkerStyle(20)
    count_dict[cut]['ones'].Draw('same hist')
    # Error band 
    count_dict[cut]['r_tge'].SetLineColor(12)
    count_dict[cut]['r_tge'].SetFillColor(12)
    count_dict[cut]['r_tge'].SetLineWidth(2)
    count_dict[cut]['r_tge'].SetFillStyle(3004)
    count_dict[cut]['r_tge'].Draw('2')

    canvas[cut]['c'].Update()

if args.save:
    if not os.path.isdir(args.output): os.mkdir(args.output)
    canvas[r_cut]['c'].SaveAs(args.output+'/CutRatio_'+args.cut1+'_by_'+args.cut2+'_'+args.var+'.png')
else:
    raw_input('done') 
    
# Calculate bin by bin error importance 
def error_imp(tot_err2_up, tot_err2_do, nominal, hist_up, hist_do):
    n_bins = nominal.GetNbinsX()
    arr_up = []
    arr_do = []
    for i_bin in range(n_bins+2):
        up_val = hist_up.GetBinContent(i_bin)
        do_val = hist_do.GetBinContent(i_bin)
        nom_val = nominal.GetBinContent(i_bin)

        tot_e2_up_val = tot_err2_up.GetBinContent(i_bin)
        tot_e2_do_val = tot_err2_do.GetBinContent(i_bin)

        if up_val > nom_val:
            e2_up_val = (up_val - nom_val)**2
            e2_do_val = (do_val - nom_val)**2
        else:
            e2_do_val = (up_val - nom_val)**2
            e2_up_val = (do_val - nom_val)**2

        if tot_e2_up_val == 0.: arr_up.append(0.)
        else: arr_up.append((e2_up_val + 0.)/(tot_e2_up_val + 0.))
        if tot_e2_do_val == 0.: arr_do.append(0.)
        else: arr_do.append((e2_do_val + 0.)/(tot_e2_do_val + 0.))
    return arr_up, arr_do

# Collect bin by bin error contributions
error_imp_dict = {}
for cut in count_dict:
    error_imp_dict[cut] = {}

    for nuis in count_dict[cut]:
        if not isinstance(count_dict[cut][nuis], dict): continue
        if nuis in ['data', 'nominal', 'err2_up', 'err2_do', 'err_up', 'err_do', 'tge', 'r_tge']: continue
        print('Collecting '+nuis)
        error_imp_dict[cut][nuis] = {}
        error_imp_dict[cut][nuis]['up'] = []
        error_imp_dict[cut][nuis]['do'] = []
        error_imp_dict[cut][nuis]['up'], error_imp_dict[cut][nuis]['do'] = error_imp(count_dict[cut]['err2_up'], count_dict[cut]['err2_do'], count_dict[cut]['nominal'], count_dict[cut][nuis]['up'], count_dict[cut][nuis]['do'])

# Print bin by bin error contributions
for cut in count_dict:
    print('_____________________')
    print('Cut: '+ cut)
    n_bins = count_dict[cut]['nominal'].GetNbinsX()
    tot_up = [0.]*(n_bins+2)
    tot_do = [0.]*(n_bins+2)
    idxes = range(1, n_bins+1)

    prt_str = '{:25} :'.format(' ')
    for idx in idxes:
        prt_str += '\t{:11}'.format('Bin '+str(idx))
    print(prt_str)

    prt_str = '{:25} :'.format('Nuisance name')
    for idx in idxes:
        prt_str += '\t{:5}/{:5}'.format('up', 'down')
    print(prt_str)

    for nuis in error_imp_dict[cut]:
        prt_str = '{:25} :'.format(nuis)
        for idx in idxes:
            prt_str += '\t{:5.3f}/{:5.3f}'.format(error_imp_dict[cut][nuis]['up'][idx], error_imp_dict[cut][nuis]['do'][idx])
            tot_up[idx] += error_imp_dict[cut][nuis]['up'][idx]
            tot_do[idx] += error_imp_dict[cut][nuis]['do'][idx]
        print(prt_str)
        
    prt_str = '{:>25} :'.format('Total')
    for idx in idxes:
        prt_str += '\t{:5}/{:5}'.format(tot_up[idx], tot_do[idx])
    print(prt_str)

