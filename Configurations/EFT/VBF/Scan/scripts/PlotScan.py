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

 year = "16"
 #src = path.realpath("kill/higgsCombine"+AC+"Scan_kill.MultiDimFit.mH125.1.root")
 #src = path.realpath("hists/higgsCombine"+AC+"Scan.MultiDimFit.mH125.1.root")
 #src = path.realpath("hists_"+year+"_MCStatsOFF/higgsCombine"+AC+"Scan_"+year+"_MCStatsOFF.MultiDimFit.mH125.1.root")
 src = path.realpath("hists/higgsCombine"+AC+"_"+year+"_ScanSF.MultiDimFit.mH125.1.root")
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
 canvas.SaveAs("plots/"+AC+"_SF2.pdf")
 canvas.SaveAs("plots/"+AC+"_SF2.png")
 canvas.SaveAs("plots/"+AC+"_SF2.root")

############################################

#plot("HVV_H0M","F_{a3}cos(#phi_{a3})")
#plot("HVV_H0PH","F_{a2}cos(#phi_{a2})")
plot("HVV_H0L1","F_{#Lambda 1}cos(#phi_{#Lambda 1})")
#plot("HVV_H0LZg","F_{#Lambda_{1}^{Z#gamma}}cos(#phi_{#Lambda_{1}^{Z#gamma}})")
#plot("HVV_EFTH0M","F_{a3}cos(#phi_{a3})")
#plot("HVV_EFTH0PH","F_{a2}cos(#phi_{a2})")
#plot("HVV_EFTH0L1","F_{#Lambda 1}cos(#phi_{#Lambda 1})")
#plot("HGG_H0M","F^{ggH}_{a3}cos(#phi^{ggH}_{a3})")

def multiplot(AC,FAC):

 Binning_Dict = {
	'_16':'VBF + VH channels (2016)', 
	'_17':'ggF + VBF + VH channels (2017)',
	'_18':'ggF + VBF + VH channels (2018)',
#        '_16':'ggF + 2j (2016)', 
#        '_17':'ggF + 2j (2017)',
#        '_18':'ggF + 2j (2018)',
	'_run2':'ggF + 2j (Full Run 2)',
        '_16_2j':'VBF + VH channels (2016)',
        '_17_2j':'VBF + VH channels (2017)',
        '_18_2j': 'VBF + VH channels (2018)',
	'_Run2':'VBF + Vh Resolved + Vh Boosted (Run 2)',
	'_ggh':'ggF + VBF + VH channels (Full Run 2)',
        '_boostedonly':'GGH + VBF + Vh Boosted (Run 2)',
        'HVV_H0PH_16': 'GGH + VBF + Vh Resolved + Vh Boosted (2016)',
        'HVV_H0PH_17': 'GGH + VBF + Vh Resolved + Vh Boosted (2017)',
	'HVV_H0PH_18': 'GGH + VBF + Vh Resolved + Vh Boosted (2018)',
        'HVV_H0L1_16': 'VBF + Vh Resolved + Vh Boosted (2017)',
        'HVV_H0L1_17': 'VBF + Vh Resolved + Vh Boosted (2018)',
	'HVV_H0L1_18' : 'GGH + VBF + Vh Resolved + Vh Boosted (2018)',
	'HVV_H0LZg' : 'VBF + VH channels (Full Run 2)',
	'HGG_H0M':'',
	'HVV_H0M_ggh' :'GGH + VBF + Vh Resolved + Vh Boosted (Run 2)',
	'HVV_H0PH_ggh':'GGH + VBF + Vh Resolved + Vh Boosted (Run 2)',
	'HVV_H0L1_ggh':'GGH + VBF + Vh Resolved + Vh Boosted (Run 2)',
        'HVV_H0M_boostedonly' :'GGH + VBF + Vh Boosted (Run 2)',
        'HVV_H0PH_boostedonly':'GGH + VBF + Vh Boosted (Run 2)',
        'HVV_H0L1_boostedonly':'GGH + VBF + Vh Boosted (Run 2)',
#	'.':'ggF + 2j (Full Run 2)',
        '.':'ggF + VBF + VH channels (Full Run 2)',
	'CondorFreezeAllConstrainedNuisances.':'Rate Params only',
	#'_17_2j':'VBF + Vh Resolved + Vh Boosted (2017)',
        #'_18_2j':'VBF + Vh Resolved + Vh Boosted (2018)',
        '_16_2j_NoStat':'VBF + Vh Resolved + Vh Boosted (NoStat) (2016)',
        '_16_2j_Vh18_NoStat':'VBF + Vh Resolved + Vh Boosted (Vh from 2018) (2016)',
	'_17_2j_noProc':'VBF + Vh Resolved + Vh Boosted (non-rebinned) (2017)',
	'_16_2j_noProc':'VBF + Vh Resolved + Vh Boosted (non-rebinned) (2016)',
        '_18_2j_noProc':'VBF + Vh Resolved + Vh Boosted (non-rebinned) (2018)'
}
	


 To_Plot = ['_16_2j', '_17_2j', '_18_2j']
