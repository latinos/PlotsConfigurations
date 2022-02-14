import ROOT
import array
import time

cut = 'NOM'
cut_nuis = 'JET'

LO_samp = 'Wjets_HTkf2D'
NLO_samp = 'Wjets_NLOnj'

#var = 'dr_jj_V_genW_pt'
#ybins = [0, 5] + range(10, 180, 10) + [180, 300] + range(350, 550, 50) + [550, 650] + range(700, 1500, 200)
#xbins = [0.,1.,2.,3.,4.,5.] 

#var = 'm_jj_V_genW_pt'
#ybins = [0, 10] + range(20, 180, 20) + [180, 300] + range(350, 550, 100) + [550, 650] + range(700, 1500, 400)
#xbins = range(0, 300, 25) 

var = 'Wrecoil_m'
ybins = [0, 10] + range(20, 180, 20) + [180, 300] + range(350, 550, 100) + [550, 650] + range(700, 1500, 400)
xbins = range(0, 500, 20)

#var = 'deta_jj_V_genW_pt'
#ybins = [0, 5] + range(10, 180, 10) + [180, 300] + range(350, 550, 50) + [550, 650] + range(700, 1500, 200)
#xbins = [0.,1.,2.,3.,4.,5.] 

def error2hist(hist, times=1.):
    hist_up = hist.Clone()
    hist_do = hist.Clone()
    n_bins = hist.GetNbinsX()
    for i_bin in range(1, n_bins+1):
        err = hist.GetBinError(i_bin)
        val = hist.GetBinContent(i_bin)
        hist_up.SetBinContent(i_bin, val + times*err)
        hist_do.SetBinContent(i_bin, val - times*err)
    return hist_up, hist_do

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

#run2 = ['2016', '2017', '2018']
run2 = ['2016']
year_dict = {}
for year in run2:
    year_dict[year] = {}
    year_dict[year]['r_file'] = ROOT.TFile('../../Full'+year+'_v7/Wjets/Wjets_kfac_root/plots_Wjets_kfac_'+year+'v7.root')

    nlo_samp = NLO_samp
    #if year == '2016': nlo_samp = 'Wjets_NLOin'
    if year == '2016': nlo_samp = 'Wjets_NLOmerge'
    eff_var = var
    #if year == '2016': eff_var = var+'_inc'

    year_dict[year]['LO'] = year_dict[year]['r_file'].Get(cut+'/'+eff_var+'/histo_'+LO_samp)
    year_dict[year]['NLO'] = year_dict[year]['r_file'].Get(cut+'/'+eff_var+'/histo_'+nlo_samp)
    year_dict[year]['LO_n'] = year_dict[year]['r_file'].Get(cut_nuis+'/'+eff_var+'/histo_'+LO_samp)
    year_dict[year]['NLO_n'] = year_dict[year]['r_file'].Get(cut_nuis+'/'+eff_var+'/histo_'+nlo_samp)

    year_dict[year]['ratio'] = year_dict[year]['NLO'].Clone()
    year_dict[year]['ratio'].Divide(year_dict[year]['LO'])

    year_dict[year]['ratio_n'] = year_dict[year]['NLO_n'].Clone()
    year_dict[year]['ratio_n'].Divide(year_dict[year]['LO_n'])

    year_dict[year]['ratio_2D'] = re_roll_2Dh_array(year_dict[year]['ratio'], xbins, ybins, name=year+'_2D_nom')
    year_dict[year]['ratio_n_2D'] = re_roll_2Dh_array(year_dict[year]['ratio_n'], xbins, ybins, name=year+'_2D_jetsel')

    ## Smooth
    #year_dict[year]['ratio_s'] = year_dict[year]['ratio'].Clone()
    #year_dict[year]['ratio_s'].Smooth()

    ## Stat fluc
    #year_dict[year]['ratio_s_up'], year_dict[year]['ratio_s_do'] = error2hist(year_dict[year]['ratio_s'], 2.)
    #year_dict[year]['ratio_s_up'].Smooth()
    #year_dict[year]['ratio_s_do'].Smooth()

