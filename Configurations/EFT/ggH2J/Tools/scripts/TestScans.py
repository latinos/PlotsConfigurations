
import sys
import ROOT 
import numpy as np
import shutil
import math
from scipy import linalg
from os import path
from array import array
import os

import matplotlib.pyplot as plt
plt.style.use('seaborn-white')
import numpy as np

ROOT.gStyle.SetOptStat(0)
ROOT.gStyle.SetOptTitle(0)


sys.path.append( ''+str(os.getcwd())+'' )

from NegList16Test import *
Ext = "JJH16Test"

#############################

Var = str(sys.argv[1])

if "kd_bsm" in Var : ggHjj_H0M = ggHjj_H0M_kd_bsm16Test
elif "mll" in Var :  ggHjj_H0M = ggHjj_H0M_mll16Test
elif "kd_mix" in Var : ggHjj_H0M = ggHjj_H0M_kd_mix16Test
else : print "WHAT!!"

######################

NegList = { "ggHjj_H0M" : ggHjj_H0M }

#######################

def Get2CoupTerms(a1,a2,V): 

 if V is "2V" :
  CoupArray = [ a1**4, (a1**3)*a2, (a1**2)*(a2**2), a1*(a2**3), a2**4]
 elif V is "1V" :
  CoupArray = [ a1**2, a1*a2, a2**2 ]

 return CoupArray 

#############

cons_zz = {"H0M" : 2.55052, "H0PH" : 1.65684, "H0L1" : 1.2100, "H0LZg" : 0.7613 } # hzz AC
#cons_zz = {"H0M" : 2.55052, "H0PH" : .39446, "H0L1" : 0.43638, "H0LZg" : 0.} # hzz EFT
#cons_zz = {"H0M" : 1.76, "H0PH" : 1.13, "H0L1" : 1.37, "H0LZg" : 0.0 } # hww AC

cons = {"VBF_H0M" : 0.29797901870, "VBF_H0PH" : 0.27196538, "VBF_H0L1" : 0.2158, "VBF_H0LZg" : 0.4091, # MC
        "WH_H0M"  : 0.1236136,     "WH_H0PH"  : 0.0998956,  "WH_H0L1"  : 0.0525,
	"ZH_H0M"  : 0.144057,      "ZH_H0PH"  : 0.112481,   "ZH_H0L1"  : 0.0517,  "ZH_H0LZg"  : 0.0642,
        "ggH_H0M" : 1.76132,       "ggH_H0PH" : 1.133582,   "ggH_H0L1" : 1.3752,
        "ggHjj_H0M" : 1.0062
       }


##############

def getScales(muV, F2, V, AC, vertex, Prod):

 F1 = 1-abs(F2)

 if V is "2V" :

  g2V = Get2CoupTerms(1, cons_zz[""+AC+""], "2V") 
#  g2V = Get2CoupTerms(1, cons[""+Prod+AC+""], "2V")

  N = [0] * 5
  N[0] = muV**2*abs(F1)**2*g2V[0] 
  N[1] = muV**2*math.sqrt(abs(F1))**3*np.sign(F2)*math.sqrt(abs(F2))*g2V[1] 
  N[2] = muV**2*abs(F1)*abs(F2)*g2V[2] 
  N[3] = muV**2*math.sqrt(abs(F1))*np.sign(F2)*math.sqrt(abs(F2))**3*g2V[3] 
  N[4] = muV**2*abs(F2)**2*g2V[4] 

 if V is "1V" :

  if "HGG" in vertex : 
   g1V = Get2CoupTerms(1, 1.0062, "1V") #dm!! 1.0062
  else :
   g1V = Get2CoupTerms(1, cons_zz[""+AC+""], "1V")
#   g1V = Get2CoupTerms(1, cons[""+Prod+AC+""], "1V") 

  N = [0] * 3
  N[0] = muV*abs(F1)*g1V[0] 
  N[1] = muV*math.sqrt(abs(F1))*np.sign(F2)*math.sqrt(abs(F2))*g1V[1] 
  N[2] = muV*abs(F2)*g1V[2] 

 return N


#############################################

def getSumOfRWHVVSamples(f, BaseN, Hyp, Sys): 

 if Hyp == "H0PM" : H1 = f.Get(''+BaseN+'H0PM'+Sys+'') 
 else             : H1 = f.Get(''+BaseN+'H0PM_'+Hyp+Sys+'') 
 if Hyp == "H0M" :  H2 = f.Get(''+BaseN+'H0M'+Sys+'') 
 else            :  H2 = f.Get(''+BaseN+'H0M_'+Hyp+Sys+'')
 if Hyp == "H0PH" : H3 = f.Get(''+BaseN+'H0PH'+Sys+'')
 else             : H3 = f.Get(''+BaseN+'H0PH_'+Hyp+Sys+'')
 if Hyp == "H0L1" : H4 = f.Get(''+BaseN+'H0L1'+Sys+'') 
 else             : H4 = f.Get(''+BaseN+'H0L1_'+Hyp+Sys+'') 
 if Hyp == "H0Mf05" :  H5 = f.Get(''+BaseN+'H0Mf05'+Sys+'') 
 else               :  H5 = f.Get(''+BaseN+'H0Mf05_'+Hyp+Sys+'') 
 if Hyp == "H0PHf05" : H6 = f.Get(''+BaseN+'H0PHf05'+Sys+'')
 else                : H6 = f.Get(''+BaseN+'H0PHf05_'+Hyp+Sys+'')
 if Hyp == "H0L1f05" : H7 = f.Get(''+BaseN+'H0L1f05'+Sys+'')
 else                : H7 = f.Get(''+BaseN+'H0L1f05_'+Hyp+Sys+'')

 H1.SetDirectory(0)
 H2.SetDirectory(0)
 H3.SetDirectory(0)
 H4.SetDirectory(0)
 H5.SetDirectory(0)
 H6.SetDirectory(0)
 H7.SetDirectory(0)

 Sum = H1.Clone()
 Sum.SetDirectory(0)

 H1.SetBit(ROOT.TH1.kIsAverage)
 H2.SetBit(ROOT.TH1.kIsAverage)
 H3.SetBit(ROOT.TH1.kIsAverage)
 H4.SetBit(ROOT.TH1.kIsAverage)
 H5.SetBit(ROOT.TH1.kIsAverage)
 H6.SetBit(ROOT.TH1.kIsAverage)
 H7.SetBit(ROOT.TH1.kIsAverage)
 
 H1.Add(H2,1)
 H1.Add(H3,1) 
 H1.Add(H4,1)
 H1.Add(H5,1)
 H1.Add(H6,1)
 H1.Add(H7,1)

 for i in range(1, H1.GetXaxis().GetNbins()+1):
   n = H1.GetBinContent(i)
   e = H1.GetBinError(i)
   Sum.SetBinContent(i, n)
   Sum.SetBinError(i, e)

 return Sum

def getSumOfRWHGGSamples(f, BaseN, Hyp, Sys): 

 if Hyp == "H0PM" : H1 = f.Get(''+BaseN+'H0PM'+Sys+'') 
 else             : H1 = f.Get(''+BaseN+'H0PM_'+Hyp+Sys+'') 
 if Hyp == "H0M" :  H2 = f.Get(''+BaseN+'H0M'+Sys+'') 
 else            :  H2 = f.Get(''+BaseN+'H0M_'+Hyp+Sys+'')
 if Hyp == "H0Mf05" :  H3 = f.Get(''+BaseN+'H0Mf05'+Sys+'') 
 else               :  H3 = f.Get(''+BaseN+'H0Mf05_'+Hyp+Sys+'') 

 H1.SetDirectory(0)
 H2.SetDirectory(0)
 H3.SetDirectory(0)

 Sum = H1.Clone()
 Sum.SetDirectory(0)

 H1.SetBit(ROOT.TH1.kIsAverage)
 H2.SetBit(ROOT.TH1.kIsAverage)
 H3.SetBit(ROOT.TH1.kIsAverage)
 
 H1.Add(H2,1)
 H1.Add(H3,1)

 for i in range(1, H1.GetXaxis().GetNbins()+1):
   n = H1.GetBinContent(i)
   e = H1.GetBinError(i)
   Sum.SetBinContent(i, n)
   Sum.SetBinError(i, e)

 return Sum

