

import sys
import ROOT 
import numpy as np
import shutil
import math
from os import path
from array import array

ROOT.gStyle.SetOptStat(0)
ROOT.gStyle.SetOptTitle(0)


def plot(AC,FAC):

 src = path.realpath("hists/higgsCombine"+AC+".MultiDimFit.mH125.root")
 F = ROOT.TFile.Open(''+src+'', 'read')
 T = F.Get("limit")

 x, y = array('d'), array('d')

 for evt in T : 
  Fai = evt.Fai
  dNLL = evt.deltaNLL
  x.append(Fai)
  y.append(2*dNLL)

 n = len(x)


 gr = ROOT.TGraph(n, x, y)
 gr.SetMarkerColor(1)
 gr.SetMarkerStyle(7)
# gr.SetMaximum(1.5)
 gr.GetXaxis().SetTitle(''+FAC+'')
 gr.GetYaxis().SetTitle('-2 #Delta ln L') 

 canvas = ROOT.TCanvas('canvas', '', 800, 800)
 gr.Draw("AP")
 canvas.SaveAs("plots/"+AC+".pdf")
 canvas.SaveAs("plots/"+AC+".png")

###########################################
def plot_comparison(AC1, AC2, FAC):

 src1 = path.realpath("hists/higgsCombine"+AC1+".MultiDimFit.mH125.root")
 src2 = path.realpath("hists/higgsCombine"+AC2+".MultiDimFit.mH125.root")
 F1 = ROOT.TFile.Open(''+src1+'', 'read')
 F2 = ROOT.TFile.Open(''+src2+'', 'read') 
 T1 = F1.Get("limit")
 T2 = F2.Get("limit")

 x1, y1 = array('d'), array('d')
 x2, y2 = array('d'), array('d')
 for evt in T1 :
  Fai = evt.Fai
  dNLL = evt.deltaNLL
  x1.append(Fai)
  y1.append(2*dNLL)

 for evt in T2 :
  Fai = evt.Fai
  dNLL = evt.deltaNLL
  x2.append(Fai)
  y2.append(2*dNLL)

 n1 = len(x1)
 n2 = len(x2)

 mg = ROOT.TMultiGraph();

 gr1 = ROOT.TGraph(n1, x1, y1)
 gr1.SetMarkerColor(ROOT.kRed)
 gr1.SetMarkerStyle(7)
# gr.SetMaximum(1.5)
 gr1.GetXaxis().SetTitle(''+FAC+'')
 gr1.GetYaxis().SetTitle('-2 #Delta ln L') 

 gr2 = ROOT.TGraph(n2, x2, y2)
 gr2.SetMarkerColor(ROOT.kBlue)
 gr2.SetMarkerStyle(7)
# gr.SetMaximum(1.5)
 #gr2.GetXaxis().SetTitle(''+FAC+'')
# gr2.GetYaxis().SetTitle('-2 #Delta ln L') 
 leg = ROOT.TLegend()
 leg.AddEntry(gr1, "VBF+VH", "P")
 leg.AddEntry(gr2, "VBF+VH+BVH", "P")
 mg.Add(gr1)
 mg.Add(gr2)
 mg.GetXaxis().SetTitle(''+FAC+'')
 mg.GetYaxis().SetTitle('-2 #Delta ln L') 
 mg.SetMaximum(1.1)
 canvas = ROOT.TCanvas('canvas', '', 800, 800)
 mg.Draw("AP")
 leg.Draw("same")
 canvas.SaveAs("plots/"+AC1+".pdf")
 canvas.SaveAs("plots/"+AC1+".png")
