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

hup = ROOT.TH1F("hup","hup",1,0,2)
hnom = ROOT.TH1F("hnom","hnom",1,0,2)
hdown = ROOT.TH1F("hdown","hdown",1,0,2)


thuNormFactors = {}

for cat,num in HTXSStage1_1Categories.iteritems():
  if not 'QQ2HQQ_' in cat: continue
  chain.Draw("1>>hup","(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+")*LHEScaleWeight[0]","goff")
  chain.Draw("1>>hnom","(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+")","goff")
  chain.Draw("1>>hdown","(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+")*LHEScaleWeight[8]","goff")
  thuNormFactors[cat] = [str(hup.Integral()/hnom.Integral()),str(hdown.Integral()/hnom.Integral())]

print thuNormFactors

#a=raw_input()
