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

# src = path.realpath("hists/higgsCombineHVV_H0M_Run2_ScanMINIMA.MultiDimFit.mH125.1.root")
# src = path.realpath("higgsCombineHVV_H0M_161718_2jFIXING_ScanFIXING.POINTS.0.19.MultiDimFit.mH125.1.root")
# src = path.realpath("higgsCombineHVV_H0M_161718_2jFIXING_ScanFIXING.MultiDimFit.mH125.1.root")
# src = path.realpath("hists/higgsCombineHVV_H0M_Run2_versionPreAppOnly2018_ScanFIXING.MultiDimFit.mH125.1.root")
# src = path.realpath("hists/higgsCombineHVV_H0M_161718_2jFIXING_ScanFIXING.MultiDimFit.mH125.1.root")
# src = path.realpath("hists/higgsCombineHVV_H0M_Run2_OBS_ggh_Scan.MultiDimFit.mH125.1.root")
# src = path.realpath("hists/higgsCombineHVV_H0M_18_OBS_boosted_NoRobustHesse_Scan.MultiDimFit.mH125.1.root")
 #src = path.realpath("hists/higgsCombineHVV_H0LZg_Run2_OBS_boosted_muV_Scan.MultiDimFit.mH125.1.root") 
 src = path.realpath("hists/higgsCombineHVV_H0M_18_H1.MultiDimFit.mH125.1.root")
 
# src2 = path.realpath("higgsCombineHVV_H0M_Run2_OBS_ggh_muVEXP_Scan.MultiDimFit.mH125.1.root")
 
 F = ROOT.TFile.Open(''+src+'', 'read')
 T = F.Get("limit")

 x, y = array('d'), array('d')

 for evt in T :
  Fai = evt.Fai
#  muF = evt.muF
  #NLL  = evt.nll + evt.nll0
  dNLL = evt.deltaNLL
  QE   = evt.quantileExpected
  if QE>-1 :
   print(Fai, 2*dNLL)
   x.append(Fai)
   y.append(2*dNLL)
   #y.append(2*(dNLL+NLL))

   if(y==3.84): print("95% CL ", x)
   if(y==1.0): print("68% CL ", x)

 n = len(x)

 print(n)
 ''' 
 F = ROOT.TFile.Open(''+src2+'', 'read')
 T = F.Get("limit")
 
 x2, y2 = array('d'), array('d')

 for evt in T :
  Fai = evt.muV
  dNLL = evt.deltaNLL
  #NLL  = evt.nll + evt.nll0
  QE   = evt.quantileExpected
  if QE>-1 :
   x2.append(Fai)
   #y2.append(2*(dNLL+NLL))
   y2.append(2*dNLL)

 n2 = len(x2)
 '''
 canvas = ROOT.TCanvas('canvas', '', 1000, 1000)

 gr = ROOT.TGraph(n, x, y)
 gr.SetMarkerColor(kBlue+1)
 gr.SetLineColor(kBlue+1)
 gr.SetMarkerStyle(7)
# gr.SetMaximum(8)
# gr.SetMinimum(-0.1)
# gr.GetYaxis().SetRangeUser(-0.1,8)
 gr.GetXaxis().SetTitle('muV')
 #gr.GetXaxis().SetTitle(''+FAC+'')
 gr.GetXaxis().SetRangeUser(0,3)
 gr.GetYaxis().SetTitle('-2 #Delta ln L') 
 #gr.GetYaxis().SetRangeUser(0,1.5)
 #gr.Draw("LA sames")
 '''
 print(n2)
 gr2 = ROOT.TGraph(n2, x2, y2)
 gr2.SetMarkerColor(kBlue+1)
 gr2.SetLineColor(kBlue+1)
 gr2.SetMarkerStyle(7)
 '''
# gr2.SetMaximum(8)
# gr2.SetMinimum(0)
# gr2.SetMaximum(1)
# gr2.SetMinimum(0)
# gr2.GetXaxis().SetTitle(''+FAC+'')
# gr2.GetYaxis().SetTitle('-2 #Delta ln L') 
# gr.GetYaxis().SetRangeUser(-1,1)
# canvas = ROOT.TCanvas('canvas', '', 900, 900)
# gr2.Draw("LA sames")
 
 multi = ROOT.TMultiGraph()
 #gr2.SetLineColor(2)
 #gr2.SetLineWidth(2)
 gr.SetLineWidth(2)  
 multi.Add(gr)
 #multi.SetMaximum(8)
 #multi.Add(gr2)
 multi.Draw("LA sames")
 multi.GetYaxis().SetRangeUser(-0.1,230)
 multi.GetXaxis().SetRangeUser(0,3)
 canvas.SaveAs("plots/"+AC+"_OBSEXP_muV.pdf")
 canvas.SaveAs("plots/"+AC+"_OBSEXP_muV.png")
 #canvas.SaveAs("plots/"+AC+"_UNBL_observed.root")
 raw_input("Press ENTER... ")
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
        '_16e_H1' : '2016 (Expected)',
        '_17e_H1' : '2017 (Expected)',
        '_18e_H1' : '2018 (Expected)',
        '_16_H1' : '2016 (Observed)',
        '_16_H2' : '2016 (Observed)',
        '_18_H2' : '2016 (Observed)',
        '_17_H1' : '2017 (Observed)',
        '_18_H1' : '2018 (Observed)',
        'e_H3' : 'Full Run 2 (Expected)',
        'e_H1' : 'Full Run 2 (Expected)',
        '_H3': 'Full Run 2 (Observed)',
        '_H1' : 'Full Run 2 (Observed)',
	'_1je_H1':'Full Run 2 (Expected)',
        '_1j_H1':'Full Run 2 (Observed)',
        '_1j_H2':'Full Run 2 (Observed)',
        '_2je_H1':'Full Run 2 (Expected)',
        '_2j_H1':'Full Run 2 (Observed)',
        '_18_H2' : '2018 (Observed)',
        '_2j_H2':'Full Run 2 (Observed)',
        '_2j_H2':'Full Run 2 (Observed)',
	'_Run2_ZOOM_Scan_EXP': 'Full Run 2 (Expected)',
        '_Run2_ZOOM_Scan_OBS': 'Full Run 2 (Observed)',

}
	
 #To_Plot = ['e_H3', '_H3']
 #To_Plot = ['e_H1', '_H1']
 To_Plot = ['_2je_H1', '_2j_H1']
 #To_Plot = ['_16e_H1', '_16_H2','_17e_H1', '_17_H1','_18e_H1', '_18_H1']
 multigr = ROOT.TMultiGraph()