#####################################
def plot_4comparison(AC1, AC2, AC3, AC4, FAC):

 src1 = path.realpath("hists/higgsCombine"+AC1+".MultiDimFit.mH125.root")
 src2 = path.realpath("hists/higgsCombine"+AC2+".MultiDimFit.mH125.root")
 src3 = path.realpath("hists/higgsCombine"+AC3+".MultiDimFit.mH125.root")
 src4 = path.realpath("hists/higgsCombine"+AC4+".MultiDimFit.mH125.root")
 F1 = ROOT.TFile.Open(''+src1+'', 'read')
 F2 = ROOT.TFile.Open(''+src2+'', 'read')
 F3 = ROOT.TFile.Open(''+src3+'', 'read')
 F4 = ROOT.TFile.Open(''+src4+'', 'read')
 T1 = F1.Get("limit")
 T2 = F2.Get("limit")
 T3 = F3.Get("limit")
 T4 = F4.Get("limit")

 x1, y1 = array('d'), array('d')
 x2, y2 = array('d'), array('d')
 x3, y3 = array('d'), array('d')
 x4, y4 = array('d'), array('d')
 for evt in T1 :
  Fai = evt.Fai
  dNLL = evt.deltaNLL
  x1.append(Fai)
  y1.append(2*dNLL)

 for evt in T2 :
  Fai = evt.Fai
  dNLL = evt.deltaNLL
  x2.append(Fai)
  y2.append(2*dNLL)

 for evt in T3 :
  Fai = evt.Fai
  dNLL = evt.deltaNLL
  x3.append(Fai)
  y3.append(2*dNLL)

 for evt in T4 :
  Fai = evt.Fai
  dNLL = evt.deltaNLL
  x4.append(Fai)
  y4.append(2*dNLL)

 n1 = len(x1)
 n2 = len(x2)
 n3 = len(x3)
 n4 = len(x4)

 mg = ROOT.TMultiGraph();

 gr1 = ROOT.TGraph(n1, x1, y1)
 gr1.SetMarkerColor(ROOT.kRed)
 gr1.SetMarkerStyle(7)
# gr.SetMaximum(1.5)
 gr1.GetXaxis().SetTitle(''+FAC+'')
 gr1.GetYaxis().SetTitle('-2 #Delta ln L') 

 gr2 = ROOT.TGraph(n2, x2, y2)
 gr2.SetMarkerColor(ROOT.kBlue)
 gr2.SetMarkerStyle(7)

 gr3 = ROOT.TGraph(n3, x3, y3)
 gr3.SetMarkerColor(ROOT.kOrange)
 gr3.SetMarkerStyle(7)

 gr4 = ROOT.TGraph(n4, x4, y4)
 gr4.SetMarkerColor(ROOT.kGreen)
 gr4.SetMarkerStyle(7)
# gr.SetMaximum(1.5)
 #gr2.GetXaxis().SetTitle(''+FAC+'')
# gr2.GetYaxis().SetTitle('-2 #Delta ln L') 
 leg = ROOT.TLegend(0.5,0.75,0.75,0.9)
 leg.AddEntry(gr1, "VBF+VH", "P")
 leg.AddEntry(gr2, "VBF+VH+BVH", "P")
 leg.AddEntry(gr3, "VBF+BVH", "P")
 leg.AddEntry(gr4, "VH+BVH", "P")
 mg.Add(gr1)
 mg.Add(gr2)
 mg.Add(gr3)
 mg.Add(gr4)
 mg.GetXaxis().SetTitle(''+FAC+'')
 mg.GetYaxis().SetTitle('-2 #Delta ln L') 
 mg.SetMaximum(1.1)
 canvas = ROOT.TCanvas('canvas', '', 800, 800)
 mg.Draw("AP")
 leg.Draw("same")
 canvas.SaveAs("plots/"+AC1+"4.pdf")
 canvas.SaveAs("plots/"+AC1+"4.png")
###############################################
def plot_muV(AC1, AC2, FAC):

 src1 = path.realpath("hists/higgsCombine"+AC1+".MultiDimFit.mH125.root")
 src2 = path.realpath("hists/higgsCombine"+AC2+".MultiDimFit.mH125.root")
 F1 = ROOT.TFile.Open(''+src1+'', 'read')
 F2 = ROOT.TFile.Open(''+src2+'', 'read')
 T1 = F1.Get("limit")
 T2 = F2.Get("limit")

 x1, y1 = array('d'), array('d')
 x2, y2 = array('d'), array('d')
 for evt in T1 :
  muV = evt.muV
  dNLL = evt.deltaNLL
  x1.append(muV)
  y1.append(2*dNLL)

 for evt in T2 :
  muV = evt.muV
  dNLL = evt.deltaNLL
  x2.append(muV)
  y2.append(2*dNLL)

 n1 = len(x1)
 n2 = len(x2)

 mg = ROOT.TMultiGraph();

 gr1 = ROOT.TGraph(n1, x1, y1)
 gr1.SetMarkerColor(ROOT.kRed)
 gr1.SetMarkerStyle(7)
