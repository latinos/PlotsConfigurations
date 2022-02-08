import os
import subprocess
import string
import ROOT
from LatinoAnalysis.Tools.commonTools import *

directory='/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv6_Full2018v6/MCGenOnly/'
#print directory

chain = ROOT.TChain("Events")
chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part0.root")
chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part1.root")
chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part10.root") 
chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part11.root")
chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part12.root")
chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part13.root")
chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part14.root")
chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part15.root")
chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part16.root")
chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part17.root")
chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part18.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part19.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part2.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part20.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part21.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part22.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part23.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part24.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part25.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part26.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part27.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part28.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part29.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part3.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part30.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part31.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part32.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part33.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part34.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part35.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part36.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part37.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part38.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part39.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part4.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part40.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part41.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part42.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part43.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part44.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part45.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part46.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part47.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part48.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part49.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part5.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part50.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part51.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part52.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part53.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part54.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part55.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part56.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part57.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part58.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part59.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part6.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part60.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part61.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part62.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part7.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part8.root")
#chain.Add(directory+"nanoLatino_GluGluHToWWTo2L2NuPowhegNNLOPS_M125_private__part9.root")

if os.path.exists('HTXS_stage1_categories.py') :
  handle = open('HTXS_stage1_categories.py','r')
  exec(handle)
  handle.close()

h1 = ROOT.TH1F("h1","h1",1,0,2)
hnom = ROOT.TH1F("hnom","hnom",1,0,2)

thuNormFactors = {}
thuUncertainties = {'ggH_mu','ggH_res','ggH_mig01','ggH_mig12','ggH_VBF2j','ggH_VBF3j','ggH_pT60','ggH_pT120','ggH_qmtop'}

for unc in thuUncertainties:
  print "thuNormFactors_"+unc+"=" 
  for cat,num in HTXSStage1_1Categories.iteritems():
    if not 'GG2H_' in cat: continue
    if not 'PTH_GT200' in cat:
      chain.Draw("1>>h1",unc+"*(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+")*LHEWeight_NNLO_1_1_NLO_1_1","goff")
      chain.Draw("1>>hnom","(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+")*LHEWeight_NNLO_1_1_NLO_1_1","goff")
      #  print cat, "mur=muf=2 --> ", h1.Integral(),hnom.Integral(), "mur=muf=0.5 --> ", h2.Integral(),hnom.Integral()
      thuNormFactors[cat] = [str(h1.Integral()/hnom.Integral())]
    else:
      chain.Draw("1>>h1",unc+"*(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+")*(HTXS_Higgs_pt>200)*(HTXS_Higgs_pt<=300)*LHEWeight_NNLO_1_1_NLO_1_1","goff")
      chain.Draw("1>>hnom","(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+")*(HTXS_Higgs_pt>200)*(HTXS_Higgs_pt<=300)*LHEWeight_NNLO_1_1_NLO_1_1","goff")
      thuNormFactors[cat.replace('GT200','200_300')] = [str(h1.Integral()/hnom.Integral())]
      chain.Draw("1>>h1",unc+"*(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+")*(HTXS_Higgs_pt>300)*(HTXS_Higgs_pt<=450)*LHEWeight_NNLO_1_1_NLO_1_1","goff")
      chain.Draw("1>>hnom","(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+")*(HTXS_Higgs_pt>300)*(HTXS_Higgs_pt<=450)*LHEWeight_NNLO_1_1_NLO_1_1","goff")
      thuNormFactors[cat.replace('GT200','300_450')] = [str(h1.Integral()/hnom.Integral())]
      chain.Draw("1>>h1",unc+"*(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+")*(HTXS_Higgs_pt>450)*(HTXS_Higgs_pt<=650)*LHEWeight_NNLO_1_1_NLO_1_1","goff")
      chain.Draw("1>>hnom","(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+")*(HTXS_Higgs_pt>450)*(HTXS_Higgs_pt<=650)*LHEWeight_NNLO_1_1_NLO_1_1","goff")
      thuNormFactors[cat.replace('GT200','450_650')] = [str(h1.Integral()/hnom.Integral())]
      chain.Draw("1>>h1",unc+"*(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+")*(HTXS_Higgs_pt>650)*LHEWeight_NNLO_1_1_NLO_1_1","goff")
      chain.Draw("1>>hnom","(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+")*(HTXS_Higgs_pt>650)*LHEWeight_NNLO_1_1_NLO_1_1","goff")
      thuNormFactors[cat.replace('GT200','GT650')] = [str(h1.Integral()/hnom.Integral())]

  print thuNormFactors

#a=raw_input()
