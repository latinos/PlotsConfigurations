import os
import subprocess
import string
import ROOT
from LatinoAnalysis.Tools.commonTools import *

treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/NanoProd/'
directory = treeBaseDir+'GluGluHToWWTo2L2Nu_M125_13TeV_powheg2_JHUGenV714_pythia8/nanoAOD__Fall17_102X_nAODv4_Full2017v4__GluGluHToWWTo2L2NuPowheg_M125/190416_125057/0000/'

chain = ROOT.TChain("Events")
chain.Add(directory+"nanoAOD__Fall17_102X_nAODv4_Full2017v4__GluGluHToWWTo2L2NuPowheg_M125_1-10.root") 
chain.Add(directory+"nanoAOD__Fall17_102X_nAODv4_Full2017v4__GluGluHToWWTo2L2NuPowheg_M125_1-11.root")
chain.Add(directory+"nanoAOD__Fall17_102X_nAODv4_Full2017v4__GluGluHToWWTo2L2NuPowheg_M125_1-12.root")
chain.Add(directory+"nanoAOD__Fall17_102X_nAODv4_Full2017v4__GluGluHToWWTo2L2NuPowheg_M125_1-13.root")
chain.Add(directory+"nanoAOD__Fall17_102X_nAODv4_Full2017v4__GluGluHToWWTo2L2NuPowheg_M125_1-1.root")
chain.Add(directory+"nanoAOD__Fall17_102X_nAODv4_Full2017v4__GluGluHToWWTo2L2NuPowheg_M125_1-2.root")
chain.Add(directory+"nanoAOD__Fall17_102X_nAODv4_Full2017v4__GluGluHToWWTo2L2NuPowheg_M125_1-3.root")
chain.Add(directory+"nanoAOD__Fall17_102X_nAODv4_Full2017v4__GluGluHToWWTo2L2NuPowheg_M125_1-4.root")
chain.Add(directory+"nanoAOD__Fall17_102X_nAODv4_Full2017v4__GluGluHToWWTo2L2NuPowheg_M125_1-5.root")
chain.Add(directory+"nanoAOD__Fall17_102X_nAODv4_Full2017v4__GluGluHToWWTo2L2NuPowheg_M125_1-6.root")
chain.Add(directory+"nanoAOD__Fall17_102X_nAODv4_Full2017v4__GluGluHToWWTo2L2NuPowheg_M125_1-7.root")
chain.Add(directory+"nanoAOD__Fall17_102X_nAODv4_Full2017v4__GluGluHToWWTo2L2NuPowheg_M125_1-8.root")
chain.Add(directory+"nanoAOD__Fall17_102X_nAODv4_Full2017v4__GluGluHToWWTo2L2NuPowheg_M125_1-9.root")
chain.Add(directory+"nanoAOD__Fall17_102X_nAODv4_Full2017v4__GluGluHToWWTo2L2NuPowheg_M125_1.root") 
chain.Add(directory+"nanoAOD__Fall17_102X_nAODv4_Full2017v4__GluGluHToWWTo2L2NuPowheg_M125_2.root")
chain.Add(directory+"nanoAOD__Fall17_102X_nAODv4_Full2017v4__GluGluHToWWTo2L2NuPowheg_M125_4.root")
chain.Add(directory+"nanoAOD__Fall17_102X_nAODv4_Full2017v4__GluGluHToWWTo2L2NuPowheg_M125_5.root")
chain.Add(directory+"nanoAOD__Fall17_102X_nAODv4_Full2017v4__GluGluHToWWTo2L2NuPowheg_M125_6.root")
chain.Add(directory+"nanoAOD__Fall17_102X_nAODv4_Full2017v4__GluGluHToWWTo2L2NuPowheg_M125_7.root")
chain.Add(directory+"nanoAOD__Fall17_102X_nAODv4_Full2017v4__GluGluHToWWTo2L2NuPowheg_M125_8.root")
chain.Add(directory+"nanoAOD__Fall17_102X_nAODv4_Full2017v4__GluGluHToWWTo2L2NuPowheg_M125_9.root")

if os.path.exists('HTXS_stage1_categories.py') :
  handle = open('HTXS_stage1_categories.py','r')
  exec(handle)
  handle.close()

h1 = ROOT.TH1F("h1","h1",1,0,2)
h2 = ROOT.TH1F("h2","h2",1,0,2)
hnom = ROOT.TH1F("hnom","hnom",1,0,2)

qcdScaleFactors = {}

for cat,num in HTXSStage1Categories.iteritems():
  if not 'GG2H_' in cat: continue
  chain.Draw("1>>h1","(LHEScaleWeight[8])*(HTXS_stage_1_pTjet30=="+str(num)+")","goff")
  chain.Draw("1>>h2","(LHEScaleWeight[0])*(HTXS_stage_1_pTjet30=="+str(num)+")","goff")
  chain.Draw("1>>hnom","(HTXS_stage_1_pTjet30=="+str(num)+")","goff")
  #print cat, "mur=muf=2 --> ", h1.Integral()/hnom.Integral(), "mur=muf=0.5 --> ", h2.Integral()/hnom.Integral()
  qcdScaleFactors[cat] = [str(h1.Integral()/hnom.Integral()),str(h2.Integral()/hnom.Integral())]
print qcdScaleFactors

#a=raw_input()
