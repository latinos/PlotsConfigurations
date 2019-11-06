import os
import subprocess
import string
import ROOT
from LatinoAnalysis.Tools.commonTools import *

#treeBaseDir = '/eos/cms/store/mc/RunIIAutumn18NanoAODv5/'
treeBaseDir = '/eos/cms/store/user/lviliani/NanoNNLOPS/2018/'
#directory = treeBaseDir+'GluGluHToWWTo2L2Nu_M125_TuneCP5_MINLO_NNLOPS_13TeV-powheg-JHUGen-pythia8/NANOAODSIM/Nano1June2019_102X_upgrade2018_realistic_v19-v1/130000'
directory = treeBaseDir+'GluGluHToWWTo2L2Nu_M125_TuneCP5_MINLO_NNLOPS_13TeV-powheg-JHUGen-pythia8/Nano2018_GluGluHToWWTo2L2Nu_M125_TuneCP5_MINLO_NNLOPS_13TeV-powheg-JHUGen-pythia8/191022_162146/0000/'
print directory

chain = ROOT.TChain("Events")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_1.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_2.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_3.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_4.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_5.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_6.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_7.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_8.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_9.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_10.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_11.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_12.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_13.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_14.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_15.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_16.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_17.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_18.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_19.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_20.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_21.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_22.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_23.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_24.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_25.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_26.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_27.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_28.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_29.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_30.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_31.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_32.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_33.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_34.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_35.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_36.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_37.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_38.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_39.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_41.root")
chain.Add(directory+"/HIG-RunIIAutumn18NanoAODv5-01701_40.root")

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
    chain.Draw("1>>hnom","(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+"*(HTXS_Higgs_pt>650))","goff")
    qcdScaleFactors[cat.replace('GT200','GT650')] = [str(h1.Integral()/hnom.Integral()),str(h2.Integral()/hnom.Integral())]

print qcdScaleFactors

#a=raw_input()
