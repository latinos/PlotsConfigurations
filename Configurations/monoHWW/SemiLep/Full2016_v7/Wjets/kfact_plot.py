import copy
import ROOT
import LatinoAnalysis.ShapeAnalysis.tdrStyle as tdrStyle

input_file = '../../Wjets_kfactors/HT_to_NLO_QCD_k_factors_mjj.root'
#input_file = '../../Wjets_kfactors/HT_to_NLO_QCD_k_factors_2016_mjj.root'
#input_file = '../../Wjets_kfactors/HT_to_NLO_QCD_k_factors_2016_detajj.root'
r_file = ROOT.TFile(input_file, 'READ')
#run2 = ['2016']
run2 = ['2016', '2017', '2018']

tg_dict = {}
for year in run2:
    tg_dict[year] = {}
    tg_dict[year]['nom'] = r_file.Get('k_factor_'+year+'_nom')
    tg_dict[year]['stat_up'] = r_file.Get('k_factor_'+year+'_stat_up')
    tg_dict[year]['stat_do'] = r_file.Get('k_factor_'+year+'_stat_do')
    #tg_dict[year]['jet'] = r_file.Get('k_factor_'+year+'_jetsel')

    # Line edit
    tg_dict[year]['nom'].SetLineWidth(2)
    tg_dict[year]['stat_up'].SetLineWidth(2)
    tg_dict[year]['stat_do'].SetLineWidth(2)
    #tg_dict[year]['jet'].SetLineWidth(2)

leg_dict = {}
var_list = ['nom', 'stat_up']
for var in var_list:
    leg_dict[var] = tg_dict[run2[0]][var].Clone()
    leg_dict[var].SetLineColor(1)

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

# Nominal window
canvas = ROOT.TCanvas('canvas', 'canvas', 800, 800)
#legend = ROOT.TLegend(0.6, 0.75, 0.9, 0.9)
legend = ROOT.TLegend(0.2, 0.75, 0.5, 0.9)
#legend = ROOT.TLegend(0.2, 0.2, 0.5, 0.35)
legend.SetNColumns(2)
legend.SetFillColor(0)
legend.SetTextFont(42)
legend.SetTextSize(0.035)
legend.SetLineColor(0)
legend.SetShadowColor(0)
first = True
for year in run2:
    if first:
        first = False
        tg_dict[year]['nom'].GetYaxis().SetRangeUser(0.8, 1.6)
        tg_dict[year]['nom'].GetXaxis().SetTitle('m_{jj}')
        #tg_dict[year]['nom'].GetXaxis().SetTitle('W_{gen} p_{T}')
        #tg_dict[year]['nom'].GetXaxis().SetTitle('p_{T}^{W_{gen}}')
        tg_dict[year]['nom'].GetYaxis().SetTitle('k-factor')
        tg_dict[year]['nom'].Draw()
    else: tg_dict[year]['nom'].Draw('same')
    tg_dict[year]['stat_up'].Draw('same')
    tg_dict[year]['stat_do'].Draw('same')
    #tg_dict[year]['jet'].Draw('same')
legend.AddEntry(tg_dict['2016']['nom'], '2016', 'l')
legend.AddEntry(leg_dict['nom'], 'nominal', 'l')
legend.AddEntry(tg_dict['2017']['nom'], '2017', 'l')
legend.AddEntry(leg_dict['stat_up'], 'statistics', 'l')
legend.AddEntry(tg_dict['2018']['nom'], '2018', 'l')
#legend.AddEntry(leg_dict['jet'], 'jet selection', 'l')
legend.Draw()
canvas.SaveAs('k_factors_mjj.png')
#canvas.SaveAs('k_factors_detajj.png')

# Log window
canvas_log = ROOT.TCanvas('canvas_log', 'canvas_log', 800, 800)
canvas_log.SetLogx()
first = True
for year in run2:
    if first:
        first = False
        tg_dict[year]['nom'].GetYaxis().SetRangeUser(0.8, 1.6)
        #tg_dict[year]['nom'].GetXaxis().SetTitle('#Delta#eta(j,j)')
        tg_dict[year]['nom'].GetXaxis().SetTitle('m_{jj}')
        #tg_dict[year]['nom'].GetXaxis().SetTitle('W_{gen} p_{T}')
        #tg_dict[year]['nom'].GetXaxis().SetTitle('p_{T}^{W_{gen}}')
        tg_dict[year]['nom'].GetYaxis().SetTitle('k-factor')
        tg_dict[year]['nom'].Draw()
    else: tg_dict[year]['nom'].Draw('same')
    tg_dict[year]['stat_up'].Draw('same')
    tg_dict[year]['stat_do'].Draw('same')
    #tg_dict[year]['jet'].Draw('same')
legend.Draw()
#canvas_log.SaveAs('k_factors_log.png')
canvas_log.Update()

raw_input('exit')
