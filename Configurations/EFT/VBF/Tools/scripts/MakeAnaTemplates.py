
import sys
import ROOT 
import numpy as np
import shutil
import math
import os

ROOT.gStyle.SetOptStat(0)
ROOT.gStyle.SetOptTitle(0)

############# Couplings of mixed samples (g)

cons = {"VBF_H0M" : 0.29797901870, "VBF_H0PH" : 0.27196538, "VBF_H0L1" : -2158.21307286,
        "WH_H0M"  : 0.1236136,     "WH_H0PH"  : 0.0998956,  "WH_H0L1"  : -525.274, 
        "ZH_H0M"  : 0.144057,      "ZH_H0PH"  : 0.112481,   "ZH_H0L1"  :  -517.788, 
        "H0M"     : 1.76132,       "H0PH"     : 1.133582,   "H0L1"     : -13752.22, 
        "GGHjj_H0M" : 1.0062 
       }
 
############### Matrix of couplings for H(g1, gi) hypotheses - Ewk H (2 Vertices)

Gai = np.array(([1**4,0,0,0,0],  
                [0,0,0,0,1**4],  
                [1,.25,.25**2,.25**3,.25**4],  
                [1,.5,  .5**2, .5**3, .5**4],             
                [1,.75,.75**2,.75**3,.75**4]  )) 

l1s = -10000
Gl1 = np.array(([1**4,0,0,0,0],  
                [0,0,0,0,(1*l1s)**4],  
                [1,.25*l1s,(.25*l1s)**2,(.25*l1s)**3,(.25*l1s)**4],  
                [1,.5*l1s, ( .5*l1s)**2,( .5*l1s)**3,( .5*l1s)**4],             
                [1,.75*l1s,(.75*l1s)**2,(.75*l1s)**3,(.75*l1s)**4]  )) 

###### test params #####

Fai = 0.5
Mu  = 2.0
Fa1 = 1-abs(Fai)

MuSc  = 1.0
Scan = [-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1] 

###################################################################

src = "rootFileJJH/plots_JJH.root"
dst_hvv = "rootFileJJH/plots_JJH_HVV.root"
dst_hgg = "rootFileJJH/plots_JJH_HGG.root"

othertemp_hvv = ['DATA','WW','TTbar','DY','qqH_htt','ggH_htt']
othertemp_hgg = ['DATA','WW','TTbar','DY','qqH_htt','ggH_htt','WH_hww','ZH_hww','qqH_hww']

if os.path.exists(dst_hvv):
    os.remove(dst_hvv)

if os.path.exists(dst_hgg):
    os.remove(dst_hgg)

print "- For Ewk HVV (2V) need templates : T1 -(4,0), T2 -(3,1), T3 -(2,2), T4 -(1,3), T5 -(0,4)" 
print "Get from SM-BSM mixture hypotheses : SM(1,0), M0(0,1), M1(1,.25), M2(1,.5), M3(1,.75) "
print "and G matrices ", Gai, Gl1
print "- Will create new file : "+dst_hvv+" with HVV analysis templates"
print " " 
print "- For ggF HVV (1V) need templates T1 -(2,0), T2 -(1,1), T3 -(0,2)" 
print "Get from SM-BSM MC : SM(1,0), BSM(0,1), M1(1,gMix) "
print "- Will create new file : "+dst_hvv+" with HVV analysis templates"
print " "
print "- For ggH+2Jet HGG (1V) need templates T1 -(2,0), T2 -(1,1), T3 -(0,2)" 
print "Get from SM-BSM MC : SM(1,0), BSM(0,1), M1(1,gMix) "
print "- Will create new file : "+dst_hgg+" with HGG analysis templates"
print " "


###################################################

