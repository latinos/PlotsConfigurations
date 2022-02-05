
import sys
import ROOT 
import numpy as np
import shutil
import math
from os import path

ROOT.gStyle.SetOptStat(0)
ROOT.gStyle.SetOptTitle(0)

src = path.realpath("rootFileJJH/plots_JJH.root")

#########################################################

def CompareHVVRW(Cat, Var, Prod, Hyp):

 print " " 
 print Cat, Var, Prod, Hyp
 print " " 

 f = ROOT.TFile.Open(''+src+'', 'read')

 if Hyp == "H0PM" : H1 = f.Get('hww2l2v_13TeV_'+Cat+'/'+Var+'/histo_'+Prod+'H0PM') 
 else             : H1 = f.Get('hww2l2v_13TeV_'+Cat+'/'+Var+'/histo_'+Prod+'H0PM_'+Hyp+'') 
 if Hyp == "H0M" :  H2 = f.Get('hww2l2v_13TeV_'+Cat+'/'+Var+'/histo_'+Prod+'H0M') 
 else            :  H2 = f.Get('hww2l2v_13TeV_'+Cat+'/'+Var+'/histo_'+Prod+'H0M_'+Hyp+'')
 if Hyp == "H0PH" : H3 = f.Get('hww2l2v_13TeV_'+Cat+'/'+Var+'/histo_'+Prod+'H0PH')
 else             : H3 = f.Get('hww2l2v_13TeV_'+Cat+'/'+Var+'/histo_'+Prod+'H0PH_'+Hyp+'')
 if Hyp == "H0L1" : H4 = f.Get('hww2l2v_13TeV_'+Cat+'/'+Var+'/histo_'+Prod+'H0L1') 
 else             : H4 = f.Get('hww2l2v_13TeV_'+Cat+'/'+Var+'/histo_'+Prod+'H0L1_'+Hyp+'') 
 if Hyp == "H0Mf05" :  H5 = f.Get('hww2l2v_13TeV_'+Cat+'/'+Var+'/histo_'+Prod+'H0Mf05') 
 else               :  H5 = f.Get('hww2l2v_13TeV_'+Cat+'/'+Var+'/histo_'+Prod+'H0Mf05_'+Hyp+'') 
 if Hyp == "H0PHf05" : H6 = f.Get('hww2l2v_13TeV_'+Cat+'/'+Var+'/histo_'+Prod+'H0PHf05')
 else                : H6 = f.Get('hww2l2v_13TeV_'+Cat+'/'+Var+'/histo_'+Prod+'H0PHf05_'+Hyp+'')
 if Hyp == "H0L1f05" : H7 = f.Get('hww2l2v_13TeV_'+Cat+'/'+Var+'/histo_'+Prod+'H0L1f05')
 else                : H7 = f.Get('hww2l2v_13TeV_'+Cat+'/'+Var+'/histo_'+Prod+'H0L1f05_'+Hyp+'')

 H1.SetDirectory(0)
 H2.SetDirectory(0)
 H3.SetDirectory(0)
 H4.SetDirectory(0)
 H5.SetDirectory(0)
 H6.SetDirectory(0)
 H7.SetDirectory(0)

 f.Close()

 print H1.Integral(),H2.Integral(),H3.Integral(),H4.Integral(),H5.Integral(),H6.Integral(),H7.Integral()

 ########################## Naive sum ###############################
 
 Sum = H1.Clone()
 Sum.SetDirectory(0)
 Sum.Add(H2,1)
 Sum.Add(H3,1)
 Sum.Add(H4,1)
 Sum.Add(H5,1)
 Sum.Add(H6,1)
 Sum.Add(H7,1)
 Sum.Scale(0.143)

 ######################## weighted sum by hand ######################
 '''
 SumW = H1.Clone()
 SumW.SetDirectory(0)

 for i in range(1, H1.GetXaxis().GetNbins()+1):

   n1 = H1.GetBinContent(i)
   n2 = H2.GetBinContent(i)
   n3 = H3.GetBinContent(i)
   n4 = H4.GetBinContent(i)
   n5 = H5.GetBinContent(i)
   n6 = H6.GetBinContent(i)
   n7 = H7.GetBinContent(i)

   e1 = H1.GetBinError(i)
   e2 = H2.GetBinError(i)
   e3 = H3.GetBinError(i)
   e4 = H4.GetBinError(i)
   e5 = H5.GetBinError(i)
   e6 = H6.GetBinError(i)
   e7 = H7.GetBinError(i)

  # print "bin ", i
  # print n1, n2, n3, n4, n4, n6, n7
  # print e1, e2, e3, e4, e4, e6, e7

   if n1==0 and e1 == 0 : w1 = 0
   else :                 w1 = 1/e1**2
   if n2==0 and e2 == 0 : w2 = 0
   else :                 w2 = 1/e2**2
   if n3==0 and e3 == 0 : w3 = 0
   else :                 w3 = 1/e3**2
   if n4==0 and e4 == 0 : w4 = 0
   else :                 w4 = 1/e4**2
   if n5==0 and e5 == 0 : w5 = 0
   else :                 w5 = 1/e5**2
   if n6==0 and e6 == 0 : w6 = 0
   else :                 w6 = 1/e6**2
   if n7==0 and e7 == 0 : w7 = 0
   else :                 w7 = 1/e7**2

   if n1==0 and e1 == 0 : ew1 = 0
   else :                 ew1 = e1**-2
   if n2==0 and e2 == 0 : ew2 = 0
   else :                 ew2 = e2**-2
   if n3==0 and e3 == 0 : ew3 = 0
   else :                 ew3 = e3**-2
   if n4==0 and e4 == 0 : ew4 = 0
   else :                 ew4 = e4**-2
   if n5==0 and e5 == 0 : ew5 = 0
   else :                 ew5 = e5**-2
   if n6==0 and e6 == 0 : ew6 = 0
   else :                 ew6 =e6**-2
   if n7==0 and e7 == 0 : ew7 = 0
   else :                 ew7 = e7**-2
 
   avg = np.average([n1, n2, n3, n4, n5, n6, n7], weights=[w1, w2, w3, w4, w5, w6, w7])
   e_avg =  math.sqrt(1/(ew1 + ew2 + ew3 + ew4 + ew5 + ew6 + ew7))

   SumW.SetBinContent(i, avg)
   SumW.SetBinError(i, e_avg)
 '''
 ################# weighted sum using Average bit #####################

 SumA = H1.Clone()
 SumA.SetDirectory(0)

 H1A = H1.Clone()
 H2A = H2.Clone()
 H3A = H3.Clone()
 H4A = H4.Clone()
 H5A = H5.Clone()
 H6A = H6.Clone()
 H7A = H7.Clone()

 H1A.SetDirectory(0)
 H2A.SetDirectory(0)
 H3A.SetDirectory(0)
 H4A.SetDirectory(0)
 H5A.SetDirectory(0)
 H6A.SetDirectory(0)
 H7A.SetDirectory(0)

 H1A.SetBit(ROOT.TH1.kIsAverage)
 H2A.SetBit(ROOT.TH1.kIsAverage)
 H3A.SetBit(ROOT.TH1.kIsAverage)
 H4A.SetBit(ROOT.TH1.kIsAverage)
 H5A.SetBit(ROOT.TH1.kIsAverage)
 H6A.SetBit(ROOT.TH1.kIsAverage)
 H7A.SetBit(ROOT.TH1.kIsAverage)

 H1A.Add(H2A,1)
 H1A.Add(H3A,1)
 H1A.Add(H4A,1)
 H1A.Add(H5A,1)
 H1A.Add(H6A,1)
 H1A.Add(H7A,1)

 for i in range(1, H1A.GetXaxis().GetNbins()+1):
   n = H1A.GetBinContent(i)
   e = H1A.GetBinError(i)
   SumA.SetBinContent(i, n)
   SumA.SetBinError(i, e)

 #############################

 H1.SetLineColor(ROOT.kRed)
 H2.SetLineColor(ROOT.kGreen)
 H3.SetLineColor(ROOT.kOrange)
 H4.SetLineColor(ROOT.kYellow)
 H5.SetLineColor(ROOT.kCyan)
 H6.SetLineColor(ROOT.kBlue)
 H7.SetLineColor(ROOT.kBlack)
 Sum.SetLineColor(ROOT.kGreen)
 SumA.SetLineColor(ROOT.kRed)
