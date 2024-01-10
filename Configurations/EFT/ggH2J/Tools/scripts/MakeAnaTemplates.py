
import sys
import ROOT 
import numpy as np
import shutil
import math
import os

KD = str(sys.argv[1])
Year = str(sys.argv[2]) # "16","16Test"

NegList = []

ROOT.gStyle.SetOptStat(0)
ROOT.gStyle.SetOptTitle(0)

Verbose = False

file_nl  = open("NegList"+Year+".py", "a")

############# Couplings of mixed HWW (g)

cons = {"VBF_H0M" : 0.29797901870, 
        "WH_H0M"  : 0.1236136, 
        "ZH_H0M"  : 0.144057, 
        "H0M"     : 1.76132,
        "ggHjj_H0M" : 1.0062, #JHUGen 1,1.0062  MINLO 0.707107,0.707107
       }
########## Split Scalings such that templates have a significant normalisation for combine 

cons_sc = {"H0M" : 1 }
cons_zz = {"H0M" : 2.55052, "ggHjj_H0M" : 1.0062 }
 
############### Matrix of couplings for H(g1, gi) hypotheses - Ewk H (2 Vertices)

Gai_2V = np.array(([1**4,0,0,0,0],  
                [0,0,0,0,1**4],  
                [1,.25,.25**2,.25**3,.25**4],  
                [1,.5,  .5**2, .5**3, .5**4],             
                [1,.75,.75**2,.75**3,.75**4]  ))   

G0M =  np.array(([1**2,0,0,], [0,0,1**2],  [1,cons["H0M"], cons["H0M"]**2] )) 
Gjj0M = np.array(([1**2,0,0,], [0,0,1**2], [1,cons["ggHjj_H0M"],cons["ggHjj_H0M"]**2] )) #DM

# MINLO norms [cons["ggHjj_H0M"]**2, cons["ggHjj_H0M"]**2, cons["ggHjj_H0M"]**2]
# STD Hgg approach : [1**2, cons["ggHjj_H0M"], cons["ggHjj_H0M"]**2]

###### test params #####

MuSc  = 1.0
Scan = [-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1] 

######## Template forced positive for combine ################

#print "- For each analysis channel we should check which templates are negative"
#print "- They are added to lists (NegList.py) and forced positive -- Must be taken into account in Signal Model! "

###################################################################

#DM Add correct name? 

src  = "rootFileJJH"+Year+"/plots_JJH"+Year+".root" 
#src  = "rootFileJJH"+Year+"/plots_JJH"+Year+"_REBIN.root" 
dst = "rootFileJJH"+Year+"/plots_JJH"+Year+"_"+KD+".root"

if os.path.exists(dst):
    os.remove(dst)

"""
print "- For Ewk HVV (2V) need templates : T1 -(4,0), T2 -(3,1), T3 -(2,2), T4 -(1,3), T5 -(0,4)" 
print "Get from SM-BSM mixture hypotheses : SM(1,0), M0(0,1), M1(1,.25), M2(1,.5), M3(1,.75) "
print "and G matrices Gai, Gl1, Gl1Zg"
print "- Will create new file : "+dst+" with HVV analysis templates"
print " " 
print "- For ggF HVV (1V) need templates T1 -(2,0), T2 -(1,1), T3 -(0,2)" 
print "Get from SM-BSM MC : SM(1,0), BSM(0,1), M1(1,gMix) "
print "- Will create new file : "+dst+" with HVV analysis templates"
print " "
print "- For ggH+2Jet HGG (1V) need templates T1 -(2,0), T2 -(1,1), T3 -(0,2)" 
print "Get from SM-BSM MC : SM(1,0), BSM(0,1), M1(1,gMix) "
print "- Will create new file : "+dst+" with HGG analysis templates"
print " "
"""

###################################################

