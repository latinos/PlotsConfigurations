import os
import subprocess
import string
import ROOT
from LatinoAnalysis.Tools.commonTools import *

directory='/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv6_Full2018v6/MCGenOnly/'
#print directory

chain = ROOT.TChain("Events")
chain.Add(directory+"nanoLatino_VBFHToWWTo2L2Nu_M125__part0.root")
chain.Add(directory+"nanoLatino_VBFHToWWTo2L2Nu_M125__part1.root")
chain.Add(directory+"nanoLatino_VBFHToWWTo2L2Nu_M125__part2.root")
chain.Add(directory+"nanoLatino_VBFHToWWTo2L2Nu_M125__part3.root")

if os.path.exists('HTXS_stage1_categories.py') :
  handle = open('HTXS_stage1_categories.py','r')
  exec(handle)
  handle.close()

h1 = ROOT.TH1F("h1","h1",1,0,2)
hnom = ROOT.TH1F("hnom","hnom",1,0,2)

thuNormFactors = {}
thuUncertainties = [
  "qqH_YIELD",
  "qqH_PTH200",
  "qqH_Mjj60",
  "qqH_Mjj120",
  "qqH_Mjj350",
  "qqH_Mjj700",
  "qqH_Mjj1000",
  "qqH_Mjj1500",
  "qqH_PTH25",
  "qqH_JET01",
  "qqH_EWK",
]

for unc in thuUncertainties:
  print "thuNormFactors_"+unc+"=" 
  for cat,num in HTXSStage1_1Categories.iteritems():
    if "QQ2HQQ" not in cat: 
      continue
    else:  
      chain.Draw("1>>h1",unc+"*(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+")","goff")
      chain.Draw("1>>hnom","(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+")","goff")
      #print cat, h1.Integral(),hnom.Integral()
      thuNormFactors[cat] = [str(h1.Integral()/hnom.Integral())]

  print thuNormFactors

#a=raw_input()
