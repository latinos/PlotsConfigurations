import os
import math
import copy
import ROOT
import argparse
from collections import OrderedDict

parser = argparse.ArgumentParser(description = "Receive the parameters")
parser.add_argument('--config', action = 'store', type = str, dest = 'cfg', help = 'Input configuration file')
parser.add_argument('--var'   , action = 'store', type = str, dest = 'var', help = 'Variable to show (comma separated)')
parser.add_argument('--cut'   , action = 'store', type = str, dest = 'cut', help = 'Cut to show (comma separated)')
parser.add_argument('--save',                                               help='save the images', action='store_true')
parser.add_argument('-o', '--output',                                       help='output dir', default='.', type=str)
parser.add_argument('-b', '--batch' ,                                       help='toggle batch mode', action='store_true')

args = parser.parse_args()

handle = open(args.cfg, 'r')
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
groupPlot = OrderedDict()
plot = {}
handle = open(plotFile, 'r')
exec(handle)
handle.close()


#if not args.var in variables: raise IOError('Variable "'+args.var+'" not found in '+variablesFile)
#if not args.cut in cuts: raise IOError('Cut "'+args.cut+'" not found in '+cutsFile)
#if not args.signal in samples: raise IOError('signal "'+args.signal+'" not found in '+samplesFile)

all_vars = args.var.split(',')
all_cuts = args.cut.split(',')

def extract_aplha_hist(hist):
    hist_a = hist.Clone()
    n_bins = hist.GetNbinsX()
    max_alph = 0.
    for i_bin in range(n_bins+2):
        cont = hist.GetBinContent(i_bin)
        err  = hist.GetBinError(i_bin)
        if cont == 0: alpha = 0.
        else: alpha = (err**2 + 0.)/(abs(cont) + 0.)
        hist_a.SetBinContent(i_bin, alpha)
        if alpha > max_alph: max_alph = alpha
    return hist_a, max_alph

def extract_effMCstat_hist(hist):
    hist_a = hist.Clone()
    n_bins = hist.GetNbinsX()
    max_stat = 0.
    for i_bin in range(n_bins+2):
        cont = hist.GetBinContent(i_bin)
        err  = hist.GetBinError(i_bin)
        if cont == 0: stat = 0.
        else: stat = (cont**2 +0.)/(err**2 + 0.)
        hist_a.SetBinContent(i_bin, stat)
        if stat > max_stat: max_stat = stat
    return hist_a, max_stat