# SumW.SetLineColor(ROOT.kOrange)

 H1.SetLineWidth(1)
 H2.SetLineWidth(1)
 H3.SetLineWidth(1)
 H4.SetLineWidth(1)
 H5.SetLineWidth(1)
 H6.SetLineWidth(1)
 H7.SetLineWidth(1)
 Sum.SetLineWidth(3)
 SumA.SetLineWidth(3)
# SumW.SetLineWidth(3)

 canvasM = ROOT.TCanvas('canvasM', '', 500, 500)

 H1.SetMinimum(-1*Sum.GetMaximum())
 H1.SetMaximum(5*Sum.GetMaximum())
 H1.GetXaxis().SetTitle(""+Var+"")

 H1.Draw("e")
 H2.Draw("same e")
 H3.Draw("same e")
 H4.Draw("same e")
 H5.Draw("same e")
 H6.Draw("same e")
 H7.Draw("same e")

 # Sum.Draw("same hist")
 # Sum.Draw("same e")
 # SumA.Draw("same e")
 SumA.Draw("same hist")
 # SumW.Draw("same e")
 # SumW.Draw("same hist")

 #legend = ROOT.TLegend(0.75,0.6,1.0,1.0)
 legend = ROOT.TLegend(0.45,0.6,0.7,1.0)
 legend.AddEntry(H1,"H0PM","l")
 legend.AddEntry(H2,"H0M","l")
 legend.AddEntry(H3,"H0PH","l")
 legend.AddEntry(H4,"H0L1","l")
 legend.AddEntry(H5,"H0Mf05","l")
 legend.AddEntry(H6,"H0PHf05","l")
 legend.AddEntry(H7,"H0L1f05","l")
