
import sys
import ROOT 
import numpy as np
import shutil
import math
import os

from NegList_B21 import XHNegList, ggHNegList

ROOT.gStyle.SetOptStat(0)
ROOT.gStyle.SetOptTitle(0)

Verbose = True

############# Couplings of mixed HWW (g)

cons = {"VBF_H0M" : 0.29797901870, "VBF_H0PH" : 0.27196538, "VBF_H0L1" : -2158.21307286, "VBF_H0LZg" : -4091.051456694223,
        "WH_H0M"  : 0.1236136,     "WH_H0PH"  : 0.0998956,  "WH_H0L1"  : -525.274,
        "ZH_H0M"  : 0.144057,      "ZH_H0PH"  : 0.112481,   "ZH_H0L1"  : -517.788,       "ZH_H0LZg"  : -642.9534550379002,
        "H0M"     : 1.76132,       "H0PH"     : 1.133582,   "H0L1"     : -13752.22,
        "EFTH0M"  : 1.76132,       "EFTH0PH"  : 1.133582,   "EFTH0L1"  : -13752.22,
        "ggHjj_H0M" : 1.0062
       }

########## Split Scalings such that templates have a significant normalisation for combine 

cons_sc = {"H0M" : 10, "H0PH" : 10, "H0L1" : -10000, "H0LZg" : -10000, "EFTH0M" : 10, "EFTH0PH" : 10, "EFTH0L1" : -10000}

cons_zz = {"H0M" : .255052, "H0PH" : .165684, "H0L1" : 1.2100, "H0LZg" : 0.7613,  "ggHjj_H0M" : .10062,
           "EFTH0M" : .255052, "EFTH0PH" : 0.039446, "EFTH0L1" : 0.4363}
#cons_zz = {"H0M" : .176132, "H0PH" : .1133582, "H0L1" : 1.3752} # == cons_ww

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

Gl1Zg = np.array(([1**4,0,0], # SM  
                  [1,.25*l1s,(.25*l1s)**2], # M1 
                  [1,.75*l1s,(.75*l1s)**2] )) # M3

###### test params #####

MuSc  = 1.0
MuSc2D = [0.,1.,2.,3.,4.,5.,6.,7.,8.,9.,10.]
Scan = [-1, -0.9, -0.8, -0.7, -0.6, -0.5, -0.4, -0.3, -0.2, -0.1, 0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1] 

year=2018
useCut="orig_mth125_mllCut_"
#useCut="mth125_mllCut_"
#useVar="mthSR"
useVar="mllVSmth_B21"
outDir="plot_ggF_"+useVar
forNuisPlotting = False
doNotCheckJESR = False
badSysForAllJESR = False
forQuickPlotter = False #!!!!!!!!!!!!CHECK ME!!!!!!!!!!!!!!!!#
doKillIntVBF = False
plotTDetailed = False
plotMDetailed = False
doRun1 = False
applyPWG_SF = True #!!!!!!!!!!!!!!!CHECK ME!!!!!!!!!!!!!!!!!!#
doKillSignalMCstat = True
doKillSignalMCstatWHonly = False
doKillSignalMCstatZHonly = False
doKillSignalMCstatVHonly = False 
doKillSignalMCstatVBFonly = False
doKillSignalMCstatggHonly = False
if forQuickPlotter:
    print("WARNING!!! TEMPLATES NOT FULLY PRE-SCALED. USE FOR PLOTTING ONLY")
    cons_sc = {"H0M" : 1, "H0PH" : 1, "H0L1" : -1, "H0LZg" : -1, "EFTH0M" : 1, "EFTH0PH" : 1, "EFTH0L1" : -1} 

######## Template forced positive for combine ################
print "- For each analysis channel we should check which templates are negative"
print "- They are added to lists (NegList.py) and forced positive -- Must be taken into account in Signal Model! "

##############################################################

#2016 & 2017 & 2018 preAppV01 with cutFix15 (mth and mll cuts available) and MC stat uncties killed for signal
if year == 2018:
    src = "rootFile_ggH2018_allSignals_fullNuis_preAppV02/plots_ggH2018_allSignals_fullNuis_preAppV02.root"
    dst = "rootFile_ggH2018_allSignals_fullNuis_preAppV02/plots_ggH2018_allSignals_fullNuis_Ana_preAppV02_killSignalMCstat_fullyOrthogonal_JHUreweight_mthSR.root"
elif year == 2017: 
    src = "rootFile_ggH2017_allSignals_fullNuis_preAppV02/plots_ggH2017_allSignals_fullNuis_preAppV02.root"
    dst = "rootFile_ggH2017_allSignals_fullNuis_preAppV02/plots_ggH2017_allSignals_fullNuis_Ana_preAppV02_killSignalMCstat_fullyOrthogonal_JHUreweight_prefitPlots.root" 
elif year == 2016:
    #src = "rootFile_ggH2016_allSignals_fullNuis_preAppV02/plots_ggH2016_allSignals_fullNuis_preAppV02.root"
    #dst = "rootFile_ggH2016_allSignals_fullNuis_preAppV02/plots_ggH2016_allSignals_fullNuis_Ana_preAppV02_killSignalMCstat_fullyOrthogonal_JHUreweight_prefitPlots.root"
    src = "rootFile_ggH2016_allSignals_fullNuis_cutFix15_rebin07_preAppV01/plots_ggH2016_allSignals_fullNuis_cutFix15_rebin07_preAppV01.root"
    dst = "rootFile_ggH2016_allSignals_fullNuis_cutFix15_rebin07_preAppV01/plots_ggH2016_allSignals_fullNuis_Ana_cutFix15_rebin07_preAppV01_retest.root"      

othertemp_hvv = ['DATA','WW','WWewk','ggWW','top','DY','Dyemb','Vg','VgS_L','VgS_H','VZ','VVV','Fake','ggH_htt','qqH_htt','ZH_htt','WH_htt']
othertemp_hlzg = ['DATA','WW','WWewk','ggWW','top','DY','Dyemb','Vg','VgS_L','VgS_H','VZ','VVV','Fake','WH_hww','ggH_hww']
othertemp_hgg = ['DATA','WW','WWewk','ggWW','top','DY','Dyemb','Vg','VgS_L','VgS_H','VZ','VVV','Fake','qqH_hww','WH_hww','ZH_hww']


if os.path.exists(dst):
    os.remove(dst)

print "- For Ewk H (2V) need templates : T1 -(4,0), T2 -(3,1), T3 -(2,2), T4 -(1,3), T5 -(0,4)" 
print "Get from SM-BSM mixture hypotheses : SM(1,0), M0(0,1), M1(1,.25), M2(1,.5), M3(1,.75) "
print "and G matrices ", Gai, Gl1
print "- Will create new file : "+dst+" with analysis templates"
print " " 
print "- For ggH (1V) need templates T1 -(2,0), T2 -(1,1), T3 -(0,2)" 
print "Get from SM-BSM MC : SM(1,0), BSM(0,1), M1(1,gMix) "
print "- Will create new file : "+dst+" with analysis templates"
print " "

###################################################

def AddOtherTemplates(Cat, Var, Prod, AC):

 if Verbose:
  print " "
  print " ", Cat, Var, Prod, AC
  print " "

 if Prod == "ggHjj_" :
  vertex = "HGG"
  othertemp = othertemp_hgg
 else :
  vertex = "" #TK: was HVV for DM 
  othertemp = othertemp_hvv
 if AC == "H0LZg" : othertemp = othertemp_hlzg

 f = ROOT.TFile.Open(''+src+'', 'read')

 HistList = ROOT.TObjArray()
 HistNameList = []

 f.cd("hww2l2v_13TeV_"+Cat+"/"+Var+"/")
 d = ROOT.gDirectory
 for ih in d.GetListOfKeys():
    h = ih.ReadObj()
    if any(x in h.GetName() for x in othertemp) :
        QCDVar = False
        Sys    = False
        if "Up" in h.GetName() or "Down" in h.GetName(): Sys = True
        if not Sys and "QCDscale" in h.GetName():  QCDVar = True

        if not QCDVar and h.GetName() not in HistNameList :
           h.SetDirectory(0)
           if h.Integral() < 0 : #DM combine wont take negative pdfs (OK for jjH ana but should implement better fix for this!!)
             h.Scale(0)
             if Verbose: print "Setting to 0 : ", h.GetName(), Cat, Var
           if AC == "H0LZg" :  #DM Set names such that templates are scaled by Mu*Fa1 in signal model
             #TK not used
             if "WH_hww" in h.GetName() :
               name = h.GetName()
               name = name.replace("WH_hww","WH_T1")
               h.SetName(name)
             if "ggH_hww" in h.GetName() :
               name = h.GetName()
               name = name.replace("ggH_hww","ggH_T1")
               h.SetName(name)
           HistList.Add(h)
           HistNameList.append(h.GetName())
 f.Close()

 fout = ROOT.TFile.Open(''+dst+'', 'update')
 #fout.cd("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+AC+"/") #TK: this from DM
 fout.cd("hww2l2v_13TeV_"+Cat+"/var"+AC+"/") 

 HistList.Write()

 if Verbose:
  d = ROOT.gDirectory
  for ih in d.GetListOfKeys():
    h = ih.ReadObj()
    if "Up" not in h.GetName() and "Down" not in h.GetName() :
     print h.GetName(), h.Integral()

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
   if doKillSignalMCstat:
       e = 0.0
   elif doKillSignalMCstatVHonly and ("WH" in BaseN or "ZH" in BaseN): 
       e = 0.0
   elif doKillSignalMCstatWHonly and "WH" in BaseN:
       e = 0.0
   elif doKillSignalMCstatZHonly and "ZH" in BaseN:
       e = 0.0
   elif doKillSignalMCstatVBFonly and "VBF" in BaseN:
       e = 0.0
   elif doKillSignalMCstatggHonly and "ggH" in BaseN:
       e = 0.0 
   else:
       e = H1.GetBinError(i)
   Sum.SetBinContent(i, n)
   Sum.SetBinError(i, e)

 return Sum

