import os
import subprocess
import string
import ROOT
from LatinoAnalysis.Tools.commonTools import *

treeBaseDir = 'root://xrootd-cms.infn.it//store/mc/RunIISummer16NanoAODv5/'

directory = treeBaseDir+'GluGluHToWWTo2L2Nu_M125_13TeV_powheg_pythia8/NANOAODSIM/PUMoriond17_Nano1June2019_102X_mcRun2_asymptotic_v7-v1/60000'

print directory
chain = ROOT.TChain("Events")

chain.Add(directory+"/0825F66D-C92C-5145-8816-40E682E3B92C.root")
chain.Add(directory+"/685CC178-897F-E148-88F0-E4F6F08A745A.root")
chain.Add(directory+"/4C05E2EE-A748-064A-82A1-BC1E545A6396.root")
chain.Add(directory+"/141E0360-A266-DB4D-95B7-71424D4DF6BE.root")

if os.path.exists('HTXS_stage1_categories.py') :
  handle = open('HTXS_stage1_categories.py','r')
  exec(handle)
  handle.close()

h1 = ROOT.TH1F("h1","h1",1,0,2)
h2 = ROOT.TH1F("h2","h2",1,0,2)
hnom = ROOT.TH1F("hnom","hnom",1,0,2)

qcdScaleFactors = {}

for cat,num in HTXSStage1_1Categories.iteritems():
  if not 'GG2H_' in cat: continue
  if not 'PTH_GT200' in cat:
    chain.Draw("1>>h1","(LHEScaleWeight[8])*(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+")","goff")
    chain.Draw("1>>h2","(LHEScaleWeight[0])*(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+")","goff")
    chain.Draw("1>>hnom","(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+")","goff")
    #  print cat, "mur=muf=2 --> ", h1.Integral(),hnom.Integral(), "mur=muf=0.5 --> ", h2.Integral(),hnom.Integral()                          
    qcdScaleFactors[cat] = [str(h1.Integral()/hnom.Integral()),str(h2.Integral()/hnom.Integral())]
  else:
    chain.Draw("1>>h1","(LHEScaleWeight[8])*(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+"*(HTXS_Higgs_pt>200)*(HTXS_Higgs_pt<=300))","goff")
    chain.Draw("1>>h2","(LHEScaleWeight[0])*(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+"*(HTXS_Higgs_pt>200)*(HTXS_Higgs_pt<=300))","goff")
    chain.Draw("1>>hnom","(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+"*(HTXS_Higgs_pt>200)*(HTXS_Higgs_pt<=300))","goff")
    qcdScaleFactors[cat.replace('GT200','200_300')] = [str(h1.Integral()/hnom.Integral()),str(h2.Integral()/hnom.Integral())]
    chain.Draw("1>>h1","(LHEScaleWeight[8])*(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+"*(HTXS_Higgs_pt>300)*(HTXS_Higgs_pt<=450))","goff")
    chain.Draw("1>>h2","(LHEScaleWeight[0])*(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+"*(HTXS_Higgs_pt>300)*(HTXS_Higgs_pt<=450))","goff")
    chain.Draw("1>>hnom","(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+"*(HTXS_Higgs_pt>300)*(HTXS_Higgs_pt<=450))","goff")
    qcdScaleFactors[cat.replace('GT200','300_450')] = [str(h1.Integral()/hnom.Integral()),str(h2.Integral()/hnom.Integral())]
    chain.Draw("1>>h1","(LHEScaleWeight[8])*(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+"*(HTXS_Higgs_pt>450)*(HTXS_Higgs_pt<=650))","goff")
    chain.Draw("1>>h2","(LHEScaleWeight[0])*(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+"*(HTXS_Higgs_pt>450)*(HTXS_Higgs_pt<=650))","goff")
    chain.Draw("1>>hnom","(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+"*(HTXS_Higgs_pt>450)*(HTXS_Higgs_pt<=650))","goff")
    qcdScaleFactors[cat.replace('GT200','450_650')] = [str(h1.Integral()/hnom.Integral()),str(h2.Integral()/hnom.Integral())]
    chain.Draw("1>>h1","(LHEScaleWeight[8])*(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+"*(HTXS_Higgs_pt>650))","goff")
    chain.Draw("1>>h2","(LHEScaleWeight[0])*(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+"*(HTXS_Higgs_pt>650))","goff")
    chain.Draw("1>>hnom","(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+"*(HTXS_Higgs_pt>450)*(HTXS_Higgs_pt<=650))","goff")
    qcdScaleFactors[cat.replace('GT200','GT650')] = [str(h1.Integral()/hnom.Integral()),str(h2.Integral()/hnom.Integral())]


print qcdScaleFactors

#a=raw_input()