# colors = [ROOT.kBlack, ROOT.kAzure+7, ROOT.kBlack, ROOT.kAzure+7, ROOT.kPink+1, ROOT.kYellow+1, ROOT.kOrange+1, ROOT.kBlack, ROOT.kAzure+1, ROOT.kGreen+1]
 colors = [ROOT.kBlack, ROOT.kBlack, ROOT.kBlack]
 #colors = [ROOT.kBlue+1, ROOT.kBlue+1, ROOT.kGreen+1, ROOT.kGreen+1, ROOT.kRed+1, ROOT.kRed+1]
 canvas = ROOT.TCanvas('canvas', '', 800, 950)
 iter = 0
 legend = ROOT.TLegend(0.15,0.73, 0.68, 0.88)
 for opt in To_Plot:
   src = path.realpath("AN_dermot/hists_new/higgsCombine"+AC+opt+".MultiDimFit.mH125.root")
   F = ROOT.TFile.Open(''+src+'', 'read')
   T = F.Get("limit")
   x, y = array('d'), array('d')

   for evt in T :
     Fai = evt.Fai
     dNLL = evt.deltaNLL
     QE   = evt.quantileExpected
     if QE>-2 :
       print(Fai, 2*dNLL)
       #if(2*dNLL>15): continue
       x.append(Fai)
       y.append(2*dNLL)
       if(y==3.84): print("95% CL ", x)
       if(y==1.0): print("68% CL ", x)

   n = len(x)
   x, y = zip(*sorted(zip(x, y)))
   gr = ROOT.TGraph(n, np.array(x), np.array(y))

   print(iter, colors[iter])
   gr.SetMarkerColor(colors[iter])
   gr.SetLineColor(colors[iter])
   gr.SetLineWidth(2)
   gr.SetLineStyle(2)
   if (iter == 1 or iter == 3 or iter == 5): gr.SetLineStyle(1)

   gr.GetXaxis().SetRangeUser(-1,1)
   gr.GetXaxis().SetTitle(''+FAC+'')
   gr.GetYaxis().SetTitle('-2 #Delta ln L') 
   gr.SetMarkerStyle(8)
   gr.SetMarkerSize(0.4)
   legend.AddEntry(gr, Binning_Dict[opt], "L") #F
   gr.SetFillColor(colors[iter])
   iter = iter +1
   multigr.Add(gr)
   F.Close()
 

 multigr.Draw("LA")
 multigr.GetXaxis().SetRangeUser(-1,1)
 line68 = ROOT.TLine(-1,1.0,1,1)
 line95 = ROOT.TLine(-1,3.84,1,3.84)
 line68.SetLineStyle(3)
 line95.SetLineStyle(3)
 line68.SetLineColor(ROOT.kGray)
 line95.SetLineColor(ROOT.kGray)
 line95.Draw("P")
 line68.Draw("P")

 multigr.GetXaxis().SetTitle(''+FAC+'')
 multigr.GetYaxis().SetTitle('-2 #Delta ln L')
 multigr.GetYaxis().SetTitleOffset(1.5)
 multigr.GetYaxis().SetRangeUser(0.0,10)#5.6

 legend.SetTextSize(0.02) #0.018
 print("leg font ", legend.GetTextSize())
 legend.Draw()
 legend.SetHeader("VBF + VH channels", "C")
 #legend.SetHeader("ggF 0j and 1j channels", "C")
 #legend.SetHeader("VBF and VH channels", "C")
 
 legend.SetNColumns(1)
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
 canvas.Update()
 #canvas.Update()
 canvas.SaveAs("plots/"+AC+"_OBSEXP_Run2"+opt+"AC_NEW.pdf")
 canvas.SaveAs("plots/"+AC+"_OBSEXP_Run2"+opt+"AC_NEW.png")
 canvas.SaveAs("plots/"+AC+"_OBSEXP_Run2"+opt+"AC_NEW.root")

 raw_input("Press ENTER... ")

###########################################

multiplot("HVV_H0M","F_{a3}")
#multiplot("HVV_H0PH","F_{a2}")
#multiplot("HVV_H0L1","F_{#Lambda 1}")
#multiplot("HVV_H0LZg","F_{#Lambda_{1}^{Z#gamma}}")
#multiplot("HGG_H0M","F^{ggF}_{a3}")


#time.sleep(630)