# gr.SetMaximum(1.5)
 gr1.GetXaxis().SetTitle(''+FAC+'')
 gr1.GetYaxis().SetTitle('-2 #Delta ln L') 

 gr2 = ROOT.TGraph(n2, x2, y2)
 gr2.SetMarkerColor(ROOT.kBlue)
 gr2.SetMarkerStyle(7)
# gr.SetMaximum(1.5)
 #gr2.GetXaxis().SetTitle(''+FAC+'')
# gr2.GetYaxis().SetTitle('-2 #Delta ln L') 
 leg = ROOT.TLegend(0.45,0.8,0.7,0.9)
 leg.AddEntry(gr1, "VBF+VH", "P")
 leg.AddEntry(gr2, "VBF+VH+BVH", "P")
 mg.Add(gr1)
 mg.Add(gr2)
 mg.GetXaxis().SetTitle(''+FAC+'')
 mg.GetYaxis().SetTitle('-2 #Delta ln L') 
 mg.SetMaximum(1.6)
 mg.GetXaxis().SetRangeUser(0.0,2.0)
 canvas = ROOT.TCanvas('canvas', '', 800, 800)
 mg.Draw("AP")
 leg.Draw("same")
 canvas.SaveAs("plots/"+AC1+"muV.pdf")
 canvas.SaveAs("plots/"+AC1+"muv.png")
#####################
def plot_dmorancomparison(AC1, AC2, FAC):

 src1 = path.realpath("hists/higgsCombine"+AC1+".MultiDimFit.mH125.root")
 src2 = path.realpath("hists/higgsCombine"+AC2+".MultiDimFit.mH125.root")
 F1 = ROOT.TFile.Open(''+src1+'', 'read')
 F2 = ROOT.TFile.Open(''+src2+'', 'read')
 T1 = F1.Get("limit")
 T2 = F2.Get("limit")

 x1, y1 = array('d'), array('d')
 x2, y2 = array('d'), array('d')
 for evt in T1 :
  Fai = evt.Fai
  dNLL = evt.deltaNLL
  x1.append(Fai)
  y1.append(2*dNLL)

 for evt in T2 :
  Fai = evt.Fai
  dNLL = evt.deltaNLL
  x2.append(Fai)
  y2.append(2*dNLL)

 n1 = len(x1)
 n2 = len(x2)

 mg = ROOT.TMultiGraph();

 gr1 = ROOT.TGraph(n1, x1, y1)
 gr1.SetMarkerColor(ROOT.kRed)
 gr1.SetMarkerStyle(7)
# gr.SetMaximum(1.5)
 gr1.GetXaxis().SetTitle(''+FAC+'')
 gr1.GetYaxis().SetTitle('-2 #Delta ln L') 

 gr2 = ROOT.TGraph(n2, x2, y2)
 gr2.SetMarkerColor(ROOT.kBlue)
 gr2.SetMarkerStyle(7)

 f=ROOT.TFile.Open("hists/H0PH_HVV_dmoran.root")
 c1 = ROOT.TCanvas()
 c1 = f.Get("canvas")

 gh = ROOT.TGraph()
 gh = c1.GetListOfPrimitives().FindObject("Graph")
 gh.SetMarkerStyle(7)
 gh.SetMarkerColor(1)
 #gr.SetMaximum(1.5)
 #gr2.GetXaxis().SetTitle(''+FAC+'')
 #gr2.GetYaxis().SetTitle('-2 #Delta ln L') 
 leg = ROOT.TLegend(0.1, 0.1, 0.5, 0.3)
 leg.SetBorderSize(0)
 leg.SetFillStyle(0)
 #leg.AddEntry(gr1, "VBF+VH", "P")
 leg.AddEntry(gr2, "VBF + Resolved VH + Boosted VH", "P")
 leg.AddEntry(gh, "VBF + VH (Dermot)", "P")
 #mg.Add(gr1)
 mg.Add(gr2)
 mg.Add(gh)
 mg.GetXaxis().SetTitle(''+FAC+'')
 mg.GetYaxis().SetTitle('-2 #Delta ln L') 
 mg.SetMaximum(1.1)
 canvas = ROOT.TCanvas('canvas', '', 800, 800)
 mg.Draw("AP")
 leg.Draw("same")
 canvas.SaveAs("plots/"+AC1+"_dermot.pdf")
 canvas.SaveAs("plots/"+AC1+"_dermot.png")
