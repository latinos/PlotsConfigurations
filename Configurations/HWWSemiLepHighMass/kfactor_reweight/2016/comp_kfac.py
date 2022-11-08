import ROOT

file_1 = '../../Wjets_kfactors/HT_to_NLO_QCD_k_factors.root'
file_2 = '../../Wjets_kfactors/HT_to_NLO_QCD_k_factors2.root'
file_3 = '../../Wjets_kfactors/HT_to_NLO_QCD_k_factors3.root'

file_r = 'Wjets_kfac_root/plots_Wjets_kfac_2016v7.root'
var_1 = 'genW_pt'
#var_2 = 'genW_pt_inc'
var_2 = 'genW_pt_true'
cut = 'JET'
r_file_r = ROOT.TFile(file_r, 'READ')
h_r1 = r_file_r.Get(cut+'/'+var_1+'/histo_Wjets_NLOmerge')
h_r1.Divide(r_file_r.Get(cut+'/'+var_1+'/histo_Wjets_HT'))
h_r2 = r_file_r.Get(cut+'/'+var_2+'/histo_Wjets_NLOmerge')
h_r2.Divide(r_file_r.Get(cut+'/'+var_2+'/histo_Wjets_HT'))
tg_r1 = ROOT.TGraph(h_r1) 
tg_r2 = ROOT.TGraph(h_r2) 

tg_1 = 'k_factors_2016'
tg_2 = 'k_factor_2016_nom'
tg_js = 'k_factor_2016_jetsel'

r_file_1 = ROOT.TFile(file_1, 'READ')
r_file_2 = ROOT.TFile(file_2, 'READ')

r_tg_1 = r_file_1.Get(tg_1)
r_tg_2 = r_file_2.Get(tg_2)
r_tg_js = r_file_2.Get(tg_js)

r_tg_1.SetLineColor(1)
tg_r2.SetLineColor(3)
#r_tg_1.Draw()
tg_r2.Draw()
tg_r1.Draw('same')
r_tg_2.Draw('same')
r_tg_js.Draw('same')
#h_r1.Draw('same')
#h_r2.Draw('same')
#tg_r1.Draw('same')

print(r_tg_1.Eval(0.))
r_file_3 = ROOT.TFile(file_3, 'READ')
r_tg_3 = r_file_3.Get(tg_2)
print(r_tg_3.Eval(-1.),r_tg_3.Eval(0.), r_tg_3.Eval(0.05), r_tg_3.Eval(0.1), r_tg_3.Eval(0.5))
raw_input('exit')
