import os
import subprocess
import string
import ROOT
from LatinoAnalysis.Tools.commonTools import *

directoryNom='/afs/cern.ch/user/y/yiiyama/public/hwwvirtual/Summer16/l2tightOR/'
directoryUp='/afs/cern.ch/user/y/yiiyama/public/hwwvirtual/Summer16/l2tightOR__UEup/'
directoryDown='/afs/cern.ch/user/y/yiiyama/public/hwwvirtual/Summer16/l2tightOR__UEdo/'

chainWWNom = ROOT.TChain("Events")
chainWWNom.Add(directoryNom+"nanoLatino_WWTo2L2Nu__part0.root")
chainWWNom.Add(directoryNom+"nanoLatino_WWTo2L2Nu__part1.root")
chainWWNom.Add(directoryNom+"nanoLatino_WWTo2L2Nu__part2.root")

chainWWUp = ROOT.TChain("Events")
chainWWUp.Add(directoryUp+"nanoLatino_WWTo2L2Nu__part0.root")
chainWWUp.Add(directoryUp+"nanoLatino_WWTo2L2Nu__part1.root")

chainWWDown = ROOT.TChain("Events")
chainWWDown.Add(directoryDown+"nanoLatino_WWTo2L2Nu__part0.root")
chainWWDown.Add(directoryDown+"nanoLatino_WWTo2L2Nu__part1.root")
chainWWDown.Add(directoryDown+"nanoLatino_WWTo2L2Nu__part2.root")

chainggHNom = ROOT.TChain("Events")
chainggHNom.Add(directoryNom+"nanoLatino_GluGluHToWWTo2L2NuPowheg_M125__part0.root")
chainggHNom.Add(directoryNom+"nanoLatino_GluGluHToWWTo2L2NuPowheg_M125__part1.root")
chainggHNom.Add(directoryNom+"nanoLatino_GluGluHToWWTo2L2NuPowheg_M125__part2.root")
chainggHNom.Add(directoryNom+"nanoLatino_GluGluHToWWTo2L2NuPowheg_M125__part3.root")

chainggHUp = ROOT.TChain("Events")
chainggHUp.Add(directoryUp+"nanoLatino_GluGluHToWWTo2L2NuPowheg_M125__part0.root")

chainggHDown = ROOT.TChain("Events")
chainggHDown.Add(directoryDown+"nanoLatino_GluGluHToWWTo2L2NuPowheg_M125__part0.root")

chainqqHNom = ROOT.TChain("Events")
chainqqHNom.Add(directoryNom+"nanoLatino_VBFHToWWTo2L2NuPowheg_M125__part0.root")
chainqqHNom.Add(directoryNom+"nanoLatino_VBFHToWWTo2L2NuPowheg_M125__part1.root")

chainqqHUp = ROOT.TChain("Events")
chainqqHUp.Add(directoryUp+"nanoLatino_VBFHToWWTo2L2NuPowheg_M125__part0.root")
chainqqHUp.Add(directoryUp+"nanoLatino_VBFHToWWTo2L2NuPowheg_M125__part1.root")

chainqqHDown = ROOT.TChain("Events")
chainqqHDown.Add(directoryDown+"nanoLatino_VBFHToWWTo2L2NuPowheg_M125__part0.root")

if os.path.exists('HTXS_stage1_categories.py') :
  handle = open('HTXS_stage1_categories.py','r')
  exec(handle)
  handle.close()

