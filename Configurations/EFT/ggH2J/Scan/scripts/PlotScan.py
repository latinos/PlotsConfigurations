
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

 file = "hists/higgsCombine"+AC+".MultiDimFit.mH125.root"
# file = "hists/higgsCombine"+AC+".MultiDimFit.mH125.1.root"
 print "Using File : ", file

 src = path.realpath(""+file+"") 
 F = ROOT.TFile.Open(''+src+'', 'read')
 T = F.Get("limit")

 x, y, yV, yF = array('d'), array('d'), array('d'), array('d')

 for evt in T : 
  Fai = evt.Fai #dm
  muV = 1 #evt.trackedParam_muV
  muF = 1 #evt.trackedParam_muF
  QE = evt.quantileExpected
  dNLL = evt.deltaNLL
  NLL  = evt.nll + evt.nll0
  if QE>-2  : 
   x.append(Fai)
   y.append(2*dNLL) #(dNLL+NLL))
   yV.append(muV)
   yF.append(muF)
 n = len(x)

 gr = ROOT.TGraph(n, x, y)
 gr.SetMarkerColor(1)
 gr.SetMarkerStyle(7)
 gr.SetMarkerSize(2)
 gr.SetMinimum(-1.0)
 gr.SetMaximum(10)
 gr.GetXaxis().SetTitle(''+FAC+'')
 gr.GetYaxis().SetTitle('-2 #Delta ln L') 


 canvas = ROOT.TCanvas('canvas', '', 500, 500)
 gr.Draw() #LA")
 canvas.SaveAs("plots/"+AC+".pdf")
 canvas.SaveAs("plots/"+AC+".png")
 canvas.SaveAs("plots/"+AC+".root")

 grV = ROOT.TGraph(n, x, yV)
 grF = ROOT.TGraph(n, x, yF)
 grV.SetMarkerColor(1)
 grF.SetMarkerColor(1)
 grV.SetMarkerStyle(7)
 grF.SetMarkerStyle(7)
 grV.SetMinimum(min(yV))
 grV.SetMaximum(max(yV))
 grF.SetMinimum(min(yF))
 grF.SetMaximum(max(yF))
 grV.GetXaxis().SetTitle(''+FAC+'')
 grV.GetYaxis().SetTitle('-2 #Delta ln L') 

# canvas2 = ROOT.TCanvas('canvas2', '', 500, 500)
# grV.Draw()
# canvas2.SaveAs("plots/"+AC+"-Mu.pdf")
# canvas2.SaveAs("plots/"+AC+"-Mu.png")
# canvas2.SaveAs("plots/"+AC+"-Mu.root")

# canvas3 = ROOT.TCanvas('canvas3', '', 500, 500)
# grF.Draw()
# canvas3.SaveAs("plots/"+AC+"-MuF.pdf")
# canvas3.SaveAs("plots/"+AC+"-MuF.png")
# canvas3.SaveAs("plots/"+AC+"-MuF.root")


###########################################


#plot("HVV_H0PH","F_{a2}cos(#phi_{a2})")

#plot("HVV_H0M_H1","F_{a3}")

plot("HVV_H0M_2j_H1","F_{a3}")


#plot("HVV_H0LZg-Test_H1","F_{#Lambda_{1}^{Z#gamma}}cos(#phi_{#Lambda_{1}^{Z#gamma}})")
#plot("HVV_H0LZg-Test_H2","F_{#Lambda_{1}^{Z#gamma}}cos(#phi_{#Lambda_{1}^{Z#gamma}})")

#plot("HVV_H0LZg-Test_16_H1","F_{#Lambda_{1}^{Z#gamma}}cos(#phi_{#Lambda_{1}^{Z#gamma}})")
#plot("HVV_H0LZg-Test_16_H2","F_{#Lambda_{1}^{Z#gamma}}cos(#phi_{#Lambda_{1}^{Z#gamma}})")

#plot("HVV_H0LZg-Test_17_H1","F_{#Lambda_{1}^{Z#gamma}}cos(#phi_{#Lambda_{1}^{Z#gamma}})")
#plot("HVV_H0LZg-Test_17_H2","F_{#Lambda_{1}^{Z#gamma}}cos(#phi_{#Lambda_{1}^{Z#gamma}})")

#plot("HVV_H0LZg-Test_18_H1","F_{#Lambda_{1}^{Z#gamma}}cos(#phi_{#Lambda_{1}^{Z#gamma}})")
#plot("HVV_H0LZg-Test_18_H2","F_{#Lambda_{1}^{Z#gamma}}cos(#phi_{#Lambda_{1}^{Z#gamma}})")


#plot("HVV_H0LZg_H2","F_{#Lambda_{1}^{Z#gamma}}cos(#phi_{#Lambda_{1}^{Z#gamma}})")
#plot("HVV_H0LZg_H3","F_{#Lambda_{1}^{Z#gamma}}cos(#phi_{#Lambda_{1}^{Z#gamma}})")
#plot("HVV_H0LZg_H4","F_{#Lambda_{1}^{Z#gamma}}cos(#phi_{#Lambda_{1}^{Z#gamma}})")
#plot("HVV_H0LZg_H5","F_{#Lambda_{1}^{Z#gamma}}cos(#phi_{#Lambda_{1}^{Z#gamma}})")
#plot("HVV_H0LZg_H6","F_{#Lambda_{1}^{Z#gamma}}cos(#phi_{#Lambda_{1}^{Z#gamma}})")
#plot("HVV_H0LZg_H7","F_{#Lambda_{1}^{Z#gamma}}cos(#phi_{#Lambda_{1}^{Z#gamma}})")
#plot("HVV_H0LZg_H8","F_{#Lambda_{1}^{Z#gamma}}cos(#phi_{#Lambda_{1}^{Z#gamma}})")
#plot("HVV_H0LZg_H9","F_{#Lambda_{1}^{Z#gamma}}cos(#phi_{#Lambda_{1}^{Z#gamma}})")

#plot("HVV_H0LZg_17_Hyp1","F_{#Lambda_{1}^{Z#gamma}}cos(#phi_{#Lambda_{1}^{Z#gamma}})")
#plot("HVV_H0LZg_18_Hyp1","F_{#Lambda_{1}^{Z#gamma}}cos(#phi_{#Lambda_{1}^{Z#gamma}})")


#plot("HGG_H0M","F^{ggH}_{a3}cos(#phi^{ggH}_{a3})")

