import os
import math
import copy
import ROOT
import argparse
from collections import OrderedDict
import LatinoAnalysis.ShapeAnalysis.tdrStyle as tdrStyle

parser = argparse.ArgumentParser(description = "Receive the parameters")
parser.add_argument('--config', action = 'store', type = str,               help = 'Input configuration file', default=None)
parser.add_argument('--var'   , action = 'store', type = str, dest = 'var', help = 'Variable')
parser.add_argument('--cut'  , action = 'store', type = str, dest = 'cut', help = 'Cut')
parser.add_argument('--signal'   , action = 'store', type = str, dest = 'signal', help = 'Name of signal samples (comma seperated, e.g. darkHiggs_mhs_160_mx_100_mZp_500)')
#parser.add_argument('--y-title'  , action = 'store', type = str, dest = 'y_title', help = 'Y axis title', default='S/#sqrt{S+B}')
parser.add_argument('--relative',                                           help='Relative significance', action='store_true')
parser.add_argument('--save',                                               help='Save the plot', action='store_true')
parser.add_argument('-o', '--output',                                       help='output dir', default='.', type=str)
parser.add_argument('-b', '--batch', help='Run in batch mode', action='store_true')

args = parser.parse_args()

# Open root file
handle = open(args.config, 'r')
exec(handle)
handle.close()

plot = {}
groupPlot = {}
legend = {}
handle = open(plotFile, 'r')
exec(handle)
handle.close()
    
variables = {}
handle = open(variablesFile, 'r')
exec(handle)
handle.close()

r_file = ROOT.TFile(outputDir+'/plots_'+tag+'.root')

# Collect samps
sig_samps = args.signal.split(',')
print('Found sig samples: '+str(sig_samps))
bkg_samps = []
for group in groupPlot:
    if not groupPlot[group]['isSignal']:
        for samp in groupPlot[group]['samples']:
            if not samp in bkg_samps: bkg_samps.append(samp)

for samp in plot:
    if not plot[samp]['isSignal'] and not plot[samp]['isData']:
        if not samp in bkg_samps: bkg_samps.append(samp)
print('Found bkg samples: '+str(bkg_samps))

# Digest others
var_list = args.var.split(',')
cut_list = args.cut.split(',')

### Histogram tools
# Sig graph
def make_sig_graph(sig, bkg, smooth=False, rel=False):
    bkg_tmp = bkg.Clone()
    sig_tmp = sig.Clone()

    if smooth:
        bkg_tmp.Smooth(2)
        sig_tmp.Smooth(2)

    n_bins = bkg_tmp.GetNbinsX()
    sig_graph = ROOT.TGraph()
    sig_graph_idx = 0
    max_val = 0.

    for bin_idx in range(1, n_bins+2, 1):
        nbkg  = bkg_tmp.Integral(bin_idx,n_bins+1)
        nsgn  = sig_tmp.Integral(bin_idx,n_bins+1)
        sign = 0
        if max(nsgn, 0) > 0: sign = max(nsgn, 0)/math.sqrt(max(nbkg, 0) + max(nsgn, 0))
        if sign > max_val: max_val = sign

        low_edge = bkg_tmp.GetBinLowEdge(bin_idx)
        sig_graph.SetPoint(sig_graph_idx, low_edge, sign)
        sig_graph_idx += 1

    if rel:
        #max_val = sig_graph.GetMaximum()
        #print(dir(sig_graph))
        ##sig_graph.Scale((1./(max_val+0.))) # Broken somehow
        #for idx in range(sig_graph_idx):
        #    cur_x = ROOT.Double
        #    cur_y = ROOT.Double
        #    print(sig_graph.GetPoint(idx, cur_x, cur_y))
        #    cur_y = sig_graph.GetPointY(idx)
        #    new_y = (cur_y+0.)/(max_val+0.)
        #    sig_graph.SetPointY(idx, new_y)
        print(max_val)

        sig_graph_idx = 0
        for bin_idx in range(1, n_bins+2, 1):
            nbkg  = bkg_tmp.Integral(bin_idx,n_bins+1)
            nsgn  = sig_tmp.Integral(bin_idx,n_bins+1)
            sign = 0
            if max(nsgn, 0) > 0: sign = max(nsgn, 0)/math.sqrt(max(nbkg, 0) + max(nsgn, 0))
            sign = (sign+0.)/(max_val+0.)
            low_edge = bkg_tmp.GetBinLowEdge(bin_idx)
            sig_graph.SetPoint(sig_graph_idx, low_edge, sign)
            sig_graph_idx += 1
    return sig_graph, max_val
        