def AddOtherTemplates(Cat, Var, AC):

 print " " 
 print " ", Cat, Var
 print " " 

 if Cat is "SRHJJ" :
  dst = dst_hgg
  othertemp = othertemp_hgg
 else :
  dst = dst_hvv 
  othertemp = othertemp_hvv

 f = ROOT.TFile.Open(''+src+'', 'read')

 HistList = ROOT.TObjArray()
 f.cd("hww2l2v_13TeV_"+Cat+"/"+Var+"/")
 d = ROOT.gDirectory
 for ih in d.GetListOfKeys():
    h = ih.ReadObj()
    if any(x in h.GetName() for x in othertemp) : 
     h.SetDirectory(0)
     HistList.Add(h)

 f.Close()

 fout = ROOT.TFile.Open(''+dst+'', 'update')
 fout.cd("hww2l2v_13TeV_"+Cat+"/KD_"+AC+"/") 

 HistList.Write()

 d = ROOT.gDirectory
 for ih in d.GetListOfKeys():
    h = ih.ReadObj()
    if "Up" not in h.GetName() and "Down" not in h.GetName() : 
     print h.GetName()

 fout.Close()

############################################

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



#########################################################

def create2VIntTemplates(Cat, Var, Prod, AC, Sys, Test):

 print " " 
 print " ", Cat, Var, Prod, AC, Sys, Test
 print " " 

 f = ROOT.TFile.Open(''+src+'', 'read')
 BaseN = "hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_"+Prod+""

 SM = getSumOfRWHVVSamples(f, BaseN, "H0PM",  Sys)
 M0 = getSumOfRWHVVSamples(f, BaseN, AC+"_M0",Sys)
 M1 = getSumOfRWHVVSamples(f, BaseN, AC+"_M1",Sys)
 M2 = getSumOfRWHVVSamples(f, BaseN, AC+"_M2",Sys)
 M3 = getSumOfRWHVVSamples(f, BaseN, AC+"_M3",Sys)

 SM_Org  = f.Get(''+BaseN+'H0PM'+Sys+'')
 BSM_Org = f.Get(''+BaseN+AC+Sys+'')
 f05_Org = f.Get(''+BaseN+AC+'f05'+Sys+'')

 SM_Org.SetDirectory(0)
 BSM_Org.SetDirectory(0)
 f05_Org.SetDirectory(0)

 f.Close()

 T1 = SM.Clone() # 4,0
 T2 = SM.Clone() # 3,1
 T3 = SM.Clone() # 2,2
 T4 = SM.Clone() # 1,3
 T5 = SM.Clone() # 0,4

 T1.SetDirectory(0)
 T2.SetDirectory(0)
 T3.SetDirectory(0)
 T4.SetDirectory(0)
 T5.SetDirectory(0)

 InvG = np.linalg.inv(Gai)
 if AC == "H0L1" : InvG = np.linalg.inv(Gl1)

 T1.Scale( InvG[0][0])
 T1.Add(M0,InvG[0][1])
 T1.Add(M1,InvG[0][2])
 T1.Add(M2,InvG[0][3])
 T1.Add(M3,InvG[0][4])

 T2.Scale( InvG[1][0])
 T2.Add(M0,InvG[1][1])
 T2.Add(M1,InvG[1][2])
 T2.Add(M2,InvG[1][3])
 T2.Add(M3,InvG[1][4])

 T3.Scale( InvG[2][0])
 T3.Add(M0,InvG[2][1])
 T3.Add(M1,InvG[2][2])
 T3.Add(M2,InvG[2][3])
 T3.Add(M3,InvG[2][4])

 T4.Scale( InvG[3][0])
 T4.Add(M0,InvG[3][1])
 T4.Add(M1,InvG[3][2])
 T4.Add(M2,InvG[3][3])
 T4.Add(M3,InvG[3][4])

 T5.Scale( InvG[4][0])
 T5.Add(M0,InvG[4][1])
 T5.Add(M1,InvG[4][2])
 T5.Add(M2,InvG[4][3])
 T5.Add(M3,InvG[4][4])
 
 ####################################
 
 if Test == True :

  G = cons[Prod+AC]
 
  N1 = Mu**2*Fa1**2   
  N2 = Mu**2*np.sign(Fai)*math.sqrt(abs(Fai))*(math.sqrt(Fa1)**3)*G 
  N3 = Mu**2*abs(Fai)*Fa1*G**2 
  N4 = Mu**2*np.sign(Fai)*(math.sqrt(abs(Fai))**3)*math.sqrt(Fa1)*G**3 
  N5 = Mu**2*Fai**2*G**4 
          
  f05T = T1.Clone()
  f05T.SetDirectory(0)
  f05T.Scale(  N1)
  f05T.Add(T2, N2)
  f05T.Add(T3, N3)
  f05T.Add(T4, N4)
  f05T.Add(T5, N5)

  SM_Org.SetLineColor(ROOT.kBlack)
  BSM_Org.SetLineColor(ROOT.kBlack) 
  f05_Org.SetLineColor(ROOT.kBlack) 
  SM_Org.SetLineWidth(2)
  BSM_Org.SetLineWidth(2)
  f05_Org.SetLineWidth(2)

  f05T.SetLineColor(ROOT.kRed)
  f05T.SetFillColor(ROOT.kRed)

  T1.SetLineColor(ROOT.kRed)
  T1.SetFillColor(ROOT.kRed)
  T2.SetLineColor(ROOT.kOrange)
  T2.SetFillColor(ROOT.kOrange)
  T3.SetLineColor(ROOT.kCyan)
  T3.SetFillColor(ROOT.kCyan)
  T4.SetLineColor(ROOT.kBlue)
  T4.SetFillColor(ROOT.kBlue)
  T5.SetLineColor(ROOT.kGreen)
  T5.SetFillColor(ROOT.kGreen)
  T1.SetLineWidth(2)
  T2.SetLineWidth(2)
  T3.SetLineWidth(2)
  T4.SetLineWidth(2)
  T5.SetLineWidth(2)

  canvasf05 = ROOT.TCanvas('canvasf05', '', 500, 500)
  f05T.SetMinimum(0.001)
  f05T.SetMaximum(1.5*f05T.GetMaximum())
  f05T.GetXaxis().SetTitle(""+Var+"")
  f05T.Draw("e")
  f05_Org.Draw("same e")
  legend = ROOT.TLegend(0.3,0.75,0.7,0.9)
  legend.AddEntry(f05_Org,"SM-BSM Mix MC ","l")
  legend.AddEntry(f05T,"T1-T5 combination","f")
  legend.Draw()
  canvasf05.SaveAs("plotJJH/f05_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
  canvasf05.SaveAs("plotJJH/f05_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

  canvasT1 = ROOT.TCanvas('canvasT1', '', 500, 500)
  T1.SetMinimum(0.001)
  T1.SetMaximum(1.5*T1.GetMaximum())
  T1.GetXaxis().SetTitle(""+Var+"")
  T1.Draw("e")
  SM_Org.Draw("same e")
  legend = ROOT.TLegend(0.3,0.75,0.7,0.9)
  legend.AddEntry(SM_Org,"pure SM MC","l")
  legend.AddEntry(T1,"T1 template","f")
  legend.Draw()
  canvasT1.SaveAs("plotJJH/T1_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
  canvasT1.SaveAs("plotJJH/T1_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

  canvasT2 = ROOT.TCanvas('canvasT2', '', 500, 500)
  T2.GetXaxis().SetTitle(""+Var+"")
  T2.Draw("e")
  legend = ROOT.TLegend(0.3,0.8,0.7,0.9)
  legend.AddEntry(T2,"T2 template","f")
  legend.SetTextSize(.04)
  legend.Draw()
  canvasT2.SaveAs("plotJJH/T2_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
  canvasT2.SaveAs("plotJJH/T2_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

  canvasT3 = ROOT.TCanvas('canvasT3', '', 500, 500)
  T3.GetXaxis().SetTitle(""+Var+"")
  T3.Draw("e")
  legend = ROOT.TLegend(0.3,0.8,0.7,0.9)
  legend.AddEntry(T3,"T3 template","f")
  legend.SetTextSize(.04)
  legend.Draw()
  canvasT3.SaveAs("plotJJH/T3_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
  canvasT3.SaveAs("plotJJH/T3_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

  canvasT4 = ROOT.TCanvas('canvasT4', '', 500, 500)
  T4.GetXaxis().SetTitle(""+Var+"")
  T4.Draw("e")
  legend = ROOT.TLegend(0.3,0.8,0.7,0.9)
  legend.AddEntry(T4,"T4 template","f")
  legend.SetTextSize(.04)
  legend.Draw()
  canvasT4.SaveAs("plotJJH/T4_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
  canvasT4.SaveAs("plotJJH/T4_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

  canvasT5 = ROOT.TCanvas('canvasT5', '', 500, 500)
  T5.SetMinimum(0.001)
  T5.SetMaximum(1.5*T5.GetMaximum())
  T5.GetXaxis().SetTitle(""+Var+"")
  T5.Draw("e")
  BSM_Org.Draw("same e")
  legend = ROOT.TLegend(0.3,0.75,0.7,0.9)
  legend.AddEntry(BSM_Org,"pure BSM MC","l")
  legend.AddEntry(T5,"T5 template","f")
  legend.Draw()
  canvasT5.SaveAs("plotJJH/T5_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
  canvasT5.SaveAs("plotJJH/T5_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

 ######### Template tricks for combine #######

 Gsc = cons[AC] # Fai in terms of WW decay vertex

 T2.Scale(Gsc) 
 T3.Scale(Gsc**2) 
 T4.Scale(Gsc**3) 
 T5.Scale(Gsc**4)

 if AC == "H0M" :
  print "--------- Force H0M T2 and T4 = 0"
  T2.Scale(0)  
  T4.Scale(0)  

 if AC == "H0PH" and (Prod == "WH_" or Prod == "ZH_") :
  print "--------- Force VH H0PH T2 positive - Compensate in model! "
  T2.Scale(-1)  
 
 if AC == "H0L1" and (Prod == "WH_" or Prod == "ZH_") :
  print "--------- Force VH H0L1 T2 and T4 positive - Compensate in model! "
  T2.Scale(-1)  
  T4.Scale(-1)  

 if AC == "H0L1" and (Prod == "VBF_") :
  print "--------- Force VBF H0L1 T4 positive - Compensate in model! "
  T4.Scale(-1)  

 if AC == "H0L1" and (Prod == "VBF_") and Cat == "SRVH" :
  print "--------- Force VBF H0L1 T3 = 0 in VH category - Quick fix???????? " #dm
  T3.Scale(0)  

 if Test == True :
  
  gr = ROOT.TGraph(len(Scan))
  gr.SetLineColor(ROOT.kRed)
  gr.SetLineWidth(2)

  for i in range(len(Scan)): 

   FaiSc = Scan[i]
   Fa1Sc = 1-abs(FaiSc)

   N1Sc = MuSc**2*Fa1Sc**2    
   N2Sc = MuSc**2*np.sign(FaiSc)*math.sqrt(abs(FaiSc))*(math.sqrt(Fa1Sc)**3) 
   N3Sc = MuSc**2*abs(FaiSc)*Fa1Sc 
   N4Sc = MuSc**2*np.sign(FaiSc)*(math.sqrt(abs(FaiSc))**3)*math.sqrt(Fa1Sc) 
   N5Sc = MuSc**2*FaiSc**2 

   if AC == "H0PH" and (Prod == "WH_" or Prod == "ZH_") :
    N2Sc = N2Sc*-1 
   if AC == "H0L1" and (Prod == "WH_" or Prod == "ZH_") :
    N4Sc = N4Sc*-1
    N2Sc = N2Sc*-1
   if AC == "H0L1" and (Prod == "VBF_") : 
    N4Sc = N4Sc*-1
          
   f05TSc = T1.Clone()
   f05TSc.SetDirectory(0)
   f05TSc.Scale(  N1Sc)
   f05TSc.Add(T2, N2Sc)
   f05TSc.Add(T3, N3Sc)
   f05TSc.Add(T4, N4Sc)
   f05TSc.Add(T5, N5Sc)
  
   gr.SetPoint(i, Scan[i], f05TSc.Integral())

  canvasFinal = ROOT.TCanvas('canvasFinal', '', 500, 500)
  canvasFinal.Divide(3,2)
  canvasFinal.cd(1)
  T1.Draw("hist")
  canvasFinal.cd(2)
  T2.Draw("hist")
  canvasFinal.cd(3)
  T3.Draw("hist")
  canvasFinal.cd(4)
  T4.Draw("hist")
  canvasFinal.cd(5)
  T5.Draw("hist")
  canvasFinal.cd(6)
  legend = ROOT.TLegend(0.2,0.2,1.0,1.0)
  legend.AddEntry(T1,"T1","f")
  legend.AddEntry(T2,"T2","f")
  legend.AddEntry(T3,"T3","f")
  legend.AddEntry(T4,"T4","f")
  legend.AddEntry(T5,"T5","f")
  legend.Draw()
  canvasFinal.SaveAs("plotJJH/FinalT_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
  canvasFinal.SaveAs("plotJJH/FinalT_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

  canvasScan = ROOT.TCanvas('canvasScan', '', 500, 500)
  gr.Draw("ALP")
#  canvasScan.SetLogy()
  canvasScan.SaveAs("plotJJH/FinalS_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
  canvasScan.SaveAs("plotJJH/FinalS_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

 fout = ROOT.TFile.Open(''+dst_hvv+'', 'update')
 ROOT.gDirectory.mkdir("hww2l2v_13TeV_"+Cat+"/KD_"+AC+"/")
 fout.cd("hww2l2v_13TeV_"+Cat+"/KD_"+AC+"/")

 T1.SetName("histo_"+Prod+"T1"+Sys+"")
 T2.SetName("histo_"+Prod+"T2"+Sys+"")
 T3.SetName("histo_"+Prod+"T3"+Sys+"")
 T4.SetName("histo_"+Prod+"T4"+Sys+"")
 T5.SetName("histo_"+Prod+"T5"+Sys+"")

 T1.Write()
 T2.Write()
 T3.Write()
 T4.Write()
 T5.Write()

 fout.Close()

##########################################################

def create1VIntTemplates(Cat, Var, Prod, AC, Sys, Test):

 print " " 
 print " ", Cat, Var, Prod, AC, Sys, Test
 print " " 

 f = ROOT.TFile.Open(''+src+'', 'read')
 BaseN = "hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_"+Prod+""

 if Prod is "GGHjj_" :
  dst = dst_hgg
  SM  = getSumOfRWHGGSamples(f, BaseN, "H0PM",  Sys)
  BSM = getSumOfRWHGGSamples(f, BaseN, AC,      Sys)
  f05 = getSumOfRWHGGSamples(f, BaseN, AC+"f05",Sys)
 else :
  dst = dst_hvv
  SM  = getSumOfRWHVVSamples(f, BaseN, "H0PM",  Sys)
  BSM = getSumOfRWHVVSamples(f, BaseN, AC,      Sys)
  f05 = getSumOfRWHVVSamples(f, BaseN, AC+"f05",Sys)

 SM_Org  = f.Get(''+BaseN+'H0PM'+Sys+'')
 BSM_Org = f.Get(''+BaseN+AC+Sys+'')
 f05_Org = f.Get(''+BaseN+AC+'f05'+Sys+'')

 SM_Org.SetDirectory(0)
 BSM_Org.SetDirectory(0)
 f05_Org.SetDirectory(0)

 f.Close()

 G = cons[Prod+AC]

 T1 = SM.Clone()  # 2,0
 T2 = SM.Clone()  # 1,1
 T3 = BSM.Clone() # 0,2

 T1.SetDirectory(0)
 T2.SetDirectory(0)
 T3.SetDirectory(0)

 T2.Scale(-1/G)
 T2.Add(BSM, -G)
 T2.Add(f05, 1/G)
 
 if Test == True :
 
  N1 = Mu*Fa1                      
  N2 = Mu*np.sign(Fai)*math.sqrt(abs(Fai)*Fa1)*G 
  N3 = Mu*abs(Fai)*G**2                 

  f05T = T1.Clone()
  f05T.SetDirectory(0)
  f05T.Scale(  N1)
  f05T.Add(T2, N2)
  f05T.Add(T3, N3)

  T1.SetLineColor(ROOT.kRed)
  T1.SetFillColor(ROOT.kRed)
  T2.SetLineColor(ROOT.kBlue)
  T2.SetFillColor(ROOT.kBlue)
  T3.SetLineColor(ROOT.kGreen)
  T3.SetFillColor(ROOT.kGreen)
  T1.SetLineWidth(3)
  T2.SetLineWidth(3)
  T3.SetLineWidth(3)

  SM_Org.SetLineColor(ROOT.kBlack)
  BSM_Org.SetLineColor(ROOT.kBlack) 
  f05_Org.SetLineColor(ROOT.kBlack) 
  SM_Org.SetLineWidth(2)
  BSM_Org.SetLineWidth(2)
  f05_Org.SetLineWidth(2)

  f05T.SetLineColor(ROOT.kRed)
  f05T.SetFillColor(ROOT.kRed)
  f05T.SetLineWidth(2)

  canvasf05 = ROOT.TCanvas('canvasf05', '', 500, 500)
  f05T.SetMinimum(0.001)
  f05T.SetMaximum(1.5*f05T.GetMaximum())
  f05T.GetXaxis().SetTitle(""+Var+"")
  f05T.Draw("e")
  f05_Org.Draw("same e")
  legend = ROOT.TLegend(0.3,0.75,0.7,0.9)
  legend.AddEntry(f05_Org,"SM-BSM Mix MC ","l")
  legend.AddEntry(f05T,"T1-T3 combination","f")
  legend.Draw()
  canvasf05.SaveAs("plotJJH/f05_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
  canvasf05.SaveAs("plotJJH/f05_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

  canvasT1 = ROOT.TCanvas('canvasT1', '', 500, 500)
  T1.SetMinimum(0.001)
  T1.SetMaximum(1.5*T1.GetMaximum())
  T1.GetXaxis().SetTitle(""+Var+"")
  T1.Draw("e")
  SM_Org.Draw("same e")
  legend = ROOT.TLegend(0.3,0.75,0.7,0.9)
  legend.AddEntry(SM_Org,"pure SM MC","l")
  legend.AddEntry(T1,"T1 template","f")
  legend.Draw()
  canvasT1.SaveAs("plotJJH/T1_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
  canvasT1.SaveAs("plotJJH/T1_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

  canvasT2 = ROOT.TCanvas('canvasT2', '', 500, 500)
  T2.GetXaxis().SetTitle(""+Var+"")
  T2.Draw("e")
  legend = ROOT.TLegend(0.3,0.8,0.7,0.9)
  legend.AddEntry(T2,"T2 template","f")
  legend.SetTextSize(.04)
  legend.Draw()
  canvasT2.SaveAs("plotJJH/T2_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
  canvasT2.SaveAs("plotJJH/T2_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

  canvasT3 = ROOT.TCanvas('canvasT3', '', 500, 500)
  T3.SetMinimum(0.001)
  T3.SetMaximum(1.5*BSM.GetMaximum())
  T3.GetXaxis().SetTitle(""+Var+"")
  T3.Draw("e")
  BSM_Org.Draw("same e")
  legend = ROOT.TLegend(0.3,0.75,0.7,0.9)
  legend.AddEntry(BSM_Org,"pure BSM MC","l")
  legend.AddEntry(T3,"T3 template","f")
  legend.Draw()
  canvasT3.SaveAs("plotJJH/T3_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
  canvasT3.SaveAs("plotJJH/T3_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

 ######### Template tricks for combine #######

 Gsc = cons[Prod+AC] # Fai in terms of WW decay vertex or ggF production vertex

 T2.Scale(Gsc) 
 T3.Scale(Gsc**2) 
 
 if AC == "H0M" :
  print "--------- Force H0M T2 = 0"
  T2.Scale(0)  

 if AC == "H0L1" :
  print "--------- Force H0L1 T2 positive - Compensate in model! "
  T2.Scale(-1)  

 if Test == True :

  gr = ROOT.TGraph(len(Scan))
  gr.SetLineColor(ROOT.kRed)
  gr.SetLineWidth(2)

  for i in range(len(Scan)): 

   FaiSc = Scan[i]
   Fa1Sc = 1-abs(FaiSc)

   N1Sc = MuSc*Fa1Sc                       
   N2Sc = MuSc*np.sign(FaiSc)*math.sqrt(abs(FaiSc)*Fa1Sc)
   N3Sc = MuSc*abs(FaiSc)

   if AC == "H0L1" :
    N2Sc = N2Sc*-1
          
   f05TSc = T1.Clone()
   f05TSc.SetDirectory(0)
   f05TSc.Scale(  N1Sc)
   f05TSc.Add(T2, N2Sc)
   f05TSc.Add(T3, N3Sc)
  
   gr.SetPoint(i, Scan[i], f05TSc.Integral())

  canvasFinal = ROOT.TCanvas('canvasFinal', '', 500, 500)
  canvasFinal.Divide(2,2)
  canvasFinal.cd(1)
  T1.Draw("hist")
  canvasFinal.cd(2)
  T2.Draw("hist")
  canvasFinal.cd(3)
  T3.Draw("hist")
  canvasFinal.cd(4)
  legend = ROOT.TLegend(0.2,0.2,1.0,1.0)
  legend.AddEntry(T1,"T1","f")
  legend.AddEntry(T2,"T2","f")
  legend.AddEntry(T3,"T3","f")
  legend.Draw() 
  canvasFinal.SaveAs("plotJJH/FinalT_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf") 
  canvasFinal.SaveAs("plotJJH/FinalT_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

  canvasScan = ROOT.TCanvas('canvasScan', '', 500, 500)
  gr.Draw("ALP")
#  canvasScan.SetLogy()
  canvasScan.SaveAs("plotJJH/FinalS_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
  canvasScan.SaveAs("plotJJH/FinalS_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

 fout = ROOT.TFile.Open(''+dst+'', 'update')
 ROOT.gDirectory.mkdir("hww2l2v_13TeV_"+Cat+"/KD_"+AC+"/")
 fout.cd("hww2l2v_13TeV_"+Cat+"/KD_"+AC+"/")

 T1.SetName("histo_ggH_T1"+Sys+"") 
 T2.SetName("histo_ggH_T2"+Sys+"")
 T3.SetName("histo_ggH_T3"+Sys+"")

 T1.Write() 
 T2.Write()
 T3.Write()

 fout.Close()

##########################################################

Systematics = ["CMS_eff_mu", "CMS_eff_el"]

VBFConfig = [ ("SRVBF", "kd_vbf_hm", "VBF_", "H0M"),
              ("SRVBF", "kd_vbf_hp", "VBF_", "H0PH"),
              ("SRVBF", "kd_vbf_hl", "VBF_", "H0L1"),
              ("SRVH",  "kd_vh_hm",  "VBF_", "H0M"),
              ("SRVH",  "kd_vh_hp",  "VBF_", "H0PH"),
              ("SRVH",  "kd_vh_hl",  "VBF_", "H0L1"),   
              ("SRBVH", "kd_Vh_hm",  "VBF_", "H0M"),
              ("SRBVH", "kd_Vh_hp",  "VBF_", "H0PH"),
              ("SRBVH", "kd_Vh_hl",  "VBF_", "H0L1"),     
]

WHConfig = [  ("SRVBF", "kd_vbf_hm", "WH_", "H0M"),
              ("SRVBF", "kd_vbf_hp", "WH_", "H0PH"),
              ("SRVBF", "kd_vbf_hl", "WH_", "H0L1"),
              ("SRVH",  "kd_vh_hm",  "WH_", "H0M"),
              ("SRVH",  "kd_vh_hp",  "WH_", "H0PH"),
              ("SRVH",  "kd_vh_hl",  "WH_", "H0L1"), 
              ("SRBVH", "kd_Vh_hm",  "WH_", "H0M"),
              ("SRBVH", "kd_Vh_hp",  "WH_", "H0PH"),
              ("SRBVH", "kd_Vh_hl",  "WH_", "H0L1"),    
]

ZHConfig = [  ("SRVBF", "kd_vbf_hm", "ZH_", "H0M"),
              ("SRVBF", "kd_vbf_hp", "ZH_", "H0PH"),
              ("SRVBF", "kd_vbf_hl", "ZH_", "H0L1"),
              ("SRVH",  "kd_vh_hm",  "ZH_", "H0M"),
              ("SRVH",  "kd_vh_hp",  "ZH_", "H0PH"),
              ("SRVH",  "kd_vh_hl",  "ZH_", "H0L1"),  
              ("SRBVH", "kd_Vh_hm",  "ZH_", "H0M"),
              ("SRBVH", "kd_Vh_hp",  "ZH_", "H0PH"),
              ("SRBVH", "kd_Vh_hl",  "ZH_", "H0L1"),  
]
  
SigConfig2V = ZHConfig + WHConfig + VBFConfig


GGHConfig = [ ("SRVBF", "kd_vbf_hm", "", "H0M"),
              ("SRVBF", "kd_vbf_hp", "", "H0PH"),
              ("SRVBF", "kd_vbf_hl", "", "H0L1"),
              ("SRVH",  "kd_vh_hm",  "", "H0M"),
              ("SRVH",  "kd_vh_hp",  "", "H0PH"),
              ("SRVH",  "kd_vh_hl",  "", "H0L1"),   
              ("SRBVH", "kd_Vh_hm",  "", "H0M"),
              ("SRBVH", "kd_Vh_hp",  "", "H0PH"),
              ("SRBVH", "kd_Vh_hl",  "", "H0L1"),   
]

for cat, var, prod, sig in SigConfig2V :
 create2VIntTemplates(cat, var, prod, sig, "", True)
 for sys in Systematics :
  create2VIntTemplates(cat, var, prod, sig, "_"+sys+"Up", False)
  create2VIntTemplates(cat, var, prod, sig, "_"+sys+"Down", False)

for cat, var, prod, sig in GGHConfig :
 create1VIntTemplates(cat, var, prod, sig, "", True)
 for sys in Systematics :
  create1VIntTemplates(cat, var, prod, sig, "_"+sys+"Up", False)
  create1VIntTemplates(cat, var, prod, sig, "_"+sys+"Down", False)    

AddOtherTemplates("SRVBF", "kd_vbf_hm", "H0M"),
AddOtherTemplates("SRVBF", "kd_vbf_hp", "H0PH"),
AddOtherTemplates("SRVBF", "kd_vbf_hl", "H0L1"),
AddOtherTemplates("SRVH",  "kd_vh_hm",  "H0M"),
AddOtherTemplates("SRVH",  "kd_vh_hp",  "H0PH"),
AddOtherTemplates("SRVH",  "kd_vh_hl",  "H0L1"),
AddOtherTemplates("SRBVH", "kd_Vh_hm",  "H0M"),
AddOtherTemplates("SRBVH", "kd_Vh_hp",  "H0PH"),
AddOtherTemplates("SRBVH", "kd_Vh_hl",  "H0L1"),

'''

GGHJJConfig = [ ("SRHJJ", "kd_qcd_hm", "GGHjj_", "H0M"),  ]  

for cat, var, prod, sig in GGHJJConfig :
 create1VIntTemplates(cat, var, prod, sig, "", True)
 for sys in Systematics :
  create1VIntTemplates(cat, var, prod, sig, "_"+sys+"Up", False)
  create1VIntTemplates(cat, var, prod, sig, "_"+sys+"Down", False)  

AddOtherTemplates("SRHJJ", "kd_qcd_hm", "H0M"),

'''
