#include "setTDRStyle.C"
import sys
import time
import ROOT 
import numpy as np
import shutil
import math
from os import path
from array import array
from ROOT import *

#import matplotlib.pyplot as plt
#plt.style.use('seaborn-white')

ROOT.gStyle.SetOptStat(0)
ROOT.gStyle.SetOptTitle(0)


def plot(AC,FAC):

 year = "_17_2j"
 #src = path.realpath("kill/higgsCombine"+AC+"Scan_kill.MultiDimFit.mH125.1.root")
 #src = path.realpath("hists/higgsCombine"+AC+"Scan.MultiDimFit.mH125.1.root")
 #src = path.realpath("hists_"+year+"_MCStatsOFF/higgsCombine"+AC+"Scan_"+year+"_MCStatsOFF.MultiDimFit.mH125.1.root")
 #src = path.realpath("hists/higgsCombine"+AC+"_"+year+"_ScanSF.MultiDimFit.mH125.1.root")
 #src = path.realpath("hists/higgsCombine"+AC+year+"_Scan.MultiDimFit.mH125.1.root")
 src = path.realpath("hists/higgsCombineHVV_H0M_17_boosted_noWW_notopfj_Scan.MultiDimFit.mH125.1.root")
 #<src = path.realpath("hists/higgsCombine"+AC+"_VBFonlyScanZOOMIN2.MultiDimFit.mH125.1.root")
 #src = path.realpath("hists/higgsCombineHVV_H0L1_18ScanFREEZE.MultiDimFit.mH125.1.root")
 #src = path.realpath("hists/higgsCombine"+AC+"ScanNEW2.MultiDimFit.mH125.1.root")
#higgsCombineHVV_H0MScan.MultiDimFit.mH125.1.root
 F = ROOT.TFile.Open(''+src+'', 'read')
 T = F.Get("limit")

 x, y = array('d'), array('d')

 for evt in T :
  Fai = evt.Fai
  dNLL = evt.deltaNLL
  QE   = evt.quantileExpected
  if QE>-1 :
   x.append(Fai)
   y.append(2*dNLL)
   if(y==3.84): print("95% CL ", x)
   if(y==1.0): print("68% CL ", x)

 n = len(x)

 gr = ROOT.TGraph(n, x, y)
 gr.SetMarkerColor(kBlue+1)
 gr.SetLineColor(kBlue+1)
 gr.SetMarkerStyle(7)
 #gr.SetMaximum(5)
 gr.GetXaxis().SetTitle(''+FAC+'')
 gr.GetYaxis().SetTitle('-2 #Delta ln L') 

 canvas = ROOT.TCanvas('canvas', '', 900, 900)
 gr.Draw("LA sames")
 canvas.SaveAs("plots/"+AC+year+".pdf")
 canvas.SaveAs("plots/"+AC+year+".png")
 canvas.SaveAs("plots/"+AC+year+".root")

############################################

#plot("HVV_H0M","F_{a3}cos(#phi_{a3})")
#plot("HVV_H0PH","F_{a2}cos(#phi_{a2})")
#plot("HVV_H0L1","F_{#Lambda 1}cos(#phi_{#Lambda 1})")
#plot("HVV_H0LZg","F_{#Lambda_{1}^{Z#gamma}}cos(#phi_{#Lambda_{1}^{Z#gamma}})")
#plot("HVV_EFTH0M","F_{a3}cos(#phi_{a3})")
#plot("HVV_EFTH0PH","F_{a2}cos(#phi_{a2})")
#plot("HVV_EFTH0L1","F_{#Lambda 1}cos(#phi_{#Lambda 1})")
#plot("HGG_H0M","F^{ggH}_{a3}cos(#phi^{ggH}_{a3})")