### Real work
# Initialize dict
count_dict = {}
for cut in cut_list:
    count_dict[cut] = {}
    for var in var_list:
        count_dict[cut][var] = {}
        count_dict[cut][var]['bkg_total'] = None
        for samp in sig_samps:
            count_dict[cut][var][samp] = None

# Fill count dict
graph_dict = {}
for cut in cut_list:
    graph_dict[cut] = {}
    print('Filling cut: '+cut)
    for var in var_list:
        graph_dict[cut][var] = {}
        print(' - Filling var: '+var)

        base_dir = cut + '/' + var + '/'

        # Fill bkg
        for samp in bkg_samps:
            hist = r_file.Get(base_dir+'histo_'+samp)
            if count_dict[cut][var]['bkg_total'] is None: count_dict[cut][var]['bkg_total'] = hist.Clone()
            else: count_dict[cut][var]['bkg_total'].Add(hist)

        # Fill sig
        for samp in sig_samps:
            hist = r_file.Get(base_dir+'histo_'+samp)
            if count_dict[cut][var][samp] is None: count_dict[cut][var][samp] = hist.Clone()
            else: count_dict[cut][var][samp].Add(hist)

        # Create graphs
        for samp in sig_samps:
            graph_dict[cut][var][samp], graph_dict[cut][var][samp+'_max'] = make_sig_graph(
                count_dict[cut][var][samp], 
                count_dict[cut][var]['bkg_total'], 
                smooth=True, 
                rel=args.relative
            )

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


for cut in cut_list:
    canvas[cut] = {}
    for var in var_list:
        canvas[cut][var] = {}

        x_axis_t = variables[var]['xaxis']
        y_axis_t = 'S/#sqrt{S+B}' #args.y_title
        if args.relative: y_axis_t = 'Relative '+y_axis_t

        # Get ymax
        ymax = 1.
        for samp in sig_samps:
            val = graph_dict[cut][var][samp].GetMaximum()
            if val > ymax: ymax = val

        canvas[cut][var]['c'] = ROOT.TCanvas('canvas_'+cut, cut, 800, 600)
        legend = ROOT.TLegend(0.2, 0.7, 0.5, 0.9)
        legend.SetFillColor(0)
        legend.SetTextFont(42)
        legend.SetTextSize(0.035)
        legend.SetLineColor(0)
        legend.SetShadowColor(0)

        first = True
        for samp in sig_samps:
            graph_dict[cut][var][samp].GetXaxis().SetLimits(-1.,1.) # Assuming BDT
            graph_dict[cut][var][samp].SetTitle(';'+x_axis_t+';'+y_axis_t)
            graph_dict[cut][var][samp].SetLineWidth(2)
            graph_dict[cut][var][samp].SetLineColor(groupPlot[samp]['color'])
            leg_name = groupPlot[samp]['nameHR']
            if args.relative: leg_name += ' [max '+str(round(graph_dict[cut][var][samp+'_max'], 2))+']'
            legend.AddEntry(graph_dict[cut][var][samp], leg_name, 'l')
            if first:
                graph_dict[cut][var][samp].Draw()
                first = False
            else: graph_dict[cut][var][samp].Draw('same')
        legend.Draw()

        canvas[cut][var]['c'].Update()
        if args.save:
            if not os.path.isdir(args.output): os.mkdir(args.output)
            canvas[cut][var]['c'].SaveAs(args.output+'/Significance_'+cut+'_'+var+'.png')
        else:
            raw_input('cont')