def getSumOfRWHGGSamples(f, BaseN, Hyp, Sys):
 #TK: not used
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
   if doKillSignalMCstat:
       e = 0.0
   else:
       e = H1.GetBinError(i)
   Sum.SetBinContent(i, n)
   Sum.SetBinError(i, e)

 return Sum

#########################################################

def checkForBadSys(Cat, Var, Prod, AC, Sys, Temp):

 if Prod == "ggHjj_" : vertex = "HGG"
 else :                vertex = "" #TK: was HVV for DM

 fout = ROOT.TFile.Open(''+dst+'', 'update')

 Nom = fout.Get("hww2l2v_13TeV_"+Cat+"/var"+AC+"/histo_"+Prod+Temp+"")
 Up = fout.Get("hww2l2v_13TeV_"+Cat+"/var"+AC+"/histo_"+Prod+Temp+Sys+"Up")
 Dn = fout.Get("hww2l2v_13TeV_"+Cat+"/var"+AC+"/histo_"+Prod+Temp+Sys+"Down") 

 Err = ROOT.Double(0.)
 N = Nom.IntegralAndError(0,Nom.GetNbinsX(),Err)
 U = Up.Integral()
 D = Dn.Integral()

 fout.cd("hww2l2v_13TeV_"+Cat+"/var"+AC+"/")

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

  if badSysForAllJESR and ("JES" in Sys or "res_j" in Sys):
      BadShapeSys = True

  if BadShapeSys: # Treat as symmetric norm uncertainty (Assuming MC stat uncertinty is too big to treat this as shape sys)
    if forNuisPlotting:
        #Change Nominal histo plotting style for further processing
        Nom.ResetAttFill()
        Nom.SetLineColor(ROOT.kBlack)  

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

 fyield = open(outDir+"/Yields_"+Prod+"_"+Cat+"_"+Var+"_"+AC+".txt","a+")
 fyield.write(Sys+" @"+Temp+": "+str(N)+"\n")
 fyield.write(Sys+"Up @"+Temp+": "+str(Up.Integral())+"\n")
 fyield.write(Sys+"Dn @"+Temp+": "+str(Dn.Integral())+"\n")

 fout.Close()

#########################################################
def getPWGSF_old(f, Cat, Var, Prod):

 # jhu = f.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_"+Prod+"H0PM") 

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
  jhu = f.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_GGHjj_H0PM")
  pwg = f.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_ggH_hww")
 elif Prod is "ggH_"   :
  jhu = f.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_H0PM")
  pwg = f.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_ggH_hww")
 else : "Prod not recognised by getPWGSF"

 scale =  pwg.Integral()/jhu.Integral()
 if pwg.Integral()==0 : scale = 1

 print ("pwg.Integral()", pwg.Integral(), "jhu.Integral()", jhu.Integral())

 return scale

#########################################################