def multiplot(AC,FAC):

 Binning_Dict = {
	'_16_ggh':'ggF + VBF + VH channels (2016)', 
        '_17_ggh':'ggF + VBF + VH channels (2017)',
        '_18_ggh':'ggF + VBF + VH channels (2018)',
	'_17':'ggF + VBF + VH channels (2017)',
	'_18':'ggF + VBF + VH channels (2018)',
#        '_16':'ggF + 2j (2016)', 
#        '_17':'ggF + 2j (2017)',
#        '_18':'ggF + 2j (2018)',
	'_161718_2j' : 'VBF + Resolved VH (Run 2)',
        #'_161718_2j' : 'ggH+2j (Run 2)',
        '_161718_boosted' : 'VBF + Resolved VH + Boosted VH (Run 2)',
        '_161718_boosted_03' : 'VBF + Resolved VH + Boosted VH (Run 2)',
        '_161718_ggh_03' : 'VBF + Resolved VH + Boosted VH (Run 2)',
        '_161718_ggh_01' : 'VBF + Resolved VH + Boosted VH (Run 2)',
        '_161718_ggh' : 'ggF + VBF + VH channels (Run 2)',
	'_run2':'ggF + 2j (Full Run 2)',
        '_16_2j':'VBF + Resolved VH (2016)',
        #'_16_2j':'ggH+2j (2016)',
        #'_17_2j':'VBF + Resolved VH (2017)',
        '_17_2j':'ggH+2j (2017)',
        #'_18_2j': 'VBF + Resolved VH (2018)',
        '_18_2j':'ggH+2j (2018)',
	'_17_boosted':'VBF + Resolved VH + Boosted VH (2017)',
        '_16_boosted':'VBF + Resolved VH + Boosted VH (2016)',
        '_18_boosted':'VBF + Resolved VH + Boosted VH (2018)',
        #'_18_2j':'VBF + Vh Resolved + Vh Boosted (2018)',
}
	


 To_Plot = ['_161718_ggh',]
# To_Plot = ['_17_2j', '_17_boosted', '_17_ggh']
# To_Plot = ['_161718_ggh_03', '_161718_ggh_01']
# To_Plot = ['_16', '_17', '_18']
# To_Plot = ['.','CondorFreezeAllConstrainedNuisances.']
# To_Plot = ['_ggh']
# To_Plot = ['_run2']
 multigr = ROOT.TMultiGraph()

 colors = [ROOT.kBlue+1, ROOT.kGreen+1, ROOT.kRed+1, ROOT.kPink+1, ROOT.kYellow+1, ROOT.kOrange+1, ROOT.kBlack, ROOT.kAzure+1, ROOT.kGreen+1]
 canvas = ROOT.TCanvas('canvas', '', 800, 1200)
 iter = 6
 #legend = ROOT.TLegend(0.1,0.75, 0.55, 0.95)
# legend = ROOT.TLegend(0.50,0.75, 0.9, 0.9)
 legend = ROOT.TLegend(0.15,0.75, 0.65, 0.88)
 #legend = ROOT.TLegend(0.43,0.75, 0.90, 0.88)
 #legend = ROOT.TLegend(0.45,0.78, 0.89, 0.88)
 #legend = ROOT.TLegend(0.25,0.75, 0.75, 0.85)
 for opt in To_Plot:
   #src = path.realpath("hists/higgsCombine"+AC+opt+"_ScanCondor.MultiDimFit.mH125.1.root")#CondorFreezeAllConstrainedNuisances
   src = path.realpath("higgsCombine"+AC+opt+"_Scan.MultiDimFit.mH125.1.root")
   #src = path.realpath("hists/higgsCombine"+AC+"_ScanZoom"+opt+"MultiDimFit.mH125.1.root")
   #src = path.realpath("hists/higgsCombine"+AC+opt+"_ScanCondorHadd.MultiDimFit.mH125.1.root")
   F = ROOT.TFile.Open(''+src+'', 'read')
   T = F.Get("limit")
   x, y = array('d'), array('d')

   for evt in T :
     Fai = evt.Fai
     dNLL = evt.deltaNLL
     QE   = evt.quantileExpected
     if QE>-1 :
       print(Fai, 2*dNLL)
