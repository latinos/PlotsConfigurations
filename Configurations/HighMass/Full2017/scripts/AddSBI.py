#!/usr/bin/env python

import os
import ROOT
import sys
import re
#from time import time
#import psutil
#import gc

###
### Makes SBI shapes from relevant Signal, background and interference terms
### Run this after mkShapesMulti Hadd-step, and after doing correlated uncertainties, before mkPlot:
### "python scripts/AddSBI.py configuration_em.py"
###

CheckIntYield = 1

conf = sys.argv[1][:-3]

try:
  runnr1 = int(sys.argv[2])
except IndexError:
  runnr1 = 0
try:
  runnr2 = int(sys.argv[3])
except IndexError:
  runnr2 = 0

cwd = os.getcwd()
sys.path.append(".")
exec("from "+conf+" import *")

handle = open("massesAndModels.py",'r')
exec(handle)
handle.close()

rootfile = cwd + "/" + outputDir + "/" + "plots_" + tag + ".root"
origfile = rootfile.replace(".root", "_origSBI.root")

if runnr1==0 and runnr2==0:
  if not os.path.isfile(origfile):
    print "Making safety copy of original root file.."
    os.system("cp "+rootfile+" "+origfile)
  else:
    print "Retrieving safety copy of original root file.."
    os.system("cp "+origfile+" "+rootfile)
  print "Copy done"

readfile = ROOT.TFile(origfile, 'read')

fulldict = {'GGH':[], 'ggWW':[], 'ggH_hww':[], 'QQH':[], 'qqWWqq':[], 'qqH_hww':[]}
nominal = []
alluncs_gg = []
alluncs_qq = []
for run1,categories in enumerate(readfile.GetListOfKeys()): # Cut directory
  if run1<runnr1: continue
  category = readfile.GetDirectory(categories.GetName())
  for run2,variables in enumerate(category.GetListOfKeys()): # Variable directory
    if run2<runnr2: continue
    variable = category.GetDirectory(variables.GetName())
    print categories.GetName()+'/'+variables.GetName()


    if nominal == []: # Get all histograms on first pass
      for histo in variable.GetListOfKeys(): # Histogram names
        hname = histo.GetName()
        if "SBI" in hname: continue
        for sampletype in fulldict:
          if (sampletype in hname) and not ("MSSM" in hname) and not ("INT" in hname):
            if sampletype in ['GGH', 'QQH']:
              nameFormat = "histo_"+sampletype+"_([0-9]+)_"+model.replace("cprime","c").replace(".","").replace("BRnew","brn")+"(?P<nom>_|)(?P<unc>.*)"
            else:
              nameFormat = "histo_"+sampletype+"(?P<nom>_|)(?P<unc>.*)"
            pattern = re.match(nameFormat, hname)
            if pattern == None:
              print "Fail!"
              print nameFormat
              print categories.GetName(),'/',variables.GetName(),'/',hname
              exit()
            elif pattern.group("nom") == "" and sampletype in ['GGH', 'QQH']:
              nominal.append(hname)
            if pattern.group("nom")+pattern.group("unc") not in fulldict[sampletype]:
              fulldict[sampletype].append(pattern.group("nom")+pattern.group("unc"))
            break

      for alpha in fulldict:
        for beta in fulldict[alpha]:
          if alpha in ['GGH', 'ggWW', 'ggH_hww']:
            if beta not in alluncs_gg: alluncs_gg.append(beta)
          else:
            if beta not in alluncs_qq: alluncs_qq.append(beta)

    newfilewrite = ROOT.TFile(rootfile, 'update')
    newfilewrite.GetDirectory(categories.GetName()).GetDirectory(variables.GetName()).cd()
    variableTList = variable.GetListOfKeys()
    for name_sig in nominal:
     for mssm in [False]: #[False, True]: # Not doing two sets of signal shapes anymore
      if mssm: name_sig = name_sig.replace('GGH','MSSMGGH').replace('QQH','MSSMQQH')
      if 'GGH' in name_sig:
        name_int = name_sig.replace('GGH','GGHINT')
        name_sm = 'histo_ggH_hww'
        name_ww = 'histo_ggWW'
        alluncs = alluncs_gg
      else:
        name_int = name_sig.replace('QQH','QQHINT')
        name_sm = 'histo_qqH_hww'
        name_ww = 'histo_qqWWqq'
        alluncs = alluncs_qq
      for unc in alluncs:
        samp_sig = name_sig+unc if variableTList.Contains(name_sig+unc) else name_sig
        samp_int = name_int+unc if variableTList.Contains(name_int+unc) else name_int
        samp_sm = name_sm+unc if variableTList.Contains(name_sm+unc) else name_sm
        samp_ww = name_ww+unc if variableTList.Contains(name_ww+unc) else name_ww
        origsig = variable.Get(samp_sig)
        SBI = origsig.Clone()
        newname = SBI.GetName().replace('GGH','GGHSBI').replace('QQH','QQHSBI')
        if unc not in newname: newname = newname+unc
        SBI.SetNameTitle(newname, newname)
        SBI.Add(variable.Get(samp_int))
        SBI.Add(variable.Get(samp_sm))
        SBI.Add(variable.Get(samp_ww))
        SBI.Write()
        if CheckIntYield and unc=='':
          histo_int = variable.Get(samp_int)
          histo_sig = variable.Get(samp_sig)
          for alpha in range(1,histo_int.GetNbinsX()+1):
            if histo_int.GetBinContent(alpha)+histo_sig.GetBinContent(alpha)<-1.0:
              print "Negative Sig+Int!"
              print newname,", Bin",alpha
              print "Int is",histo_int.GetBinContent(alpha),"+/-",histo_int.GetBinError(alpha)

    newfilewrite.Close()

    # Disgustingly, need to recursively call the same script
    # Root apparently has known issues when working with files/directories containing too many histograms
    # As a result, not running recursively like this will exponentially increase runtime and memory usage
    if runnr2+1<len(category.GetListOfKeys()): os.system("python scripts/AddSBI.py "+sys.argv[1]+" "+str(runnr1)+" "+str(runnr2+1))
    elif runnr1+1<len(readfile.GetListOfKeys()): os.system("python scripts/AddSBI.py "+sys.argv[1]+" "+str(runnr1+1)+" 0")
    else: print "Done!"
    exit()

#print "Done!"
#exit(0)

