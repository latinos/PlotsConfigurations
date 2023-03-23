
import sys
import ROOT 
import numpy as np
from scipy import linalg
import shutil
import math
import os

ROOT.gStyle.SetOptStat(0)
ROOT.gStyle.SetOptTitle(0)

KD = str(sys.argv[1])
Verbose = False
NegList = []
vertex = "HVV"
#Ext1 = "JJH"+year+"SMEFT"
#Ext = "JJH"+year+"SMEFT" #Signals_rebin_test
input_year = str(sys.argv[2])
Year = "20"+input_year
year = input_year+'B'
Ext1 = "JJH"+year+"SMEFT_Sig_Sys"
Ext = "JJH"+year+"SMEFT_Bkg_Sys"

file_nl  = open("NegList_"+Year+"_SMEFT_rebin.py", "a")

######## Template forced positive for combine ################

print "- For each analysis channel we should check which templates are negative"
print "- They are forced positive and added to NegList -- Must be taken into account in Signal Model! "

###################################################################

eosdir = '/eos/user/l/lurda/test/'

src_ac = eosdir+"rootFile"+Ext+"/plots_"+Ext+"_REBIN.root"
src_vbf = eosdir+"rootFileJJH"+year+"SMEFT_VBF/plots_JJH"+year+"SMEFT_VBF_REBIN.root"
src_wh = eosdir+"rootFileJJH"+year+"SMEFT_WH/plots_JJH"+year+"SMEFT_WH_REBIN.root"
src_zh = eosdir+"rootFileJJH"+year+"SMEFT_ZH/plots_JJH"+year+"SMEFT_ZH_REBIN.root"

dst = "rootFile"+Ext1+"/plotsJJH"+year+"_SMEFT_REBIN.root"

#DM In the following logic htt is assumed to be suppressed - not treated as AC signal

if os.path.exists(dst):
    os.remove(dst)

################### Hypotheses depending on Vertex and Coupling number, and L value  ################################

L = -10000 

hyps_2V4C = np.array(([1,0,0,0],[0,1,0,0],[0,0,1,0],[0,0,0,1],     
  [1,1,0,0],    [1,0,1,0],    [1,0,0,1], #5-7                       
  [0,1,1,0],    [0,1,0,1],                                      
  [0,0,1,1], #10                                                   
  [1,1,1,0],    [1,1,0,1],    [1,0,1,1],    [0,1,1,1],          
  [1,1,1,1], #15                                                   
  [1,0.5,0,0],  [1,0,0.5,0],  [1,0,0,0.5],                         
  [1,0.25,0,0], [1,0,0.25,0], [1,0,0,0.25], #19-21
  [0,1,0.5,0],  [0,1,0,0.5], #22,23
  [0,1,0.25,0], [0,1,0,0.25],#24,25
  [0,0,1,0.5],  [0,0,1,0.25],
  [1,0.5,1,0],  [1,0.5,0,1], [1,0,0.5,1], [0,1,0.5,1],#28-31
  [1,1,0.5,0],  [0,1,1,0.5], [1,0,1,0.5], [1,1,0,0.5]  ));

hyps_2V4C_L = np.array(([1,0,0,0],[0,1,0,0],[0,0,1,0],[0,0,0,L],     
  [1,1,0,0],    [1,0,1,0],    [1,0,0,L],                       
  [0,1,1,0],    [0,1,0,L],                                      
  [0,0,1,L],                                                   
  [1,1,1,0],    [1,1,0,L],    [1,0,1,L],    [0,1,1,L],          
  [1,1,1,L],                                                   
  [1,0.5,0,0],  [1,0,0.5,0],  [1,0,0,0.5*L],                         
  [1,0.25,0,0], [1,0,0.25,0], [1,0,0,0.25*L], 
  [0,1,0.5,0],  [0,1,0,0.5*L], 
  [0,1,0.25,0], [0,1,0,0.25*L],
  [0,0,1,0.5*L],[0,0,1,0.25*L],
  [1,0.5,1,0],  [1,0.5,0,L],  [1,0,0.5,L],  [0,1,0.5,L],
  [1,1,0.5,0],  [0,1,1,0.5*L], [1,0,1,0.5*L], [1,1,0,0.5*L]  )); 