'''
plot("H0M_HVV","F_{a3}cos(#phi_{a3})")
plot("H0PH_HVV","F_{a2}cos(#phi_{a2})")
plot("H0L1_HVV","F_{#Lambda 1}cos(#phi_{#Lambda 1})")
#plot("H0M_HGG","F^{ggH}_{a3}cos(#phi^{ggH}_{a3})")

plot("H0M_HVBF","F_{a3}cos(#phi_{a3})")
plot("H0PH_HVBF","F_{a2}cos(#phi_{a2})")
plot("H0L1_HVBF","F_{#Lambda 1}cos(#phi_{#Lambda 1})")

plot("H0M_HVH","F_{a3}cos(#phi_{a3})")
plot("H0PH_HVH","F_{a2}cos(#phi_{a2})")
plot("H0L1_HVH","F_{#Lambda 1}cos(#phi_{#Lambda 1})")

plot("H0M_HBVH","F_{a3}cos(#phi_{a3})")
plot("H0PH_HBVH","F_{a2}cos(#phi_{a2})")
plot("H0L1_HBVH","F_{#Lambda 1}cos(#phi_{#Lambda 1})")

plot("H0M_HVBFVH","F_{a3}cos(#phi_{a3})")
plot("H0PH_HVBFVH","F_{a3}cos(#phi_{a3})")
plot("H0L1_HVBFVH","F_{a3}cos(#phi_{a3})")

plot_comparison("H0L1_HVBFVH","H0L1_HVV","F_{#Lambda 1}cos(#phi_{#Lambda 1})")
plot_comparison("H0M_HVBFVH","H0M_HVV","F_{a3}cos(#phi_{a3})")
plot_comparison("H0PH_HVBFVH","H0PH_HVV","F_{a2}cos(#phi_{a2})")

plot_4comparison("H0L1_HVBFVH","H0L1_HVV", "H0L1_HVBFBVH", "H0L1_HVHBVH","F_{#Lambda 1}cos(#phi_{#Lambda 1})")
plot_4comparison("H0M_HVBFVH","H0M_HVV","H0M_HVBFBVH", "H0M_HVHBVH", "F_{a3}cos(#phi_{a3})")
plot_4comparison("H0PH_HVBFVH","H0PH_HVV", "H0PH_HVBFBVH", "H0PH_HVHBVH","F_{a2}cos(#phi_{a2})")

plot_muV("H0L1_HVBFVH_muV","H0L1_HVV_muV","F_{#Lambda 1}cos(#phi_{#Lambda 1})")
plot_muV("H0M_HVBFVH_muV","H0M_HVV_muV","F_{a3}cos(#phi_{a3})")
plot_muV("H0PH_HVBFVH_muV","H0PH_HVV_muV","F_{a2}cos(#phi_{a2})")
'''
#plot_dmorancomparison("H0M_HVBFVH","H0M_HVV","F_{a3}cos(#phi_{a3})")
plot_dmorancomparison("H0PH_HVBFVH","H0PH_HVV","F_{a2}cos(#phi_{a2})")
#plot_dmorancomparison("H0L1_HVBFVH","H0L1_HVV","F_{#Lambda 1}cos(#phi_{#Lambda 1})")