for cut in all_cuts:
    print('- cut: '+cut)
    for var in all_vars:
        print('-- var: '+var)
        bkg_dict = OrderedDict()#{}
        for part in groupPlot:
            if groupPlot[part]['isSignal']: continue
            bkg_dict[part] = OrderedDict()#{}
            bkg_dict[part]['tot'] = None
            bkg_dict[part]['rel'] = None
        bkg_dict['total_bkg'] = {}
        bkg_dict['total_bkg']['tot'] = None
        bkg_dict['total_bkg']['rel'] = None
        
        r_file_n = outputDir+'/plots_'+tag+'.root'
        r_file = ROOT.TFile(r_file_n)
        if not r_file: print(r_file_n+' not found')
        root_dir = cut+'/'+var+'/'
        
        # Collect group plot histo's
        for part in bkg_dict:
            if part == 'total_bkg': continue
            for samp in groupPlot[part]['samples']:
                histo_name = root_dir + 'histo_' + samp
                #print(histo_name)
                curr_histo = r_file.Get(histo_name)
                if not curr_histo:
                    print('Histogram not found: '+histo_name)
                    continue
                if bkg_dict[part]['tot'] is None: bkg_dict[part]['tot'] = curr_histo.Clone()
                else: bkg_dict[part]['tot'].Add(curr_histo)
        
        # Collect total bkg
        for part in structure:
            if structure[part]['isSignal'] > 0: continue
            if structure[part]['isData'] > 0: continue
            samp = part
            histo_name = root_dir + 'histo_' + samp
            #print(histo_name)
            curr_histo = r_file.Get(histo_name)
            if not curr_histo:
                print('Histogram not found: '+histo_name)
                continue
            if bkg_dict['total_bkg']['tot'] is None: bkg_dict['total_bkg']['tot'] = curr_histo.Clone()
            else: bkg_dict['total_bkg']['tot'].Add(curr_histo)
        
        # Create rel histos
        for part in bkg_dict:
            bkg_dict[part]['rel'] = bkg_dict[part]['tot'].Clone()
            bkg_dict[part]['rel'].Divide(bkg_dict['total_bkg']['tot'])
        
        # Create THStack and fill colors
        thstack = ROOT.THStack('thstack', 'Relative contributions')
        for part in bkg_dict:
            if part == 'total_bkg': continue
            bkg_dict[part]['rel'].SetFillColor(groupPlot[part]['color'])
            #bkg_dict[part]['rel'].GetYaxis().SetRangeUser(-0.1,2.)
            thstack.Add(bkg_dict[part]['rel'])
       
        # Create alpha hists
        max_alpha = 0.
        for part in bkg_dict:
            color = 1
            if not part == 'total_bkg': color = groupPlot[part]['color']
            bkg_dict[part]['alp'], max_alph = extract_aplha_hist(bkg_dict[part]['tot'])
            bkg_dict[part]['alp'].SetLineColor(color)
            bkg_dict[part]['alp'].SetMarkerStyle(20) 
            bkg_dict[part]['alp'].SetMarkerColorAlpha(color, 0.) 
            if max_alph > max_alpha: max_alpha = max_alph

        # Create MCstat hists
        max_stat = 0.
        for part in bkg_dict:
            color = 1
            if not part == 'total_bkg': color = groupPlot[part]['color']
            bkg_dict[part]['stat'], max_st = extract_effMCstat_hist(bkg_dict[part]['tot'])
            bkg_dict[part]['stat'].SetLineColor(color)
            bkg_dict[part]['stat'].SetMarkerStyle(20) 
            bkg_dict[part]['stat'].SetMarkerColorAlpha(color, 0.) 
            if max_st > max_stat: max_stat = max_st
 
        # Create legend
        legend = ROOT.TLegend(0.1,0.7,0.9,0.9)
        legend.SetNColumns(2)
        for part in bkg_dict:
            if part == 'total_bkg': continue
            legend.AddEntry(bkg_dict[part]['rel'], groupPlot[part]['nameHR'], 'f')
        
        # Plot
        ROOT.gStyle.SetOptStat(0)
        #ROOT.gStyle.SetPadTicksY(1)
        ROOT.gStyle.SetPadTickY(1)
        #ROOT.gStyle.SetMarkerStyler(20)
        canvas = ROOT.TCanvas('canvas', 'canvas', 600, 600)
        bkg_dict['total_bkg']['tot'].GetYaxis().SetRangeUser(0.,1.5)
        bkg_dict['total_bkg']['tot'].SetTitle('Relative contributions')
        bkg_dict['total_bkg']['tot'].Draw('hist')
        thstack.Draw('hist same ')
        legend.Draw('same')
        ROOT.gPad.RedrawAxis()
        canvas.Update()
       
        # Plot alpha
        canvas_alp = ROOT.TCanvas('canvas_alp', 'canvas_alp', 600, 600)
        canvas_alp.SetLogy()
        first = True
        for part in bkg_dict:
            #if part == 'total_bkg': continue
            if first: 
                #bkg_dict[part]['alp'].GetYaxis().SetRangeUser(0.001,max_alpha+0.1)
                bkg_dict[part]['alp'].GetYaxis().SetRangeUser(0.001,100)
                bkg_dict[part]['alp'].SetTitle('Sample alpha factors')
                bkg_dict[part]['alp'].Draw('hist p')
                first = False
            else: bkg_dict[part]['alp'].Draw('hist p same')
        canvas_alp.Update()

        # Plot MCstat
        canvas_stat = ROOT.TCanvas('canvas_stat', 'canvas_stat', 600, 600)
        canvas_stat.SetLogy()
        first = True
        for part in bkg_dict:
            #if part == 'total_bkg': continue
            if first: 
                #bkg_dict[part]['stat'].GetYaxis().SetRangeUser(0.001,max_statha+0.1)
                bkg_dict[part]['stat'].GetYaxis().SetRangeUser(0.1,max_stat*2)
                bkg_dict[part]['stat'].SetTitle('Effective MC statistics')
                bkg_dict[part]['stat'].Draw('hist p')
                first = False
            else: bkg_dict[part]['stat'].Draw('hist p same')
        canvas_stat.Update()

        if args.save:
            print('Saving 1')
            save_name = args.output+'/rel_co_'+cut+'_'+var+'.png'
            print(save_name)
            canvas.SaveAs(save_name)
            #print('Saving 2')
            #save_name2 = args.output+'/alpha_'+cut+'_'+var+'.png'
            #print(save_name2)
            #canvas_alp.SaveAs(save_name2)
        else: 
            raw_input('done')