# Make pretty
for year in run2:
    # Smooth
    year_dict[year]['ratio_s'] = year_dict[year]['ratio'].Clone()
    year_dict[year]['ratio_s'].Smooth()
    year_dict[year]['ratio_ns'] = year_dict[year]['ratio_n'].Clone()
    year_dict[year]['ratio_ns'].Smooth()
    #year_dict[year]['ratio_2D'] = re_roll_2Dh_array(year_dict[year]['ratio_s'], xbins, ybins)
    #year_dict[year]['ratio_n_2D'] = re_roll_2Dh_array(year_dict[year]['ratio_ns'], xbins, ybins)

    # Stat fluc
    year_dict[year]['ratio_s_up'], year_dict[year]['ratio_s_do'] = error2hist(year_dict[year]['ratio'], 1.)
    year_dict[year]['ratio_2D_up'] =  re_roll_2Dh_array(year_dict[year]['ratio_s_up'], xbins, ybins, name=year+'_2D_stat_up')
    year_dict[year]['ratio_2D_do'] =  re_roll_2Dh_array(year_dict[year]['ratio_s_do'], xbins, ybins, name=year+'_2D_stat_do')
    bin_1_up = year_dict[year]['ratio_s_up'].GetBinContent(1)
    bin_1_do = year_dict[year]['ratio_s_do'].GetBinContent(1)
    year_dict[year]['ratio_s_up'].Smooth()
    year_dict[year]['ratio_s_do'].Smooth()

    year_dict[year]['ratio_2D'].Smooth()
    year_dict[year]['ratio_2D_up'].Smooth()
    year_dict[year]['ratio_2D_do'].Smooth()
    year_dict[year]['ratio_n_2D'].Smooth()

    ## Reset first bin
    #year_dict[year]['ratio_s'].SetBinContent(1, year_dict[year]['ratio'].GetBinContent(1))
    #year_dict[year]['ratio_ns'].SetBinContent(1, year_dict[year]['ratio_n'].GetBinContent(1))
    #year_dict[year]['ratio_s_up'].SetBinContent(1, bin_1_up)
    #year_dict[year]['ratio_s_do'].SetBinContent(1, bin_1_do)

# Plot 
ROOT.gStyle.SetOptStat(0)
canvas = ROOT.TCanvas('canvas', 'canvas', 600, 600)
legend = ROOT.TLegend(0.7, 0.7, 0.9, 0.9)
first = True
col_idx = 2
for year in run2:
    year_dict[year]['ratio'].SetLineColor(col_idx)
    year_dict[year]['ratio_s'].SetLineColor(col_idx)
    year_dict[year]['ratio_ns'].SetLineColor(col_idx)
    year_dict[year]['ratio_s_up'].SetLineColor(col_idx)
    year_dict[year]['ratio_s_do'].SetLineColor(col_idx)
    year_dict[year]['ratio_s_up'].SetLineStyle(2)
    year_dict[year]['ratio_s_do'].SetLineStyle(2)
    year_dict[year]['ratio_ns'].SetLineStyle(3)
    if first:
        first = False
        year_dict[year]['ratio_s'].SetTitle('k-factors')
        year_dict[year]['ratio_s'].GetXaxis().SetTitle('gen W p_{T}')
        #year_dict[year]['ratio_s'].GetYaxis().SetRangeUser(0.7, 1.8)
        year_dict[year]['ratio_s'].GetYaxis().SetRangeUser(0., 6.5)
        year_dict[year]['ratio_s'].Draw('hist')
    else: year_dict[year]['ratio_s'].Draw('hist same')
    year_dict[year]['ratio_s_up'].Draw('hist same')
    year_dict[year]['ratio_s_do'].Draw('hist same')
    year_dict[year]['ratio_ns'].Draw('hist same')
    #year_dict[year]['ratio'].Draw('same')

    legend.AddEntry(year_dict[year]['ratio_s'], year, 'l')

    col_idx += 1
    if col_idx == 5: col_idx += 1

#hist_mj.SetLineColor(1)
#hist_mj.Draw('hist same')
#hist_cur.SetLineColor(1)
#hist_cur.Draw('same')
legend.Draw()

# Plot 2D
canvas2D = ROOT.TCanvas('canvas2D', 'canvas2D', 600, 600)
for year in run2:
    year_dict[year]['ratio_2D'].Draw('colz')

raw_input('exit')

### Store
##file_name = '../../Wjets_kfactors/HT_to_NLO_QCD_2D_k_factors.root'
#file_name = '../../Wjets_kfactors/HT_to_NLO_QCD_2D_rec_k_factors.root'
#r_file = ROOT.TFile(file_name, 'recreate')
#for year in run2:
#    year_dict[year]['ratio_2D'].SetDirectory(r_file)
#    year_dict[year]['ratio_2D'].SetName('k_factor_'+year+'_nom')
#    year_dict[year]['ratio_2D'].Write()
#
#    year_dict[year]['ratio_2D_up'].SetDirectory(r_file)
#    year_dict[year]['ratio_2D_up'].SetName('k_factor_'+year+'_stat_up')
#    year_dict[year]['ratio_2D_up'].Write()
#
#    year_dict[year]['ratio_2D_do'].SetDirectory(r_file)
#    year_dict[year]['ratio_2D_do'].SetName('k_factor_'+year+'_stat_do')
#    year_dict[year]['ratio_2D_do'].Write()
#
#    year_dict[year]['ratio_n_2D'].SetDirectory(r_file)
#    year_dict[year]['ratio_n_2D'].SetName('k_factor_'+year+'_jetsel')
#    year_dict[year]['ratio_n_2D'].Write()

