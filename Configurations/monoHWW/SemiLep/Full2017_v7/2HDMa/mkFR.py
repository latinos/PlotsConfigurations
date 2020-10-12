import os
import time
import copy
import ROOT
import array

ROOT.gStyle.SetOptStat(0)

def re_roll_2Dh(h1D, xbin, xmin, xmax, ybin, ymin, ymax, name=None, title=None, invert=False):
    if name is None:
        name_1D = h1D.GetName()
        name_2D = name_1D+'_2D_'+str(time.time()).replace('.', '_')
    else: name_2D = name
    if title is None:
        title_1D = h1D.GetTitle()
        title_2D = title_1D+' 2D'
    else: title_2D = title

    if not invert: h2D = ROOT.TH2D(name_2D, title_2D, xbin, xmin, xmax, ybin, ymin, ymax)
    else: h2D = ROOT.TH2D(name_2D, title_2D, ybin, ymin, ymax, xbin, xmin, xmax)

    xstep = (xmax - xmin + 0.)/(xbin + 0.)
    ystep = (ymax - ymin + 0.)/(ybin + 0.)
    for ib in range(h1D.GetNbinsX()):
        x = xmin + (ib//ybin)*xstep + xstep/2.
        y = ymin + (ib%ybin)*ystep  + ystep/2.
        if not invert: 
            h2D.SetBinContent(h2D.FindBin(x,y), h1D.GetBinContent(ib+1))
            h2D.SetBinError(h2D.FindBin(x,y), h1D.GetBinError(ib+1))
        else: 
            h2D.SetBinContent(h2D.FindBin(y,x), h1D.GetBinContent(ib+1))
            h2D.SetBinError(h2D.FindBin(y,x), h1D.GetBinError(ib+1))
    return h2D

def re_roll_2Dh_array(h1D, xbins, ybins, name=None, title=None, invert=False):
    x_array = array.array('d', xbins)
    y_array = array.array('d', ybins)
    if name is None:
        name_1D = h1D.GetName()
        name_2D = name_1D+'_2D_'+str(time.time()).replace('.', '_')
    else: name_2D = name
    if title is None:
        title_1D = h1D.GetTitle()
        title_2D = title_1D+' 2D'
    else: title_2D = title

    if not invert: h2D = ROOT.TH2D(name_2D, title_2D, len(x_array)-1, x_array, len(y_array)-1, y_array)
    else: h2D = ROOT.TH2D(name_2D, title_2D, len(y_array)-1, y_array, len(x_array)-1, x_array)

    for ib in range(h1D.GetNbinsX()):
        ix = ib//(len(ybins)-1)
        iy = ib%(len(ybins)-1)
        x = xbins[ix] + (xbins[ix+1] - xbins[ix])/2.
        y = ybins[iy] + (ybins[iy+1] - ybins[iy])/2.
        if not invert: 
            h2D.SetBinContent(h2D.FindBin(x,y), h1D.GetBinContent(ib+1))
            h2D.SetBinError(h2D.FindBin(x,y), h1D.GetBinError(ib+1))
        else: 
            h2D.SetBinContent(h2D.FindBin(y,x), h1D.GetBinContent(ib+1))
            h2D.SetBinError(h2D.FindBin(y,x), h1D.GetBinError(ib+1))
    return h2D

cfg = 'conf_FR.py'
handle = open(cfg, 'r')
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

r_file_n = outputDir+'/plots_'+tag+'.root'
r_file = ROOT.TFile(r_file_n)
histograms_l = {}
histograms_t = {}

clean_cuts = []
print('Collecting histograms')
for cut in cuts:
    is_t = False
    is_l = False
    if 'loose' in cut: is_l = True
    elif 'tight' in cut: is_t = True
    else:
        print('No "tight" or "loose" tag found in: "'+cut+'" --> skipped')
        continue
    if is_t and is_l: 
        print('Both "tight" and "loose" tag found in: "'+cut+'" --> skipped')
        continue
    splt_cut = cut.split('_')
    if is_t: splt_cut.remove('tight')
    if is_l: splt_cut.remove('loose') 
    cut_clean = '_'.join(splt_cut)
    if cut_clean not in clean_cuts: clean_cuts.append(cut_clean)
    for var in variables:
        for sample in samples:
            get_name = 'histo_'+sample
            h_name = '_'.join(['h', cut_clean, var, sample])

            if is_t: histograms_t[h_name] = r_file.Get(cut+'/'+var+'/'+get_name)
            if is_l: histograms_l[h_name] = r_file.Get(cut+'/'+var+'/'+get_name)

            #print(h_name)

print('Calculating fw')
histograms_fr = {}
for cut in clean_cuts:
    for var in variables:
        h_name_total     = '_'.join(['h', cut, var, 'total'])
        h_name_total_ewk = '_'.join(['h', cut, var, 'total_ewk'])

        # Prepare totals
        for sample in samples:
            if not 'DATA' in sample: continue
            h_name = '_'.join(['h', cut, var, sample])
            histograms_t[h_name_total]     = copy.deepcopy(histograms_t[h_name]) 
            histograms_t[h_name_total_ewk] = copy.deepcopy(histograms_t[h_name]) 
            histograms_l[h_name_total]     = copy.deepcopy(histograms_l[h_name]) 
            histograms_l[h_name_total_ewk] = copy.deepcopy(histograms_l[h_name]) 

        # Substract ewk
        for sample in samples:
            if 'DATA' in sample: continue
            h_name = '_'.join(['h', cut, var, sample])
            histograms_t[h_name_total_ewk].Add(histograms_t[h_name], -1.)
            histograms_l[h_name_total_ewk].Add(histograms_l[h_name], -1.)
 
        # Calculate fw
        histograms_fr[h_name_total] = copy.deepcopy(histograms_t[h_name_total])
        histograms_fr[h_name_total].Divide(histograms_l[h_name_total])

        histograms_fr[h_name_total_ewk] = copy.deepcopy(histograms_t[h_name_total_ewk])
        histograms_fr[h_name_total_ewk].Divide(histograms_l[h_name_total_ewk])

        if ':' in variables[var]['name']:
            if len(variables[var]['range']) == 6:
                time.sleep(0.01)
                histograms_fr[h_name_total_ewk+'_2D'] = re_roll_2Dh(
                    histograms_fr[h_name_total_ewk], 
                    variables[var]['range'][0], variables[var]['range'][1], variables[var]['range'][2], 
                    variables[var]['range'][3], variables[var]['range'][4], variables[var]['range'][5], 
                    name = 'FW_ewk_'+cut+'_'+var,
                    title = 'FW_ewk_'+cut+'_'+var,
                    invert = True,
                    )
                time.sleep(0.01)
                histograms_fr[h_name_total+'_2D'] = re_roll_2Dh(
                    histograms_fr[h_name_total], 
                    variables[var]['range'][0], variables[var]['range'][1], variables[var]['range'][2], 
                    variables[var]['range'][3], variables[var]['range'][4], variables[var]['range'][5], 
                    name = 'FW_no_ewk_'+cut+'_'+var,
                    title = 'FW_no_ewk_'+cut+'_'+var,
                    invert = True,
                    )
            elif len(variables[var]['range']) == 2:
                time.sleep(0.01)
                histograms_fr[h_name_total_ewk+'_2D'] = re_roll_2Dh_array(
                    histograms_fr[h_name_total_ewk], 
                    variables[var]['range'][0], 
                    variables[var]['range'][1], 
                    name = 'FW_ewk_'+cut+'_'+var,
                    title = 'FW_ewk_'+cut+'_'+var,
                    invert = True,
                    )
                time.sleep(0.01)
                histograms_fr[h_name_total+'_2D'] = re_roll_2Dh_array(
                    histograms_fr[h_name_total], 
                    variables[var]['range'][0], 
                    variables[var]['range'][1], 
                    name = 'FW_no_ewk_'+cut+'_'+var,
                    title = 'FW_no_ewk_'+cut+'_'+var,
                    invert = True,
                    )


print('Create plots')

fr_dir = 'FRnew'
canvas = ROOT.TCanvas('canvas', 'FW canvas', 600, 600)
for fw in histograms_fr:
    name = 'plot'+fw[1:].replace('_total', '_fw')
    if fw.endswith('_2D'):
        tmp_file = ROOT.TFile(fr_dir+'/'+name+'.root', 'RECREATE')
        histograms_fr[fw].SetName('FR_pT_eta_EWKcorr') #For reading script
        histograms_fr[fw].Write()
        tmp_file.Close()
        histograms_fr[fw].Draw('colz text')
    else: histograms_fr[fw].Draw()
    canvas.Update()
    canvas.SaveAs(fr_dir+'/'+name+'.png')


