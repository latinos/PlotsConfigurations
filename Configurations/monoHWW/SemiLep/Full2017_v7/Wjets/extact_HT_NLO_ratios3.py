import ROOT

#var = 'genW_pt'
#var = 'genW_pt_inc'
var = 'genW_pt2_true'
#var = 'genW_pt2'
#var = 'genW_pt2_inc'
cut = 'NOM'
cut_nuis = 'JET'

LO_samp = 'Wjets_HT'
NLO_samp = 'Wjets_NLOnj'

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

run2 = ['2016', '2017', '2018']
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

    ## Smooth
    #year_dict[year]['ratio_s'] = year_dict[year]['ratio'].Clone()
    #year_dict[year]['ratio_s'].Smooth()

    ## Stat fluc
    #year_dict[year]['ratio_s_up'], year_dict[year]['ratio_s_do'] = error2hist(year_dict[year]['ratio_s'], 2.)
    #year_dict[year]['ratio_s_up'].Smooth()
    #year_dict[year]['ratio_s_do'].Smooth()

# Extract mono-j ref
mj_file_n = 'kfac_2020-12-17_wkfac_v9.root'
mj_hist_n = 'gen_vpt_combined_wjets_monojet_central'
r_file_mj = ROOT.TFile(mj_file_n)
hist_mj = r_file_mj.Get(mj_hist_n)
hist_mj.Scale(1./1.21)

# Current
#'PlotsConfigurations/Configurations/monoHWW/SemiLep/Wjets_kfactors/HT_to_NLO_QCD_k_factors.root', 'k_factors_2017'
#cur_file_n = '../../Wjets_kfactors/HT_to_NLO_QCD_k_factors.root'
#cur_hist_n = 'k_factors_2017'
cur_file_n = '../../Wjets_kfactors/HT_to_NLO_QCD_k_factors2.root'
#cur_hist_n = 'k_factor_2017_nom'
cur_hist_n = 'k_factor_2016_nom'
r_file_cur = ROOT.TFile(cur_file_n)
hist_cur = r_file_cur.Get(cur_hist_n)

## Store
#file_name = '../../Wjets_kfactors/HT_to_NLO_QCD_k_factors.root'
#r_file = ROOT.TFile(file_name, 'recreate')
#for year in run2:
#    year_dict[year]['tg'] = ROOT.TGraph(year_dict[year]['ratio'])
#   
#    #year_dict[year]['tg'].SetDirectory(r_file)
#    year_dict[year]['tg'].SetName('k_factors_'+year)
#    year_dict[year]['tg'].Write()

## 2017 + 2018
#com_tag = 'MGpdfw'
#run2.append(com_tag)
#year_dict[com_tag] = {}
#LO_2017_tmp = year_dict['2017']['LO'].Clone()
#LO_2018_tmp = year_dict['2018']['LO'].Clone()
#NLO_2017_tmp = year_dict['2017']['NLO'].Clone()
#NLO_2018_tmp = year_dict['2018']['NLO'].Clone()
#
#LO_2017_tmp.Scale(1./35.9)
#NLO_2017_tmp.Scale(1./35.9)
#
#LO_2018_tmp.Scale(1./59.7)
#NLO_2018_tmp.Scale(1./59.7)
#
#year_dict[com_tag]['LO'] = LO_2017_tmp
#year_dict[com_tag]['LO'].Add(LO_2018_tmp)
#
#year_dict[com_tag]['NLO'] = NLO_2017_tmp
#year_dict[com_tag]['NLO'].Add(NLO_2018_tmp)
#
#year_dict[com_tag]['ratio'] = year_dict[com_tag]['NLO'].Clone()
#year_dict[com_tag]['ratio'].Divide(year_dict[com_tag]['LO'])

# Make pretty
for year in run2:
    # Smooth
    year_dict[year]['ratio_s'] = year_dict[year]['ratio'].Clone()
    year_dict[year]['ratio_s'].Smooth()
    year_dict[year]['ratio_ns'] = year_dict[year]['ratio_n'].Clone()
    year_dict[year]['ratio_ns'].Smooth()

    # Stat fluc
    year_dict[year]['ratio_s_up'], year_dict[year]['ratio_s_do'] = error2hist(year_dict[year]['ratio'], 1.)
    bin_1_up = year_dict[year]['ratio_s_up'].GetBinContent(1)
    bin_1_do = year_dict[year]['ratio_s_do'].GetBinContent(1)
    year_dict[year]['ratio_s_up'].Smooth()
    year_dict[year]['ratio_s_do'].Smooth()

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
        year_dict[year]['ratio_s'].GetYaxis().SetRangeUser(0.2, 1.4)
        year_dict[year]['ratio_s'].Draw('hist')
    else: year_dict[year]['ratio_s'].Draw('hist same')
    year_dict[year]['ratio_s_up'].Draw('hist same')
    year_dict[year]['ratio_s_do'].Draw('hist same')
    year_dict[year]['ratio_ns'].Draw('hist same')
    #year_dict[year]['ratio'].Draw('same')

    legend.AddEntry(year_dict[year]['ratio_s'], year, 'l')

    col_idx += 1
    if col_idx == 5: col_idx += 1

hist_mj.SetLineColor(1)
#hist_mj.Draw('hist same')
hist_cur.SetLineColor(1)
#hist_cur.Draw('same')
legend.Draw()
raw_input('exit')

## Store
#file_name = '../../Wjets_kfactors/HT_to_NLO_QCD_k_factors3.root'
#r_file = ROOT.TFile(file_name, 'recreate')
#for year in run2:
#    year_dict[year]['tg'] = ROOT.TGraph(year_dict[year]['ratio_s'])
#    year_dict[year]['tg_n'] = ROOT.TGraph(year_dict[year]['ratio_ns'])
#    year_dict[year]['tg_up'] = ROOT.TGraph(year_dict[year]['ratio_s_up'])
#    year_dict[year]['tg_do'] = ROOT.TGraph(year_dict[year]['ratio_s_do'])
#   
#    #year_dict[year]['tg'].SetDirectory(r_file)
#    year_dict[year]['tg'].SetName('k_factor_'+year+'_nom')
#    year_dict[year]['tg'].Write()
#    year_dict[year]['tg_n'].SetName('k_factor_'+year+'_jetsel')
#    year_dict[year]['tg_n'].Write()
#    year_dict[year]['tg_up'].SetName('k_factor_'+year+'_stat_up')
#    year_dict[year]['tg_up'].Write()
#    year_dict[year]['tg_do'].SetName('k_factor_'+year+'_stat_do')
#    year_dict[year]['tg_do'].Write()
#