hnom = ROOT.TH1F("hnom","hnom",1,0,2)
hup = ROOT.TH1F("hup","hup",1,0,2)
hdown = ROOT.TH1F("hdown","hdown",1,0,2)
'''
UEggHSTXSNormFactors = {}
print "UEggHNormFactors=" 
for cat,num in HTXSStage1_1Categories.iteritems():
  if not 'GG2H_' in cat: continue
  if not 'PTH_GT200' in cat:
    chainggHNom.Draw("1>>hnom","(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+")","goff")
    chainggHUp.Draw("1>>hup","(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+")","goff")
    chainggHDown.Draw("1>>hdown","(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+")","goff")
    #  print cat, "mur=muf=2 --> ", hup.Integral(),hnom.Integral(), "mur=muf=0.5 --> ", h2.Integral(),hnom.Integral()
    UEggHSTXSNormFactors[cat] = [str(hup.Integral()/hnom.Integral()),str(hdown.Integral()/hnom.Integral())]
  else:
    chainggHNom.Draw("1>>hnom","(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+"*(HTXS_Higgs_pt>200)*(HTXS_Higgs_pt<=300))","goff")
    chainggHUp.Draw("1>>hup","(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+"*(HTXS_Higgs_pt>200)*(HTXS_Higgs_pt<=300))","goff")
    chainggHDown.Draw("1>>hdown","(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+"*(HTXS_Higgs_pt>200)*(HTXS_Higgs_pt<=300))","goff")
    UEggHSTXSNormFactors[cat.replace('GT200','200_300')] = [str(hup.Integral()/hnom.Integral()),str(hdown.Integral()/hnom.Integral())]
    chainggHNom.Draw("1>>hnom","(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+"*(HTXS_Higgs_pt>300)*(HTXS_Higgs_pt<=450))","goff")
    chainggHUp.Draw("1>>hup","(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+"*(HTXS_Higgs_pt>300)*(HTXS_Higgs_pt<=450))","goff")
    chainggHDown.Draw("1>>hdown","(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+"*(HTXS_Higgs_pt>300)*(HTXS_Higgs_pt<=450))","goff")
    UEggHSTXSNormFactors[cat.replace('GT200','300_450')] = [str(hup.Integral()/hnom.Integral()),str(hdown.Integral()/hnom.Integral())]
    chainggHNom.Draw("1>>hnom","(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+"*(HTXS_Higgs_pt>450)*(HTXS_Higgs_pt<=650))","goff")
    chainggHUp.Draw("1>>hup","(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+"*(HTXS_Higgs_pt>450)*(HTXS_Higgs_pt<=650))","goff")
    chainggHDown.Draw("1>>hdown","(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+"*(HTXS_Higgs_pt>450)*(HTXS_Higgs_pt<=650))","goff")
    UEggHSTXSNormFactors[cat.replace('GT200','450_650')] = [str(hup.Integral()/hnom.Integral()),str(hdown.Integral()/hnom.Integral())]
    chainggHNom.Draw("1>>hnom","(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+"*(HTXS_Higgs_pt>650))","goff")
    chainggHUp.Draw("1>>hup","(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+"*(HTXS_Higgs_pt>650))","goff")
    chainggHDown.Draw("1>>hdown","(HTXS_stage1_1_cat_pTjet30GeV=="+str(num)+"*(HTXS_Higgs_pt>650))","goff")
    UEggHSTXSNormFactors[cat.replace('GT200','GT650')] = [str(hup.Integral()/hnom.Integral()),str(hdown.Integral()/hnom.Integral())]
print UEggHSTXSNormFactors
'''

UEggHNormFactors = {}
chainggHNom.Draw("1>>hnom","","goff")
chainggHUp.Draw("1>>hup","","goff")
chainggHDown.Draw("1>>hdown","","goff")
#  print cat, "mur=muf=2 --> ", hup.Integral(),hnom.Integral(), "mur=muf=0.5 --> ", h2.Integral(),hnom.Integral()
UEggHNormFactors = [str(hup.Integral()/hnom.Integral()),str(hdown.Integral()/hnom.Integral())]
print "UEggHNormFactors=" , UEggHNormFactors

UEWWNormFactors = {}
chainWWNom.Draw("1>>hnom","","goff")
chainWWUp.Draw("1>>hup","","goff")
chainWWDown.Draw("1>>hdown","","goff")
#  print cat, "mur=muf=2 --> ", hup.Integral(),hnom.Integral(), "mur=muf=0.5 --> ", h2.Integral(),hnom.Integral()
UEWWNormFactors = [str(hup.Integral()/hnom.Integral()),str(hdown.Integral()/hnom.Integral())]
print "UEWWNormFactors=" , UEWWNormFactors

UEqqHNormFactors = {}
chainqqHNom.Draw("1>>hnom","","goff")
chainqqHUp.Draw("1>>hup","","goff")
chainqqHDown.Draw("1>>hdown","","goff")
#  print cat, "mur=muf=2 --> ", hup.Integral(),hnom.Integral(), "mur=muf=0.5 --> ", h2.Integral(),hnom.Integral()
UEqqHNormFactors = [str(hup.Integral()/hnom.Integral()),str(hdown.Integral()/hnom.Integral())]
print "UEqqHNormFactors=" , UEqqHNormFactors


