import os
import subprocess
import string
import ROOT
from LatinoAnalysis.Tools.commonTools import *

directory='/eos/cms/store/user/yiiyama/HWWNano/Fall2017_102X_nAODv5_SigOnly_Full2017v5/MCGenOnly/'
#print directory

chain = ROOT.TChain("Events")
chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowheg_M125__part0.root")
chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowheg_M125__part1.root")
chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowheg_M125__part2.root")
chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowheg_M125__part3.root")
chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowheg_M125__part4.root")
chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowheg_M125__part5.root")

if os.path.exists('HTXS_stage1_categories.py') :
  handle = open('HTXS_stage1_categories.py','r')
  exec(handle)
  handle.close()

h1 = ROOT.TH1F("h1","h1",1,0,2)
hnom = ROOT.TH1F("hnom","hnom",1,0,2)

thuNormFactors = {}
thuUncertainties = {'ggH_Mu','ggH_Res','ggH_Mig01','ggH_Mig12','ggH_VBF2j','ggH_VBF3j','ggH_PT60','ggH_PT120','ggH_qmtop'}

for unc in thuUncertainties:
  print "thuNormFactors_"+unc+"=" 
  for cat,num in HTXSStage1_1Categories.iteritems():
    if not 'GG2H_' in cat: continue
    if not 'PTH_GT200' in cat:
      chain.Draw("1>>h1",unc+"*(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+")","goff")
      chain.Draw("1>>hnom","(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+")","goff")
      #  print cat, "mur=muf=2 --> ", h1.Integral(),hnom.Integral(), "mur=muf=0.5 --> ", h2.Integral(),hnom.Integral()
      thuNormFactors[cat] = [str(h1.Integral()/hnom.Integral())]
    else:
      chain.Draw("1>>h1",unc+"*(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+"*(HTXS_Higgs_pt>200)*(HTXS_Higgs_pt<=300))","goff")
      chain.Draw("1>>hnom","(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+"*(HTXS_Higgs_pt>200)*(HTXS_Higgs_pt<=300))","goff")
      thuNormFactors[cat.replace('GT200','200_300')] = [str(h1.Integral()/hnom.Integral())]
      chain.Draw("1>>h1",unc+"*(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+"*(HTXS_Higgs_pt>300)*(HTXS_Higgs_pt<=450))","goff")
      chain.Draw("1>>hnom","(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+"*(HTXS_Higgs_pt>300)*(HTXS_Higgs_pt<=450))","goff")
      thuNormFactors[cat.replace('GT200','300_450')] = [str(h1.Integral()/hnom.Integral())]
      chain.Draw("1>>h1",unc+"*(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+"*(HTXS_Higgs_pt>450)*(HTXS_Higgs_pt<=650))","goff")
      chain.Draw("1>>hnom","(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+"*(HTXS_Higgs_pt>450)*(HTXS_Higgs_pt<=650))","goff")
      thuNormFactors[cat.replace('GT200','450_650')] = [str(h1.Integral()/hnom.Integral())]
      chain.Draw("1>>h1",unc+"*(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+"*(HTXS_Higgs_pt>650))","goff")
      chain.Draw("1>>hnom","(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+"*(HTXS_Higgs_pt>650))","goff")
      thuNormFactors[cat.replace('GT200','GT650')] = [str(h1.Integral()/hnom.Integral())]

  print thuNormFactors

#a=raw_input()
