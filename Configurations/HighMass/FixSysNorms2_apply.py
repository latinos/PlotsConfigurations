import ROOT
import sys
import os
import re
import copy
import json


rateParams = ["DY_SF_2016", "DY_SF_201718", "Top_2016", "Top_201718", "WW_2016", "WW_201718", "DY_OF_2016", "DY_OF_201718"]

rootdict = {"2016em": 'v7_Full2016/rootFile_Full2016_em/plots_Full2016_em.root', "2016mm": 'v7_Full2016/rootFile_Full2016_mm/plots_Full2016_mm.root', "2016ee": 'v7_Full2016/rootFile_Full2016_ee/plots_Full2016_ee.root', "2017em": 'v7_Full2017/rootFile_Full2017_em/plots_Full2017_em.root', "2017mm": 'v7_Full2017/rootFile_Full2017_mm/plots_Full2017_mm.root', "2017ee": 'v7_Full2017/rootFile_Full2017_ee/plots_Full2017_ee.root', "2018em": 'v7_Full2018/rootFile_Full2018_em/plots_Full2018_em.root', "2018mm": 'v7_Full2018/rootFile_Full2018_mm/plots_Full2018_mm.root', "2018ee": 'v7_Full2018/rootFile_Full2018_ee/plots_Full2018_ee.root'}

allnuis = {}
relevant = ['DY', 'DYemb', 'top', 'WW', 'WW2J']

thisone = sys.argv[1]

for s in ['_em', '_mm', '_ee']:
  if s in thisone: state = s
categs = ['ggh','vbf','notag']

with open('FixSysNorms_Factors2.json') as f:
  scaleby = json.load(f)
print scaleby

DecorrelateTheseFS = ["scale_met", "scale_METResponse", "scale_METResolution", "DY_ZPtRew", "DY_NLORew", "DY_mllRew", "QCDscale_V"] # List of nuisances to decorrelate by FS
ButNot = ["QCDscale_VV", "QCDscale_VH"] # Avoid changing these by accident
DecorrelateTheseCateg = ["scale_met", "scale_METResponse", "scale_METResolution", "DY_NLORew", "DY_mllRew"] # List of nuisances to decorrelate by category

#Apply scales to new rootfile.
for roo in rootdict:
  if thisone != rootdict[roo]: continue
  y = roo
  newfile = ROOT.TFile(rootdict[roo].replace(".root", "_new3.root"), 'read')
  newfile2 = ROOT.TFile(rootdict[roo].replace(".root", "_new4.root"), 'recreate')
  for categories in newfile.GetListOfKeys(): # Cut directory
    for cate in categs:
      if cate in categories.GetName(): categ = cate
    category = newfile.GetDirectory(categories.GetName())
    newfile2.cd()
    newfile2.mkdir(categories.GetName())
    for variables in category.GetListOfKeys(): # Variable directory
      if "binning" in variables.GetName():
        if ("high" in variables.GetName()) != ("high" in categories.GetName()): continue
      variable = category.GetDirectory(variables.GetName())
      newfile2.GetDirectory(categories.GetName()).cd()
      ROOT.gDirectory.mkdir(variables.GetName())
      newfile2.GetDirectory(categories.GetName()).GetDirectory(variables.GetName()).cd()

      for histo_ in variable.GetListOfKeys(): # Histograms
        histoname = histo_.GetName()
        histo = variable.Get(histoname)
        for r in scaleby:
          if "histo_"+r+"_" in histoname:
            for s in scaleby[r][y]:
              if "histo_"+r+"_"+s+"Up" == histoname or "histo_"+r+"_"+s+"Down" == histoname:
                print "Scaling",y,"/",categories.GetName(),"/",variables.GetName(),"/",histoname
                #if "201" in s:
                #  good = False
                #  for alpha in ['6','7','8']:
                #    if "201"+alpha in y and "201"+alpha in s: good = True
                #  if not good: continue
                if histoname.endswith("Up"): histo.Scale(scaleby[r][y][categ][s]["Up"])
                if histoname.endswith("Down"): histo.Scale(scaleby[r][y][categ][s]["Down"])
        for renamethis in DecorrelateTheseCateg:
          if renamethis in histoname:
            ignore = False
            for test in ButNot:
              if test in histoname: ignore = True
            if ignore: continue
            print "Renaming:",histoname,"->",histoname.replace(renamethis, renamethis+'_'+categ)
            histo.SetNameTitle(histoname.replace(renamethis, renamethis+'_'+categ), histoname.replace(renamethis, renamethis+'_'+categ))
            histoname = histoname.replace(renamethis, renamethis+'_'+categ)
        for renamethis in DecorrelateTheseFS:
          if renamethis in histoname:
            ignore = False
            for test in ButNot:
              if test in histoname: ignore = True
            if ignore: continue
            print "Renaming:",histoname,"->",histoname.replace(renamethis, renamethis+state)
            histo.SetNameTitle(histoname.replace(renamethis, renamethis+state), histoname.replace(renamethis, renamethis+state))
            histoname = histoname.replace(renamethis, renamethis+state)
        if "DYc" in histoname:
          print "Renaming:",histoname,"->",histoname.replace("DYc", "DY")
          histo.SetNameTitle(histoname.replace("DYc", "DY"), histoname.replace("DYc", "DY"))
        histo.Write()
  newfile2.Close()
  #newfile.Close()

print "Done!"
exit(0)