####################### 1D integrals ###################################################################

def Plot2D(Cat,Var,Proc): 

 src = "rootFile"+Ext+"/plots_"+Ext+".root" #dm
 f = ROOT.TFile.Open(''+src+'', 'read')

 H1 = f.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_"+Proc+"")

 H2 = ROOT.TH2D("","", 20, -500, 500, 20,-500,500)
 
 bin = 1
 for i in range(1, H2.GetXaxis().GetNbins()+1):
  for j in range(1, H2.GetYaxis().GetNbins()+1):

   Val = H1.GetBinContent(bin);
   H2.SetBinContent(i,j, Val)
   bin+=1
 
 canvas = ROOT.TCanvas('canvas', '', 500, 500)
 canvas.cd(1)

 H2.GetXaxis().SetLabelSize(0.025)
 H2.GetYaxis().SetLabelSize(0.025)
 H2.GetYaxis().SetTitle('gen p^{vv}_{z} (GeV)')
 H2.GetXaxis().SetTitle('gen p^{ll}_{z} (GeV)')

 H2.Draw("colz")

 canvas.SaveAs("plotJJH/Temps/H2D_"+Var+"_"+Cat+Proc+".pdf")
 canvas.SaveAs("plotJJH/Temps/H2D_"+Var+"_"+Cat+Proc+".png") 


#############################################

def SignalInt(Cat, Var):

 print Cat, Var

 f = ROOT.TFile.Open("rootFile"+Ext+"/plots_"+Ext+".root", 'read')

 h = f.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_H0PM")
 h2 = f.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_H0PH")
 h3 = f.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_H0M")
 print "ggF : ", h.Integral(), h2.Integral(), h3.Integral()
 
 h = f.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_VBF_H0PM")
 h2 = f.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_VBF_H0PH")
 h3 = f.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_VBF_H0M")
 print "VBF : ", h.Integral(), h2.Integral(), h3.Integral()

 h = f.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_WH_H0PM")
 h2 = f.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_WH_H0PH")
 h3 = f.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_WH_H0M")
 print "WH : ", h.Integral(), h2.Integral(), h3.Integral()

 h = f.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_ZH_H0PM")
 h2 = f.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_ZH_H0PH")
 h3 = f.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_ZH_H0M")
 print "ZH : ", h.Integral(), h2.Integral(), h3.Integral()

def GenComparison(Cat, Var, Type, Label):

 print Cat, Var, Type

 f = ROOT.TFile.Open("rootFile"+Ext+"/plots_"+Ext+".root", 'read')

 if Type is "VBF" :

  jhu = getSumOfRWHVVSamples(f, "hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_VBF_", "H0PM", "")
  nlo = f.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_qqH_hww")

 if Type is "VH" :

  jhu  = getSumOfRWHVVSamples(f, "hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_WH_", "H0PM", "")
  jhu2 = getSumOfRWHVVSamples(f, "hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_ZH_", "H0PM", "")
  nlo  = f.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_WH_hww")
  nlo2 = f.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_ZH_hww")
  nlo3 = f.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_ggZH_hww")

  jhu.Add(jhu2)
  nlo.Add(nlo2)
  nlo.Add(nlo3)

 if Type is "ggH" :

  jhu = getSumOfRWHVVSamples(f, "hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_", "H0PM", "")
  nlo = f.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_ggH_hww")

 if Type is "ggHjj" :

  jhu = getSumOfRWHGGSamples(f, "hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_GGHjj_", "H0PM", "")
  nlo = f.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_ggH_hww")

 jhu.SetLineColor(ROOT.kRed)
 jhu.SetFillColor(ROOT.kRed)

 jhue = jhu.Clone()
 jhue.SetFillStyle(3001)
 jhue.SetFillColor(ROOT.kGray+2)
 jhue.SetMarkerSize(.01)

 nlo.SetLineColor(ROOT.kBlack)
 nlo.SetLineWidth(2)

 Scale = nlo.Integral()/jhu.Integral()
 print Scale

 jhu.Scale(1/jhu.Integral())
 jhue.Scale(1/jhue.Integral())
 nlo.Scale(1/nlo.Integral())

 jhu.SetMaximum(1.5*jhu.GetMaximum())
 jhu.SetMinimum(0)

 canvasScan = ROOT.TCanvas('canvasScan', '', 500, 500)
 canvasScan.Divide(1, 2)
 r=3.0
 canvasScan.GetPad(1).SetPad("TopPad", "", 0., 1./r, 1.0, 1.0, 0, -1, 0);
 canvasScan.GetPad(1).SetTopMargin(0.24/r);
 canvasScan.GetPad(1).SetBottomMargin(0.04/r);
 canvasScan.GetPad(1).SetRightMargin(0.05);
 canvasScan.GetPad(1).SetTicks(1, 1);
 canvasScan.GetPad(2).SetPad("BotPad", "", 0., 0., 1.0, 1./r, 0, -1, 0);
 canvasScan.GetPad(2).SetTopMargin(r/100.);
 canvasScan.GetPad(2).SetBottomMargin(r/10.); 
 canvasScan.GetPad(2).SetRightMargin(0.05);
 canvasScan.GetPad(2).SetTicks(1, 1);
 canvasScan.cd(1)

 jhu.GetXaxis().SetTitleSize(0)
 jhu.GetXaxis().SetLabelSize(0)

 jhu.Draw("hist")
 jhue.Draw("same E2")
 nlo.Draw("same e")

 # ratio 
 canvasScan.cd(2)
 ratio = nlo.Clone()
 ratio2 = jhue.Clone()
 ratio.Divide(jhue)
 ratio2.Divide(jhue)

 r=1.5
 ratio2.SetMaximum(1.8)
 ratio2.SetMinimum(0.2) #0.4 - 1.6
 ratio2.GetXaxis().SetTitleSize(ratio2.GetXaxis().GetTitleSize()*r*r)
 ratio2.GetYaxis().SetTitleSize(ratio2.GetYaxis().GetTitleSize()*r*r)
 ratio2.GetXaxis().SetLabelSize(ratio2.GetXaxis().GetLabelSize()*r)
 ratio2.GetYaxis().SetLabelSize(ratio2.GetYaxis().GetLabelSize()*r)
 ratio2.GetXaxis().SetLabelOffset(ratio2.GetXaxis().GetLabelOffset()*r*r*r*r)
 ratio2.GetXaxis().SetTitleOffset(ratio2.GetXaxis().GetTitleOffset()*r)
 ratio2.GetYaxis().SetTitleOffset(ratio2.GetYaxis().GetTitleOffset())
 ratio2.SetLineWidth(1)
 ratio2.SetLineColor(1)

 ratio2.Draw("E2")
 ratio.Draw("same e")
 ratio.Draw("same e0")

 ratio2.GetXaxis().SetTitle(''+Label+'');

 canvasScan.SaveAs("plotJJH/Temps/GenComp_"+Cat+"_"+Var+"_"+Type+".pdf")
 canvasScan.SaveAs("plotJJH/Temps/GenComp_"+Cat+"_"+Var+"_"+Type+".png")