# To_Plot = ['_16', '_17', '_18']
# To_Plot = ['.','CondorFreezeAllConstrainedNuisances.']
# To_Plot = ['_ggh']
# To_Plot = ['_run2']
 multigr = ROOT.TMultiGraph()

 colors = [ROOT.kBlue+1, ROOT.kGreen+1, ROOT.kRed+1, ROOT.kPink+1, ROOT.kYellow+1, ROOT.kOrange+1, ROOT.kBlack, ROOT.kAzure+1]
 canvas = ROOT.TCanvas('canvas', '', 800, 1200)
 iter = 0
 #legend = ROOT.TLegend(0.1,0.1, 0.45, 0.25)
 #legend = ROOT.TLegend(0.50,0.75, 0.9, 0.9)
 #legend = ROOT.TLegend(0.15,0.75, 0.65, 0.88)
 #legend = ROOT.TLegend(0.42,0.75, 0.89, 0.88)
 #legend = ROOT.TLegend(0.45,0.78, 0.89, 0.88)
 legend = ROOT.TLegend(0.25,0.75, 0.75, 0.85)
 for opt in To_Plot:
   #src = path.realpath("hists/higgsCombine"+AC+opt+"_ScanCondor.MultiDimFit.mH125.1.root")#CondorFreezeAllConstrainedNuisances
   src = path.realpath("hists/higgsCombine"+AC+opt+"_Scan.MultiDimFit.mH125.1.root")
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
 line68 = ROOT.TLine(-1,1.0,1,1)
 line95 = ROOT.TLine(-1,3.84,1,3.84)
 line68.SetLineStyle(9)
 line95.SetLineStyle(9)
 line68.SetLineColor(ROOT.kBlack)
 line95.SetLineColor(ROOT.kBlack)
 line95.Draw("L")
 line68.Draw("L")
 multigr.GetXaxis().SetTitle(''+FAC+'')
 multigr.GetYaxis().SetTitle('-2 #Delta ln L')
 multigr.GetYaxis().SetRangeUser(0,4)
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
 texlumi = ROOT.TLatex(0.68,0.91,"L = 137 fb^{-1} (#sqrt{s} = 13 TeV)");
 texlumi.SetNDC();
# texlumi.SetTextAlign(33);
 texlumi.SetTextFont(42);
 texlumi.SetTextSize(0.03);
 texlumi.SetLineWidth(2);
# texlumi.Draw("sames");

 #canvas.Update()
 canvas.SaveAs("plots/"+AC+"_final161718.pdf")
 canvas.SaveAs("plots/"+AC+"_final161718.png")
 canvas.SaveAs("plots/"+AC+"_final161718.root")
###########################################

#multiplot("HVV_H0M","F_{a3}")
#multiplot("HVV_H0PH","F_{a2}")
#multiplot("HVV_H0L1","F_{#Lambda 1}")
#multiplot("HVV_H0LZg","F_{#Lambda_{1}^{Z#gamma}}")
#multiplot("HGG_H0M","F^{ggF}_{a3}")

#multiplot("HVV_H0PH","F_{a2}cos(#phi_{a2})")
