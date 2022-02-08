#include "setTDRStyle.C"
import sys
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

 year = "18B"
 #src = path.realpath("kill/higgsCombine"+AC+"Scan_kill.MultiDimFit.mH125.1.root")
 #src = path.realpath("hists/higgsCombine"+AC+"Scan.MultiDimFit.mH125.1.root")
 src = path.realpath("hists_"+year+"_MCStatsOFF/higgsCombine"+AC+"Scan_"+year+"_MCStatsOFF.MultiDimFit.mH125.1.root")
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
  x.append(Fai)
  y.append(2*dNLL)

 n = len(x)

 gr = ROOT.TGraph(n, x, y)
 gr.SetMarkerColor(kBlue+1)
 gr.SetLineColor(kBlue+1)
 gr.SetMarkerStyle(7)
 #gr.SetMaximum(5)
 gr.GetXaxis().SetTitle(''+FAC+'')
 gr.GetYaxis().SetTitle('-2 #Delta ln L') 

 canvas = ROOT.TCanvas('canvas', '', 900, 900)
 gr.Draw("AP sames")
 canvas.SaveAs("plots_"+year+"_MCStatsOFF/"+AC+".pdf")
 canvas.SaveAs("plots_"+year+"_MCStatsOFF/"+AC+".png")
 canvas.SaveAs("plots_"+year+"_MCStatsOFF/"+AC+".root")

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
	'_161718_MCStatsOFF':'VBF + Vh Resolved (Full Run 2)', 
	'_16B17B18B_MCStatsOFF':'VBF + Vh Resolved + Vh Boosted (Full Run 2)',
	'_16_MCStatsOFF': 'VBF + Vh Resolved (2016)',
        '_17_MCStatsOFF': 'VBF + Vh Resolved (2017)',
        '_18_MCStatsOFF': 'VBF + Vh Resolved (2018)',
	'_16B_MCStatsOFF': 'VBF + Vh Resolved + Vh Boosted (2016)',
        '_17B_MCStatsOFF': 'VBF + Vh Resolved + Vh Boosted (2017)',
        '_18B_MCStatsOFF': 'VBF + Vh Resolved + Vh Boosted (2018)',
	'_18GGH_MCStatsOFF' : 'GGH + VBF + Vh Resolved + Vh Boosted (2018)',
	'_161718_MCStatsOFF_03' : 'VBF + Vh Resolved (Full Run 2)',
	'_16B17B18B_MCStatsOFF_03':'VBF + Vh Resolved + Vh Boosted (Full Run 2)',
	'_18GGH_MCStatsOFF_03' : 'GGH + VBF + Vh Resolved + Vh Boosted (2018)',
	'_18_MCStatsOFF_03':'VBF + Vh Resolved (2018)',
	'_18B_MCStatsOFF_03':'VBF + Vh Resolved + Vh Boosted (2018)',
	'_161718GGH_MCStatsOFF':'GGH + VBF + Vh Resolved + Vh Boosted (Full Run 2)',
}
	


 #To_Plot_Resolved = ['_2','_dermot2mu']
 To_Plot_Resolved = ['_161718_MCStatsOFF_03', '_16B17B18B_MCStatsOFF_03']
 #To_Plot_Boosted = ['_mth30_MCStatsOFF_1', '_mth30_MCStatsOFF_2', '_mth30_MCStatsOFF_3', '_mth30_MCStatsOFF_4']
 #To_Plot_Boosted = ['_mth60_MCStatsOFF_1', '_mth60_MCStatsOFF_2', '_mth60_MCStatsOFF_3', '_mth60_MCStatsOFF_4']
 To_Plot_Boosted = []
 #To_Plot_Boosted = ['_mth60_MCStatsOFF_1', '_mth60_MCStatsOFF_2', '_mth60_MCStatsOFF_3', '_mth30_MCStatsOFF_1', '_mth30_MCStatsOFF_2', '_mth30_MCStatsOFF_3']

 multigr = ROOT.TMultiGraph()

 colors = [ROOT.kBlue+1, ROOT.kGreen+1, ROOT.kRed+1, ROOT.kPink+1, ROOT.kYellow+1, ROOT.kOrange+1, ROOT.kBlack, ROOT.kAzure+1]
 canvas = ROOT.TCanvas('canvas', '', 800, 1000)
 iter = 0+6
 #legend = ROOT.TLegend(0.1,0.1, 0.45, 0.25)
 #legend = ROOT.TLegend(0.55,0.75, 0.9, 0.9)
 legend = ROOT.TLegend(0.30,0.75, 0.70, 0.9)
 
 for opt in To_Plot_Resolved + To_Plot_Boosted:
   src = path.realpath("hists"+opt+"/higgsCombine"+AC+"Scan"+opt+".MultiDimFit.mH125.1.root")
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
   print(iter, colors[iter])
   gr.SetMarkerColor(colors[iter])
   
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

 multigr.Draw("APS")
 line68 = ROOT.TLine(-0.03,1.0,0.03,1)
 line95 = ROOT.TLine(-0.03,3.84,0.03,3.84)
 line68.SetLineStyle(9)
 line95.SetLineStyle(9)
 line68.SetLineColor(ROOT.kBlack)
 line95.SetLineColor(ROOT.kBlack)
 line95.Draw("L")
 line68.Draw("L")
 multigr.GetXaxis().SetTitle(''+FAC+'')
 multigr.GetYaxis().SetTitle('-2 #Delta ln L')
 multigr.GetYaxis().SetRangeUser(0.,4)
 multigr.GetXaxis().SetRangeUser(-0.03,0.03)
 legend.Draw()
 canvas.SaveAs("plots"+opt+"/"+AC+opt+"03.pdf")
 canvas.SaveAs("plots"+opt+"/"+AC+opt+"03.png")
 canvas.SaveAs("plots"+opt+"/"+AC+opt+"03.root")
###########################################

#multiplot("HVV_H0M","F_{a3}cos(#phi_{a3})")
#multiplot("HVV_H0PH","F_{a2}cos(#phi_{a2})")
#multiplot("HVV_H0L1","F_{#Lambda 1}cos(#phi_{#Lambda 1})")
multiplot("HVV_H0LZg","F_{#Lambda_{1}^{Z#gamma}}cos(#phi_{#Lambda_{1}^{Z#gamma}})")
#multiplot("HGG_H0M","F^{ggH}_{a3}cos(#phi^{ggH}_{a3})")
