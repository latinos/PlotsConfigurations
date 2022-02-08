import ROOT

do_log = False

r_file = ROOT.TFile('Wjets_inv_root/plots_Wjets_inv_2018v7.root', 'read')
cut = 'InCh_SR'
var = 'BDT_2018bin_5last'
h_nj = r_file.Get(cut+'/'+var+'/histo_Wjets_NLOnj')
g_nj = ROOT.TGraphErrors(h_nj)
g_nj.SetLineColor(1)
g_nj.SetLineWidth(2)
g_nj.SetMarkerStyle(20)
g_nj.SetMarkerSize(1.1)
g_nj.SetTitle('')

pt_bins = ['600toInf', '400to600', '250to400', '100to250']

legend = ROOT.TLegend(0.1,0.7, 0.9, 0.9)
h_pt = {}
idx = 2
for bins in pt_bins:
    h_pt[bins] = r_file.Get(cut+'/'+var+'/histo_Wjets_NLOpt'+bins)
    h_pt[bins].SetFillColor(idx)
    legend.AddEntry(h_pt[bins], 'Wpt '+bins, 'f')
    idx += 1

legend.AddEntry(g_nj, 'Njet binned', 'ep')

h_pt_stack = ROOT.THStack('hs', '')
for bins in h_pt:
    h_pt_stack.Add(h_pt[bins])


canvas = ROOT.TCanvas('canvas', 'canvas', 600, 600)

if do_log: g_nj.GetYaxis().SetRangeUser(0.01, 10000)
else: g_nj.GetYaxis().SetRangeUser(0., 300)
g_nj.GetXaxis().SetRangeUser(0.5, 1)
#h_nj.Draw('axis')
g_nj.Draw('ap')
h_pt_stack.Draw('histo same')
g_nj.Draw('p')
legend.Draw('same')

if do_log: ROOT.gPad.SetLogy()

canvas.Update()

if do_log: canvas.SaveAs('Wjet_samples_last5bins_statistics_log.png')
else: canvas.SaveAs('Wjet_samples_last5bins_statistics.png')

raw_input('done')