def Make1DIntegralScan(Cat, Sig, AC, Mu, Scan, Type):

 print Cat, Sig, AC

 gr = ROOT.TGraph(len(Scan))
 gr.SetLineColor(ROOT.kRed)
 gr.SetLineWidth(2)

 Max, Min = 0, 10000

 for si in range(len(Scan)): 

  Sc = Scan[si]

  if "VH" in Sig :
   T  = GetHypothesisHist(Cat, "WH_", AC, "H1", "", Mu, Sc)
   T2 = GetHypothesisHist(Cat, "ZH_", AC, "H2", "", Mu, Sc)
   T.Add(T2)
  elif "All" in Sig :
   T  = GetHypothesisHist(Cat, "VBF_", AC, "H1", "", Mu, Sc)
   T2 = GetHypothesisHist(Cat, "ggH_", AC, "H2", "", Mu, Sc)
   T3 = GetHypothesisHist(Cat, "WH_",  AC, "H3", "", Mu, Sc)
   T4 = GetHypothesisHist(Cat, "ZH_",  AC, "H4", "", Mu, Sc)
   T_sm  = GetHypothesisHist(Cat, "VBF_", AC, "H1", "", Mu, 0)
   T2_sm = GetHypothesisHist(Cat, "ggH_", AC, "H2", "", Mu, 0)
   T3_sm = GetHypothesisHist(Cat, "WH_",  AC, "H3", "", Mu, 0)
   T4_sm = GetHypothesisHist(Cat, "ZH_",  AC, "H4", "", Mu, 0)

 #  EwkSc = (T_sm.Integral()+T3_sm.Integral()+T4_sm.Integral())/(T.Integral()+T3.Integral()+T4.Integral())
 #  T.Scale(EwkSc)
 #  T3.Scale(EwkSc)
 #  T4.Scale(EwkSc)
 #  T2.Scale(T2_sm.Integral()/T2.Integral())
  # T.Add(T2)
   T.Add(T3)
   T.Add(T4)
  else :
   T  = GetHypothesisHist(Cat, Sig, AC, "H1", "", Mu, Sc)

  if "Mean" in Type :
   gr.SetPoint(si, Sc, T.GetMean())
 #  print si, Sc, T.GetMean()
   if T.GetMean() > Max : Max = T.GetMean()
   if T.GetMean() < Min : Min = T.GetMean()
  else :
   gr.SetPoint(si, Sc, T.Integral())
   if T.Integral() > Max : Max = T.Integral()
   if T.Integral() < Min : Min = T.Integral()

 return Min, Max, gr

############################

def Multiple1DScans(Cat, AC, Type):

 Mu = 1
 Scan = [-1,-.9,-.8,-.7,-.6,-.5,-.4,-.3,-.25,-.2,-.1,-.05,0,.05,.1,.2,.25,.3,.4,.5,.6,.7,.8,.9,1] 
 if "H0LZg" in AC : Scan = [-.99,-.9,-.8,-.7,-.6,-.5,-.4,-.3,-.25,-.2,-.1,-.05,0,.05,.1,.2,.25,.3,.4,.5,.6,.7,.8,.9,.99] 

 if "ggHjj" in AC : # HGG

  min1, max1, gr1 = Make1DIntegralScan(Cat, "ggHjj_", "H0M", Mu, Scan, Type)
  gr1.SetLineColor(4)

  Maxs1 = [max1]
  Mins1 = [min1]

 else : # HVV

  min1, max1, gr1 = Make1DIntegralScan(Cat, "VBF_", AC, Mu, Scan, Type)
  gr1.SetLineColor(1)
  gr1.SetMarkerColor(1)

  min2, max2, gr2 = Make1DIntegralScan(Cat, "ZH_", AC, Mu, Scan, Type)
  gr2.SetLineColor(2)
  gr2.SetMarkerColor(2)

  Maxs1 = [max1,max2]
  Mins1 = [min1,min2]

  if AC is not "H0LZg" :

   min3, max3, gr3 = Make1DIntegralScan(Cat, "WH_", AC, Mu, Scan, Type)
   gr3.SetLineColor(3)
   gr3.SetMarkerColor(3)

   min4, max4, gr4 = Make1DIntegralScan(Cat, "ggH_", AC, Mu, Scan, Type)
   gr4.SetLineColor(4)
   gr4.SetMarkerColor(4)

   Maxs1 = [max1,max2,max3,max4]
   Mins1 = [min1,min2,min3,min4]

 canvasScan = ROOT.TCanvas('canvasScan', '', 500, 500)
 canvasScan.cd(1)

 if "H0PH"        in AC : AC2 = "F_{a_{2}}"
 elif "ggHjj_H0M" in AC : AC2 = "F^{ggH}_{a_{3}}"
 elif "H0M"       in AC : AC2 = "F_{a_{3}}"
 elif "H0L1"      in AC : AC2 = "F_{#Lambda_{1}}"
 elif "H0LZg"     in AC : AC2 = "F_{#Lambda_{1} Zg}"
 
 gr1.SetMaximum(1.05*max(Maxs1))
 gr1.SetMinimum(0.98*min(Mins1))
 gr1.GetHistogram().GetXaxis().SetTitle(''+AC2+'')
 gr1.GetHistogram().GetXaxis().SetRangeUser(-1,1)

 if "ggHjj" not in AC : 

  gr2.SetMaximum(1.05*max(Maxs1))
  gr2.SetMinimum(0.98*min(Mins1))
  gr2.GetHistogram().GetXaxis().SetTitle(''+AC2+'')
  gr2.GetHistogram().GetXaxis().SetRangeUser(-1,1)

 legend = ROOT.TLegend(0.5,0.75,0.65,0.95)

 if "ggHjj" in AC : 
  gr1.Draw("ALP")
  legend.AddEntry(gr1,"ggF","l")
 else :
  if "vbf" in Cat :
   gr1.Draw("ALP")
   legend.AddEntry(gr1,"VBF","l")
   if AC is not "H0LZg" :
    gr4.Draw("LP SAME")
    legend.AddEntry(gr4,"ggF","l")
  if "vh" in Cat :
   gr2.Draw("ALP")
   legend.AddEntry(gr2,"ZH","l")
   if AC is not "H0LZg" :
    gr3.Draw("LP SAME")
    gr4.Draw("LP SAME")
    legend.AddEntry(gr3,"WH","l")
    legend.AddEntry(gr4,"ggF","l")

 legend.Draw()

# canvasScan.SetLogy()
 canvasScan.SaveAs("plotJJH/Temps/FinalS_"+Cat+"_"+AC+Type+".pdf")
 canvasScan.SaveAs("plotJJH/Temps/FinalS_"+Cat+"_"+AC+Type+".png")


#############################################################

def Single1DScans(Cat, Prod, AC, Type):

 Mu = 1
 Scan = [-1,-.9,-.8,-.7,-.6,-.5,-.4,-.3,-.25,-.2,-.1,-.05,0,.05,.1,.2,.25,.3,.4,.5,.6,.7,.8,.9,1] 
 if "H0LZg" in AC : Scan = [-.99,-.9,-.8,-.7,-.6,-.5,-.4,-.3,-.25,-.2,-.1,-.05,0,.05,.1,.2,.25,.3,.4,.5,.6,.7,.8,.9,.99] 

 min1, max1, gr1 = Make1DIntegralScan(Cat, Prod, AC, Mu, Scan, Type)
 gr1.SetLineColor(1)
 gr1.SetMarkerColor(1)

 canvasScan = ROOT.TCanvas('canvasScan', '', 500, 500)
 canvasScan.cd(1)

 if "H0PH"        in AC : AC2 = "F_{a_{2}}"
 elif "ggHjj_H0M" in AC : AC2 = "F^{ggH}_{a_{3}}"
 elif "H0M"       in AC : AC2 = "F_{a_{3}}"
 elif "H0L1"      in AC : AC2 = "F_{#Lambda_{1}}"
 elif "H0LZg"     in AC : AC2 = "F_{#Lambda_{1} Zg}"
 
 gr1.SetMaximum(1.05*max1)
 gr1.SetMinimum(0.98*min1)
 gr1.GetHistogram().GetXaxis().SetTitle(''+AC2+'')
 gr1.GetHistogram().GetXaxis().SetRangeUser(-1,1)
 v = GetKDNameFromVar(Var,Cat,AC)
 gr1.GetHistogram().GetYaxis().SetTitle('Mean '+v+'')
 gr1.GetHistogram().GetYaxis().SetLabelSize(0.025)
 gr1.Draw("ALP")

 canvasScan.SaveAs("plotJJH/Temps/FinalSingleS_"+Cat+"_"+Var+"_"+Prod+AC+Type+".pdf")
 canvasScan.SaveAs("plotJJH/Temps/FinalSingleS_"+Cat+"_"+Var+"_"+Prod+AC+Type+".png")

#############################################################

####### Make particular hypothesis ana #####################

#dm vertex = "HVV"

def GetHypothesisHist(Cat,Sig,KD,Hyp,Sys,Mu,F2): 

