import ROOT

var = 'genW_pt'
#cut = 'InCh_SC'

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

#cuts = ['SC', 'L_pT00', 'L_pT10', 'L_pT30', 'L_pT50']
#cuts = ['SC', 'LEP', 'JET', 'ALL', 'NTK', 'SR']
cuts = ['SC', 'JET', 'ALL', 'NTK', 'JJ_pT00', 'JJ_pT30', 'JJ_pT60']
cut_dict = {}
for cut in cuts:
    print(cut)
    cut_dict[cut] = {}
    cut_dict[cut]['r_file'] = ROOT.TFile('../../Full2017_v7/Wjets/Wjets_kfac_root/plots_Wjets_kfac_2017v7.root')

    nlo_samp = NLO_samp
    #if cut == '2016': nlo_samp = 'Wjets_NLOin'
    if cut == '2016': nlo_samp = 'Wjets_NLOmerge'
    cut_dict[cut]['LO'] = cut_dict[cut]['r_file'].Get(cut+'/'+var+'/histo_'+LO_samp)
    cut_dict[cut]['NLO'] = cut_dict[cut]['r_file'].Get(cut+'/'+var+'/histo_'+nlo_samp)

    cut_dict[cut]['ratio'] = cut_dict[cut]['NLO'].Clone()
    cut_dict[cut]['ratio'].Divide(cut_dict[cut]['LO'])
    cut_dict[cut]['ratio_s'] = cut_dict[cut]['ratio'].Clone()
    cut_dict[cut]['ratio_s'].Smooth(1)
    cut_dict[cut]['ratio_sd'] = cut_dict[cut]['ratio'].Clone()
    cut_dict[cut]['ratio_sd'].Add(cut_dict[cut]['ratio_s'], -1.)
    cut_dict[cut]['ratio_sd'].Divide( cut_dict[cut]['ratio'])
    cut_dict[cut]['ratio_s_up'], cut_dict[cut]['ratio_s_do'] = error2hist(cut_dict[cut]['ratio'], 2.)
    cut_dict[cut]['ratio_s_up'].Smooth(1)
    cut_dict[cut]['ratio_s_do'].Smooth(1)

# Extract mono-j ref
mj_file_n = 'kfac_2020-12-17_wkfac_v9.root'
mj_hist_n = 'gen_vpt_combined_wjets_monojet_central'
r_file_mj = ROOT.TFile(mj_file_n)
hist_mj = r_file_mj.Get(mj_hist_n)
hist_mj.Scale(1./1.21)

# Current
#'PlotsConfigurations/Configurations/monoHWW/SemiLep/Wjets_kfactors/HT_to_NLO_QCD_k_factors.root', 'k_factors_2017'
cur_file_n = '../../Wjets_kfactors/HT_to_NLO_QCD_k_factors.root'
cur_hist_n = 'k_factors_2017'
r_file_cur = ROOT.TFile(cur_file_n)
hist_cur = r_file_cur.Get(cur_hist_n)


## Store
#file_name = '../../Wjets_kfactors/HT_to_NLO_QCD_k_factors.root'
#r_file = ROOT.TFile(file_name, 'recreate')
#for cut in cuts:
#    cut_dict[cut]['tg'] = ROOT.TGraph(cut_dict[cut]['ratio'])
#   
#    #cut_dict[cut]['tg'].SetDirectory(r_file)
#    cut_dict[cut]['tg'].SetName('k_factors_'+cut)
#    cut_dict[cut]['tg'].Write()

## 2017 + 2018
#com_tag = 'MGpdfw'
#cuts.append(com_tag)
#cut_dict[com_tag] = {}
#LO_2017_tmp = cut_dict['2017']['LO'].Clone()
#LO_2018_tmp = cut_dict['2018']['LO'].Clone()
#NLO_2017_tmp = cut_dict['2017']['NLO'].Clone()
#NLO_2018_tmp = cut_dict['2018']['NLO'].Clone()
#
#LO_2017_tmp.Scale(1./35.9)
#NLO_2017_tmp.Scale(1./35.9)
#
#LO_2018_tmp.Scale(1./59.7)
#NLO_2018_tmp.Scale(1./59.7)
#
#cut_dict[com_tag]['LO'] = LO_2017_tmp
#cut_dict[com_tag]['LO'].Add(LO_2018_tmp)
#
#cut_dict[com_tag]['NLO'] = NLO_2017_tmp
#cut_dict[com_tag]['NLO'].Add(NLO_2018_tmp)
#
#cut_dict[com_tag]['ratio'] = cut_dict[com_tag]['NLO'].Clone()
#cut_dict[com_tag]['ratio'].Divide(cut_dict[com_tag]['LO'])

# Plot 
ROOT.gStyle.SetOptStat(0)
canvas = ROOT.TCanvas('canvas', 'canvas', 600, 600)
legend = ROOT.TLegend(0.7, 0.7, 0.9, 0.9)
first = True
col_idx = 2
#for cut in ['L_pT30']:
for cut in cuts:
    cut_dict[cut]['ratio'].SetLineColor(col_idx)
    cut_dict[cut]['ratio_s'].SetLineColor(col_idx)
    cut_dict[cut]['ratio_s_up'].SetLineColor(col_idx)
    cut_dict[cut]['ratio_s_do'].SetLineColor(col_idx)
    cut_dict[cut]['ratio_s_up'].SetLineStyle(2)
    cut_dict[cut]['ratio_s_do'].SetLineStyle(2)
    if first:
        first = False
        cut_dict[cut]['ratio'].SetTitle('k-factors')
        cut_dict[cut]['ratio'].GetXaxis().SetTitle('gen W p_{T}')
        cut_dict[cut]['ratio'].GetYaxis().SetRangeUser(0.2, 1.4)
        cut_dict[cut]['ratio'].Draw()
    else: cut_dict[cut]['ratio'].Draw('same')
    cut_dict[cut]['ratio_s'].Draw('histo same')
    cut_dict[cut]['ratio_s_up'].Draw('histo same')
    cut_dict[cut]['ratio_s_do'].Draw('histo same')

    legend.AddEntry(cut_dict[cut]['ratio'], cut, 'l')

    col_idx += 1
    if col_idx == 5: col_idx += 1

hist_mj.SetLineColor(1)
hist_mj.Draw('hist same')
hist_cur.Draw('same')
legend.Draw()

canvas2 = ROOT.TCanvas('canvas2', 'canvas2', 600, 600)
first = True
for cut in cuts:
    cut_dict[cut]['reldiff'] = cut_dict[cut]['ratio_s'].Clone()
    #cut_dict[cut]['reldiff'].Add(cut_dict['ALL']['ratio_s'], -1.)
    cut_dict[cut]['reldiff'].Divide(cut_dict['ALL']['ratio_s'])
    if first: 
        first = False
        cut_dict[cut]['reldiff'].Draw('hist')
    else: cut_dict[cut]['reldiff'].Draw('hist same')
#r2 = cut_dict['LEP']['ratio_s'].Clone()
#r2.Divide(cut_dict['SC']['ratio_s'])
#r3 = cut_dict['JET']['ratio_s'].Clone()
#r3.Divide(cut_dict['SC']['ratio_s'])
#r2.Draw()
#r3.Draw('same')

#canvas3 = ROOT.TCanvas('canvas3', 'canvas3', 600, 600)
#cut_dict['L_pT30']['ratio_sd'].Draw()
raw_input('exit')