hyps_1V4C   = np.array(([1,0,0,0],[0,1,0,0],[0,0,1,0],[0,0,0,1],    
   [1,1,0,0],    [1,0,1,0],  [1,0,0,1],                          
   [0,1,1,0],    [0,1,0,1],  [0,0,1,1] ))

hyps_1V4C_L = np.array(([1,0,0,0],[0,1,0,0],[0,0,1,0],[0,0,0,L],    
   [1,1,0,0],    [1,0,1,0],  [1,0,0,L],                          
   [0,1,1,0],    [0,1,0,L],  [0,0,1,L] ))

hyps_all = {"2V4C" : hyps_2V4C, "2V4C_L" : hyps_2V4C_L, "1V4C" : hyps_1V4C, "1V4C_L" : hyps_1V4C_L }

###########################################################

def Get2CoupTerms(a1,a2,V): 

 if V is "2V" :
  CoupArray = [ a1**4, (a1**3)*a2, (a1**2)*(a2**2), a1*(a2**3), a2**4]
 elif V is "1V" :
  CoupArray = [ a1**2, a1*a2, a2**2 ]

 return CoupArray 

def Get4CoupTerms(a1,a2,a3,a4,V): # Determines Tx

 if V is "2V" :
  CoupArray = [ a1**4, 
              (a1**3)*a2, (a1**2)*(a2**2), a1*(a2**3), a2**4, #5
              (a1**3)*a3, (a1**2)*(a3**2), a1*(a3**3), a3**4, #9
              (a1**3)*a4, (a1**2)*(a4**2), a1*(a4**3), a4**4, #13
              (a2**3)*a3, (a2**2)*(a3**2), a2*(a3**3), #16
              (a2**3)*a4, (a2**2)*(a4**2), a2*(a4**3), #19
              (a3**3)*a4, (a3**2)*(a4**2), a3*(a4**3), #22
              a1*a2*(a3**2),a1*(a2**2)*a3,(a1**2)*a2*a3, #25
              a1*a2*(a4**2),a1*(a2**2)*a4,(a1**2)*a2*a4, #28
              a1*a3*(a4**2),a1*(a3**2)*a4,(a1**2)*a3*a4, #31
              a2*a3*(a4**2),a2*(a3**2)*a4,(a2**2)*a3*a4, #34
              a1*a2*a3*a4 ]
 elif V is "1V" :
  CoupArray = [ a1**2, 
                a1*a2, a2**2,
                a1*a3, a3**2,
                a1*a4, a4**2,
                a2*a3, a2*a4, a3*a4 ]
 return CoupArray 

##############################################################

def getHypIDs(V) :

 tid = []
 hid = []

 if V is "2V" :
  hid = list(range(1, 36))
  tid = list(range(1, 36))

 if V is "1V" :
  hid = list(range(1, 11))
  tid = list(range(1, 11))

 return tid, hid

#########################################################################
############### Matrix of couplings for X hypotheses ####################

def get4CMatrix(L,V) : 

 if L is True : hyps = hyps_all[V+"4C_L"]
 else :         hyps = hyps_all[V+"4C"]

 M = []
 for h in hyps : 
  row = Get4CoupTerms(h[0],h[1],h[2],h[3], V) 
  M.append(row)
 return M

########### Make coupling Matrices and get inverse

M2V4C   = get4CMatrix(False,"2V")
M2V4C_I = linalg.inv(M2V4C)

F4 = linalg.inv(M2V4C)
F4[F4 != 0] = 1
M2V4CL = get4CMatrix(True,"2V")
M2V4CL_I = linalg.inv(M2V4CL)
M2V4CL_I = np.multiply(M2V4CL_I, F4) 

M1V4C   = get4CMatrix(False,"1V")
M1V4C_I = linalg.inv(M1V4C)

F4 = linalg.inv(M1V4C)
F4[F4 != 0] = 1
M1V4CL = get4CMatrix(True,"1V")
M1V4CL_I = linalg.inv(M1V4CL)
M1V4CL_I = np.multiply(M1V4CL_I, F4) 