# print Cat,Sig,KD,Hyp,Sys,Mu,F2

 src = "rootFile"+Ext+"/plots_"+Ext+"_"+KD+"_"+Var+".root" #dm
 f = ROOT.TFile.Open(''+src+'', 'read')

 if "ggHjj" in Sig :
   vertex = "HGG"
   NT = 3
   V = "1V"
 else :
  vertex = "HVV"
  if "H0LZg" in KD : 
   if "VBF" in Sig or "ZH" in Sig :  
    NT = 3
    V = "2V"
   else : print "Prod Sig does not match H0LZg?"
  else :
   if "ggH_" in Sig :
    NT = 3
    V = "1V"
   else :
    NT = 5
    V = "2V"

 nlist = NegList[""+Sig+KD+""]

 Scales = getScales(Mu,F2,V,KD,vertex,Sig)

 T = f.Get("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+KD+"/histo_"+Sig+"T1"+Sys+"")
 T.SetDirectory(0)
 T.SetFillStyle(0)
 T.Scale(Scales[0])

 for i in range(2,NT+1):

  Temp = "T"+str(i)+""

  Ti = f.Get("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+KD+"/histo_"+Sig+Temp+""+Sys+"")
  Ti.SetDirectory(0)
  Ti.Scale(Scales[i-1])

  for c, s, p, t in nlist :
   if c in Cat and s in KD and t in Temp :
    Ti.Scale(-1)
    break

  T = AddCorrHist(T,Ti) 

 f.Close()

 return T

####################################################

def GetKDNameFromVar(Var, Cat, AC) :

 name = ""

 if "vbf" in Cat   : name = "VBF "
 elif "vh" in Cat  : name = "VH "
 elif "ggh" in Cat : name = "ggH "

 if "kd_bsm" in Var :
  if "H0LZg" in AC : name = "D_{"+name+"#Lambda_{1} Zg}"
  elif "H0L1" in AC : name = "D_{"+name+"#Lambda_{1}}"
  elif "H0M"  in AC : name = "D_{"+name+"0^{-}}"
  elif "H0PH" in AC : name = "D_{"+name+"0^{+}}"
 elif "kd_mix" in Var :
  if "H0M" in AC  : name = "D_{"+name+"CP}"
  if "H0PH" in AC : name = "D_{"+name+"Int}"
 elif "kd_prod" in Var : name = "D_{"+name+"}"

 if "mll" in Var : name = "m_{ll}"
 if "mth" in Var : name = "m_{T}"

 return name

##################################

def MakeHypothesisAna2D(cat, prod, AC, Hyps):

 print "Make hypothesis ana 2D for ", cat, prod, AC 

 Mu = 1
 canvas = ROOT.TCanvas('canvasScan', '', 500, 500)

 x, y, z = array('d'), array('d'), array('d')

 for hi in range(len(Hyps)): 

  Hi = Hyps[hi]
  h = GetHypothesisHist(cat, prod, AC, "", "", Mu, Hi)
  h.Scale(1/h.Integral())
  ny = h.GetNbinsX()

  for j in range(1, ny + 1):
   x.append(hi)
   y.append(j) # just bins?
   z.append(h.GetBinContent(j))

 h2 = ROOT.TH2D("","", 13, 0, 13, 13, 0, 13)
 for i in range(0,len(x)) :
  print x[i], y[i], z[i]

  bin = h2.FindBin(x[i], y[i])
  h2.SetBinContent(bin, z[i])

 h2.Draw("colz")

 canvas.SaveAs("plotJJH/Temps/Hyp_"+Var+"_"+cat+prod+AC+".pdf")
 canvas.SaveAs("plotJJH/Temps/Hyp_"+Var+"_"+cat+prod+AC+".png") 

def MakeHypothesisAna7(cat, prod, AC, norm, Hyps, nHyp):

 print "Make hypothesis ana for ", cat, prod, AC, norm, Hyps, nHyp

 Mu = 1
 canvas = ROOT.TCanvas('canvasScan', '', 500, 500)

 if "H0LZg" in AC :
  if Hyps[5] == 1 : Hyps[5] = 0.99
  if Hyps[5] == -1 : Hyps[5] = -0.99
  if Hyps[6] == 1 : Hyps[6] = 0.99
  if Hyps[6] == -1 : Hyps[6] = -0.99

 if prod is "VH_" :

  h1 = GetHypothesisHist(cat,"WH_",AC,"H1", "", Mu, Hyps[0])
  h2 = GetHypothesisHist(cat,"WH_",AC,"H2", "", Mu, Hyps[1])
  h3 = GetHypothesisHist(cat,"WH_",AC,"H3", "", Mu, Hyps[2])
  h4 = GetHypothesisHist(cat,"WH_",AC,"H4", "", Mu, Hyps[3])
  h5 = GetHypothesisHist(cat,"WH_",AC,"H5", "", Mu, Hyps[4])
  h6 = GetHypothesisHist(cat,"WH_",AC,"H6", "", Mu, Hyps[5])
  h7 = GetHypothesisHist(cat,"WH_",AC,"H7", "", Mu, Hyps[6])

  h1z = GetHypothesisHist(cat,"ZH_",AC,"H1", "", Mu, Hyps[0])
  h2z = GetHypothesisHist(cat,"ZH_",AC,"H2", "", Mu, Hyps[1])
  h3z = GetHypothesisHist(cat,"ZH_",AC,"H3", "", Mu, Hyps[2])
  h4z = GetHypothesisHist(cat,"ZH_",AC,"H4", "", Mu, Hyps[3])
  h5z = GetHypothesisHist(cat,"ZH_",AC,"H5", "", Mu, Hyps[4])
  h6z = GetHypothesisHist(cat,"ZH_",AC,"H6", "", Mu, Hyps[5])
  h7z = GetHypothesisHist(cat,"ZH_",AC,"H7", "", Mu, Hyps[6])

  h1.Add(h1z)
  h2.Add(h2z)
  h3.Add(h3z)
  h4.Add(h4z)
  h5.Add(h5z)
  h6.Add(h6z)
  h7.Add(h7z)

 else :

  h1 = GetHypothesisHist(cat,prod,AC,"H1", "", Mu, Hyps[0])
  h2 = GetHypothesisHist(cat,prod,AC,"H2", "", Mu, Hyps[1])
  h3 = GetHypothesisHist(cat,prod,AC,"H3", "", Mu, Hyps[2])
  h4 = GetHypothesisHist(cat,prod,AC,"H4", "", Mu, Hyps[3])
  h5 = GetHypothesisHist(cat,prod,AC,"H5", "", Mu, Hyps[4])
  h6 = GetHypothesisHist(cat,prod,AC,"H6", "", Mu, Hyps[5])
  h7 = GetHypothesisHist(cat,prod,AC,"H7", "", Mu, Hyps[6])

 if norm is True :
  h1.Scale(1/h1.Integral())
  h2.Scale(1/h2.Integral())
  h3.Scale(1/h3.Integral())
  h4.Scale(1/h4.Integral())
  h5.Scale(1/h5.Integral())
  h6.Scale(1/h6.Integral()) 
  h7.Scale(1/h7.Integral())  

 hmax = h1.GetMaximum() # ,h2.GetMaximum(),h3.GetMaximum(),h4.GetMaximum(),h5.GetMaximum(),h6.GetMaximum())
 
 h1.SetMaximum(hmax*2.0)
 h1.SetMinimum(0)

 v = GetKDNameFromVar(Var,cat,AC)
 h1.GetXaxis().SetTitle(''+v+'')

 h1.SetLineWidth(2)
 h2.SetLineWidth(2)
 h3.SetLineWidth(2)
 h4.SetLineWidth(2)
 h5.SetLineWidth(2)
 h6.SetLineWidth(2)
 h7.SetLineWidth(2)

 c1 = ROOT.kBlack
 c2 = ROOT.kGray
 c3 = ROOT.kBlue
 c4 = ROOT.kCyan
 c5 = ROOT.kGreen
 c6 = ROOT.kYellow
 c7 = ROOT.kRed

 if "Mix" in nHyp :

  c1 = ROOT.kBlack
  h2.SetLineStyle(2)
  c2 = ROOT.kBlue
  c3 = ROOT.kBlue
  h4.SetLineStyle(2)
  c4 = ROOT.kGreen
  c5 = ROOT.kGreen
  h6.SetLineStyle(2)
  c6 = ROOT.kRed
  c7 = ROOT.kRed

 h1.SetLineColor(c1)
 h2.SetLineColor(c2)
 h3.SetLineColor(c3)
 h4.SetLineColor(c4)
 h5.SetLineColor(c5)
 h6.SetLineColor(c6)
 h7.SetLineColor(c7)

 h1e = h1.Clone()
 h1e.SetFillStyle(3001)
 h1e.SetFillColor(c1) 
 h1e.SetMarkerSize(.01)

 h2e = h2.Clone()
 h2e.SetFillStyle(3001)
 h2e.SetFillColor(c2)
 h2e.SetMarkerSize(.01)

 h3e = h3.Clone()
 h3e.SetFillStyle(3001)
 h3e.SetFillColor(c3)
 h3e.SetMarkerSize(.01)

 h4e = h4.Clone()
 h4e.SetFillStyle(3001)
 h4e.SetFillColor(c4)
 h4e.SetMarkerSize(.01)

 h5e = h5.Clone()
 h5e.SetFillStyle(3001)
 h5e.SetFillColor(c5)
 h5e.SetMarkerSize(.01) 

 h6e = h6.Clone()
 h6e.SetFillStyle(3001)
 h6e.SetFillColor(c6)
 h6e.SetMarkerSize(.01)

 h7e = h7.Clone()
 h7e.SetFillStyle(3001)
 h7e.SetFillColor(c7)
 h7e.SetMarkerSize(.01)

 h1.Draw("hist")
 h2.Draw("same hist")
 h3.Draw("same hist")
 h4.Draw("same hist")
 h5.Draw("same hist")
 h6.Draw("same hist")
 h7.Draw("same hist")
 
 '''
 h1e.Draw("same E2")
 h2e.Draw("same E2")
 h3e.Draw("same E2")
 h4e.Draw("same E2")
 h5e.Draw("same E2")
 h6e.Draw("same E2")
 '''

 if "ggHjj" in prod : legend = ROOT.TLegend(0.7,0.75,0.98,0.95)
 else :               legend = ROOT.TLegend(0.5,0.75,0.68,0.99)
 
 legend.AddEntry(h1,"F_{ai}="+str(Hyps[0])+"","l")
 legend.AddEntry(h2,"F_{ai}="+str(Hyps[1])+"","l")
 legend.AddEntry(h3,"F_{ai}="+str(Hyps[2])+"","l")
 legend.AddEntry(h4,"F_{ai}="+str(Hyps[3])+"","l")
 legend.AddEntry(h5,"F_{ai}="+str(Hyps[4])+"","l")
 legend.AddEntry(h6,"F_{ai}="+str(Hyps[5])+"","l")
 legend.AddEntry(h7,"F_{ai}="+str(Hyps[6])+"","l")
 legend.Draw()

 canvas.SaveAs("plotJJH/Temps/Hyp_"+Var+"_"+cat+prod+AC+nHyp+".pdf")
 canvas.SaveAs("plotJJH/Temps/Hyp_"+Var+"_"+cat+prod+AC+nHyp+".png") 

############################################################


def MakeHypothesisAna4(cat, prod, AC, norm, Hyps, nHyp):

 print "Make hypothesis ana for ", cat, prod, AC, norm, Hyps, nHyp

 Mu = 1
 canvas = ROOT.TCanvas('canvasScan', '', 500, 500)

 if "H0LZg" in AC :
  if Hyps[3] == 1 :  Hyps[3] = 0.99
  if Hyps[3] == -1 : Hyps[3] = -0.99

 if prod is "VH_" :

  h1 = GetHypothesisHist(cat,"WH_",AC,"H1", "", Mu, Hyps[0])
  h2 = GetHypothesisHist(cat,"WH_",AC,"H2", "", Mu, Hyps[1])
  h3 = GetHypothesisHist(cat,"WH_",AC,"H3", "", Mu, Hyps[2])
  h4 = GetHypothesisHist(cat,"WH_",AC,"H4", "", Mu, Hyps[3])

  h1z = GetHypothesisHist(cat,"ZH_",AC,"H1", "", Mu, Hyps[0])
  h2z = GetHypothesisHist(cat,"ZH_",AC,"H2", "", Mu, Hyps[1])
  h3z = GetHypothesisHist(cat,"ZH_",AC,"H3", "", Mu, Hyps[2])
  h4z = GetHypothesisHist(cat,"ZH_",AC,"H4", "", Mu, Hyps[3])  

  h1.Add(h1z)
  h2.Add(h2z)
  h3.Add(h3z)
  h4.Add(h4z)

 else :

  h1 = GetHypothesisHist(cat,prod,AC,"H1", "", Mu, Hyps[0])
  h2 = GetHypothesisHist(cat,prod,AC,"H2", "", Mu, Hyps[1])
  h3 = GetHypothesisHist(cat,prod,AC,"H3", "", Mu, Hyps[2])
  h4 = GetHypothesisHist(cat,prod,AC,"H4", "", Mu, Hyps[3])

 if norm is True :
  h1.Scale(1/h1.Integral())
  h2.Scale(1/h2.Integral())
  h3.Scale(1/h3.Integral())
  h4.Scale(1/h4.Integral())

 hmax = max(h1.GetMaximum(),h2.GetMaximum(),h3.GetMaximum(),h4.GetMaximum())
 
 h1.SetMaximum(hmax*1.5)
 h1.SetMinimum(0)

 v = GetKDNameFromVar(Var,cat,AC)
 h1.GetXaxis().SetTitle(''+v+'')

 h1.SetLineWidth(2)
 h2.SetLineWidth(2)
 h3.SetLineWidth(2)
 h4.SetLineWidth(2)

 c1 = ROOT.kBlack
 c2 = ROOT.kBlue
 c3 = ROOT.kBlue
 c4 = ROOT.kRed

 h3.SetLineStyle(2)

 h1.SetLineColor(c1)
 h2.SetLineColor(c2)
 h3.SetLineColor(c3)
 h4.SetLineColor(c4)

 h1e = h1.Clone()
 h1e.SetFillStyle(3001)
 h1e.SetFillColor(c1) 
 h1e.SetMarkerSize(.01)

 h2e = h2.Clone()
 h2e.SetFillStyle(3001)
 h2e.SetFillColor(c2)
 h2e.SetMarkerSize(.01)

 h3e = h3.Clone()
 h3e.SetFillStyle(3001)
 h3e.SetFillColor(c3)
 h3e.SetMarkerSize(.01)

 h4e = h4.Clone()
 h4e.SetFillStyle(3001)
 h4e.SetFillColor(c4)
 h4e.SetMarkerSize(.01)

 h1.Draw("hist")
 h2.Draw("same hist")
 h3.Draw("same hist")
 h4.Draw("same hist")
 
 '''
 h1e.Draw("same E2")
 h2e.Draw("same E2")
 h3e.Draw("same E2")
 h4e.Draw("same E2")
 '''

 if "ggHjj" in prod : legend = ROOT.TLegend(0.7,0.75,0.98,0.95)
 else :               legend = ROOT.TLegend(0.5,0.75,0.68,0.99)
 
 legend.AddEntry(h1,"F_{ai}="+str(Hyps[0])+"","l")
 legend.AddEntry(h2,"F_{ai}="+str(Hyps[1])+"","l")
 legend.AddEntry(h3,"F_{ai}="+str(Hyps[2])+"","l")
 legend.AddEntry(h4,"F_{ai}="+str(Hyps[3])+"","l")
 legend.Draw()

 canvas.SaveAs("plotJJH/Temps/Hyp_"+Var+"_"+cat+prod+AC+nHyp+".pdf")
 canvas.SaveAs("plotJJH/Temps/Hyp_"+Var+"_"+cat+prod+AC+nHyp+".png") 

############################################################


def AddCorrHist(h1,h2):
 
 corr=1 #dm
 nbins = h1.GetXaxis().GetNbins()

 ha = h1.Clone() 
 ha.SetDirectory(0)

 for i in range(1, nbins+1):
   n1 = h1.GetBinContent(i)
   n2 = h2.GetBinContent(i)
   n = n1 + n2
   e1 = h1.GetBinError(i)
   e2 = h2.GetBinError(i)
   e = math.sqrt(e1**2 + e2**2 + 2*e1*e2*corr)
   if n1*n2<0 or n1*n2==0 : e = math.sqrt(e1**2 + e2**2 - 2*e1*e2*corr)
   ha.SetBinContent(i, n)
   ha.SetBinError(i, e)
 
 return ha

#######

def PlotMCStatAna(Cat,Sig,KD,Var,ibin):

 src = ""+rf+"/plots_"+Ext+"_"+KD+"_Test.root"
 f = ROOT.TFile.Open(''+src+'', 'update')

 if "ggH_" in Sig : 
  Prod = ""
  V = "1V"
 else :    
  Prod = Sig     
  V = "2V"

 if KD is "H0L1" : tid, hid = getHypIDs(V,"14") 

 T1 = f.Get("hww2l2v_13TeV_"+Cat+"/HVV_"+KD+"/histo_"+Sig+"T"+str(tid[0])+"")
 T2 = f.Get("hww2l2v_13TeV_"+Cat+"/HVV_"+KD+"/histo_"+Sig+"T"+str(tid[1])+"") 
 T3 = f.Get("hww2l2v_13TeV_"+Cat+"/HVV_"+KD+"/histo_"+Sig+"T"+str(tid[2])+"")
 if "ggH_" in Sig : 
  T4 = f.Get("hww2l2v_13TeV_"+Cat+"/HVV_"+KD+"/histo_"+Sig+"T"+str(tid[0])+"") 
  T5 = f.Get("hww2l2v_13TeV_"+Cat+"/HVV_"+KD+"/histo_"+Sig+"T"+str(tid[1])+"")
 else : 
  T4 = f.Get("hww2l2v_13TeV_"+Cat+"/HVV_"+KD+"/histo_"+Sig+"T"+str(tid[3])+"") 
  T5 = f.Get("hww2l2v_13TeV_"+Cat+"/HVV_"+KD+"/histo_"+Sig+"T"+str(tid[4])+"")

 T1.SetLineWidth(1)
 T2.SetLineWidth(1)
 T3.SetLineWidth(1)
 T4.SetLineWidth(1)
 T5.SetLineWidth(1)

 T1.SetLineColor(ROOT.kBlack)
 T2.SetLineColor(ROOT.kBlack)
 T3.SetLineColor(ROOT.kBlack)
 T4.SetLineColor(ROOT.kBlack)
 T5.SetLineColor(ROOT.kBlack)

 T1u = f.Get("hww2l2v_13TeV_"+Cat+"/HVV_"+KD+"/histo_"+Sig+"T"+str(tid[0])+"_MCStat"+Sig+Cat+str(ibin)+"Up")
 T2u = f.Get("hww2l2v_13TeV_"+Cat+"/HVV_"+KD+"/histo_"+Sig+"T"+str(tid[1])+"_MCStat"+Sig+Cat+str(ibin)+"Up") 
 T3u = f.Get("hww2l2v_13TeV_"+Cat+"/HVV_"+KD+"/histo_"+Sig+"T"+str(tid[2])+"_MCStat"+Sig+Cat+str(ibin)+"Up")
 if "ggH_" in Sig : 
  T4u = f.Get("hww2l2v_13TeV_"+Cat+"/HVV_"+KD+"/histo_"+Sig+"T"+str(tid[0])+"_MCStat"+Sig+Cat+str(ibin)+"Up")
  T5u = f.Get("hww2l2v_13TeV_"+Cat+"/HVV_"+KD+"/histo_"+Sig+"T"+str(tid[1])+"_MCStat"+Sig+Cat+str(ibin)+"Up")
 else :
  T4u = f.Get("hww2l2v_13TeV_"+Cat+"/HVV_"+KD+"/histo_"+Sig+"T"+str(tid[3])+"_MCStat"+Sig+Cat+str(ibin)+"Up")
  T5u = f.Get("hww2l2v_13TeV_"+Cat+"/HVV_"+KD+"/histo_"+Sig+"T"+str(tid[4])+"_MCStat"+Sig+Cat+str(ibin)+"Up")

 T1.GetXaxis().SetRangeUser(max(0,ibin-25), min(120,ibin+25))
 T2.GetXaxis().SetRangeUser(max(0,ibin-25), min(120,ibin+25))
 T3.GetXaxis().SetRangeUser(max(0,ibin-25), min(120,ibin+25))
 T4.GetXaxis().SetRangeUser(max(0,ibin-25), min(120,ibin+25))
 T5.GetXaxis().SetRangeUser(max(0,ibin-25), min(120,ibin+25))

 T1u.SetLineWidth(1)
 T2u.SetLineWidth(1)
 T3u.SetLineWidth(1)
 T4u.SetLineWidth(1)
 T5u.SetLineWidth(1)

 T1u.SetLineColor(ROOT.kRed)
 T2u.SetLineColor(ROOT.kRed)
 T3u.SetLineColor(ROOT.kRed)
 T4u.SetLineColor(ROOT.kRed)
 T5u.SetLineColor(ROOT.kRed)

 T1d = f.Get("hww2l2v_13TeV_"+Cat+"/HVV_"+KD+"/histo_"+Sig+"T"+str(tid[0])+"_MCStat"+Sig+Cat+str(ibin)+"Down")
 T2d = f.Get("hww2l2v_13TeV_"+Cat+"/HVV_"+KD+"/histo_"+Sig+"T"+str(tid[1])+"_MCStat"+Sig+Cat+str(ibin)+"Down") 
 T3d = f.Get("hww2l2v_13TeV_"+Cat+"/HVV_"+KD+"/histo_"+Sig+"T"+str(tid[2])+"_MCStat"+Sig+Cat+str(ibin)+"Down")
 if "ggH_" in Sig : 
  T4d = f.Get("hww2l2v_13TeV_"+Cat+"/HVV_"+KD+"/histo_"+Sig+"T"+str(tid[0])+"_MCStat"+Sig+Cat+str(ibin)+"Down")
  T5d = f.Get("hww2l2v_13TeV_"+Cat+"/HVV_"+KD+"/histo_"+Sig+"T"+str(tid[1])+"_MCStat"+Sig+Cat+str(ibin)+"Down")
 else :
  T4d = f.Get("hww2l2v_13TeV_"+Cat+"/HVV_"+KD+"/histo_"+Sig+"T"+str(tid[3])+"_MCStat"+Sig+Cat+str(ibin)+"Down")
  T5d = f.Get("hww2l2v_13TeV_"+Cat+"/HVV_"+KD+"/histo_"+Sig+"T"+str(tid[4])+"_MCStat"+Sig+Cat+str(ibin)+"Down")

 T1d.SetLineWidth(1)
 T2d.SetLineWidth(1)
 T3d.SetLineWidth(1)
 T4d.SetLineWidth(1)
 T5d.SetLineWidth(1)

 T1d.SetLineColor(ROOT.kBlue)
 T2d.SetLineColor(ROOT.kBlue)
 T3d.SetLineColor(ROOT.kBlue)
 T4d.SetLineColor(ROOT.kBlue)
 T5d.SetLineColor(ROOT.kBlue)
   
 canvas = ROOT.TCanvas('canvasScan', '', 500, 500)
 canvas.Divide(3,2)
 canvas.cd(1)
# T1u.Divide(T1)
# T1d.Divide(T1)
 T1.Draw("e")
 T1u.Draw("same hist")
 T1d.Draw("same hist")
 canvas.cd(2)
# T2u.Divide(T2)
# T2d.Divide(T2)
 T2.Draw("e")
 T2u.Draw("same hist")
 T2d.Draw("same hist")
 canvas.cd(3)
# T3u.Divide(T3)
# T3d.Divide(T3)
 T3.Draw("e")
 T3u.Draw("same hist")
 T3d.Draw("same hist")

 if "ggH_" not in Sig : 
  canvas.cd(4)
 # T4u.Divide(T4)
 # T4d.Divide(T4)
  T4.Draw("e")
  T4u.Draw("same hist")
  T4d.Draw("same hist")
  canvas.cd(5)
 # T5u.Divide(T5)
 # T5d.Divide(T5)
  T5.Draw("e")
  T5u.Draw("same hist")
  T5d.Draw("same hist")
 # T5.Draw()
 # T5u.Draw("same")
 # T5d.Draw("same")
 # T5.Draw("same")
 canvas.SaveAs("plotJJH/Temps/MCStat_"+Sig+Cat+str(ibin)+".pdf")
 canvas.SaveAs("plotJJH/Temps/MCStat_"+Sig+Cat+str(ibin)+".png")

 f.Close()

############## Make Siganl BBB Ana #########################

def GetNonAC(Cat,Sig,KD):

 src = ""+rf+"/plots_"+Ext+"_"+KD+".root"
 f = ROOT.TFile.Open(''+src+'', 'read')
 l = 7+len(Sig) # assume name is histo_proc_T*

 Ts = []
 f.cd("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+KD+"/")
 d = ROOT.gDirectory
 for iS in d.GetListOfKeys():
  S = iS.ReadObj()
  name = S.GetName()
  if Sig+"T" in name :
    S.SetDirectory(0)
    num = name[l:l+2]
    Keep = num is "1" or "1_" in num 
    if Keep is False : S.Scale(0) 
    Ts.append(S)
 f.cd("../../")

 f.Close()

 dst = ""+rf+"/plots_"+Ext+"_"+KD+"_Test.root"
 fout = ROOT.TFile.Open(''+dst+'', 'update')
 if not fout.GetDirectory("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+KD+"/") : ROOT.gDirectory.mkdir("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+KD+"/")
 fout.cd("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+KD+"/")

 for i in range(0,len(Ts)): 
  Ts[i].Write()

 fout.Close()

 print Cat+Sig, "Non AC!"

def GetMCStatShapesFromTemps(Cat,Sig,KD):

 AddSTDSys = False
 AddMCSys = True

 if "ggH_" in Sig : V = "1V"
 else :             V = "2V"

 if KD is "H0PH" : tid, hid = getHypIDs(V,"12") 
 if KD is "H0M"  : tid, hid = getHypIDs(V,"13") 
 if KD is "H0L1" : tid, hid = getHypIDs(V,"14") 

 Ts = []

 if AddSTDSys is True :
 
  src = ""+rf+"/plots_"+Ext+"_"+KD+".root"
  f = ROOT.TFile.Open(''+src+'', 'read')

  f.cd("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+KD+"/")
  d = ROOT.gDirectory
  for iS in d.GetListOfKeys():
   S = iS.ReadObj()
   if Sig+"T" in S.GetName() and ("Up" in S.GetName() or "Down" in S.GetName()) : #dm Just Sys!
     S.SetDirectory(0)
     Ts.append(S)
  f.Close()

 numsys = 0
 if AddMCSys is True :

  src = ""+rf+"/plots_"+Ext+"_"+KD+"_Test.root" #dm Using new templates
  f = ROOT.TFile.Open(''+src+'', 'update')

  for i in tid:

   Temp = "T"+str(i)+""
   Ti = f.Get("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+KD+"/histo_"+Sig+Temp+"")

   for j in range(1, Ti.GetNbinsX()+1): 

    n = Ti.GetBinContent(j)
    d = Ti.GetBinErrorLow(j)
    u = Ti.GetBinErrorUp(j)

    Up = Ti.Clone() 
    Dn = Ti.Clone()
    Up.SetDirectory(0)
    Dn.SetDirectory(0)
    Up.SetName("histo_"+Sig+Temp+"_MCStat"+Sig+Cat+str(j)+"Up")
    Dn.SetName("histo_"+Sig+Temp+"_MCStat"+Sig+Cat+str(j)+"Down")
    Up.SetBinContent(j, n+u)
    Dn.SetBinContent(j, n-d)
    if Dn.Integral()<0 : Dn.SetBinContent(j, max(0,n-d))
    if Dn.Integral()<0 : Dn.SetBinContent(j, n)
    if Dn.Integral()==0 and Ti.Integral()!=0 : Dn.SetBinContent(j,n*.001) # For CRs
   
    Ts.append(Up)
    Ts.append(Dn)
    numsys += 1

  f.Close()

 dst = ""+rf+"/plots_"+Ext+"_"+KD+"_Test.root"
 fout = ROOT.TFile.Open(''+dst+'', 'update')
 if not fout.GetDirectory("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+KD+"/") : ROOT.gDirectory.mkdir("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+KD+"/")
 fout.cd("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+KD+"/")

 for i in range(0,len(Ts)): 
  Ts[i].Write()

 fout.Close()

 print Cat+Sig, "Bins : ", Ts[0].GetNbinsX(), "MC shape Sys (#T x #Bins) : ", numsys

#####################################

def DrawBasic(Cat,KD,Sig): #dm2

 src = "rootFile"+Ext+"/plots_"+Ext+"_"+KD+"_"+Var+".root" #dm
 f = ROOT.TFile.Open(''+src+'', 'read')
 
 if "ggHjj" in Sig : vertex = "HGG"
 else : vertex = "HVV"

 T1 = f.Get("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+KD+"/histo_"+Sig+"T1")
 T1.SetDirectory(0)
 T1.SetFillStyle(0)
 T1.Scale(1/T1.Integral())
 T1.SetLineColor(ROOT.kRed)
 T1.SetLineWidth(2)

 v = GetKDNameFromVar(Var,Cat,KD)
 T1.GetXaxis().SetTitle(''+v+'')

 T2 = f.Get("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+KD+"/histo_ggH_T1")
 T2.SetDirectory(0)
 T2.SetFillStyle(0)
 T2.Scale(1/T2.Integral())
 T2.SetLineColor(ROOT.kBlack)
 T2.SetLineWidth(2)

 T3 = f.Get("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+KD+"/histo_WW")
 T3.SetDirectory(0)
 T3.SetFillStyle(0)
 T3.Scale(1/T3.Integral())
 T3.SetLineColor(ROOT.kBlue)
 T3.SetLineWidth(2)

 T4 = f.Get("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+KD+"/histo_top")
 T4.SetDirectory(0)
 T4.SetFillStyle(0)
 T4.Scale(1/T4.Integral())
 T4.SetLineColor(ROOT.kGreen)
 T4.SetLineWidth(2)
 
 canvasScan = ROOT.TCanvas('canvasScan', '', 500, 500)
 canvasScan.cd(1)

 T1.Draw("hist")
 T2.Draw("same hist")
 T3.Draw("same hist")
 T4.Draw("same hist")

 legend = ROOT.TLegend(0.5,0.75,0.65,0.95)
 legend.AddEntry(T1,"VBF H","l")
 legend.AddEntry(T2,"ggF H","l")
 legend.AddEntry(T3,"WW","l")
 legend.AddEntry(T4,"Top","l")
 legend.Draw()

 canvasScan.SaveAs("plotJJH/Temps/Basic_"+Cat+"_"+Var+"_"+Sig+KD+".pdf")
 canvasScan.SaveAs("plotJJH/Temps/Basic_"+Cat+"_"+Var+"_"+Sig+KD+".png")

###############################################

def AddOtherTemplates(Cat,Var,KD):

 othertemp = ['histo_DATA','histo_WW','histo_WWewk','histo_ggWW','histo_top','histo_DY','histo_Dyemb','histo_Vg','histo_VgS_L','histo_VgS_H','histo_VZ','histo_VVV','histo_Fake_em','histo_Fake_me','histo_ggH_htt','histo_qqH_htt','histo_ZH_htt','histo_WH_htt'] # 'histo_ggH_hww'

 src = ""+rf+"/plots_"+Ext+".root" 
 f = ROOT.TFile.Open(''+src+'', 'read')
 HistList = ROOT.TObjArray()
 HistNameList = []

 f.cd("hww2l2v_13TeV_"+Cat+"/"+Var+"/")
 d = ROOT.gDirectory
 for ih in d.GetListOfKeys():
    h = ih.ReadObj()
    if any(x in h.GetName() for x in othertemp) :

     if h.GetName() not in HistNameList :
      h.SetDirectory(0)
      HistList.Add(h)
      HistNameList.append(h.GetName())

 f.Close()

 dst = ""+rf+"/plots_"+Ext+"_"+KD+"_Test.root"
 fout = ROOT.TFile.Open(''+dst+'', 'update')
 fout.cd("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+KD+"/")

 HistList.Write()
 fout.Close()


def AddOtherTemplatesKD(Cat, KD):

 othertemp = ['histo_DATA','histo_WW','histo_WWewk','histo_ggWW','histo_top','histo_DY','histo_Dyemb','histo_Vg','histo_VgS_L','histo_VgS_H','histo_VZ','histo_VVV','histo_Fake_em','histo_Fake_me','histo_ggH_htt','histo_qqH_htt','histo_ZH_htt','histo_WH_htt'] 

 print Cat, othertemp

 src = ""+rf+"/plots_"+Ext+"_"+KD+".root" 
 f = ROOT.TFile.Open(''+src+'', 'read')
 HistList = ROOT.TObjArray()
 HistNameList = []

 f.cd("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+KD+"/")
 d = ROOT.gDirectory
 for ih in d.GetListOfKeys():
    h = ih.ReadObj()
    if any(x in h.GetName() for x in othertemp) :

     if h.GetName() not in HistNameList :
      h.SetDirectory(0)
      HistList.Add(h)
      HistNameList.append(h.GetName())

 f.Close()

 dst = ""+rf+"/plots_"+Ext+"_"+KD+"_Test.root"
 fout = ROOT.TFile.Open(''+dst+'', 'update')
 fout.cd("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+KD+"/")

 HistList.Write()
 fout.Close()

##################################

def checkForBadSys(Cat,Sig,KD,Hyp,Sys): 

  dst = ""+rf+"/plots_"+Ext+"_"+KD+"_Test.root"
  fout = ROOT.TFile.Open(''+dst+'', 'update')

  Temp = "T"+str(i)
  Nom = fout.Get("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+KD+"/histo_"+Sig+Hyp+"")
  Up = fout.Get("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+KD+"/histo_"+Sig+Hyp+Sys+"Up") 
  Dn = fout.Get("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+KD+"/histo_"+Sig+Hyp+Sys+"Down")

  Err = ROOT.Double(0.)
  N = Nom.IntegralAndError(0,Nom.GetNbinsX(),Err)
  U = Up.Integral()
  D = Dn.Integral()

  fout.cd("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+KD+"/") 

  if N == 0 :
   Up.Scale(0)
   Dn.Scale(0)
   Up.SetName("histo_"+Sig+Hyp+Sys+"Up")
   Dn.SetName("histo_"+Sig+Hyp+Sys+"Down")
   Up.Write("",ROOT.TObject.kOverwrite)
   Dn.Write("",ROOT.TObject.kOverwrite)

  else : # Assuming then that N is positive (Should be the case!)

   BadShapeSys = False
   if U<0 or D<0 or (U<N and D<N) or (U>N and D>N) : BadShapeSys = True 
   if Err/N > 1.0 : BadShapeSys = True 

   if BadShapeSys is True : # Treat as symmetric norm uncertainty 

    Up = Nom.Clone() 
    Dn = Nom.Clone()
    NErr = max(abs(D-N),abs(U-N))
    Up.Scale((N+NErr)/N)
    if(N-NErr)>0: Dn.Scale((N-NErr)/N)
    else        : Dn.Scale(0.0001)
    Up.SetName("histo_"+Sig+Hyp+Sys+"Up")
    Dn.SetName("histo_"+Sig+Hyp+Sys+"Down")
    Up.Write("",ROOT.TObject.kOverwrite)
    Dn.Write("",ROOT.TObject.kOverwrite)

  fout.Close()

def MakeSignalMCStatAna(AC):

 print "Make Signal MC stat ana for ", AC

 if   AC == "H0PH" :
  SigConfig = [("of2j_vbf_hpip",["VBF_","ggH_"],"kd3d_vbf_hp",120),
               ("of2j_vbf_hpin",["VBF_","ggH_"],"kd3d_vbf_hp",120),
               ("of2j_vh_hpip",["ZH_","WH_","ggH_"],"kd2d_vh_hp",50),
               ("of2j_vh_hpin",["ZH_","WH_","ggH_"],"kd2d_vh_hp",50), 
               ("top_of2j",["VBF_","ZH_","WH_","ggH_"],"events",1),
               ("dytt_of2j",["VBF_","ZH_","WH_","ggH_"],"events",1)]
 elif AC == "H0M" :
  SigConfig = [("of2j_vbf_hmip",["VBF_","ggH_"],"kd3d_vbf_hm",120), 
               ("of2j_vbf_hmin",["VBF_","ggH_"],"kd3d_vbf_hm",120), 
               ("of2j_vh_hmip",["ZH_","WH_","ggH_"],"kd2d_vh_hm",50),
               ("of2j_vh_hmin",["ZH_","WH_","ggH_"],"kd2d_vh_hm",50),
               ("top_of2j",["VBF_","ZH_","WH_","ggH_"],"events",1),
               ("dytt_of2j",["VBF_","ZH_","WH_","ggH_"],"events",1)]
 elif AC == "H0L1" :
  SigConfig = [("of2j_vbf",["VBF_","ggH_"],"kd3d_vbf_hl",120)]
             #  ("of2j_vh",["ZH_","WH_","ggH_"],"kd2d_vh_hl",50),
             #  ("top_of2j",["VBF_","ZH_","WH_","ggH_"],"events",1),
             #  ("dytt_of2j",["VBF_","ZH_","WH_","ggH_"],"events",1)]
   
 for cat,prods,var,nbins in SigConfig :
  for prod in prods :
   MakeTemplates(cat,prod,AC,var) # All templates with correleated mc stats (Easier to do all for making DCs)
   GetMCStatShapesFromTemps(cat,prod,AC) # Adding sys templates + mcstat shapes just for 1 AC
  # GetMCStatShapes(cat,prod,AC,var,nbins,"Up") # Direct recalculation of mcstat shapes
  # GetMCStatShapes(cat,prod,AC,var,nbins,"Down")
  # setSigStatTo0(cat,prod,AC)
  
  if "VBF_" not in prods : GetNonAC(cat,"VBF_",AC) # Setting non-T1 to 0!
  if "WH_"  not in prods : GetNonAC(cat,"WH_",AC) 
  if "ZH_"  not in prods : GetNonAC(cat,"ZH_",AC)
  if "ggH_" not in prods : GetNonAC(cat,"ggH_",AC)
  
 for cat, prods, var,nbins in SigConfig : 
  AddOtherTemplatesKD(cat,AC)


####################################################
######################################################
############## Run scan plot commands ##############

print "Using Extension ", Ext


if "kd_bsm" in Var : #mll

 Multiple1DScans("of2j_gght", "ggHjj_H0M","")
 Multiple1DScans("of2j_ggh", "ggHjj_H0M","")

if "kd_mix" not in Var :

 Single1DScans("of2j_gght", "ggHjj_", "H0M", "Mean")
 Single1DScans("of2j_ggh", "ggHjj_", "H0M", "Mean")

########## Run hypotheses ana maker #############################

List = [ ([0.0, 0.05, 0.1, 0.25, 0.5, 0.75, 1.0],""),
         ([0.0,-0.05,-0.1,-0.25,-0.5,-0.75,-1.0],"_Neg")
       ]

for Hyps, nHyp in List :

 MakeHypothesisAna7("of2j_gght","ggHjj_","H0M", True, Hyps, nHyp)
 MakeHypothesisAna7("of2j_ggh", "ggHjj_","H0M", True, Hyps, nHyp)

List = [ ([0.0, 0.5, -0.5, 1.0],"_Mix") ]

for Hyps, nHyp in List :

 MakeHypothesisAna4("of2j_gght","ggHjj_","H0M", True, Hyps, nHyp)
 MakeHypothesisAna4("of2j_ggh", "ggHjj_","H0M", True, Hyps, nHyp)