# legend.AddEntry(Sum,"Sum","l")
 legend.AddEntry(SumA,"Avg Sum","l")
# legend.AddEntry(SumW,"Wgt Sum","l")
 legend.Draw()

 # canvasM.SetLogy()
 canvasM.SaveAs("plotJJH/Temps/HVVRW_"+Cat+"_"+Var+"_"+Prod+Hyp+".pdf")
 canvasM.SaveAs("plotJJH/Temps/HVVRW_"+Cat+"_"+Var+"_"+Prod+Hyp+".png")


def CompareHGGRW(Cat, Var, Prod, Hyp):

 print " " 
 print Cat, Var, Prod, Hyp
 print " " 

 f = ROOT.TFile.Open(''+src+'', 'read')

 if Hyp == "H0PM" : H1 = f.Get('hww2l2v_13TeV_'+Cat+'/'+Var+'/histo_'+Prod+'H0PM') 
 else             : H1 = f.Get('hww2l2v_13TeV_'+Cat+'/'+Var+'/histo_'+Prod+'H0PM_'+Hyp+'') 
 if Hyp == "H0M" :  H2 = f.Get('hww2l2v_13TeV_'+Cat+'/'+Var+'/histo_'+Prod+'H0M') 
 else            :  H2 = f.Get('hww2l2v_13TeV_'+Cat+'/'+Var+'/histo_'+Prod+'H0M_'+Hyp+'') 
 if Hyp == "H0Mf05" :  H3 = f.Get('hww2l2v_13TeV_'+Cat+'/'+Var+'/histo_'+Prod+'H0Mf05') 
 else               :  H3 = f.Get('hww2l2v_13TeV_'+Cat+'/'+Var+'/histo_'+Prod+'H0Mf05_'+Hyp+'') 

 H1.SetDirectory(0)
 H2.SetDirectory(0)
 H3.SetDirectory(0)

 f.Close()

 ########################## Naive sum ###############################
 
 Sum = H1.Clone()
 Sum.SetDirectory(0)
 Sum.Add(H2,1)
 Sum.Add(H3,1)
 Sum.Scale(0.3333)

 ################# weighted sum using Average bit #####################

 SumA = H1.Clone()
 SumA.SetDirectory(0)

 H1A = H1.Clone()
 H2A = H2.Clone()
 H3A = H3.Clone()

 H1A.SetDirectory(0)
 H2A.SetDirectory(0)
 H3A.SetDirectory(0)

 H1A.SetBit(ROOT.TH1.kIsAverage)
 H2A.SetBit(ROOT.TH1.kIsAverage)
 H3A.SetBit(ROOT.TH1.kIsAverage)

 H1A.Add(H2A,1)
 H1A.Add(H3A,1)

 for i in range(1, H1A.GetXaxis().GetNbins()+1):
   n = H1A.GetBinContent(i)
   e = H1A.GetBinError(i)
   SumA.SetBinContent(i, n)
   SumA.SetBinError(i, e)

 #############################

 H1.SetLineColor(ROOT.kRed)
 H2.SetLineColor(ROOT.kGreen)
 H3.SetLineColor(ROOT.kOrange)

 Sum.SetLineColor(ROOT.kGreen)
 SumA.SetLineColor(ROOT.kRed)

 H1.SetLineWidth(1)
 H2.SetLineWidth(1)
 H3.SetLineWidth(1)

 Sum.SetLineWidth(3)
 SumA.SetLineWidth(4)

 canvasM = ROOT.TCanvas('canvasM', '', 500, 500)

 H1.SetMinimum(-2*Sum.GetMaximum())
 H1.SetMaximum(2*Sum.GetMaximum())
 H1.GetXaxis().SetTitle(""+Var+"")

 H1.Draw("e")
 H2.Draw("same e")
 H3.Draw("same e")
 Sum.Draw("same hist")
 SumA.Draw("same hist")

 legend = ROOT.TLegend(0.75,0.6,1.0,1.0)
 legend.AddEntry(H1,"H0PM","l")
 legend.AddEntry(H2,"H0M","l")
 legend.AddEntry(H3,"H0Mf05","l")
 legend.AddEntry(Sum,"Sum","l")
 legend.AddEntry(SumA,"Avg Sum","l")
 legend.Draw()

 # canvasM.SetLogy()
 canvasM.SaveAs("plotJJH/Temps/HGGRW_"+Cat+"_"+Var+"_"+Prod+Hyp+".pdf")
 canvasM.SaveAs("plotJJH/Temps/HGGRW_"+Cat+"_"+Var+"_"+Prod+Hyp+".png")

##########################################################
Config = [("of2j_vbf", "kd3d_vbf_hm", "VBF_", "H0PM"),
          ("of2j_vbf_hmip", "kd3d_vbf_hm", "VBF_", "H0M_M0"),
          ("of2j_vbf_hmin", "kd3d_vbf_hm", "VBF_", "H0M_M0"),
          ("of2j_vbf_hmip", "kd3d_vbf_hm", "VBF_", "EFTH0M_M0"),
          ("of2j_vbf_hmin", "kd3d_vbf_hm", "VBF_", "EFTH0M_M0"),
]

SigConfig = Config
for cat, var, prod, hyp in SigConfig :
 CompareHVVRW(cat, var, prod, hyp)

##########################################################
'''
GGHJJConfig = [ ("of2j_ggh_t", "kd_ggh_hm", "GGHjj_", "H0M"),
                ("of2j_ggh_t", "kd_ggh_hm", "GGHjj_", "H0Mf05"),
                
]  

SigConfig = GGHJJConfig
for cat, var, prod, hyp in SigConfig :
 CompareHGGRW(cat, var, prod, hyp)
'''