#       if(2*dNLL<10 and (2*dNLL>5 or 2*dNLL<3.92)): #2018
#      if(2*dNLL<2.0 or 2*dNLL>2.2):
       x.append(Fai)
       y.append(2*dNLL)
       if(y==3.84): print("95% CL ", x)
       if(y==1.0): print("68% CL ", x)

   
   n = len(x)
   gr = ROOT.TGraph(n, x, y)
   print(iter, colors[iter])
   gr.SetMarkerColor(colors[iter])
   gr.SetLineColor(colors[iter])
   gr.SetLineWidth(2)
   gr.GetXaxis().SetRangeUser(-1,1)
   gr.GetXaxis().SetTitle(''+FAC+'')
   gr.GetYaxis().SetTitle('-2 #Delta ln L') 
   gr.SetMarkerStyle(8)
   gr.SetMarkerSize(0.4)
   legend.AddEntry(gr, Binning_Dict[opt], "F")
   gr.SetFillColor(colors[iter])
   iter = iter +1
   multigr.Add(gr)
   F.Close()
 

 multigr.Draw("LA")
 multigr.GetXaxis().SetRangeUser(-1,1)
# multigr.GetXaxis().SetRangeUser(-0.03,0.03)
 line68 = ROOT.TLine(-1,1.0,1,1)
 line95 = ROOT.TLine(-1,3.84,1,3.84)
# line68 = ROOT.TLine(-0.01,1.0,0.01,1)
# line95 = ROOT.TLine(-0.01,3.84,0.01,3.84)
 line68.SetLineStyle(9)
 line95.SetLineStyle(9)
 line68.SetLineColor(ROOT.kBlack)
 line95.SetLineColor(ROOT.kBlack)
 line95.Draw("P")
 line68.Draw("P")
 multigr.GetXaxis().SetTitle(''+FAC+'')
 multigr.GetYaxis().SetTitle('-2 #Delta ln L')
 #multigr.GetYaxis().SetTitleOffset(1.5)
 multigr.GetYaxis().SetRangeUser(0,16)
 #legend.SetHeader("All nuisances included","C"); 
 #legend.SetHeader("Rate Params only","C");
 #legend.SetHeader("VBF + Vh Resolved + Vh Boosted (Full Run 2)", "C")
 legend.SetTextSize(0.02) #0.018
 print("leg font ", legend.GetTextSize())
 legend.Draw()
 tex = ROOT.TLatex(0.10,0.91,"#bf{CMS Preliminary}"); 
 tex.SetNDC();
 tex.SetTextFont(42);
 tex.SetTextSize(0.03);
 tex.SetLineWidth(2);
 tex.Draw("sames");
 texlumi = ROOT.TLatex(0.90,0.935,"L = 138 fb^{-1} (#sqrt{s} = 13 TeV)");
 texlumi.SetNDC();
 texlumi.SetTextAlign(33);
 texlumi.SetTextFont(42);
 texlumi.SetTextSize(0.03);
 texlumi.SetLineWidth(2);
 texlumi.Draw("sames");

 #canvas.Update()
 canvas.SaveAs("plots/"+AC+"_FullRun2_AN.pdf")
 canvas.SaveAs("plots/"+AC+"_FullRun2_AN.png")
 canvas.SaveAs("plots/"+AC+"_FullRun2_AN.root")

 raw_input("Press ENTER... ")

###########################################

multiplot("HVV_H0M","F_{a3}")
#multiplot("HVV_H0PH","F_{a2}")
#multiplot("HVV_H0L1","F_{#Lambda 1}")
#multiplot("HVV_H0LZg","F_{#Lambda_{1}^{Z#gamma}}")
#multiplot("HGG_H0M","F^{ggF}_{a3}")


#time.sleep(630)