def AddOtherTemplates(Cat, Var, vertex, AC, src_ot, othertemp):

 if Verbose == True :  
  print " " 
  print "AddOtherTemp ", Cat, Var
  print " " 

 f = ROOT.TFile.Open(''+src_ot+'', 'read')

 HistList = ROOT.TObjArray()
 HistNameList = []

 f.cd("hww2l2v_13TeV_"+Cat+"/"+Var+"/")
 d = ROOT.gDirectory
 for ih in d.GetListOfKeys():
    h = ih.ReadObj()
    if any(x in h.GetName() for x in othertemp) :

     VarSys = False
     Sys    = False
     if "Up" in h.GetName() or "Down" in h.GetName(): Sys = True
     if Sys is False and "QCDscale" in h.GetName():  VarSys = True
     if Sys is False and "pdf" in h.GetName(): VarSys = True

     if VarSys is False and h.GetName() not in HistNameList :
      h.SetDirectory(0)
      if h.Integral() < 0 : 
       h.Scale(0)
       if Verbose is True : print "Setting to 0 : ", h.GetName(), Cat, Var 
      if AC == "H0M" :  #Set names such that templates are scaled by Mu*Fa1 in signal model
       if "WH_hww" in h.GetName() : 
        name = h.GetName() 
        name = name.replace("WH_hww","WH_T1")
        h.SetName(name)
       if "ZH_hww" in h.GetName() :
        name = h.GetName() 
        name = name.replace("ZH_hww","ZH_T1")
        h.SetName(name)
       if "qqH_hww" in h.GetName() :
        name = h.GetName() 
        name = name.replace("qqH_hww","VBF_T1")
        h.SetName(name)
        h.Scale(1.03621*1.08) 

     # if "DATA" in h.GetName() : # DM HZZ Scaling for 18
     #  num = round(0.007*h.Integral())
     #  print Cat, num
     #  h.Scale(num/h.Integral())
     # elif "VBF_T1" in h.GetName() :
     #  h.Scale(0.15)
     # else :
     #  h.Scale(0.007) 

      HistList.Add(h)
      HistNameList.append(h.GetName())

 f.Close()

 fout = ROOT.TFile.Open(''+dst+'', 'update')
 fout.cd("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+AC+"/") 

 HistList.Write()

 if Verbose is True :  
  d = ROOT.gDirectory
  for ih in d.GetListOfKeys():
    h = ih.ReadObj()
    if "Up" not in h.GetName() and "Down" not in h.GetName() : 
     print h.GetName(), h.Integral()

 fout.Close()

###########################################

def setSigStatTo0(Cat, Var, vertex, Prod, AC):

 if "ggH" in Prod : NT = 3
 else :             NT = 5

 fout = ROOT.TFile.Open(''+dst+'', 'update')

 for i in range(1, NT+1) : 

  Temp = "T"+str(i)
  T = fout.Get("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+AC+"/histo_"+Prod+Temp+"")

  for j in range(1, T.GetNbinsX()+1): 
   T.SetBinError(j, 0)

  fout.cd("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+AC+"/") 
  T.SetName("histo_"+Prod+Temp+"")
  T.Write("",ROOT.TObject.kOverwrite)
  fout.cd("../../") 

 fout.Close()   

def AddCorrHist(h1,h2,h2sc):

 corr=1 #dm
 nbins = h1.GetXaxis().GetNbins()

 ha = h1.Clone() 
 ha.SetDirectory(0)

 ha2 = h2.Clone()
 ha2.SetDirectory(0)
 ha2.Scale(h2sc)

 for i in range(1, nbins+1):
   n1 = h1.GetBinContent(i)
   n2 = ha2.GetBinContent(i)
   n = n1 + n2
   e1 = h1.GetBinError(i)
   e2 = ha2.GetBinError(i)
   e = math.sqrt(e1**2 + e2**2 + 2*e1*e2*corr)
   if n1*n2<0 or n1*n2==0 : 
    if n1>0.0001 and n2>0.0001 :e = math.sqrt(e1**2 + e2**2 - 2*e1*e2*corr)
   ha.SetBinContent(i, n)
   ha.SetBinError(i, e)
 
 return ha

#############################################

def getPWGSF(f, Cat, Var, Prod, jhusm):

 if   Prod is "VBF_"   : 
   jhu = f.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_"+Prod+"H0PM") 
   pwg = f.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_qqH_hww")
 elif Prod is "WH_" or  Prod is "ZH_"   : 
  if "vbf" in Cat : 
   jhu = f.Get("hww2l2v_13TeV_of2j_vh/events/histo_"+Prod+"H0PM") 
   pwg = f.Get("hww2l2v_13TeV_of2j_vh/events/histo_"+Prod+"hww")
  else :
   jhu = f.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_"+Prod+"H0PM") 
   pwg = f.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_"+Prod+"hww")
 elif Prod is "ggHjj_" :
   jhu = f.Get("hww2l2v_13TeV_"+Cat+"/events/histo_GGHjj_minlo_H0PM") 
   pwg = f.Get("hww2l2v_13TeV_"+Cat+"/events/histo_ggH_hww")
 elif Prod is "ggH_"   : 
   jhu = f.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_H0PM") 
   pwg = f.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_ggH_hww")
 else : "Prod not recognised by getPWGSF"

 print pwg.Integral()/jhusm.Integral()

 # XSECxBR correction for mH = 125.38
 if   Prod is "VBF_" :   pwg.Scale(1.03621) 
 if "17" in Year or "18" in Year :
  if   Prod is "WH_" :    pwg.Scale(1.01724) 
  elif Prod is "ZH_" :    pwg.Scale(1.01994)
  elif Prod is "ggHjj_" : pwg.Scale(1.03364) 
  elif Prod is "ggH_" :   pwg.Scale(1.03364)

 # VBF Dipole correction 
 if Prod is "VBF_" :
  if "vbf" in cat   : pwg.Scale(1.08)
  elif "vh"  in cat : pwg.Scale(0.83)
  elif "ggh" in cat: pwg.Scale(1.08)

 if pwg.Integral()==0 or jhusm.Integral()==0 : scale = 1
 else : scale = pwg.Integral()/jhusm.Integral()
 
# scale = scale*0.15 #DM For HZZ scaling 18

 return scale

######################################

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

 HO = f.Get(''+BaseN+Hyp+Sys+'') 
 norm = HO.Integral()

 if Hyp == "H0PM" : H1 = f.Get(''+BaseN+'H0PM'+Sys+'') 
 else             : H1 = f.Get(''+BaseN+'H0PM_'+Hyp+Sys+'') 
 if Hyp == "H0M" :  H2 = f.Get(''+BaseN+'H0M'+Sys+'') 
 else            :  H2 = f.Get(''+BaseN+'H0M_'+Hyp+Sys+'')
 if Hyp == "H0Mf05" :  H3 = f.Get(''+BaseN+'H0Mf05'+Sys+'') 
 else               :  H3 = f.Get(''+BaseN+'H0Mf05_'+Hyp+Sys+'') 

 H1.SetDirectory(0)
 H2.SetDirectory(0)
 H3.SetDirectory(0)

# if H1.Integral()>0 : H1.Scale(norm/H1.Integral()) #DM
# if H2.Integral()>0 : H2.Scale(norm/H2.Integral())
# if H3.Integral()>0 : H3.Scale(norm/H3.Integral())

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

def checkForBadSys(Cat, Var, vertex, Prod, AC, Sys, Temp):

 fout = ROOT.TFile.Open(''+dst+'', 'update')

 if "EFT" in AC : AC = AC[3:] 

 Nom = fout.Get("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+AC+"/histo_"+Prod+Temp+"")
 Up = fout.Get("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+AC+"/histo_"+Prod+Temp+Sys+"Up") 
 Dn = fout.Get("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+AC+"/histo_"+Prod+Temp+Sys+"Down")

 Err = ROOT.Double(0.)
 N = Nom.IntegralAndError(0,Nom.GetNbinsX(),Err)
 U = Up.Integral()
 D = Dn.Integral()

 if Verbose is True : print "CheckForBadSys ", Sys, Temp, N, U, D 

 fout.cd("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+AC+"/") 

 if N == 0 :
  Up.Scale(0)
  Dn.Scale(0)
  Up.SetName("histo_"+Prod+Temp+Sys+"Up")
  Dn.SetName("histo_"+Prod+Temp+Sys+"Down")
  Up.Write("",ROOT.TObject.kOverwrite)
  Dn.Write("",ROOT.TObject.kOverwrite)
  
 else : # Assuming then that N is positive (Should be the case!)

  BadShapeSys = False
  if U<0 or D<0 or (U<N and D<N) or (U>N and D>N) : BadShapeSys = True 
  if Err/N > 1.0 : BadShapeSys = True 

  if BadShapeSys is True : # Treat as symmetric norm uncertainty (Assuming MC stat uncertinty is too big to treat this as shape sys)

    Up = Nom.Clone() 
    Dn = Nom.Clone()
    NErr = max(abs(D-N),abs(U-N))
    Up.Scale((N+NErr)/N)
    if(N-NErr)>0: Dn.Scale((N-NErr)/N)
    else        : Dn.Scale(0.0001)
    Up.SetName("histo_"+Prod+Temp+Sys+"Up")
    Dn.SetName("histo_"+Prod+Temp+Sys+"Down")
    Up.Write("",ROOT.TObject.kOverwrite)
    Dn.Write("",ROOT.TObject.kOverwrite)

 fout.Close()
    
############################################

def GetKDNameFromVar(Var) :

 name = ""

 if "vbf" in Var  : name = "VBF "
 elif "vh" in Var : name = "VH "
 elif "ggh" in Var : name = "ggH "
 
 if "hlzg" in Var : name = "D_{"+name+"#Lambda_{1} Zg}"
 elif "hl" in Var : name = "D_{"+name+"#Lambda_{1}}"
 elif "mixhm" in Var : name = "D_{"+name+"CP}"
 elif "mixhp" in Var : name = "D_{"+name+"Int}"
 elif "hm" in Var : name = "D_{"+name+"0^{-}}"
 elif "hp" in Var : name = "D_{"+name+"0^{+}}"

 if "mll" in Var : name = "m_{ll}"

 return name

#########################################################

def create2VIntTemplates(Cat, Var, vertex, Prod, AC, Sys, Test):

 if Verbose is True :  
  print " " 
  print " create2V ", Cat, Var, Prod, AC, Sys, Test
  print " " 

 f = ROOT.TFile.Open(''+src+'', 'read')
 BaseN = "hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_"+Prod+""

 MCForThisAC = True
 if "H0LZg" in AC : MCForThisAC = False

 SM = getSumOfRWHVVSamples(f, BaseN, "H0PM",  Sys)
 M0 = getSumOfRWHVVSamples(f, BaseN, AC+"_M0",Sys)
 M1 = getSumOfRWHVVSamples(f, BaseN, AC+"_M1",Sys)
 M2 = getSumOfRWHVVSamples(f, BaseN, AC+"_M2",Sys)
 M3 = getSumOfRWHVVSamples(f, BaseN, AC+"_M3",Sys)
 
 PWG_SF = getPWGSF(f, Cat, Var, Prod, SM)

 # print  Cat, Var, Prod, PWG_SF

 SM.Scale(PWG_SF)
 M0.Scale(PWG_SF)
 M1.Scale(PWG_SF)
 M2.Scale(PWG_SF)
 M3.Scale(PWG_SF)

 if "EFT" in AC : AC = AC[3:] 

 SM_Org  = f.Get(''+BaseN+'H0PM'+Sys+'')
 SM_Org.SetDirectory(0)
 SM_Org.SetLineColor(ROOT.kBlack)
 SM_Org.SetLineWidth(3)
 SM_Org.Scale(PWG_SF)

 if MCForThisAC is True :

  BSM_Org = f.Get(''+BaseN+AC+Sys+'')
  f05_Org = f.Get(''+BaseN+AC+'f05'+Sys+'') 
  BSM_Org.SetDirectory(0)
  f05_Org.SetDirectory(0)
  BSM_Org.SetLineColor(ROOT.kBlack) 
  f05_Org.SetLineColor(ROOT.kBlack) 
  BSM_Org.SetLineWidth(3)
  f05_Org.SetLineWidth(3)
  BSM_Org.Scale(PWG_SF)
  f05_Org.Scale(PWG_SF)

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

 if AC == "H0LZg" :
 
  InvG = np.linalg.inv(Gl1Zg)

  T1.Scale(                InvG[0][0])
  T1 = AddCorrHist(T1, M1, InvG[0][1])
  T1 = AddCorrHist(T1, M3, InvG[0][2])

  T2.Scale(                InvG[1][0])
  T2 = AddCorrHist(T2, M1, InvG[1][1])
  T2 = AddCorrHist(T2, M3, InvG[1][2])

  T3.Scale(                InvG[2][0])
  T3 = AddCorrHist(T3, M1, InvG[2][1])
  T3 = AddCorrHist(T3, M3, InvG[2][2])

  T4.Scale(0)
  T5.Scale(0)

 else :

  InvG = np.linalg.inv(Gai_2V)

  T1.Scale(                InvG[0][0])
  T1 = AddCorrHist(T1, M0, InvG[0][1])
  T1 = AddCorrHist(T1, M1, InvG[0][2])
  T1 = AddCorrHist(T1, M2, InvG[0][3])
  T1 = AddCorrHist(T1, M3, InvG[0][4])

  T1.Scale(                InvG[0][0])
  T1 = AddCorrHist(T1, M0, InvG[0][1])
  T1 = AddCorrHist(T1, M1, InvG[0][2])
  T1 = AddCorrHist(T1, M2, InvG[0][3])
  T1 = AddCorrHist(T1, M3, InvG[0][4])

  T2.Scale(                InvG[1][0])
  T2 = AddCorrHist(T2, M0, InvG[1][1])
  T2 = AddCorrHist(T2, M1, InvG[1][2])
  T2 = AddCorrHist(T2, M2, InvG[1][3])
  T2 = AddCorrHist(T2, M3, InvG[1][4])
 
  T3.Scale(                InvG[2][0])
  T3 = AddCorrHist(T3, M0, InvG[2][1])
  T3 = AddCorrHist(T3, M1, InvG[2][2])
  T3 = AddCorrHist(T3, M2, InvG[2][3])
  T3 = AddCorrHist(T3, M3, InvG[2][4])

  T4.Scale(                InvG[3][0])
  T4 = AddCorrHist(T4, M0, InvG[3][1])
  T4 = AddCorrHist(T4, M1, InvG[3][2])
  T4 = AddCorrHist(T4, M2, InvG[3][3])
  T4 = AddCorrHist(T4, M3, InvG[3][4])

  T5.Scale(                InvG[4][0])
  T5 = AddCorrHist(T5, M0, InvG[4][1])
  T5 = AddCorrHist(T5, M1, InvG[4][2])
  T5 = AddCorrHist(T5, M2, InvG[4][3])
  T5 = AddCorrHist(T5, M3, InvG[4][4])

 ####################################
 
 if Test == True :

  T1.SetLineColor(ROOT.kRed)
  T2.SetLineColor(ROOT.kRed)
  T3.SetLineColor(ROOT.kRed)
  T4.SetLineColor(ROOT.kRed)
  T5.SetLineColor(ROOT.kRed)
  T1.SetFillColor(ROOT.kRed)
  T2.SetFillColor(ROOT.kRed)
  T3.SetFillColor(ROOT.kRed)
  T4.SetFillColor(ROOT.kRed)
  T5.SetFillColor(ROOT.kRed)
  T1.SetLineWidth(2)
  T2.SetLineWidth(2)
  T3.SetLineWidth(2)
  T4.SetLineWidth(2)
  T5.SetLineWidth(2)

  T1e = T1.Clone()
  T1e.SetFillStyle(3001)
  T1e.SetFillColor(ROOT.kGray+2)
  T1e.SetMarkerSize(.01)

  T2e = T2.Clone()
  T2e.SetFillStyle(3001)
  T2e.SetFillColor(ROOT.kGray+2)
  T2e.SetMarkerSize(.01);

  T3e = T3.Clone()
  T3e.SetFillStyle(3001)
  T3e.SetFillColor(ROOT.kGray+2)
  T3e.SetMarkerSize(.01)

  T4e = T4.Clone()
  T4e.SetFillStyle(3001)
  T4e.SetFillColor(ROOT.kGray+2)
  T4e.SetMarkerSize(.01)

  T5e = T5.Clone()
  T5e.SetFillStyle(3001)
  T5e.SetFillColor(ROOT.kGray+2)
  T5e.SetMarkerSize(.01)

  AC2 = GetKDNameFromVar(Var)

  if MCForThisAC is True :

   G = cons[Prod+AC]
   f05T = T1.Clone()
   f05T.SetDirectory(0)
   f05T = AddCorrHist(f05T, T2, G)  
   f05T = AddCorrHist(f05T, T3, G**2)
   f05T = AddCorrHist(f05T, T4, G**3)
   f05T = AddCorrHist(f05T, T5, G**4)
   f05T.SetLineColor(ROOT.kRed)
   f05T.SetFillColor(ROOT.kRed)

   f05Te = f05T.Clone()
   f05Te.SetFillStyle(3001)
   f05Te.SetFillColor(ROOT.kGray+2)
   f05Te.SetMarkerSize(.01)

   canvasf05 = ROOT.TCanvas('canvasf05', '', 500, 500)
   f05T.SetMinimum(0)
   f05T.SetMaximum(1.5*f05T.GetMaximum())
   f05T.GetXaxis().SetTitle(""+AC2+"")
   f05T.Draw("hist")
   f05Te.Draw("same E2")
   f05_Org.Draw("same e")
   legend = ROOT.TLegend(0.35,0.90,0.65,0.975)
   legend.AddEntry(f05_Org,"SM-BSM Mix MC ","lep")
   legend.AddEntry(f05T,"T1-T5 combination","f")
   legend.Draw()
   canvasf05.SaveAs("plotJJH/Temps/f05_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
   canvasf05.SaveAs("plotJJH/Temps/f05_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

  canvasInitial1 = ROOT.TCanvas('canvasInitial1', '', 500, 500)
  canvasInitial1.cd()
  T1.SetMinimum(0)
  T1.SetMaximum(1.5*T1.GetMaximum())
  T1.GetXaxis().SetTitle(""+AC2+"")
  T1.Draw("hist")
  T1e.Draw("same E2")
  SM_Org.Draw("same e")
  legend = ROOT.TLegend(0.35,0.90,0.65,0.975)
  legend.AddEntry(SM_Org,"SM MC ","lep")
  legend.AddEntry(T1,"T1","f")
  legend.Draw()
  canvasInitial1.SaveAs("plotJJH/Temps/InitialT1_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
  canvasInitial1.SaveAs("plotJJH/Temps/InitialT1_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

  canvasInitial5 = ROOT.TCanvas('canvasInitial5', '', 500, 500)
  canvasInitial5.cd()
  T5.SetMinimum(0)
  T5.SetMaximum(1.5*T5.GetMaximum())
  T5.GetXaxis().SetTitle(""+AC2+"")
  T5.Draw("hist")
  T5e.Draw("same E2")
  if MCForThisAC is True : BSM_Org.Draw("same e")
  legend = ROOT.TLegend(0.35,0.90,0.65,0.975)
#  legend.SetBorderSize(0)
  if MCForThisAC is True : legend.AddEntry(BSM_Org,"BSM MC ","lep")
  legend.AddEntry(T5,"T5","f")
  legend.Draw()
  canvasInitial5.SaveAs("plotJJH/Temps/InitialT5_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
  canvasInitial5.SaveAs("plotJJH/Temps/InitialT5_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

  canvasInitial2 = ROOT.TCanvas('canvasInitial2', '', 500, 500)
  canvasInitial2.cd()
  if AC is "H0M" : # bascially 0
   T2.SetMinimum(-1*T1.GetMaximum())
   T2.SetMaximum(T1.GetMaximum())
  else : 
   if T2.Integral() < 0 : 
    T2.SetMinimum(1.5*T2.GetMinimum())
    T2.SetMaximum(0)
   if T2.Integral() > 0 : 
    T2.SetMaximum(1.5*T2.GetMaximum())
    T2.SetMinimum(0)
  T2.GetXaxis().SetTitle(""+AC2+"")
  T2.Draw("hist")
  T2e.Draw("same E2")
  legend = ROOT.TLegend(0.35,0.90,0.65,0.975)
  legend.AddEntry(T2,"T2","f")
  legend.Draw()
  canvasInitial2.SaveAs("plotJJH/Temps/InitialT2_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
  canvasInitial2.SaveAs("plotJJH/Temps/InitialT2_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

  canvasInitial3 = ROOT.TCanvas('canvasInitial3', '', 500, 500)
  canvasInitial3.cd()
  if T3.Integral() < 0 : 
   T3.SetMinimum(1.5*T3.GetMinimum())
   T3.SetMaximum(0)
  if T3.Integral() > 0 : 
   T3.SetMaximum(1.5*T3.GetMaximum())
   T3.SetMinimum(0)
  T3.GetXaxis().SetTitle(""+AC2+"")
  T3.Draw("hist")
  T3e.Draw("same E2")
  legend = ROOT.TLegend(0.35,0.90,0.65,0.975)
  legend.AddEntry(T3,"T3","f")
  legend.Draw()
  canvasInitial3.SaveAs("plotJJH/Temps/InitialT3_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
  canvasInitial3.SaveAs("plotJJH/Temps/InitialT3_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

  canvasInitial4 = ROOT.TCanvas('canvasInitial4', '', 500, 500)
  canvasInitial4.cd()
  if AC is "H0M" : # bascially 0
   T4.SetMinimum(-1*T1.GetMaximum())
   T4.SetMaximum(T1.GetMaximum())
  else : 
   if T4.Integral() < 0 : T4.SetMinimum(1.5*T4.GetMinimum())
   if T4.Integral() > 0 : T4.SetMaximum(1.5*T4.GetMaximum())
  T4.GetXaxis().SetTitle(""+AC2+"")
  T4.Draw("hist")
  T4e.Draw("same E2")
  legend = ROOT.TLegend(0.35,0.90,0.65,0.975)
  legend.AddEntry(T4,"T4","f")
  legend.Draw()
  canvasInitial4.SaveAs("plotJJH/Temps/InitialT4_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
  canvasInitial4.SaveAs("plotJJH/Temps/InitialT4_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

 ######### Template tricks for combine #######

 Gsc = cons_sc[AC] 

 T2.Scale(Gsc) 
 T3.Scale(Gsc**2) 
 T4.Scale(Gsc**3) 
 T5.Scale(Gsc**4)

 if Sys is "" :
  if T2.Integral()<0 :  
   T2.Scale(-1) 
   NegList.append((""+Cat+"",""+AC+"",""+Prod+"","T2"))
  if T3.Integral()<0 :  
   T3.Scale(-1)
   NegList.append((""+Cat+"",""+AC+"",""+Prod+"","T3"))
  if T4.Integral()<0 : 
   T4.Scale(-1)  
   NegList.append((""+Cat+"",""+AC+"",""+Prod+"","T4"))

 else : # Sys ran after central so NegList has been created
   for n in NegList :
     if n[0] in Cat and n[1] in AC and n[2] in Prod :
      if   n[3] in "T2" : T2.Scale(-1)
      elif n[3] in "T3" : T3.Scale(-1)
      elif n[3] in "T4" : T4.Scale(-1)

 if Test == True :

  gr = ROOT.TGraph(len(Scan))
  gr.SetLineColor(ROOT.kRed)
  gr.SetLineWidth(2)

  for i in range(len(Scan)): 

   FaiSc = Scan[i]
   Fa1Sc = 1-abs(FaiSc)
   GSc   = cons_zz[AC] 

   N1Sc = MuSc**2*Fa1Sc**2    
   N2Sc = MuSc**2*np.sign(FaiSc)*math.sqrt(abs(FaiSc))*(math.sqrt(Fa1Sc)**3)*GSc
   N3Sc = MuSc**2*abs(FaiSc)*Fa1Sc*(GSc**2)
   N4Sc = MuSc**2*np.sign(FaiSc)*(math.sqrt(abs(FaiSc))**3)*math.sqrt(Fa1Sc)*(GSc**3)
   N5Sc = MuSc**2*FaiSc**2*(GSc**4)

   for n in NegList :
     if n[0] in Cat and n[1] in AC and n[2] in Prod :
      if   n[3] in "T2" : N2Sc = N2Sc*-1 
      elif n[3] in "T3" : N3Sc = N3Sc*-1 
      elif n[3] in "T4" : N4Sc = N4Sc*-1 
          
   fTSc = T1.Clone()
   fTSc.SetDirectory(0)
   fTSc.Scale(  N1Sc)
   fTSc.Add(T2, N2Sc)
   fTSc.Add(T3, N3Sc)
   fTSc.Add(T4, N4Sc)
   fTSc.Add(T5, N5Sc)
  
   gr.SetPoint(i, Scan[i], fTSc.Integral())
 
  canvasFinal = ROOT.TCanvas('canvasFinal', '', 500, 500)
  canvasFinal.Divide(3,2)    
  canvasFinal.cd(1)
  T1.Draw("e")
  canvasFinal.cd(2)
  T2.Draw("e")
  canvasFinal.cd(3)
  T3.Draw("e")
  canvasFinal.cd(4)
  T4.Draw("e")
  canvasFinal.cd(5)
  T5.Draw("e")
  canvasFinal.cd(6)
  legend = ROOT.TLegend(0.2,0.2,1.0,1.0)
  legend.AddEntry(T1,"T1","f")
  legend.AddEntry(T2,"T2","f")
  legend.AddEntry(T3,"T3","f")
  legend.AddEntry(T4,"T4","f")
  legend.AddEntry(T5,"T5","f")
  legend.Draw()
  canvasFinal.SaveAs("plotJJH/Temps/FinalT_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
  canvasFinal.SaveAs("plotJJH/Temps/FinalT_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

  canvasScan = ROOT.TCanvas('canvasScan', '', 500, 500)
  gr.Draw("ALP")
  canvasScan.SaveAs("plotJJH/Temps/FinalS_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
  canvasScan.SaveAs("plotJJH/Temps/FinalS_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

 fout = ROOT.TFile.Open(''+dst+'', 'update')
 ROOT.gDirectory.mkdir("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+AC+"/") 
 fout.cd("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+AC+"/") 

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

def create1VIntTemplates(Cat, Var, vertex, Prod, AC, Sys, Test): 

 if Verbose is True : 
  print " " 
  print "create1V ", Cat, Var, Prod, AC, Sys, Test
  print " " 

 f = ROOT.TFile.Open(''+src+'', 'read') 

 MCForThisAC = True

 if Prod == "ggHjj_" :
  BaseN = "hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_GGHjj_minlo_"
  SM  = getSumOfRWHGGSamples(f, BaseN, "H0PM", Sys)
  BSM = getSumOfRWHGGSamples(f, BaseN, AC,Sys)
  f05 = getSumOfRWHGGSamples(f, BaseN, AC+"f05",Sys)
#  SM  = f.Get(''+BaseN+'H0PM'+Sys+'')  #DM
#  BSM = f.Get(''+BaseN+'H0M'+Sys+'') 
#  f05 = f.Get(''+BaseN+'H0Mf05'+Sys+'') 
  SM.SetDirectory(0)
  BSM.SetDirectory(0)
  f05.SetDirectory(0)
 else :
  BaseN = "hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_"
  SM = getSumOfRWHVVSamples(f, BaseN, "H0PM", Sys)
  BSM = getSumOfRWHVVSamples(f, BaseN, AC,Sys)
  f05 = getSumOfRWHVVSamples(f, BaseN, AC+"f05",Sys)

 PWG_SF = 1 #DM getPWGSF(f, Cat, Var, Prod, SM) 

 SM.Scale(PWG_SF)
 BSM.Scale(PWG_SF)
 f05.Scale(PWG_SF)

 if "EFT" in AC : AC = AC[3:] 
         
 if MCForThisAC is True :
  SM_Org  = f.Get(''+BaseN+'H0PM'+Sys+'')
  BSM_Org = f.Get(''+BaseN+AC+Sys+'')
  f05_Org = f.Get(''+BaseN+AC+'f05'+Sys+'')
  SM_Org.SetDirectory(0)
  BSM_Org.SetDirectory(0)
  f05_Org.SetDirectory(0)
  SM_Org.SetLineColor(ROOT.kBlack)
  BSM_Org.SetLineColor(ROOT.kBlack) 
  f05_Org.SetLineColor(ROOT.kBlack) 
  SM_Org.SetLineWidth(2)
  BSM_Org.SetLineWidth(2)
  f05_Org.SetLineWidth(2)

  SM_Org.Scale(PWG_SF)
  BSM_Org.Scale(PWG_SF)
  f05_Org.Scale(PWG_SF)

 f.Close()

 if "H0M"  in AC  : InvG = np.linalg.inv(G0M)
 if "H0M"  in AC and "HGG" in vertex  : InvG = np.linalg.inv(Gjj0M)

 T1 = SM.Clone() # 2,0
 T2 = SM.Clone() # 1,1
 T3 = SM.Clone() # 0,2

 T1.SetDirectory(0)
 T2.SetDirectory(0)
 T3.SetDirectory(0)

 T1.Scale(                 InvG[0][0])
 T1 = AddCorrHist(T1, BSM, InvG[0][1])
 T1 = AddCorrHist(T1, f05, InvG[0][2])

 T2.Scale(                 InvG[1][0])
 T2 = AddCorrHist(T2, BSM, InvG[1][1])
 T2 = AddCorrHist(T2, f05, InvG[1][2])

 T3.Scale(                 InvG[2][0])
 T3 = AddCorrHist(T3, BSM, InvG[2][1])
 T3 = AddCorrHist(T3, f05, InvG[2][2])

 if Test == True :

  T1.SetLineColor(ROOT.kRed)
  T2.SetLineColor(ROOT.kRed)
  T3.SetLineColor(ROOT.kRed)
  T1.SetFillColor(ROOT.kRed)
  T2.SetFillColor(ROOT.kRed)
  T3.SetFillColor(ROOT.kRed)
  T1.SetLineWidth(2)
  T2.SetLineWidth(2)
  T3.SetLineWidth(2)

  T1e = T1.Clone()
  T1e.SetFillStyle(3001)
  T1e.SetFillColor(ROOT.kGray+2)
  T1e.SetMarkerSize(.01)

  T2e = T2.Clone()
  T2e.SetFillStyle(3001)
  T2e.SetFillColor(ROOT.kGray+2)
  T2e.SetMarkerSize(.01);

  T3e = T3.Clone()
  T3e.SetFillStyle(3001)
  T3e.SetFillColor(ROOT.kGray+2)
  T3e.SetMarkerSize(.01)

  AC2 = GetKDNameFromVar(Var)

  if MCForThisAC is True :

   if Prod == "ggHjj_": G = cons[Prod+AC]
   else :               G = cons[AC]

   f05T = T1.Clone()
   f05T.SetDirectory(0)
   f05T = AddCorrHist(f05T, T2, G)  
   f05T = AddCorrHist(f05T, T3, G**2)
   f05T.SetLineColor(ROOT.kRed)
   f05T.SetFillColor(ROOT.kRed)

   f05Te = f05T.Clone()
   f05Te.SetFillStyle(3001)
   f05Te.SetFillColor(ROOT.kGray+2)
   f05Te.SetMarkerSize(.01)

   canvasf05 = ROOT.TCanvas('canvasf05', '', 500, 500)
   f05T.SetMinimum(0)
   f05T.SetMaximum(1.5*f05T.GetMaximum())
   f05T.GetXaxis().SetTitle(""+AC2+"")
   f05T.Draw("hist")
   f05Te.Draw("same E2")
   f05_Org.Draw("same e")
   legend = ROOT.TLegend(0.35,0.90,0.65,0.975)
   legend.AddEntry(f05_Org,"SM-BSM Mix MC ","lep")
   legend.AddEntry(f05T,"T1-T5 combination","f")
   legend.Draw()
   canvasf05.SaveAs("plotJJH/Temps/f05_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
   canvasf05.SaveAs("plotJJH/Temps/f05_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

  canvasInitial1 = ROOT.TCanvas('canvasInitial1', '', 500, 500)
  canvasInitial1.cd()
  T1.SetMinimum(0)
  T1.SetMaximum(1.5*T1.GetMaximum())
  T1.GetXaxis().SetTitle(""+AC2+"")
  T1.Draw("hist")
  T1e.Draw("same E2")
  if MCForThisAC is True : SM_Org.Draw("same e")
  legend = ROOT.TLegend(0.35,0.90,0.65,0.975)
  if MCForThisAC is True : legend.AddEntry(SM_Org,"SM MC ","lep")
  legend.AddEntry(T1,"T1","f")
  legend.Draw()
  canvasInitial1.SaveAs("plotJJH/Temps/InitialT1_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
  canvasInitial1.SaveAs("plotJJH/Temps/InitialT1_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

  canvasInitial3 = ROOT.TCanvas('canvasInitial3', '', 500, 500)
  canvasInitial3.cd()
  T3.SetMinimum(0)
  T3.SetMaximum(1.5*T3.GetMaximum())
  T3.GetXaxis().SetTitle(""+AC2+"")
  T3.Draw("hist")
  T3e.Draw("same E2")
  if MCForThisAC is True : BSM_Org.Draw("same e")
  legend = ROOT.TLegend(0.35,0.90,0.65,0.975)
#  legend.SetBorderSize(0)
  if MCForThisAC is True : legend.AddEntry(BSM_Org,"BSM MC ","lep")
  legend.AddEntry(T3,"T3","f")
  legend.Draw()
  canvasInitial3.SaveAs("plotJJH/Temps/InitialT3_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
  canvasInitial3.SaveAs("plotJJH/Temps/InitialT3_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

  canvasInitial2 = ROOT.TCanvas('canvasInitial2', '', 500, 500)
  canvasInitial2.cd()
  if AC is "H0M" : # bascially 0
   T2.SetMinimum(-1*T1.GetMaximum())
   T2.SetMaximum(T1.GetMaximum())
  else : 
   if T2.Integral() < 0 : 
    T2.SetMinimum(1.5*T2.GetMinimum())
    T2.SetMaximum(0)
   if T2.Integral() > 0 : 
    T2.SetMaximum(1.5*T2.GetMaximum())
    T2.SetMinimum(0)
  T2.GetXaxis().SetTitle(""+AC2+"")
  T2.Draw("hist")
  T2e.Draw("same E2")
  legend = ROOT.TLegend(0.35,0.90,0.65,0.975)
  legend.AddEntry(T2,"T2","f")
  legend.Draw()
  canvasInitial2.SaveAs("plotJJH/Temps/InitialT2_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
  canvasInitial2.SaveAs("plotJJH/Temps/InitialT2_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")


 ######### Template tricks for combine #######

 Gsc = cons_sc[AC]

 T2.Scale(Gsc) 
 T3.Scale(Gsc**2) 

 if Sys is "" :
  if T2.Integral()<0 :  
   T2.Scale(-1) 
   NegList.append((""+Cat+"",""+AC+"",""+Prod+"","T2"))

 else : # Sys ran after central so NegList has been created
   for n in NegList :
     if n[0] in Cat and n[1] in AC and n[2] in Prod :
      if   n[3] in "T2" : T2.Scale(-1)

 if Test == True :

  gr = ROOT.TGraph(len(Scan))
  gr.SetLineColor(ROOT.kRed)
  gr.SetLineWidth(2)

  for i in range(len(Scan)): 

   FaiSc = Scan[i]
   Fa1Sc = 1-abs(FaiSc)

   if Prod == "ggHjj_": GSc = cons_zz[Prod+AC] 
   else :               GSc = cons_zz[AC]

   N1Sc = MuSc*Fa1Sc                       
   N2Sc = MuSc*np.sign(FaiSc)*math.sqrt(abs(FaiSc))*math.sqrt(abs(Fa1Sc))*GSc #Fa1Sc)*GSc
   N3Sc = MuSc*abs(FaiSc)*(GSc**2)

   for n in NegList :
     if n[0] in Cat and n[1] in AC and n[2] in Prod :
      if n[3] in "T2" : N2Sc = N2Sc*-1 
          
   fTSc = T1.Clone()
   fTSc.SetDirectory(0)
   fTSc.Scale(  N1Sc)
   fTSc.Add(T2, N2Sc)
   fTSc.Add(T3, N3Sc)
  
   gr.SetPoint(i, Scan[i], fTSc.Integral())

  canvasFinal = ROOT.TCanvas('canvasFinal', '', 500, 500)
  canvasFinal.Divide(2,2)
  canvasFinal.cd(1)
  T1.Draw("e")
  canvasFinal.cd(2)
  T2.Draw("e")
  canvasFinal.cd(3)
  T3.Draw("e")
  canvasFinal.cd(4)
  legend = ROOT.TLegend(0.2,0.2,1.0,1.0)
  legend.AddEntry(T1,"T1","f")
  legend.AddEntry(T2,"T2","f")
  legend.AddEntry(T3,"T3","f")
  legend.Draw() 
  canvasFinal.SaveAs("plotJJH/Temps/FinalT_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf") 
  canvasFinal.SaveAs("plotJJH/Temps/FinalT_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

  canvasScan = ROOT.TCanvas('canvasScan', '', 500, 500)
  gr.Draw("ALP")
  canvasScan.SaveAs("plotJJH/Temps/FinalS_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
  canvasScan.SaveAs("plotJJH/Temps/FinalS_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")
  canvasScan.SaveAs("plotJJH/Temps/FinalS_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".root")

 fout = ROOT.TFile.Open(''+dst+'', 'update')
 ROOT.gDirectory.mkdir("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+AC+"/") 
 fout.cd("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+AC+"/")

 T1.SetName("histo_"+Prod+"T1"+Sys+"") 
 T2.SetName("histo_"+Prod+"T2"+Sys+"")
 T3.SetName("histo_"+Prod+"T3"+Sys+"")

 T1.Write() 
 T2.Write()
 T3.Write()

 fout.Close()

################### AC Signal Shape Sys #######################################

DoSigStat0=True
DoSys=False #DM
DoTest=True
AddOtherTemps=False

vert = "HGG"

if "16" in Year : Yr="_2016"
if "17" in Year : Yr="_2017"
if "18" in Year : Yr="_2018"

print Yr

Sys =[
"CMS_btag_DeepFlav_cferr1", "CMS_btag_DeepFlav_cferr2","CMS_scale_e"+Yr, "CMS_scale_m"+Yr, "CMS_eff_m"+Yr, "CMS_eff_e"+Yr, "CMS_eff_e_CR"+Yr, "CMS_eff_m_CR"+Yr,
"CMS_scale_JESHF"+Yr, "CMS_scale_JESBBEC1","CMS_scale_JESRelativeSample"+Yr, "CMS_scale_JESEC2","CMS_scale_JESFlavorQCD","CMS_scale_JESBBEC1"+Yr,"CMS_scale_JESAbsolute", "CMS_scale_JESHF",
"CMS_scale_JESEC2"+Yr,"CMS_scale_JESAbsolute"+Yr,"CMS_scale_JESRelativeBal",
"CMS_btag_DeepFlav_jes","CMS_btag_DeepFlav_lf","CMS_btag_DeepFlav_lfstats1"+Yr, "CMS_btag_DeepFlav_lfstats2"+Yr,"CMS_btag_DeepFlav_hfstats1"+Yr, "CMS_btag_DeepFlav_hfstats2"+Yr,
"CMS_PUID"+Yr,"CMS_scale_met"+Yr, "CMS_res_j"+Yr,
"CMS_eff_hwwtrigger"+Yr,"CMS_eff_hwwtrigger_drllrw"+Yr, "CMS_eff_prefiring"+Yr,
"PS_ISR", "PS_FSR"
] 

Sys_ggh = [ 
"THU_ggH_Mu","THU_ggH_Res","THU_ggH_Mig01","THU_ggH_Mig12", "THU_ggH_VBF2j","THU_ggH_VBF3j", "THU_ggH_PT60", "THU_ggH_PT120", "THU_ggH_qmtop","CMS_PU"+Yr
]

Sys_VBF = [ 
"THU_qqH_YIELD","THU_qqH_PTH200","THU_qqH_Mjj60","THU_qqH_Mjj120","THU_qqH_Mjj350","THU_qqH_Mjj700","THU_qqH_Mjj1000","THU_qqH_Mjj1500","THU_qqH_PTH25","THU_qqH_JET01","THU_qqH_EWK","CMS_PU"+Yr
] 

####################################################################################

ot_hgg = ['DATA','WW','WWewk','ggWW','top','DY','Dyemb','Vg','VgS_L','VgS_H','VZ','VVV','Fake','ggH_htt','qqH_htt','ZH_htt','WH_htt','WH_hww','ZH_hww'] #DM Add qqH_hww here or VBF T1=T5 later

##############################
####### ggH+2Jet setup  ######


if "H0M" in KD :

 if "kd_bsm" in KD : 
  SigConfig =  [("of2j_gght", "kd_ggh_hm", "H0M")] 
  SigConfig += [("of2j_ggh",  "kd_ggh_hm", "H0M")] 
 elif "mll" in KD :
  SigConfig =  [("of2j_gght", "mll", "H0M")] 
  SigConfig += [("of2j_ggh",  "mll", "H0M")] 
 elif "mth" in KD :
  SigConfig =  [("of2j_gght", "mth", "H0M")] 
  SigConfig += [("of2j_ggh",  "mth", "H0M")] 
 elif "kd_prod" in KD :
  SigConfig =  [("of2j_gght", "kd_smvbf", "H0M")] ## Include??
  SigConfig += [("of2j_ggh",  "kd_smvbf", "H0M")] 
 elif "kd_mix" in KD :
  SigConfig =  [("of2j_gght", "kd_ggh_mixhm", "H0M")] 
  SigConfig += [("of2j_ggh",  "kd_ggh_mixhm", "H0M")] 
 else : 
  SigConfig = [("of2j_ggh_thmip", "kd2d_ggh_hm", "H0M"), #DM 
               ("of2j_ggh_thmin", "kd2d_ggh_hm", "H0M"),
  #             ("of2j_A", "kd3d_ggh_hmA", "H0M"),
               ("top_of2j",  "events", "H0M"),
               ("dytt_of2j", "events", "H0M"),
               ("WW_of2j",   "events", "H0M") ] 

 prod = "ggHjj_"

 del NegList[:]
 for cat, var, sig in SigConfig :
  create1VIntTemplates(cat, var, vert, prod, sig, "", DoTest)

 file_nl.write(""+prod+KD+Year+" ="+str(NegList)+" \n")

 if DoSys is True :
  for sys in Sys :
   for cat, var, sig in SigConfig :
    try :
     create1VIntTemplates(cat, var, vert, prod, sig, "_"+sys+"Up", False)
     create1VIntTemplates(cat, var, vert, prod, sig, "_"+sys+"Down", False)  
     checkForBadSys(cat, var, vert, prod, sig, "_"+sys+"","T1")
     checkForBadSys(cat, var, vert, prod, sig, "_"+sys+"","T2")
     checkForBadSys(cat, var, vert, prod, sig, "_"+sys+"","T3")
    except :
     print sys, " not found for ", cat, var, sig
     continue

  for sys in Sys_ggh :
   for cat, var, sig in SigConfig :
    create1VIntTemplates(cat, var, vert, prod, sig, "_"+sys+"Up", False)
    create1VIntTemplates(cat, var, vert, prod, sig, "_"+sys+"Down", False)    
    checkForBadSys(cat, var, vert, prod, sig, "_"+sys+"","T1")
    checkForBadSys(cat, var, vert, prod, sig, "_"+sys+"","T2")
    checkForBadSys(cat, var, vert, prod, sig, "_"+sys+"","T3")

 if DoSigStat0 is True :
  for cat, var, sig in SigConfig :
   setSigStatTo0(cat, var, vert, prod, sig) 

 
 XHProd = ["VBF_"] 
 for prod in XHProd :

  del NegList[:]
  for cat, var, sig in SigConfig :
   create2VIntTemplates(cat, var, vert, prod, sig, "", DoTest)

  file_nl.write(""+prod+KD+Year+" ="+str(NegList)+" \n") 

  if DoSys is True :
   for sys in Sys :
    for cat, var, sig in SigConfig :
     try :
      create2VIntTemplates(cat, var, vert, prod, sig, "_"+sys+"Up", False)
      create2VIntTemplates(cat, var, vert, prod, sig, "_"+sys+"Down", False)
      checkForBadSys(cat, var, vert, prod, sig, "_"+sys+"","T1") 
      checkForBadSys(cat, var, vert, prod, sig, "_"+sys+"","T2")
      checkForBadSys(cat, var, vert, prod, sig, "_"+sys+"","T3")
      checkForBadSys(cat, var, vert, prod, sig, "_"+sys+"","T4")
      checkForBadSys(cat, var, vert, prod, sig, "_"+sys+"","T5")
     except :
      print sys, " not found for ", cat, var, sig
      continue
   if "VBF_" in prod :
    for sys in Sys_VBF :
     for cat, var, sig in SigConfig :
      create2VIntTemplates(cat, var, vert, prod, sig, "_"+sys+"Up", False)
      create2VIntTemplates(cat, var, vert, prod, sig, "_"+sys+"Down", False)  
      checkForBadSys(cat, var, vert, prod, sig, "_"+sys+"","T1")
      checkForBadSys(cat, var, vert, prod, sig, "_"+sys+"","T2")
      checkForBadSys(cat, var, vert, prod, sig, "_"+sys+"","T3")
      checkForBadSys(cat, var, vert, prod, sig, "_"+sys+"","T4")
      checkForBadSys(cat, var, vert, prod, sig, "_"+sys+"","T5")

  if DoSigStat0 is True :
   for cat, var, sig in SigConfig :
    setSigStatTo0(cat, var, vert, prod, sig)  

 if AddOtherTemps is True :
  for cat, var, sig in SigConfig :
   AddOtherTemplates(cat, var, vert, sig, src, ot_hgg)

###################################################

print "Its done!!!"