Matrix = {"2V": M2V4CL_I, "1V": M1V4CL_I }

###################################################

def AddOtherTemplates(Cat, Var, AC, src_ot, othertemp):

 if Verbose is True :  
  print " " 
  print " ", Cat, Var, AC, src_ot, othertemp
  print " " 

 f = ROOT.TFile.Open(''+src_ot+'', 'read')
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
     if Sys is False and "QCDscale" in h.GetName():  QCDVar = True
     if Sys is False and "pdf" in h.GetName(): QCDVar = True

     if QCDVar is False and h.GetName() not in HistNameList :
      h.SetDirectory(0)
      if h.Integral() < 0 : #DM combine wont take negative pdfs (OK for jjH ana but should implement better fix for this!!)
       h.Scale(0)
       if Verbose is True : print "Setting to 0 : ", h.GetName(), Cat, Var 
      if "WH_H0PM" in h.GetName() :
       name = h.GetName()
       name = name.replace("WH_H0PM","WH_T1")
       #name = name.replace("WH_hww","WH_T1")
       h.SetName(name)
       PWG_SF = getPWGSF(f, Cat, Var, "WH_")
       h.Scale(PWG_SF)
      if "ggH_hww" in h.GetName() : #I took this line of of the H0LZg loop for the boosted analysis
       #print("Changing the name of ggh_hww to ggh_T1")
       name = h.GetName()
       name = name.replace("ggH_hww","ggH_T1")
       h.SetName(name)
       h.Scale(1.03364)

      HistList.Add(h)
      HistNameList.append(h.GetName())

 f.Close()

 fout = ROOT.TFile.Open(''+dst+'', 'update')
 fout.cd("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+AC+"/") 

 if len(HistList)==0 : print "Nothing found for ", Cat, Var," in ", src_ot

 HistList.Write()

 if Verbose is True :  
  d = ROOT.gDirectory
  for ih in d.GetListOfKeys():
    h = ih.ReadObj()
    if "Up" not in h.GetName() and "Down" not in h.GetName() : 
     print h.GetName(), h.Integral()

 fout.Close()
############################################

def getPWGSF(f, Cat, Var, Prod):

 if Prod == "VBF_": src = src_vbf
 elif Prod == "WH_": src = src_wh
 else : src = src_zh
 

 f_jhu = ROOT.TFile.Open(''+src_ac+'', 'read')
 if   Prod == "VBF_"   :
  jhu = f_jhu.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_ggH_hww")
  pwg = f.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_ggH_hww")
  #print(f,jhu, pwg)
 elif Prod == "WH_" or  Prod == "ZH_"   :
  f_jhu = ROOT.TFile.Open(''+src+'', 'read')
  if "vbf" in Cat :
   #print(Cat,Prod)
   jhu = f_jhu.Get("hww2l2v_13TeV_of2j_Vh/events/histo_"+Prod+"H0PM")
#   print(jhu)
   pwg = f.Get("hww2l2v_13TeV_of2j_Vh/events/histo_"+Prod+"hww")
  else :
   jhu = f_jhu.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_"+Prod+"H0PM")
   pwg = f.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_"+Prod+"hww")
 elif Prod == "ggHjj_" :
  jhu = f_jhu.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_GGHjj_H0PM")
  pwg = f.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_ggH_hww")
 elif Prod == "ggH_"   :
  jhu = f_jhu.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_H0PM")
  pwg = f.Get("hww2l2v_13TeV_"+Cat+"/"+Var+"/histo_ggH_hww")
 else : "Prod not recognised by getPWGSF"

# XSECxBR correction for mH = 125.38
 jhu.SetDirectory(0)
 pwg.SetDirectory(0)
 if   Prod == "VBF_" :   pwg.Scale(1.03621)
 elif Prod == "WH_" :    pwg.Scale(1.01724)
 elif Prod == "ZH_" :    pwg.Scale(1.01994)
 elif Prod == "ggHjj_" : pwg.Scale(1.03364)
 elif Prod == "ggH_" :   pwg.Scale(1.03364)
 # VBF Dipole correction 
 if Prod == "VBF_" :
  if "vbf" in cat   : pwg.Scale(1.08)
  elif "Vh"  in cat : pwg.Scale(1.08)
  elif "ggh" in cat: pwg.Scale(1.08)

 if jhu.Integral()==0 : scale = 1
 else: scale =  pwg.Integral()/jhu.Integral()
 if pwg.Integral()==0 : scale = 1

 #print (Prod, Cat, "pwg.Integral()", pwg.Integral(), "jhu.Integral()", jhu.Integral(), scale)

 return scale

######################################

############################################

def getSumOfRWHVVSamples(Cat, Var, Prod, Hyp): 

 if Prod == "VBF_": src = src_vbf
 elif Prod == "WH_": src = src_wh
 else: src = src_zh

 f = ROOT.TFile.Open(''+src+'', 'read') #Lourdes: shouldnt be src_ac? The signals below are not in "src"

 if Prod == "ggH_" : Prod = ""

 S1 = f.Get('hww2l2v_13TeV_'+Cat+'/'+Var+'/histo_'+Prod+'H0PM_'+Hyp+'') 
 S2 = f.Get('hww2l2v_13TeV_'+Cat+'/'+Var+'/histo_'+Prod+'H0PH_'+Hyp+'')
 S3 = f.Get('hww2l2v_13TeV_'+Cat+'/'+Var+'/histo_'+Prod+'H0M_'+Hyp+'')
 S4 = f.Get('hww2l2v_13TeV_'+Cat+'/'+Var+'/histo_'+Prod+'H0L1_'+Hyp+'') 
 S5 = f.Get('hww2l2v_13TeV_'+Cat+'/'+Var+'/histo_'+Prod+'H0PHf05_'+Hyp+'')
 S6 = f.Get('hww2l2v_13TeV_'+Cat+'/'+Var+'/histo_'+Prod+'H0Mf05_'+Hyp+'') 
 S7 = f.Get('hww2l2v_13TeV_'+Cat+'/'+Var+'/histo_'+Prod+'H0L1f05_'+Hyp+'')
 #print('HERE', 'hww2l2v_13TeV_'+Cat+'/'+Var+'/histo_'+Prod+'H0PM_'+Hyp+'')
 S1.SetDirectory(0)
 S2.SetDirectory(0)
 S3.SetDirectory(0)
 S4.SetDirectory(0)
 S5.SetDirectory(0)
 S6.SetDirectory(0)
 S7.SetDirectory(0)

 SumA = S1.Clone()
 SumA.SetDirectory(0)

 S1.SetBit(ROOT.TH1.kIsAverage)
 S2.SetBit(ROOT.TH1.kIsAverage)
 S3.SetBit(ROOT.TH1.kIsAverage)
 S4.SetBit(ROOT.TH1.kIsAverage)
 S5.SetBit(ROOT.TH1.kIsAverage)
 S6.SetBit(ROOT.TH1.kIsAverage)
 S7.SetBit(ROOT.TH1.kIsAverage)

 S1.Add(S2,1)
 S1.Add(S3,1)
 S1.Add(S4,1)
 S1.Add(S5,1)
 S1.Add(S6,1)
 S1.Add(S7,1)

 for i in range(1, S1.GetXaxis().GetNbins()+1):
   n = S1.GetBinContent(i)
   e = S1.GetBinError(i)
   SumA.SetBinContent(i, n)
   SumA.SetBinError(i, e)

 f.Close()

 return SumA

#########################################################

def setSigStatTo0(Cat, Var, Prod, AC):

 if Prod == "ggH_" : NT = 10
 else :              NT = 35

 fout = ROOT.TFile.Open(''+dst+'', 'update')#DM should be in loop??

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

def checkForBadSys(Cat, Var, Prod, AC, Sys):

 if Prod == "ggH_" : NT = 10
 else :              NT = 35

 fout = ROOT.TFile.Open(''+dst+'', 'update')#DM shoudl be in loop??

 for i in range(1, NT+1) : 

  Temp = "T"+str(i)
  Nom = fout.Get("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+AC+"/histo_"+Prod+Temp+"")
  Up = fout.Get("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+AC+"/histo_"+Prod+Temp+Sys+"Up") 
  Dn = fout.Get("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+AC+"/histo_"+Prod+Temp+Sys+"Down")

  Err = ROOT.Double(0.)
  N = Nom.IntegralAndError(0,Nom.GetNbinsX(),Err)
  U = Up.Integral()
  D = Dn.Integral()

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
   if Err/N > 1.0 : BadShapeSys = True #DM???

   if BadShapeSys is True : # Treat as symmetric norm uncertainty 

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

  fout.cd("../../") 

 fout.Close()
    

#########################################################

def TemplateMaker(Cat, Var, Prod, AC, Sys, Test):

 if Prod == "ggH_" :
  V = "1V"
  N = 10
 else :
  V = "2V"
  N = 35
 #print('TEMPLATEMAKER', Cat, Var, Prod, AC, Sys, Test)
 createTemplates(Cat, Var, Prod, AC, Sys, V)
 EFTcoup = Get4CoupTerms(1,1,1,-10000,V)  

 #################### initial test ################################

 if Test is True :

   fout = ROOT.TFile.Open(''+dst+'', 'update')#lourdes I changed it to update but it was read

   if V is "2V" : plotvals = [0,5,10,15,20,25,30]
   else :         plotvals = [0,5]

   for idx, c in enumerate(plotvals):
    canvasInitial = ROOT.TCanvas('canvasInitial'+str(idx+1)+'', '', 500, 500)
    canvasInitial.Divide(3,2)
    legend = ROOT.TLegend(0.2,0.2,1.0,1.0)

    Tcount = 0
    for i in range(c+1,c+6): 
      T = fout.Get("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+AC+"/histo_"+Prod+"T"+str(i)+Sys+"")
      Tcount = Tcount + 1
      T.SetLineColor(Tcount)
      T.SetFillColor(Tcount)
      canvasInitial.cd(Tcount)
      T.Draw("hist")
      legend.AddEntry(T,"T"+str(i)+"","f")
  
    canvasInitial.cd(6)
    legend.Draw()

    canvasInitial.SaveAs("plot"+Ext+"/Temps/InitialT"+str(idx+1)+"_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
    canvasInitial.SaveAs("plot"+Ext+"/Temps/InitialT"+str(idx+1)+"_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

   fout.Close()

 ######### Template tricks for combine #######

 fout = ROOT.TFile.Open(''+dst+'', 'update')

 for i in range(1,N+1):
  T = fout.Get("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+AC+"/histo_"+Prod+"T"+str(i)+Sys+"")
  T.Scale(EFTcoup[i-1]) 

  if Sys is "" :
   if T.Integral()< 0 : 
    T.Scale(-1)
    NegList.append(("hww2l2v_13TeV_"+Cat+""+"_"+year,""+AC+"",""+Prod+"","T"+str(i)+""))

  else : # Sys ran after central so NegList has been created
   for n in NegList :
     if n[0] in Cat and n[1] in AC and n[2] in Prod and n[3] in "T"+str(i)+"" :
      T.Scale(-1)
      break

  fout.cd("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+AC+"/") 
  T.SetName("histo_"+Prod+"T"+str(i)+Sys+"")
  T.Write("",ROOT.TObject.kOverwrite)
  fout.cd("../../") 

 fout.Close()

 #################### final test ################################

 if Test is True :

   fout = ROOT.TFile.Open(''+dst+'', 'read')

   if V is "2V" : plotvals = [0,5,10,15,20,25,30]
   else :         plotvals = [0,5]

   for idx, c in enumerate(plotvals):
    canvasFinal = ROOT.TCanvas('canvasFinal'+str(idx+1)+'', '', 500, 500)
    canvasFinal.Divide(3,2)
    legend = ROOT.TLegend(0.2,0.2,1.0,1.0)

    Tcount = 0
    for i in range(c+1,c+6): 
      T = fout.Get("hww2l2v_13TeV_"+Cat+"/"+vertex+"_"+AC+"/histo_"+Prod+"T"+str(i)+Sys+"")
      Tcount = Tcount + 1
      T.SetLineColor(Tcount)
      T.SetFillColor(Tcount)
      canvasFinal.cd(Tcount)
      T.Draw("hist")
      legend.AddEntry(T,"T"+str(i)+"","f")
  
    canvasFinal.cd(6)
    legend.Draw()

    canvasFinal.SaveAs("plot"+Ext+"/Temps/FinalT"+str(idx+1)+"_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".pdf")
    canvasFinal.SaveAs("plot"+Ext+"/Temps/FinalT"+str(idx+1)+"_"+Cat+"_"+Var+"_"+Prod+AC+Sys+".png")

   fout.Close()

def createTemplates(Cat, Var, Prod, AC, Sys, V):

 if Verbose is True :  
  print " " 
  print " ", Cat, Var, Prod, AC, Sys, V
  print " " 

 IM = Matrix[""+V+""]
 tid, hid = getHypIDs(""+V+"") 
 
 NT = len(hid)

 f = ROOT.TFile.Open(''+src_ac+'', 'read')
 PWG_SF = getPWGSF(f, Cat, Var, Prod)
 # Get hypotheses (all 7 AC samples reweighted to a given H)
 Hs = []
 for i in hid :
  H = getSumOfRWHVVSamples(Cat, Var, Prod, "H"+str(i)+Sys+"")
  H.Scale(PWG_SF)
  Hs.append(H)

 #PWG 
 # Now get the Templates using the Hs and the coupling Matrix
 Ts = []
 for i in range(1,NT+1):  
  r = i-1
  T = Hs[0].Clone()
  T.Scale(IM[r][0])
  for x in range(1,NT):  
   Tx = Hs[x].Clone()
   T.Add(Tx, IM[r][x])
  Ts.append(T)

 fout = ROOT.TFile.Open(''+dst+'', 'update')
 if not fout.GetDirectory("hww2l2v_13TeV_"+Cat+"/HVV_"+AC+"/") : ROOT.gDirectory.mkdir("hww2l2v_13TeV_"+Cat+"/HVV_"+AC+"/") 
 fout.cd("hww2l2v_13TeV_"+Cat+"/HVV_"+AC+"/")

 for i in range(0,NT): 

  if tid[i] > 0 :
   Ts[i].SetName("histo_"+Prod+"T"+str(tid[i])+Sys+"") 
   Ts[i].Write()

 fout.Close()

################### SMEFT Signal Shape Sys #######################################

DoSys=True
DoSigStat0=True
DoTest=False
AddOtherTemps=True

Yr="_"+Year

Sys =[
"CMS_eff_e_CR"+Yr,"CMS_btag_DeepFlav_cferr1", "CMS_btag_DeepFlav_cferr2","CMS_scale_e"+Yr, "CMS_scale_m"+Yr, "CMS_eff_m"+Yr, "CMS_eff_e"+Yr, "CMS_eff_m_CR"+Yr,
"CMS_scale_JESHF"+Yr, "CMS_scale_JESBBEC1","CMS_scale_JESRelativeSample"+Yr, "CMS_scale_JESEC2","CMS_scale_JESFlavorQCD","CMS_scale_JESBBEC1"+Yr,"CMS_scale_JESAbsolute", "CMS_scale_JESHF",
"CMS_scale_JESEC2"+Yr,"CMS_scale_JESAbsolute"+Yr,"CMS_scale_JESRelativeBal",
"CMS_btag_DeepFlav_jes","CMS_btag_DeepFlav_lf","CMS_btag_DeepFlav_lfstats1"+Yr, "CMS_btag_DeepFlav_lfstats2"+Yr,"CMS_btag_DeepFlav_hfstats1"+Yr, "CMS_btag_DeepFlav_hfstats2"+Yr,
"CMS_PUID"+Yr,"CMS_scale_met"+Yr, "CMS_res_j"+Yr,"QCDscale_WWewk","CMS_hww_EWKcorr_WW",
"CMS_eff_hwwtrigger"+Yr,"CMS_eff_hwwtrigger_drllrw"+Yr, "CMS_eff_prefiring"+Yr,
"PS_ISR", "PS_FSR","CMS_eff_hwwtrigger_embedded"+Yr,"CMS_embed_veto"+Yr,
'CMS_hww_WWqscale_2j','CMS_hww_WWresum_2j','singleTopToTTbar','CMS_hww_VgScale','CMS_hww_pdf_WW'+Yr,'CMS_hww_pdf_top'+Yr,'QCDscale_top_2j'+Yr,'QCDscale_V','QCDscale_VV',
'CMS_hww_WWresum_2j',
"CMS_scale_cleanfatJES"+Yr, "CMS_scale_cleanfatJER"+Yr, "CMS_scale_mVjmr"+Yr, "CMS_scale_mVjms"+Yr, "CMS_scale_mVjer"+Yr, "CMS_scale_mVjesTotal"+Yr,
"CMS_scale_subjetjer"+Yr, "CMS_scale_subjetjes"+Yr,"CMS_BoostedVtag"+Yr,
]
Sys_ggh = [
"THU_ggH_Mu","THU_ggH_Res","THU_ggH_Mig01","THU_ggH_Mig12", "THU_ggH_VBF2j","THU_ggH_VBF3j", "THU_ggH_PT60", "THU_ggH_PT120", "THU_ggH_qmtop","CMS_PU"+Yr
]

Sys_VBF = [
"THU_qqH_YIELD","THU_qqH_PTH200","THU_qqH_Mjj60","THU_qqH_Mjj120","THU_qqH_Mjj350","THU_qqH_Mjj700","THU_qqH_Mjj1000","THU_qqH_Mjj1500","THU_qqH_PTH25","THU_qqH_JET01","THU_qqH_EWK","CMS_PU"+Yr
]


###################################################################################


ot=['histo_DATA','histo_ggWW', 'histo_WW','histo_WWewk','histo_Dyemb','histo_DY','histo_VVV','histo_VZ', 'histo_Vg', 'histo_VgS_L', 'histo_VgS_H','histo_Fake',
'histo_ggH_htt','histo_qqH_htt','histo_ZH_htt','histo_WH_htt', 'histo_ZH_hww', 'histo_WH_hww', 'histo_ggH_hww', 'histo_qqH_hww', 'hist_ggZH_hww', 'ttH_hww','histo_top']

####### HVV setup  ######

XHProd = ["VBF_","ZH_","WH_"]

if KD == "H0ALL" :
 SigConfig = [ 
              ("of2j_Vh_hin", "kd3d_Vh_hmhp", "H0ALL"),
              ("of2j_Vh_hip", "kd3d_Vh_hmhp", "H0ALL"),
              ("top_fj",      "events",      "H0ALL"),
             ]

############################################

for prod in XHProd :
 print "###------------------------------------", prod
 
 del NegList[:]
 for cat, var, sig in SigConfig :
  print(cat, var, sig)
  TemplateMaker(cat, var, prod, sig, "", DoTest)

 #print prod+KD+" =", NegList
 file_nl.write(""+prod+KD+" ="+str(NegList)+" \n") 

 if DoSys is True :

  print "Adding Sys.... "
  for sys in Sys : 
   print(sys)
#    print(sys, cat, var, sig)
   for cat, var, sig in SigConfig :
    try:
     TemplateMaker(cat, var, prod, sig, "_"+sys+"Up", False)
     TemplateMaker(cat, var, prod, sig, "_"+sys+"Down", False)
     checkForBadSys(cat, var, prod, sig, "_"+sys+"")
    except: 
     print ("Sys not available", sys)
     continue 
  if "VBF_" in prod :
   for sys in Sys_VBF :
    for cat, var, sig in SigConfig :
     TemplateMaker(cat, var, prod, sig, "_"+sys+"Up", False)
     TemplateMaker(cat, var, prod, sig, "_"+sys+"Down", False)  
     checkForBadSys(cat, var, prod, sig, "_"+sys+"")

 if DoSigStat0 is True :
   for cat, var, sig in SigConfig :
    setSigStatTo0(cat, var, prod, sig) 

if AddOtherTemps is True :
 print "Adding other templates.... "
 for cat, var, sig in SigConfig :
  AddOtherTemplates(cat, var, sig, src_ac, ot)
print "Its done!!!"