def create2VIntTemplates(Cat, Var, Prod, AC, Sys, Test):

 if Verbose:
  print " "
  print " ", Cat, Var, Prod, AC, Sys, Test
  print " "

 f = ROOT.TFile.Open(''+src+'', 'read')
 BaseN = "hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_"+Prod+""

 MCForThisAC = True
 if "H0LZg" in AC or "EFT" in AC : MCForThisAC = False

 SM = getSumOfRWHVVSamples(f, BaseN, "H0PM",  Sys)
 M0 = getSumOfRWHVVSamples(f, BaseN, AC+"_M0",Sys)
 M1 = getSumOfRWHVVSamples(f, BaseN, AC+"_M1",Sys)
 M2 = getSumOfRWHVVSamples(f, BaseN, AC+"_M2",Sys)
 M3 = getSumOfRWHVVSamples(f, BaseN, AC+"_M3",Sys)

 ## APPLY PWG SFs
 if applyPWG_SF:
     PWG_SF = getPWGSF_old(f, Cat, Var, Prod)
     print("PWG SF: "+str(PWG_SF))
     SM.Scale(PWG_SF)
     M0.Scale(PWG_SF)
     M1.Scale(PWG_SF)
     M2.Scale(PWG_SF)
     M3.Scale(PWG_SF)

 if plotMDetailed:
     canvasMSM = ROOT.TCanvas('canvasMSM', '', 500, 500)
     SM.SetMinimum(0.001)
     SM.SetMaximum(1.5*SM.GetMaximum())
     SM.GetXaxis().SetTitle(""+Var+"")
     SM.Draw("e")
     legend = ROOT.TLegend(0.3,0.75,0.7,0.9)
     legend.AddEntry(SM,"SM template","f")
     legend.Draw()
     canvasMSM.SaveAs(outDir+"/MSM_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
     canvasMSM.SaveAs(outDir+"/MSM_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

     canvasM0 = ROOT.TCanvas('canvasM0', '', 500, 500)
     M0.SetMinimum(0.001)
     M0.SetMaximum(1.5*M0.GetMaximum())
     M0.GetXaxis().SetTitle(""+Var+"")
     M0.Draw("e")
     legend = ROOT.TLegend(0.3,0.75,0.7,0.9)
     legend.AddEntry(M0,"M0 template","f")
     legend.Draw()
     canvasM0.SaveAs(outDir+"/M0_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
     canvasM0.SaveAs(outDir+"/M0_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

     canvasM1 = ROOT.TCanvas('canvasM1', '', 500, 500)
     M1.SetMinimum(0.001)
     M1.SetMaximum(1.5*M1.GetMaximum())
     M1.GetXaxis().SetTitle(""+Var+"")
     M1.Draw("e")
     legend = ROOT.TLegend(0.3,0.75,0.7,0.9)
     legend.AddEntry(M1,"M1 template","f")
     legend.Draw()
     canvasM1.SaveAs(outDir+"/M1_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
     canvasM1.SaveAs(outDir+"/M1_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

     canvasM2 = ROOT.TCanvas('canvasM2', '', 500, 500)
     M2.SetMinimum(0.001)
     M2.SetMaximum(1.5*M2.GetMaximum())
     M2.GetXaxis().SetTitle(""+Var+"")
     M2.Draw("e")
     legend = ROOT.TLegend(0.3,0.75,0.7,0.9)
     legend.AddEntry(M2,"M2 template","f")
     legend.Draw()
     canvasM2.SaveAs(outDir+"/M2_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
     canvasM2.SaveAs(outDir+"/M2_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

     canvasM3 = ROOT.TCanvas('canvasM3', '', 500, 500)
     M3.SetMinimum(0.001)
     M3.SetMaximum(1.5*M3.GetMaximum())
     M3.GetXaxis().SetTitle(""+Var+"")
     M3.Draw("e")
     legend = ROOT.TLegend(0.3,0.75,0.7,0.9)
     legend.AddEntry(M3,"M3 template","f")
     legend.Draw()
     canvasM3.SaveAs(outDir+"/M3_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
     canvasM3.SaveAs(outDir+"/M3_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png") 

 if MCForThisAC:
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
  if applyPWG_SF:
      SM_Org.Scale(PWG_SF)
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

  T1.Scale( InvG[0][0])
  T1.Add(M1,InvG[0][1])
  T1.Add(M3,InvG[0][2])

  T2.Scale( InvG[1][0])
  T2.Add(M1,InvG[1][1])
  T2.Add(M3,InvG[1][2])

  T3.Scale( InvG[2][0])
  T3.Add(M1,InvG[2][1])
  T3.Add(M3,InvG[2][2])

  T4.Scale(0)
  T5.Scale(0)

 else :

  InvG = np.linalg.inv(Gai)
  if "H0L1" in AC  : InvG = np.linalg.inv(Gl1)

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

  T1.SetLineColor(ROOT.kRed)
  T2.SetLineColor(ROOT.kOrange)
  T3.SetLineColor(ROOT.kCyan)
  T4.SetLineColor(ROOT.kBlue)
  T5.SetLineColor(ROOT.kGreen)
  T1.SetFillColor(ROOT.kRed)
  T2.SetFillColor(ROOT.kOrange)
  T3.SetFillColor(ROOT.kCyan)
  T4.SetFillColor(ROOT.kBlue)
  T5.SetFillColor(ROOT.kGreen)
  T1.SetLineWidth(2)
  T2.SetLineWidth(2)
  T3.SetLineWidth(2)
  T4.SetLineWidth(2)
  T5.SetLineWidth(2)

  if MCForThisAC:

   G = cons[Prod+AC]
   f05T = T1.Clone()
   f05T.SetDirectory(0)
   f05T.Add(T2, G)
   f05T.Add(T3, G**2)
   f05T.Add(T4, G**3)
   f05T.Add(T5, G**4)
   f05T.SetLineColor(ROOT.kRed)
   f05T.SetFillColor(ROOT.kRed)

   canvasf05 = ROOT.TCanvas('canvasf05', '', 500, 500)
   f05T.SetMinimum(0.001)
   f05T.SetMaximum(1.5*f05T.GetMaximum())
   f05T.GetXaxis().SetTitle(""+Var+"")
   f05T.Draw("hist")
   f05_Org.Draw("same e")
   legend = ROOT.TLegend(0.3,0.75,0.7,0.9)
   legend.AddEntry(f05_Org,"SM-BSM Mix MC ","l")
   legend.AddEntry(f05T,"T1-T5 combination","f")
   legend.Draw()
   canvasf05.SaveAs(outDir+"/f05_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
   canvasf05.SaveAs(outDir+"/f05_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

  canvasInitial = ROOT.TCanvas('canvasInitial', '', 500, 500)
  canvasInitial.Divide(3,2)

  canvasInitial.cd(1)
  T1.SetMaximum(1.5*T1.GetMaximum())
  T1.Draw("hist")
  if MCForThisAC: SM_Org.Draw("same e")
  canvasInitial.cd(2)
  T2.Draw("hist")
  canvasInitial.cd(3)
  T3.Draw("hist")
  canvasInitial.cd(4)
  T4.Draw("hist")
  canvasInitial.cd(5)
  T5.SetMaximum(1.5*T5.GetMaximum())
  T5.Draw("hist")
  if MCForThisAC: BSM_Org.Draw("same e")
  canvasInitial.cd(6)

  legend = ROOT.TLegend(0.2,0.2,1.0,1.0)
  legend.AddEntry(T1,"T1","f")
  legend.AddEntry(T2,"T2","f")
  legend.AddEntry(T3,"T3","f")
  legend.AddEntry(T4,"T4","f")
  legend.AddEntry(T5,"T5","f")
  legend.Draw()

  canvasInitial.SaveAs(outDir+"/InitialT_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
  canvasInitial.SaveAs(outDir+"/InitialT_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

  if plotTDetailed:
      canvasT1 = ROOT.TCanvas('canvasT1', '', 500, 500)
      T1.Draw("e")
      SM_Org.Draw("same e")
      legend = ROOT.TLegend(0.3,0.75,0.7,0.9)
      legend.AddEntry(SM_Org,"pure SM MC","l")
      legend.AddEntry(T1,"T1 template","f")
      legend.Draw()
      canvasT1.SaveAs(outDir+"/InitialT1_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

      canvasT2 = ROOT.TCanvas('canvasT2', '', 500, 500)
      T2.Draw("e")
      legend = ROOT.TLegend(0.3,0.8,0.7,0.9)
      legend.AddEntry(T2,"T2 template","f")
      legend.SetTextSize(.04)
      legend.Draw()
      canvasT2.SaveAs(outDir+"/InitialT2_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

      canvasT3 = ROOT.TCanvas('canvasT3', '', 500, 500)
      T3.Draw("e")
      legend = ROOT.TLegend(0.3,0.8,0.7,0.9)
      legend.AddEntry(T3,"T3 template","f")
      legend.SetTextSize(.04)
      legend.Draw()
      canvasT3.SaveAs(outDir+"/InitialT3_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

      canvasT4 = ROOT.TCanvas('canvasT4', '', 500, 500)
      T4.Draw("e")
      legend = ROOT.TLegend(0.3,0.8,0.7,0.9)
      legend.AddEntry(T4,"T4 template","f")
      legend.SetTextSize(.04)
      legend.Draw()
      canvasT4.SaveAs(outDir+"/InitialT4_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

      canvasT5 = ROOT.TCanvas('canvasT5', '', 500, 500)
      T5.Draw("e")
      BSM_Org.Draw("same e")
      legend = ROOT.TLegend(0.3,0.75,0.7,0.9)
      legend.AddEntry(BSM_Org,"pure BSM MC","l")
      legend.AddEntry(T5,"T5 template","f")
      legend.Draw()
      canvasT5.SaveAs(outDir+"/InitialT5_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

 ######### Template tricks for combine #######

 Gsc = cons_sc[AC]

 T2.Scale(Gsc) 
 T3.Scale(Gsc**2) 
 T4.Scale(Gsc**3) 
 T5.Scale(Gsc**4)

 NegList = XHNegList[AC]
 
 for c, s, p, t, y in NegList :
  if (c == Cat or c == "all") and p == Prod and s == AC and y == year:
   if Verbose: print "--------- Force Template positive (Compensate in model!)", c, s, p, t, y 
   if   t == "T2" :  T2.Scale(-1)
   elif t == "T3" :  T3.Scale(-1)
   elif t == "T4" :  T4.Scale(-1)

 if doKillIntVBF and Prod == "VBF_":  
   T2.Scale(0)
   T3.Scale(0)
   T4.Scale(0)

 if doRun1 and (Prod == "VBF_" or Prod == "WH_" or Prod == "ZH_"):
   T2.Scale(0)
   T3.Scale(0)
   T4.Scale(0)
   T5.Scale(0)

 ## Test for negative interference terms

 if Sys == "" :
  if T2.Integral() < 0 : print ""+Sys+" (\""+Cat+"\",\""+AC+"\",\""+Prod+"\",\"T2\"),"
  if T3.Integral() < 0 : print ""+Sys+" (\""+Cat+"\",\""+AC+"\",\""+Prod+"\",\"T3\"),"
  if T4.Integral() < 0 : print ""+Sys+" (\""+Cat+"\",\""+AC+"\",\""+Prod+"\",\"T4\"),"

 '''
 if AC == "H0M" :
  print "--------- Force H0M T2 and T4 = 0"
  T2.Scale(0)  
  T4.Scale(0)  

 if AC == "H0PH" and (Prod == "WH_" or Prod == "ZH_") :
  print "--------- Force VH H0PH T2 positive - Compensate in model! "
  T2.Scale(-1) 

 if AC == "H0PH" and (Prod == "VBF_") :
  if "0j" in Cat:
      print "--------- Force VBF H0PH T4 = 0 "
      T4.Scale(0) #KELLO extra to prevent negative yield
 
 if AC == "H0L1" and (Prod == "WH_" or Prod == "ZH_") :
  print "--------- Force VH H0L1 T2 and T4 positive - Compensate in model! "
  T2.Scale(-1)  
  T4.Scale(-1)  

 if AC == "H0L1" and (Prod == "VBF_") :
  print "--------- Force VBF H0L1 T4 positive - Compensate in model! "
  T4.Scale(-1)
  if "0j" in Cat: 
      print "--------- Force VBF H0L1 T2 = 0 "
      print "--------- Force VBF H0L1 T3 = 0 "
      print "--------- Force VBF H0L1 T4 = 0 " 
      T2.Scale(0) #KELLO extra to prevent negative yield
      T3.Scale(0) #KELLO extra to prevent negative yield
      T4.Scale(0) #KELLO extra to prevent negative yield
 '''

 if Test == True :
  
  gr = ROOT.TGraph(len(Scan))
  gr2D = ROOT.TGraph2D(len(Scan)*len(MuSc2D))
  gr.SetLineColor(ROOT.kRed)
  gr.SetLineWidth(2)

  ScanH = []

  for i in range(len(Scan)): 

   FaiSc = Scan[i]
   Fa1Sc = 1-abs(FaiSc)
   GSc   = cons_zz[AC]

   N1Sc = MuSc**2*Fa1Sc**2    
   N2Sc = MuSc**2*np.sign(FaiSc)*math.sqrt(abs(FaiSc))*(math.sqrt(Fa1Sc)**3)*GSc 
   N3Sc = MuSc**2*abs(FaiSc)*Fa1Sc*(GSc**2) 
   N4Sc = MuSc**2*np.sign(FaiSc)*(math.sqrt(abs(FaiSc))**3)*math.sqrt(Fa1Sc)*(GSc**3) 
   N5Sc = MuSc**2*FaiSc**2*(GSc**4) 

   for c, s, p, t, y in NegList :
    if (c == Cat or c == "all") and p == Prod and s == AC and y == year:
     if   t == "T2" :  N2Sc = N2Sc*-1
     elif t == "T3" :  N3Sc = N3Sc*-1
     elif t == "T4" :  N4Sc = N4Sc*-1

   '''
   if AC == "H0PH" and (Prod == "WH_" or Prod == "ZH_") :
    N2Sc = N2Sc*-1 
   if AC == "H0L1" and (Prod == "WH_" or Prod == "ZH_") :
    N4Sc = N4Sc*-1
    N2Sc = N2Sc*-1
   if AC == "H0L1" and (Prod == "VBF_") : 
    N4Sc = N4Sc*-1
   '''
       
   f05TSc = T1.Clone()
   f05TSc.SetDirectory(0)
   f05TSc.Scale(  N1Sc)
   f05TSc.Add(T2, N2Sc)
   f05TSc.Add(T3, N3Sc)
   f05TSc.Add(T4, N4Sc)
   f05TSc.Add(T5, N5Sc)

   ScanH.append(f05TSc)
  
   gr.SetPoint(i, Scan[i], f05TSc.Integral())

   for j in range(len(MuSc2D)):
     N1Sc2D = MuSc2D[j]**2*Fa1Sc**2
     N2Sc2D = MuSc2D[j]**2*np.sign(FaiSc)*math.sqrt(abs(FaiSc))*(math.sqrt(Fa1Sc)**3)*GSc
     N3Sc2D = MuSc2D[j]**2*abs(FaiSc)*Fa1Sc*(GSc**2)
     N4Sc2D = MuSc2D[j]**2*np.sign(FaiSc)*(math.sqrt(abs(FaiSc))**3)*math.sqrt(Fa1Sc)*(GSc**3)
     N5Sc2D = MuSc2D[j]**2*FaiSc**2*(GSc**4)

     for c, s, p, t, y in NegList :
      if (c == Cat or c == "all") and p == Prod and s == AC and y == year:
       if   t == "T2" :  N2Sc2D = N2Sc2D*-1
       elif t == "T3" :  N3Sc2D = N3Sc2D*-1
       elif t == "T4" :  N4Sc2D = N4Sc2D*-1
      
     '''
     if AC == "H0PH" and (Prod == "WH_" or Prod == "ZH_") :
       N2Sc2D = N2Sc2D*-1
     if AC == "H0L1" and (Prod == "WH_" or Prod == "ZH_") :
       N4Sc2D = N4Sc2D*-1
       N2Sc2D = N2Sc2D*-1
     if AC == "H0L1" and (Prod == "VBF_") :
       N4Sc2D = N4Sc2D*-1 
     '''

     f05TSc2D = T1.Clone()
     f05TSc2D.SetDirectory(0)
     f05TSc2D.Scale(  N1Sc2D)
     f05TSc2D.Add(T2, N2Sc2D)
     f05TSc2D.Add(T3, N3Sc2D)
     f05TSc2D.Add(T4, N4Sc2D)
     f05TSc2D.Add(T5, N5Sc2D)

     gr2D.SetPoint(i+j*len(Scan),Scan[i],MuSc2D[j],f05TSc2D.Integral())

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
  canvasFinal.SaveAs(outDir+"/FinalT_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
  canvasFinal.SaveAs(outDir+"/FinalT_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

  if plotTDetailed:
      canvasFinalT1 = ROOT.TCanvas('canvasFinalT1', '', 500, 500)
      T1.Draw("HIST")
      legend = ROOT.TLegend(0.3,0.75,0.7,0.9)
      legend.AddEntry(T1,"T1 template","f")
      legend.Draw()
      canvasFinalT1.SaveAs(outDir+"/FinalT1_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

      canvasFinalT2 = ROOT.TCanvas('canvasFinalT2', '', 500, 500)
      T2.Draw("HIST")
      legend = ROOT.TLegend(0.3,0.8,0.7,0.9)
      legend.AddEntry(T2,"T2 template","f")
      legend.SetTextSize(.04)
      legend.Draw()
      canvasFinalT2.SaveAs(outDir+"/FinalT2_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

      canvasFinalT3 = ROOT.TCanvas('canvasFinalT3', '', 500, 500)
      T3.Draw("HIST")
      legend = ROOT.TLegend(0.3,0.8,0.7,0.9)
      legend.AddEntry(T3,"T3 template","f")
      legend.SetTextSize(.04)
      legend.Draw()
      canvasFinalT3.SaveAs(outDir+"/FinalT3_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")
 
      canvasFinalT4 = ROOT.TCanvas('canvasFinalT4', '', 500, 500)
      T4.Draw("HIST")
      legend = ROOT.TLegend(0.3,0.8,0.7,0.9)
      legend.AddEntry(T4,"T4 template","f")
      legend.SetTextSize(.04)
      legend.Draw()
      canvasFinalT4.SaveAs(outDir+"/FinalT4_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

      canvasFinalT5 = ROOT.TCanvas('canvasFinalT5', '', 500, 500)
      T5.Draw("HIST")
      legend = ROOT.TLegend(0.3,0.75,0.7,0.9)
      legend.AddEntry(T5,"T5 template","f")
      legend.Draw()
      canvasFinalT5.SaveAs(outDir+"/FinalT5_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

  canvasScan = ROOT.TCanvas('canvasScan', '', 500, 500)
  gr.Draw("ALP")
  canvasScan.SaveAs(outDir+"/FinalS_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
  canvasScan.SaveAs(outDir+"/FinalS_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

  canvasScan2D = ROOT.TCanvas('canvasScan2D', '', 500, 500)
  gr2D.Draw("COLZ")
  canvasScan2D.SaveAs(outDir+"/FinalS2D_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
  canvasScan2D.SaveAs(outDir+"/FinalS2D_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

  canvasScanSh = ROOT.TCanvas('canvasScanSh', '', 500, 500)
  #canvasScanSh.Divide(2,1)
  #canvasScanSh.cd(1)
  canvasScanSh.cd()

  PlotSc = [0.0,-0.5,0.5,1.0]
  Count = 0
  legend = ROOT.TLegend(0.3,0.7,0.7,0.9)
  for i in range(len(PlotSc)):
   for j in range(len(Scan)):
    if PlotSc[i] == Scan[j]:
     h = ScanH[j]
     if h.Integral() != 0 : h.Scale(1.0/h.Integral())
     h.ResetAttFill()  
     h.SetLineColor(Count+1)
     h.SetMaximum(0.6)
     legend.AddEntry(h,"Fai="+str(PlotSc[i]),"l")
     if Count == 0 : h.Draw("hist")
     else          : h.Draw("same hist")
     Count = Count+1
  legend.Draw("SAME")
  '''
  Count = 0
  canvasScanSh.cd(2)
  for i in range(len(PlotSc)):
   for j in range(len(Scan)):
    if PlotSc[i] == Scan[j]:
     h = ScanH[j]
     if h.Integral() != 0 : h.Scale(1.0/h.Integral())
     h.SetLineColor(Count+1)
     h.SetMaximum(1.0)
     legend.AddEntry(h,""+str(PlotSc[i]),"l")
     if Count == 0 : h.Draw("hist")
     else          : h.Draw("same hist")
     Count = Count+1
  '''

  canvasScanSh.SaveAs(outDir+"/FinalSH_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
  canvasScanSh.SaveAs(outDir+"/FinalSH_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

 fout = ROOT.TFile.Open(''+dst+'', 'update')
 ROOT.gDirectory.mkdir("hww2l2v_13TeV_"+Cat+"/var"+AC+"/")
 fout.cd("hww2l2v_13TeV_"+Cat+"/var"+AC+"/")

 fyield = open(outDir+"/BeforeYields_"+Prod+"_"+Cat+"_"+Var+"_"+AC+".txt","a+") 
 fyield.write(Sys+"@T1: "+str(T1.Integral())+"\n")
 fyield.write(Sys+"@T2: "+str(T2.Integral())+"\n")
 fyield.write(Sys+"@T3: "+str(T3.Integral())+"\n")
 fyield.write(Sys+"@T4: "+str(T4.Integral())+"\n")
 fyield.write(Sys+"@T5: "+str(T5.Integral())+"\n")

 if forNuisPlotting:
     T1.ResetAttFill()
     T2.ResetAttFill()
     T3.ResetAttFill()
     T4.ResetAttFill()
     T5.ResetAttFill()
     T1.SetLineColor(ROOT.kBlack)
     T2.SetLineColor(ROOT.kBlack)
     T3.SetLineColor(ROOT.kBlack)
     T4.SetLineColor(ROOT.kBlack)
     T5.SetLineColor(ROOT.kBlack) 

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

 if Verbose:
  print " "
  print " ", Cat, Var, Prod, AC, Sys, Test
  print " "

 f = ROOT.TFile.Open(''+src+'', 'read')

 MCForThisAC = True
 if "EFT" in AC : MCForThisAC = False

 if Prod == "ggHjj_" :
  vertex = "HGG"
  BaseN = "hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_GGHjj_"
  SM  = getSumOfRWHGGSamples(f, BaseN, "H0PM",  Sys)
  BSM = getSumOfRWHGGSamples(f, BaseN, AC,      Sys)
  f05 = getSumOfRWHGGSamples(f, BaseN, AC+"f05",Sys)
 else :
  vertex = "" #TK: was HVV for DM
  BaseN = "hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_"
  SM  = getSumOfRWHVVSamples(f, BaseN, "H0PM",  Sys)
  BSM = getSumOfRWHVVSamples(f, BaseN, AC,      Sys)
  f05 = getSumOfRWHVVSamples(f, BaseN, AC+"f05",Sys)

 ## APPLY PWG SFs
 if applyPWG_SF:
     PWG_SF = getPWGSF_old(f, Cat, Var, Prod)
     print("PWG SF: "+str(PWG_SF))
     SM.Scale(PWG_SF)
     BSM.Scale(PWG_SF)
     f05.Scale(PWG_SF)

 if plotMDetailed:
     canvasSM = ROOT.TCanvas('canvasSM', '', 500, 500)
     SM.SetMinimum(0.001)
     SM.SetMaximum(1.5*SM.GetMaximum())
     SM.GetXaxis().SetTitle(""+Var+"")
     SM.Draw("e")
     legend = ROOT.TLegend(0.3,0.75,0.7,0.9)
     legend.AddEntry(SM,"SM template","f")
     legend.Draw()
     canvasSM.SaveAs(outDir+"/SM_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
     canvasSM.SaveAs(outDir+"/SM_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

     canvasBSM = ROOT.TCanvas('canvasBSM', '', 500, 500)
     BSM.SetMinimum(0.001)
     BSM.SetMaximum(1.5*BSM.GetMaximum())
     BSM.GetXaxis().SetTitle(""+Var+"")
     BSM.Draw("e")
     legend = ROOT.TLegend(0.3,0.75,0.7,0.9)
     legend.AddEntry(BSM,"BSM template","f")
     legend.Draw()
     canvasBSM.SaveAs(outDir+"/BSM_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
     canvasBSM.SaveAs(outDir+"/BSM_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

     canvasMf05 = ROOT.TCanvas('canvasMf05', '', 500, 500)
     f05.SetMinimum(0.001)
     f05.SetMaximum(1.5*f05.GetMaximum())
     f05.GetXaxis().SetTitle(""+Var+"")
     f05.Draw("e")
     legend = ROOT.TLegend(0.3,0.75,0.7,0.9)
     legend.AddEntry(f05,"Mf05 template","f")
     legend.Draw()
     canvasMf05.SaveAs(outDir+"/Mf05_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
     canvasMf05.SaveAs(outDir+"/Mf05_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

 if MCForThisAC:
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

  if applyPWG_SF:
      SM_Org.Scale(PWG_SF)
      BSM_Org.Scale(PWG_SF)
      f05_Org.Scale(PWG_SF)

 f.Close()

 if Prod == "ggHjj_": G = cons[Prod+AC]
 else :               G = cons[AC]

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
 
  T1.SetLineColor(ROOT.kRed)
  T1.SetFillColor(ROOT.kRed)
  T2.SetLineColor(ROOT.kBlue)
  T2.SetFillColor(ROOT.kBlue)
  T3.SetLineColor(ROOT.kGreen)
  T3.SetFillColor(ROOT.kGreen)
  T1.SetLineWidth(3)
  T2.SetLineWidth(3)
  T3.SetLineWidth(3)

  if MCForThisAC:

   f05T = T1.Clone()
   f05T.SetDirectory(0)
   f05T.Add(T2, G)
   f05T.Add(T3, G**2)
   f05T.SetLineColor(ROOT.kRed)
   f05T.SetFillColor(ROOT.kRed)
   f05T.SetLineWidth(2)

   canvasf05 = ROOT.TCanvas('canvasf05', '', 500, 500)
   f05T.SetMinimum(0.001)
   f05T.SetMaximum(1.5*f05T.GetMaximum())
   f05T.GetXaxis().SetTitle(""+Var+"")
   f05T.Draw("hist")
   f05_Org.Draw("same e")
   legend = ROOT.TLegend(0.3,0.75,0.7,0.9)
   legend.AddEntry(f05_Org,"SM-BSM Mix MC ","l")
   legend.AddEntry(f05T,"T1-T3 combination","f")
   legend.Draw()
   canvasf05.SaveAs(outDir+"/f05_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
   canvasf05.SaveAs(outDir+"/f05_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

  canvasInitial = ROOT.TCanvas('canvasInitial', '', 500, 500)
  canvasInitial.Divide(2,2)
  canvasInitial.cd(1)
  T1.SetMaximum(1.5*T1.GetMaximum())
  T1.Draw("hist")
  if MCForThisAC: SM_Org.Draw("same e")
  canvasInitial.cd(2)
  T2.Draw("hist")
  canvasInitial.cd(3)
  T3.SetMaximum(1.5*T3.GetMaximum())
  T3.Draw("hist")
  if MCForThisAC: BSM_Org.Draw("same e")
  canvasInitial.cd(4)
  legend = ROOT.TLegend(0.2,0.2,1.0,1.0)
  legend.AddEntry(T1,"T1","f")
  legend.AddEntry(T2,"T2","f")
  legend.AddEntry(T3,"T3","f")
  legend.Draw()
  canvasInitial.SaveAs(outDir+"/InitialT_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
  canvasInitial.SaveAs(outDir+"/InitialT_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

  if plotTDetailed:
      canvasT1 = ROOT.TCanvas('canvasT1', '', 500, 500)
      canvasT1.cd()
      T1.Draw("e")
      SM_Org.Draw("same e")
      legend = ROOT.TLegend(0.3,0.75,0.7,0.9)
      legend.AddEntry(SM_Org,"pure SM MC","l")
      legend.AddEntry(T1,"T1 template","f")
      legend.Draw()
      canvasT1.SaveAs(outDir+"/InitialT1_"+Cat+"_"+Var+"_"+AC+Sys+".png")

      canvasT2 = ROOT.TCanvas('canvasT2', '', 500, 500)
      canvasT2.cd() 
      T2.Draw("e")
      legend = ROOT.TLegend(0.3,0.8,0.7,0.9)
      legend.AddEntry(T2,"T2 template","f")
      legend.SetTextSize(.04)
      legend.Draw()
      canvasT2.SaveAs(outDir+"/InitialT2_"+Cat+"_"+Var+"_"+AC+Sys+".png")

      canvasT3 = ROOT.TCanvas('canvasT3', '', 500, 500)
      canvasT3.cd()
      T3.Draw("e")
      BSM_Org.Draw("same e")
      legend = ROOT.TLegend(0.3,0.75,0.7,0.9)
      legend.AddEntry(BSM_Org,"pure BSM MC","l")
      legend.AddEntry(T3,"T3 template","f")
      legend.Draw()
      canvasT3.SaveAs(outDir+"/InitialT3_"+Cat+"_"+Var+"_"+AC+Sys+".png")

 ######### Template tricks for combine #######

 Gsc = cons_sc[AC] 

 T2.Scale(Gsc) 
 T3.Scale(Gsc**2) 
 
 '''
 if AC == "H0M" :
  print "--------- Force H0M T2 = 0"
  T2.Scale(0)  
 
 if AC == "H0L1" :
  print "--------- Force H0L1 T2 positive - Compensate in model! "
  T2.Scale(-1)  
 '''
 for c, s, p, t, y in ggHNegList :
  if (c == Cat or c == "all") and p == Prod and s == AC and y == year:
   if Verbose: print "--------- Force Template positive (Compensate in model!) ", c, s, p, t, y
   if t == "T2" :  T2.Scale(-1)

 if Prod != "ggHjj_" and AC == "H0M" :  T2.Scale(0) #DM & TK

 ## Test for negative interference terms 
 if Sys == "" :
  if T2.Integral() < 0 : print "WARNING "+Sys+" (\""+Cat+"\",\""+AC+"\",\""+Prod+"\",\"T2\"),"

 ## Other tests
 if Test == True :

  gr = ROOT.TGraph(len(Scan))
  gr2D = ROOT.TGraph2D(len(Scan)*len(MuSc2D)) 
  gr.SetLineColor(ROOT.kRed)
  gr.SetLineWidth(2)
  ScanH = [] 

  for i in range(len(Scan)): 

   FaiSc = Scan[i]
   Fa1Sc = 1-abs(FaiSc)

   if Prod == "ggHjj_": GSc = cons_zz[Prod+AC]
   else :               GSc = cons_zz[AC]

   N1Sc = MuSc*Fa1Sc                       
   N2Sc = MuSc*np.sign(FaiSc)*math.sqrt(abs(FaiSc)*Fa1Sc)*GSc
   N3Sc = MuSc*abs(FaiSc)*(GSc**2)

   '''
   if AC == "H0L1" :
    N2Sc = N2Sc*-1
   '''      
   for c, s, p, t, y in ggHNegList :
    if (c == Cat or c == "all") and p == Prod and s == AC and y == year:
     if   t == "T2" :  N2Sc = N2Sc*-1    

   f05TSc = T1.Clone()
   f05TSc.SetDirectory(0)
   f05TSc.Scale(  N1Sc)
   f05TSc.Add(T2, N2Sc)
   f05TSc.Add(T3, N3Sc)
   ScanH.append(f05TSc)  

   gr.SetPoint(i, Scan[i], f05TSc.Integral())

   for j in range(len(MuSc2D)):
     N1Sc2D = MuSc2D[j]*Fa1Sc
     N2Sc2D = MuSc2D[j]*np.sign(FaiSc)*math.sqrt(abs(FaiSc)*Fa1Sc)*GSc
     N3Sc2D = MuSc2D[j]*abs(FaiSc)*(GSc**2)

     '''
     if AC == "H0L1" :
       N2Sc2D = N2Sc2D*-1
     '''
     for c, s, p, t, y in ggHNegList :
      if (c == Cat or c == "all") and p == Prod and s == AC and y == year :
       if   t == "T2" :  N2Sc2D = N2Sc2D*-1

     f05TSc2D = T1.Clone()
     f05TSc2D.SetDirectory(0)
     f05TSc2D.Scale(  N1Sc2D)
     f05TSc2D.Add(T2, N2Sc2D)
     f05TSc2D.Add(T3, N3Sc2D)

     gr2D.SetPoint(i+j*len(Scan),Scan[i],MuSc2D[j],f05TSc2D.Integral())

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
  canvasFinal.SaveAs(outDir+"/FinalT_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf") 
  canvasFinal.SaveAs(outDir+"/FinalT_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

  if plotTDetailed:
      canvasFinalT1 = ROOT.TCanvas('canvasFinalT1', '', 500, 500)
      canvasFinalT1.cd()
      T1.Draw("HIST")
      legend = ROOT.TLegend(0.3,0.75,0.7,0.9)
      legend.AddEntry(T1,"T1 template","f")
      legend.Draw()
      canvasFinalT1.SaveAs(outDir+"/FinalT1_"+Cat+"_"+Var+"_"+AC+Sys+".png")

      canvasFinalT2 = ROOT.TCanvas('canvasFinalT2', '', 500, 500)
      canvasFinalT2.cd()   
      T2.GetXaxis().SetTitle(""+Var+"")
      T2.Draw("HIST")
      legend = ROOT.TLegend(0.3,0.8,0.7,0.9)
      legend.AddEntry(T2,"T2 template","f")
      legend.SetTextSize(.04)
      legend.Draw()
      canvasFinalT2.SaveAs(outDir+"/FinalT2_"+Cat+"_"+Var+"_"+AC+Sys+".png")

      canvasFinalT3 = ROOT.TCanvas('canvasFinalT3', '', 500, 500)
      canvasFinalT3.cd()
      T3.Draw("HIST")
      legend = ROOT.TLegend(0.3,0.75,0.7,0.9)
      legend.AddEntry(T3,"T3 template","f")
      legend.Draw()
      canvasFinalT3.SaveAs(outDir+"/FinalT3_"+Cat+"_"+Var+"_"+AC+Sys+".png")

  canvasScan = ROOT.TCanvas('canvasScan', '', 500, 500)
  gr.Draw("ALP")
  canvasScan.SaveAs(outDir+"/FinalS_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
  canvasScan.SaveAs(outDir+"/FinalS_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

  canvasScan2D = ROOT.TCanvas('canvasScan2D', '', 500, 500)
  gr2D.Draw("COLZ")
  canvasScan2D.SaveAs(outDir+"/FinalS2D_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
  canvasScan2D.SaveAs(outDir+"/FinalS2D_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

  canvasScanSh = ROOT.TCanvas('canvasScanSh', '', 500, 500)
  canvasScanSh.cd()
  PlotSc = [0.0,-0.5,0.5,1.0]
  Count = 0
  legend = ROOT.TLegend(0.3,0.7,0.7,0.9)
  for i in range(len(PlotSc)):
   for j in range(len(Scan)):
    if PlotSc[i] == Scan[j]:
     h = ScanH[j]
     if h.Integral() != 0 : h.Scale(1.0/h.Integral())
     h.ResetAttFill()
     h.SetLineColor(Count+1)
     h.SetMaximum(0.6)
     legend.AddEntry(h,"Fai="+str(PlotSc[i]),"l")
     if Count == 0 : h.Draw("hist")
     else          : h.Draw("same hist")
     Count = Count+1
  legend.Draw("SAME")
  canvasScanSh.SaveAs(outDir+"/FinalSH_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
  canvasScanSh.SaveAs(outDir+"/FinalSH_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png") 

 fout = ROOT.TFile.Open(''+dst+'', 'update')
 ROOT.gDirectory.mkdir("hww2l2v_13TeV_"+Cat+"/var"+AC+"/")
 fout.cd("hww2l2v_13TeV_"+Cat+"/var"+AC+"/")

 fyield = open(outDir+"/BeforeYields_"+Prod+"_"+Cat+"_"+Var+"_"+AC+".txt","a+")
 fyield.write(Sys+"@T1: "+str(T1.Integral())+"\n")
 fyield.write(Sys+"@T2: "+str(T2.Integral())+"\n")
 fyield.write(Sys+"@T3: "+str(T3.Integral())+"\n")

 #HACK for plotting nuisance
 if forNuisPlotting:
     T1.ResetAttFill()
     T2.ResetAttFill()
     T3.ResetAttFill()
     T1.SetLineColor(ROOT.kBlack)
     T2.SetLineColor(ROOT.kBlack)
     T3.SetLineColor(ROOT.kBlack)

 T1.SetName("histo_ggH_T1"+Sys+"") 
 T2.SetName("histo_ggH_T2"+Sys+"")
 T3.SetName("histo_ggH_T3"+Sys+"")

 T1.Write() 
 T2.Write()
 T3.Write()

 fout.Close()

##########################################################

DoSys=True
DoTest=True
AddOtherTemps=True

Yr = "_"+str(year)

#2016/2017/2018 (full)

SysAll = [ "CMS_scale_e"+Yr, "CMS_scale_m"+Yr,
"CMS_scale_JESHF"+Yr, "CMS_scale_JESBBEC1","CMS_scale_JESRelativeSample"+Yr, "CMS_scale_JESEC2","CMS_scale_JESFlavorQCD","CMS_scale_JESBBEC1"+Yr,"CMS_scale_JESAbsolute", "CMS_scale_JESHF","CMS_scale_JESEC2"+Yr,"CMS_scale_JESAbsolute"+Yr,"CMS_scale_JESRelativeBal",
"CMS_btag_jes","CMS_btag_lf","CMS_btag_lfstats1"+Yr, "CMS_btag_lfstats2"+Yr,"CMS_btag_hfstats1"+Yr, "CMS_btag_hfstats2"+Yr,"CMS_btag_cferr1","CMS_btag_cferr2","CMS_btag_hf",
"CMS_PUID"+Yr,"CMS_scale_met"+Yr,
"CMS_eff_hwwtrigger"+Yr,"CMS_eff_hwwtrigger_drllrw"+Yr,
"PS_ISR", "PS_FSR" ]

if year == 2016 or year == 2017:
    SysAll += ['CMS_eff_prefiring_'+str(year)]
if year != 2016:
    SysAll += ['CMS_res_j'+Yr]
SysSR = SysAll + ["CMS_eff_m"+Yr, "CMS_eff_e"+Yr]
SysCR = SysAll + ["CMS_eff_m_CR"+Yr,"CMS_eff_e_CR"+Yr]

Sys_ggh = [ "THU_ggH_Mu","THU_ggH_Res","THU_ggH_Mig01","THU_ggH_Mig12", "THU_ggH_VBF2j","THU_ggH_VBF3j", "THU_ggH_PT60", "THU_ggH_PT120", "THU_ggH_qmtop","CMS_PU"+Yr ]
Sys_VBF = [ "THU_qqH_YIELD","THU_qqH_PTH200","THU_qqH_Mjj60","THU_qqH_Mjj120","THU_qqH_Mjj350","THU_qqH_Mjj700","THU_qqH_Mjj1000","THU_qqH_Mjj1500","THU_qqH_PTH25","THU_qqH_JET01","THU_qqH_EWK","CMS_PU"+Yr ]


#2016/2017/2018 no syst just stat rebin test
'''
Sys=[]
Sys_ggh = []
Sys_VBF=[]
'''

############################################################################################

XHProd = ["VBF_","ZH_","WH_"]
#XHProd = []

ACConfig = [  ("dytt_0j", "events", "H0M"),
              ("dytt_0j", "events", "H0PH"),
              ("dytt_0j", "events", "H0L1"),
              ("top_0j", "events", "H0M"),
              ("top_0j", "events", "H0PH"),
              ("top_0j", "events", "H0L1"),
              ("dytt_1j", "events", "H0M"),
              ("dytt_1j", "events", "H0PH"),
              ("dytt_1j", "events", "H0L1"), 
              ("top_1j", "events", "H0M"),
              ("top_1j", "events", "H0PH"),
              ("top_1j", "events", "H0L1"),
              (useCut+"0j", useVar, "H0M"),
              (useCut+"0j", useVar, "H0PH"),
              (useCut+"0j", useVar, "H0L1"),
              (useCut+"1j", useVar, "H0M"),
              (useCut+"1j", useVar, "H0PH"),
              (useCut+"1j", useVar, "H0L1"),

              #("C1_"+useCut+"0j_dphill0to8", useVar, "H0M"),
              #("C1_"+useCut+"0j_dphill0to8", useVar, "H0PH"),
              #("C1_"+useCut+"0j_dphill0to8", useVar, "H0L1"),
              #("C1_"+useCut+"1j_dphill0to8", useVar, "H0M"),
              #("C1_"+useCut+"1j_dphill0to8", useVar, "H0PH"),
              #("C1_"+useCut+"1j_dphill0to8", useVar, "H0L1"),
              #("C1_"+useCut+"0j_dphill8to32", useVar, "H0M"),
              #("C1_"+useCut+"0j_dphill8to32", useVar, "H0PH"),
              #("C1_"+useCut+"0j_dphill8to32", useVar, "H0L1"),
              #("C1_"+useCut+"1j_dphill8to32", useVar, "H0M"),
              #("C1_"+useCut+"1j_dphill8to32", useVar, "H0PH"),
              #("C1_"+useCut+"1j_dphill8to32", useVar, "H0L1"),

              #("C2_"+useCut+"0j_dphill0to10", useVar, "H0M"),
              #("C2_"+useCut+"0j_dphill0to10", useVar, "H0PH"),
              #("C2_"+useCut+"0j_dphill0to10", useVar, "H0L1"),
              #("C2_"+useCut+"1j_dphill0to10", useVar, "H0M"),
              #("C2_"+useCut+"1j_dphill0to10", useVar, "H0PH"),
              #("C2_"+useCut+"1j_dphill0to10", useVar, "H0L1"),
              #("C2_"+useCut+"0j_dphill10to32", useVar, "H0M"),
              #("C2_"+useCut+"0j_dphill10to32", useVar, "H0PH"),
              #("C2_"+useCut+"0j_dphill10to32", useVar, "H0L1"),
              #("C2_"+useCut+"1j_dphill10to32", useVar, "H0M"),
              #("C2_"+useCut+"1j_dphill10to32", useVar, "H0PH"),
              #("C2_"+useCut+"1j_dphill10to32", useVar, "H0L1"),        

              #("C3_"+useCut+"0j_dphill0to12", useVar, "H0M"),
              #("C3_"+useCut+"0j_dphill0to12", useVar, "H0PH"),
              #("C3_"+useCut+"0j_dphill0to12", useVar, "H0L1"),
              #("C3_"+useCut+"1j_dphill0to12", useVar, "H0M"),
              #("C3_"+useCut+"1j_dphill0to12", useVar, "H0PH"),
              #("C3_"+useCut+"1j_dphill0to12", useVar, "H0L1"),
              #("C3_"+useCut+"0j_dphill12to32", useVar, "H0M"),
              #("C3_"+useCut+"0j_dphill12to32", useVar, "H0PH"),
              #("C3_"+useCut+"0j_dphill12to32", useVar, "H0L1"),
              #("C3_"+useCut+"1j_dphill12to32", useVar, "H0M"),
              #("C3_"+useCut+"1j_dphill12to32", useVar, "H0PH"),
              #("C3_"+useCut+"1j_dphill12to32", useVar, "H0L1"),   

              #("C4_"+useCut+"0j_dphill0to14", useVar, "H0M"),
              #("C4_"+useCut+"0j_dphill0to14", useVar, "H0PH"),
              #("C4_"+useCut+"0j_dphill0to14", useVar, "H0L1"),
              #("C4_"+useCut+"1j_dphill0to14", useVar, "H0M"),
              #("C4_"+useCut+"1j_dphill0to14", useVar, "H0PH"),
              #("C4_"+useCut+"1j_dphill0to14", useVar, "H0L1"),
              #("C4_"+useCut+"0j_dphill14to32", useVar, "H0M"),
              #("C4_"+useCut+"0j_dphill14to32", useVar, "H0PH"),
              #("C4_"+useCut+"0j_dphill14to32", useVar, "H0L1"),
              #("C4_"+useCut+"1j_dphill14to32", useVar, "H0M"),
              #("C4_"+useCut+"1j_dphill14to32", useVar, "H0PH"),
              #("C4_"+useCut+"1j_dphill14to32", useVar, "H0L1"),

              #(useCut+"0j_dphill0to8", useVar, "H0M"),
              #(useCut+"0j_dphill0to8", useVar, "H0PH"),
              #(useCut+"0j_dphill0to8", useVar, "H0L1"),
              #(useCut+"1j_dphill0to8", useVar, "H0M"),
              #(useCut+"1j_dphill0to8", useVar, "H0PH"),
              #(useCut+"1j_dphill0to8", useVar, "H0L1"),
              #(useCut+"0j_dphill8to16", useVar, "H0M"),
              #(useCut+"0j_dphill8to16", useVar, "H0PH"),
              #(useCut+"0j_dphill8to16", useVar, "H0L1"),
              #(useCut+"1j_dphill8to16", useVar, "H0M"),
              #(useCut+"1j_dphill8to16", useVar, "H0PH"),
              #(useCut+"1j_dphill8to16", useVar, "H0L1"),
              #(useCut+"0j_dphill16to32", useVar, "H0M"),
              #(useCut+"0j_dphill16to32", useVar, "H0PH"),
              #(useCut+"0j_dphill16to32", useVar, "H0L1"),
              #(useCut+"1j_dphill16to32", useVar, "H0M"),
              #(useCut+"1j_dphill16to32", useVar, "H0PH"),
              #(useCut+"1j_dphill16to32", useVar, "H0L1"),

              #(useCut+"0j_dphill16to24", useVar, "H0M"),
              #(useCut+"0j_dphill16to24", useVar, "H0PH"),
              #(useCut+"0j_dphill16to24", useVar, "H0L1"),
              #(useCut+"1j_dphill16to24", useVar, "H0M"),
              #(useCut+"1j_dphill16to24", useVar, "H0PH"),
              #(useCut+"1j_dphill16to24", useVar, "H0L1"),
              #(useCut+"0j_dphill24to32", useVar, "H0M"),
              #(useCut+"0j_dphill24to32", useVar, "H0PH"),
              #(useCut+"0j_dphill24to32", useVar, "H0L1"),
              #(useCut+"1j_dphill24to32", useVar, "H0M"),
              #(useCut+"1j_dphill24to32", useVar, "H0PH"),
              #(useCut+"1j_dphill24to32", useVar, "H0L1")
              #("0j", "mllVSmth", "H0M"),
              #("0j", "mllVSmth", "H0PH"),
              #("0j", "mllVSmth", "H0L1"),
              #("1j", "mllVSmth", "H0M"),
              #("1j", "mllVSmth", "H0PH"),
              #("1j", "mllVSmth", "H0L1")
]

for prod in XHProd :
 print "------------------------------------", prod
 if prod == "ZH_" or prod == "VBF_" : SigConfig = ACConfig #+ LZGConfig + EFTConfig #TK
 else : SigConfig = ACConfig # + EFTConfig #TK

 for cat, var, sig in SigConfig :
  create2VIntTemplates(cat, var, prod, sig, "", DoTest)
  if DoSys:
   if "top" in cat or "dytt" in cat: Sys = SysCR
   else: Sys = SysSR
   for sys in Sys :
    create2VIntTemplates(cat, var, prod, sig, "_"+sys+"Up", False)
    create2VIntTemplates(cat, var, prod, sig, "_"+sys+"Down", False)
    
    if not doNotCheckJESR or (doNotCheckJESR and "JES" not in sys and "res_j" not in sys):
        checkForBadSys(cat, var, prod, sig, "_"+sys+"","T1")
        checkForBadSys(cat, var, prod, sig, "_"+sys+"","T2")
        checkForBadSys(cat, var, prod, sig, "_"+sys+"","T3")
        checkForBadSys(cat, var, prod, sig, "_"+sys+"","T4")
        checkForBadSys(cat, var, prod, sig, "_"+sys+"","T5")
   if "VBF_" in prod :
    for sys in Sys_VBF :
     create2VIntTemplates(cat, var, prod, sig, "_"+sys+"Up", False)
     create2VIntTemplates(cat, var, prod, sig, "_"+sys+"Down", False)

     if not doNotCheckJESR or (doNotCheckJESR and "JES" not in sys and "res_j" not in sys):
         checkForBadSys(cat, var, prod, sig, "_"+sys+"","T1")
         checkForBadSys(cat, var, prod, sig, "_"+sys+"","T2")
         checkForBadSys(cat, var, prod, sig, "_"+sys+"","T3")
         checkForBadSys(cat, var, prod, sig, "_"+sys+"","T4")
         checkForBadSys(cat, var, prod, sig, "_"+sys+"","T5")

prod = "ggH_"
print "------------------------------------", prod
SigConfig = ACConfig #+ EFTConfig #TK

for cat, var, sig in SigConfig :
 create1VIntTemplates(cat, var, prod, sig, "", DoTest)
 if DoSys:
  if "top" in cat or "dytt" in cat: Sys = SysCR
  else: Sys = SysSR
  for sys in Sys :
   create1VIntTemplates(cat, var, prod, sig, "_"+sys+"Up", False)
   create1VIntTemplates(cat, var, prod, sig, "_"+sys+"Down", False)
   if not doNotCheckJESR or (doNotCheckJESR and "JES" not in sys and "res_j" not in sys):
       checkForBadSys(cat, var, prod, sig, "_"+sys+"","T1")
       checkForBadSys(cat, var, prod, sig, "_"+sys+"","T2")
       checkForBadSys(cat, var, prod, sig, "_"+sys+"","T3")
  for sys in Sys_ggh :
   create1VIntTemplates(cat, var, prod, sig, "_"+sys+"Up", False)
   create1VIntTemplates(cat, var, prod, sig, "_"+sys+"Down", False)
   if not doNotCheckJESR or (doNotCheckJESR and "JES" not in sys and "res_j" not in sys):
       checkForBadSys(cat, var, prod, sig, "_"+sys+"","T1")
       checkForBadSys(cat, var, prod, sig, "_"+sys+"","T2")
       checkForBadSys(cat, var, prod, sig, "_"+sys+"","T3")

SigConfig = ACConfig #+ LZGConfig + EFTConfig #TK

if AddOtherTemps:
 for cat, var, sig in SigConfig :
  AddOtherTemplates(cat, var, prod, sig)

############## ggH+2Jet setup  ####################
#not used in TK
###################################################

'''
VBFConfig = [ ("0j_genLep", "mth", "VBF_", "H0M"),
             ("0j_genLep", "mth", "VBF_", "H0PH"),
             ("0j_genLep", "mth", "VBF_", "H0L1"),
             ("0j_genSemiLep", "mth", "VBF_", "H0M"),
             ("0j_genSemiLep", "mth", "VBF_", "H0PH"),
             ("0j_genSemiLep", "mth", "VBF_", "H0L1"),
             ("0j", "mth", "VBF_", "H0M"),
             ("0j", "mth", "VBF_", "H0PH"),
             ("0j", "mth", "VBF_", "H0L1"),
             #("1j_genLep", "mth", "VBF_", "H0M"),
             #("1j_genLep", "mth", "VBF_", "H0PH"),
             #("1j_genLep", "mth", "VBF_", "H0L1"),
             #("1j_genSemiLep", "mth", "VBF_", "H0M"),
             #("1j_genSemiLep", "mth", "VBF_", "H0PH"),
             #("1j_genSemiLep", "mth", "VBF_", "H0L1"),
             #("1j", "mth", "VBF_", "H0M"),
             #("1j", "mth", "VBF_", "H0PH"),
             #("1j", "mth", "VBF_", "H0L1")
            ]

VBFConfig = [ ("0j", "mllVSmth", "VBF_", "H0M"),
             ("0j", "mllVSmth", "VBF_", "H0PH"),
             ("0j", "mllVSmth", "VBF_", "H0L1"),
             ("boostedJetVeto_0j", "mllVSmth", "VBF_", "H0M"),
             ("boostedJetVeto_0j", "mllVSmth", "VBF_", "H0PH"),
             ("boostedJetVeto_0j", "mllVSmth", "VBF_", "H0L1"),
             ("1j", "mllVSmth", "VBF_", "H0M"),
             ("1j", "mllVSmth", "VBF_", "H0PH"),
             ("1j", "mllVSmth", "VBF_", "H0L1"),
             ("boostedJetVeto_1j", "mllVSmth", "VBF_", "H0M"),
             ("boostedJetVeto_1j", "mllVSmth", "VBF_", "H0PH"),
             ("boostedJetVeto_1j", "mllVSmth", "VBF_", "H0L1")
            ]

VBFConfig = [ ("dytt_0j", "mllVSmth", "VBF_", "H0M"),
              ("dytt_0j", "mllVSmth", "VBF_", "H0PH"),
              ("dytt_0j", "mllVSmth", "VBF_", "H0L1"),
              ("top_0j", "mllVSmth", "VBF_", "H0M"),
              ("top_0j", "mllVSmth", "VBF_", "H0PH"),
              ("top_0j", "mllVSmth", "VBF_", "H0L1"),
              ("dytt_1j", "mllVSmth", "VBF_", "H0M"),
              ("dytt_1j", "mllVSmth", "VBF_", "H0PH"),
              ("dytt_1j", "mllVSmth", "VBF_", "H0L1"), 
              ("top_1j", "mllVSmth", "VBF_", "H0M"),
              ("top_1j", "mllVSmth", "VBF_", "H0PH"),
              ("top_1j", "mllVSmth", "VBF_", "H0L1"),
]

VBFConfig += [("0j", "mllVSmth", "VBF_", "H0M"),
             ("0j", "mllVSmth", "VBF_", "H0PH"),
             ("0j", "mllVSmth", "VBF_", "H0L1"),
             ("1j", "mllVSmth", "VBF_", "H0M"),
             ("1j", "mllVSmth", "VBF_", "H0PH"),
             ("1j", "mllVSmth", "VBF_", "H0L1")]

WHConfig = [ ("0j_genLep", "mth", "WH_", "H0M"),
             ("0j_genLep", "mth", "WH_", "H0PH"),
             ("0j_genLep", "mth", "WH_", "H0L1"),
             ("0j_genSemiLep", "mth", "WH_", "H0M"),
             ("0j_genSemiLep", "mth", "WH_", "H0PH"),
             ("0j_genSemiLep", "mth", "WH_", "H0L1"),
             ("0j", "mth", "WH_", "H0M"),
             ("0j", "mth", "WH_", "H0PH"),
             ("0j", "mth", "WH_", "H0L1"),
             #("1j_genLep", "mth", "WH_", "H0M"),
             #("1j_genLep", "mth", "WH_", "H0PH"),
             #("1j_genLep", "mth", "WH_", "H0L1"),
             #("1j_genSemiLep", "mth", "WH_", "H0M"),
             #("1j_genSemiLep", "mth", "WH_", "H0PH"),
             #("1j_genSemiLep", "mth", "WH_", "H0L1"),
             #("1j", "mth", "WH_", "H0M"),
             #("1j", "mth", "WH_", "H0PH"),
             #("1j", "mth", "WH_", "H0L1")
            ]

WHConfig = [ ("0j", "mllVSmth", "WH_", "H0M"),
             ("0j", "mllVSmth", "WH_", "H0PH"),
             ("0j", "mllVSmth", "WH_", "H0L1"),
             ("boostedJetVeto_0j", "mllVSmth", "WH_", "H0M"),
             ("boostedJetVeto_0j", "mllVSmth", "WH_", "H0PH"),
             ("boostedJetVeto_0j", "mllVSmth", "WH_", "H0L1"),
             ("1j", "mllVSmth", "WH_", "H0M"),
             ("1j", "mllVSmth", "WH_", "H0PH"),
             ("1j", "mllVSmth", "WH_", "H0L1"),
             ("boostedJetVeto_1j", "mllVSmth", "WH_", "H0M"),
             ("boostedJetVeto_1j", "mllVSmth", "WH_", "H0PH"),
             ("boostedJetVeto_1j", "mllVSmth", "WH_", "H0L1")
            ]

WHConfig = [  ("dytt_0j", "mllVSmth", "WH_", "H0M"),
              ("dytt_0j", "mllVSmth", "WH_", "H0PH"),
              ("dytt_0j", "mllVSmth", "WH_", "H0L1"),
              ("top_0j", "mllVSmth", "WH_", "H0M"),
              ("top_0j", "mllVSmth", "WH_", "H0PH"),
              ("top_0j", "mllVSmth", "WH_", "H0L1"),
              ("dytt_1j", "mllVSmth", "WH_", "H0M"),
              ("dytt_1j", "mllVSmth", "WH_", "H0PH"),
              ("dytt_1j", "mllVSmth", "WH_", "H0L1"), 
              ("top_1j", "mllVSmth", "WH_", "H0M"),
              ("top_1j", "mllVSmth", "WH_", "H0PH"),
              ("top_1j", "mllVSmth", "WH_", "H0L1"),
]


WHConfig += [("0j", "mllVSmth", "WH_", "H0M"),
             ("0j", "mllVSmth", "WH_", "H0PH"),
             ("0j", "mllVSmth", "WH_", "H0L1"),
             ("1j", "mllVSmth", "WH_", "H0M"),
             ("1j", "mllVSmth", "WH_", "H0PH"),
             ("1j", "mllVSmth", "WH_", "H0L1")]


ZHConfig = [ ("0j", "mllVSmth", "ZH_", "H0M"),
             ("0j", "mllVSmth", "ZH_", "H0PH"),
             ("0j", "mllVSmth", "ZH_", "H0L1"),
             ("boostedJetVeto_0j", "mllVSmth", "ZH_", "H0M"),
             ("boostedJetVeto_0j", "mllVSmth", "ZH_", "H0PH"),
             ("boostedJetVeto_0j", "mllVSmth", "ZH_", "H0L1"),
             ("1j", "mllVSmth", "ZH_", "H0M"),
             ("1j", "mllVSmth", "ZH_", "H0PH"),
             ("1j", "mllVSmth", "ZH_", "H0L1"),
             ("boostedJetVeto_1j", "mllVSmth", "ZH_", "H0M"),
             ("boostedJetVeto_1j", "mllVSmth", "ZH_", "H0PH"),
             ("boostedJetVeto_1j", "mllVSmth", "ZH_", "H0L1")
            ]

ZHConfig = [  ("dytt_0j", "mllVSmth", "ZH_", "H0M"),
              ("dytt_0j", "mllVSmth", "ZH_", "H0PH"),
              ("dytt_0j", "mllVSmth", "ZH_", "H0L1"),
              ("top_0j", "mllVSmth", "ZH_", "H0M"),
              ("top_0j", "mllVSmth", "ZH_", "H0PH"),
              ("top_0j", "mllVSmth", "ZH_", "H0L1"),
              ("dytt_1j", "mllVSmth", "ZH_", "H0M"),
              ("dytt_1j", "mllVSmth", "ZH_", "H0PH"),
              ("dytt_1j", "mllVSmth", "ZH_", "H0L1"), 
              ("top_1j", "mllVSmth", "ZH_", "H0M"),
              ("top_1j", "mllVSmth", "ZH_", "H0PH"),
              ("top_1j", "mllVSmth", "ZH_", "H0L1"),
]


ZHConfig += [("0j", "mllVSmth", "ZH_", "H0M"),
             ("0j", "mllVSmth", "ZH_", "H0PH"),
             ("0j", "mllVSmth", "ZH_", "H0L1"),
             ("1j", "mllVSmth", "ZH_", "H0M"),
             ("1j", "mllVSmth", "ZH_", "H0PH"),
             ("1j", "mllVSmth", "ZH_", "H0L1")]

SigConfig2V = VBFConfig+ZHConfig+WHConfig#VBFConfig+ZHConfig+WHConfig

ggHConfig = [ ("dytt_0j", "mllVSmth", "H0M"),
              ("dytt_0j", "mllVSmth", "H0PH"),
              ("dytt_0j", "mllVSmth", "H0L1"),
              ("top_0j", "mllVSmth", "H0M"),
              ("top_0j", "mllVSmth", "H0PH"),
              ("top_0j", "mllVSmth", "H0L1"),
              ("dytt_1j", "mllVSmth", "H0M"),
              ("dytt_1j", "mllVSmth", "H0PH"),
              ("dytt_1j", "mllVSmth", "H0L1"), 
              ("top_1j", "mllVSmth", "H0M"),
              ("top_1j", "mllVSmth", "H0PH"),
              ("top_1j", "mllVSmth", "H0L1"),
]

ggHConfig = [("0j", "mllVSmth", "H0M"),
             ("0j", "mllVSmth", "H0PH"),
             ("0j", "mllVSmth", "H0L1"),
             ("boostedJetVeto_0j", "mllVSmth", "H0M"),
             ("boostedJetVeto_0j", "mllVSmth", "H0PH"),
             ("boostedJetVeto_0j", "mllVSmth", "H0L1"),
             ("1j", "mllVSmth", "H0M"),
             ("1j", "mllVSmth", "H0PH"),
             ("1j", "mllVSmth", "H0L1"),
             ("boostedJetVeto_1j", "mllVSmth", "H0M"),
             ("boostedJetVeto_1j", "mllVSmth", "H0PH"),
             ("boostedJetVeto_1j", "mllVSmth", "H0L1")
            ]

ggHConfig = [ ("0j_genLep", "mth", "H0M"),
             ("0j_genLep", "mth", "H0PH"),
             ("0j_genLep", "mth", "H0L1"),
             ("0j_genSemiLep", "mth", "H0M"),
             ("0j_genSemiLep", "mth", "H0PH"),
             ("0j_genSemiLep", "mth", "H0L1"),
             ("0j", "mth", "H0M"),
             ("0j", "mth", "H0PH"),
             ("0j", "mth", "H0L1"),
             #("1j_genLep", "mth", "H0M"),
             #("1j_genLep", "mth", "H0PH"),
             #("1j_genLep", "mth", "H0L1"),
             #("1j_genSemiLep", "mth", "H0M"),
             #("1j_genSemiLep", "mth", "H0PH"),
             #("1j_genSemiLep", "mth", "H0L1"),
             #("1j", "mth", "H0M"),
             #("1j", "mth", "H0PH"),
             #("1j", "mth", "H0L1")
            ]

for cat, var, prod, sig in SigConfig2V :
 create2VIntTemplates(cat, var, prod, sig, "", True)
 for sys in Systematics :
  if sys == "CMS_PU_2018" and ("WH" in prod or "ZH" in prod): continue
  if "THU_ggH" in sys: continue
  if "THU_qqH" in sys and ("WH" in prod or "ZH" in prod): continue
  #KELLO new findings of negat yields
  if "VBF" in prod and "H0PH" in sig:
      if "CMS_res_j_2018" in sys: continue
      if "CMS_scale_met_2018" in sys: continue
      if "CMS_scale_JESHF" in sys: continue

  create2VIntTemplates(cat, var, prod, sig, "_"+sys+"Up", False)
  create2VIntTemplates(cat, var, prod, sig, "_"+sys+"Down", False)

for cat, var, sig in ggHConfig :
 create1VIntTemplates(cat, var, sig, "", True)
 for sys in Systematics :
  if "THU_qqH" in sys: continue
  
  create1VIntTemplates(cat, var, sig, "_"+sys+"Up", False)
  create1VIntTemplates(cat, var, sig, "_"+sys+"Down", False)
 

AddOtherTemplates("0j", "mllVSmth", "H0M"),
AddOtherTemplates("0j", "mllVSmth", "H0PH"),
AddOtherTemplates("0j", "mllVSmth", "H0L1"),
AddOtherTemplates("boostedJetVeto_0j", "mllVSmth", "H0M"),
AddOtherTemplates("boostedJetVeto_0j", "mllVSmth", "H0PH"),
AddOtherTemplates("boostedJetVeto_0j", "mllVSmth", "H0L1"),
AddOtherTemplates("1j", "mllVSmth", "H0M"),
AddOtherTemplates("1j", "mllVSmth", "H0PH"),
AddOtherTemplates("1j", "mllVSmth", "H0L1"),
AddOtherTemplates("boostedJetVeto_1j", "mllVSmth", "H0M"),
AddOtherTemplates("boostedJetVeto_1j", "mllVSmth", "H0PH"),
AddOtherTemplates("boostedJetVeto_1j", "mllVSmth", "H0L1"),

AddOtherTemplates("dytt_0j", "mllVSmth", "H0M"),
AddOtherTemplates("dytt_0j", "mllVSmth", "H0PH"),
AddOtherTemplates("dytt_0j", "mllVSmth", "H0L1"),
AddOtherTemplates("top_0j", "mllVSmth", "H0M"),
AddOtherTemplates("top_0j", "mllVSmth", "H0PH"),
AddOtherTemplates("top_0j", "mllVSmth", "H0L1"),
AddOtherTemplates("dytt_1j", "mllVSmth", "H0M"),
AddOtherTemplates("dytt_1j", "mllVSmth", "H0PH"),
AddOtherTemplates("dytt_1j", "mllVSmth", "H0L1"),
AddOtherTemplates("top_1j", "mllVSmth", "H0M"),
AddOtherTemplates("top_1j", "mllVSmth", "H0PH"),
AddOtherTemplates("top_1j", "mllVSmth", "H0L1"),

AddOtherTemplates("0j_genLep", "mth", "H0M"),
AddOtherTemplates("0j_genLep", "mth", "H0PH"),
AddOtherTemplates("0j_genLep", "mth", "H0L1"),
AddOtherTemplates("0j_genSemiLep", "mth", "H0M"),
AddOtherTemplates("0j_genSemiLep", "mth", "H0PH"),
AddOtherTemplates("0j_genSemiLep", "mth", "H0L1"),
AddOtherTemplates("0j", "mth", "H0M"),
AddOtherTemplates("0j", "mth", "H0PH"),
AddOtherTemplates("0j", "mth", "H0L1"),
AddOtherTemplates("1j_genLep", "mth", "H0M"),
AddOtherTemplates("1j_genLep", "mth", "H0PH"),
AddOtherTemplates("1j_genLep", "mth", "H0L1"),
AddOtherTemplates("1j_genSemiLep", "mth", "H0M"),
AddOtherTemplates("1j_genSemiLep", "mth", "H0PH"),
AddOtherTemplates("1j_genSemiLep", "mth", "H0L1"),
AddOtherTemplates("1j", "mth", "H0M"),
AddOtherTemplates("1j", "mth", "H0PH"),
AddOtherTemplates("1j", "mth", "H0L1")
'''
