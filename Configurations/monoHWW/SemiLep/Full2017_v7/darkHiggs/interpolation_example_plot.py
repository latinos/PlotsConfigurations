import ROOT

def set_style():
   ROOT.gStyle.SetPadBorderMode(0)
   ROOT.gStyle.SetFrameBorderMode(0)
   ROOT.gStyle.SetPadBottomMargin(0.12)
   ROOT.gStyle.SetPadLeftMargin(0.12)
   ROOT.gStyle.SetCanvasColor(ROOT.kWhite)
   ROOT.gStyle.SetCanvasDefH(600) #Height of canvas
   ROOT.gStyle.SetCanvasDefW(600) #Width of canvas
   ROOT.gStyle.SetCanvasDefX(0)   #Position on screen
   ROOT.gStyle.SetCanvasDefY(0)

   ROOT.gStyle.SetPadTopMargin(0.05)
   ROOT.gStyle.SetPadBottomMargin(0.25)#0.13)
   ROOT.gStyle.SetPadLeftMargin(0.15)#0.16)
   ROOT.gStyle.SetPadRightMargin(0.05)#0.02)

   # For the Pad:
   ROOT.gStyle.SetPadBorderMode(0)
   # ROOT.gStyle.SetPadBorderSize(Width_t size = 1)
   ROOT.gStyle.SetPadColor(ROOT.kWhite)
   ROOT.gStyle.SetPadGridX(False)
   ROOT.gStyle.SetPadGridY(False)
   ROOT.gStyle.SetGridColor(0)
   ROOT.gStyle.SetGridStyle(3)
   ROOT.gStyle.SetGridWidth(1)

   # For the Frame:
   ROOT.gStyle.SetFrameBorderMode(0)
   ROOT.gStyle.SetFrameBorderSize(1)
   ROOT.gStyle.SetFrameFillColor(0)
   ROOT.gStyle.SetFrameFillStyle(0)
   ROOT.gStyle.SetFrameLineColor(1)
   ROOT.gStyle.SetFrameLineStyle(1)
   ROOT.gStyle.SetFrameLineWidth(1)

   ROOT.gStyle.SetAxisColor(1, "XYZ")
   ROOT.gStyle.SetStripDecimals(ROOT.kTRUE)
   ROOT.gStyle.SetTickLength(0.03, "XYZ")
   ROOT.gStyle.SetNdivisions(605, "XYZ")
   ROOT.gStyle.SetPadTickX(1)  # To get tick marks on the opposite side of the frame
   ROOT.gStyle.SetPadTickY(1)
   ROOT.gStyle.SetGridColor(0)
   ROOT.gStyle.SetGridStyle(3)
   ROOT.gStyle.SetGridWidth(1)


   ROOT.gStyle.SetTitleColor(1, "XYZ")
   ROOT.gStyle.SetTitleFont(42, "XYZ")
   ROOT.gStyle.SetTitleSize(0.05, "XYZ")
   ROOT.gStyle.SetTitleXOffset(1.15)#0.9)

   ROOT.gStyle.SetOptStat(0)
set_style()
source_file = '/afs/cern.ch/user/f/fernanpe/public/for_MonoH_analysis/histos.root'
r_file = ROOT.TFile(source_file, 'read')
mp1 = 'mhs_160_mx_150_mZp_1200'
mp2 = 'mhs_160_mx_200_mZp_400'
mp3 = 'mhs_160_mx_100_mZp_2000'
mp1_name = 'm_{s} 160 m_{#chi} 150 m_{Z\'} 1200'
mp2_name = 'm_{s} 160 m_{#chi} 200 m_{Z\'} 400'
mp3_name = 'm_{s} 160 m_{#chi} 100 m_{Z\'} 2000'


hist1 = r_file.Get('Histo_'+mp1)
hist2 = r_file.Get('Histo_'+mp2)
hist3 = r_file.Get('Histo_'+mp3)

histr2 = hist2.Clone()
histr2.Divide(hist1)

histr3 = hist3.Clone()
histr3.Divide(hist1)

shrink = 0.3
canvas = ROOT.TCanvas('canvas', 'canvas', 600, 600)
pad1 = ROOT.TPad('pad1', 'pad1',0,shrink,1,1)
pad1.SetBottomMargin(0)
pad1.Draw()
pad2 = ROOT.TPad('pad2', 'pad2',0,0,1,shrink)
pad2.SetTopMargin(0)
pad2.Draw()

canvas.cd()
pad1.cd()
hist1.GetYaxis().SetRangeUser(0, 0.2)
hist1.GetXaxis().SetRangeUser(0, 1200)
hist1.GetXaxis().SetTitle('p_{T}^{s}')
hist1.GetYaxis().SetTitle('relative fraction')

hist1.SetLineColor(1)
hist2.SetLineColor(2)
hist3.SetLineColor(3)

hist1.Draw()
hist2.Draw('same')
hist3.Draw('same')

legend = ROOT.TLegend(1-.42, 1-.2, 1-.07, 1-.08)
legend.SetFillColor(0)
legend.SetLineColor(0)
legend.SetShadowColor(0)
legend.SetTextFont(42)

legend.AddEntry(hist1, mp1_name, "l")
legend.AddEntry(hist2, mp2_name, "l")
legend.AddEntry(hist3, mp3_name, "l")

legend.Draw()

canvas.cd()
pad2.cd()

histr2.GetXaxis().SetTitle('p_{T}^{s} [GeV]')
histr2.GetXaxis().SetTitleFont(42)
old_size = histr2.GetXaxis().GetTitleSize()
new_size = old_size*(1./shrink)
histr2.GetXaxis().SetTitleSize(new_size)
old_size = histr2.GetYaxis().GetTitleSize()
new_size = old_size*(1./shrink)
histr2.GetYaxis().SetTitleSize(new_size)
histr2.GetXaxis().SetTitleOffset(1.)
histr2.GetYaxis().SetTitleOffset(shrink+0.1)
#print('size: ', histr2.GetXaxis().GetTitleOffset())
histr2.GetXaxis().SetLabelSize(0.04*(1./shrink)*0.6)
histr2.GetYaxis().SetLabelSize(0.04*(1./shrink)*0.6)

histr2.GetYaxis().SetTitle('ratio')
histr2.GetYaxis().SetRangeUser(0, 6)
histr2.GetXaxis().SetRangeUser(0, 1200)

histr2.SetLineColor(2)
histr3.SetLineColor(3)

histr2.Draw()
histr3.Draw('same')

canvas.Update()
canvas.SaveAs('interpolation_ratios.png')

raw_input('done')

r_file.Close()
