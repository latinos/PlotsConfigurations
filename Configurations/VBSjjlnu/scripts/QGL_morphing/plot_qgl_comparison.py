import ROOT as R 
import sys 

iFm = R.TFile.Open(sys.argv[1])
iFw = R.TFile.Open(sys.argv[2])

R.gStyle.SetOptStat(0)

h_morph = iFm.Get("res_sig_ele/vjet_0_qgl_res/histo_VBS")
h_morph_up = iFm.Get("res_sig_ele/vjet_0_qgl_res/histo_VBS_QGLmorphUp")
h_morph_do = iFm.Get("res_sig_ele/vjet_0_qgl_res/histo_VBS_QGLmorphDown")
h_weight = iFw.Get("res_sig_ele/vjet_0_qgl_res_qglweight/histo_VBS")
h_base = iFw.Get("res_sig_ele/vjet_0_qgl_res/histo_VBS")

color = R.TColor.GetColor(255,156, 51)#(72, 145, 234)#
h_morph.SetLineColor(color)
h_morph.SetFillColor(color)
h_morph.SetFillStyle(1001)

gr = R.TGraphErrors(40)
gr_morph =  R.TGraphAsymmErrors(40)
for i in range(1,41):
    gr.SetPoint(i-1, h_weight.GetBinCenter(i), h_weight.GetBinContent(i))
    gr.SetPointError(i-1, 0.0125, abs(h_weight.GetBinContent(i) - h_base.GetBinContent(i)))
    gr_morph.SetPoint(i-1, h_morph.GetBinCenter(i), h_morph.GetBinContent(i))
    gr_morph.SetPointError(i-1, 0.0125,0.0125, abs(h_morph.GetBinContent(i) - h_morph_do.GetBinContent(i)), abs(h_morph.GetBinContent(i) - h_morph_up.GetBinContent(i)))


gr_morph.SetLineColor(12)
gr_morph.SetFillColor(12)
gr_morph.SetLineWidth(2)
gr_morph.SetFillStyle(3004)

gr.SetFillStyle(0)
gr.SetLineWidth(2)

c = R.TCanvas("c","c",800,600)

leg = R.TLegend(0.2,0.7,0.4,0.8)
h_morph.Draw("hist")
gr.Draw("5 same")
gr_morph.Draw("2 same")

leg.AddEntry(h_morph, "morphed QGL (VBS)","f")
leg.AddEntry(gr, "reweighted QGL (VBS)", "f") 
leg.Draw("same")
h_morph.GetXaxis().SetTitle("Vjet 0 QGL")
h_morph.SetTitle("")
h_morph.GetYaxis().SetRangeUser(0., h_morph.GetMaximum()*1.3)
c.Draw()

