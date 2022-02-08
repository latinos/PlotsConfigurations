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

GetDone = False

if not GetDone:
 for roo in rootdict:
  allnuis[roo] = {'Others': {}}
  for r in relevant:
    allnuis[roo][r] = {}
  newfile = ROOT.TFile(rootdict[roo].replace(".root", "_new3.root"), 'read')
  for categories in newfile.GetListOfKeys(): # Cut directory
    catname = categories.GetName()
    if "high" in catname:
      whatcateg = 2
    elif "_dy_" in catname or "_top_" in catname:
      whatcateg = 0
    else:
      whatcateg = 1
    category = newfile.GetDirectory(catname)
    for r in relevant+['Others']:
      allnuis[roo][r][catname] = {}
    for variables in category.GetListOfKeys(): # Variable directory
      varname = variables.GetName()
      if not ( (whatcateg == 0 and varname == "events") or (whatcateg == 1 and "binning" in varname and "DNN_mth" in varname and "high" not in varname) or (whatcateg == 2 and "DNN_mth" in varname and "binning" in varname and "high" in varname) ): continue
      variable = category.GetDirectory(varname)
      print "Reading from", roo, catname, varname
      for histo in variable.GetListOfKeys(): # nominal Histograms
        histoname = histo.GetName()
        for r in relevant:
          if histoname=="histo_"+r:
            allnuis[roo][r][catname]['nom'] = variable.Get(histoname).Integral()
        if histoname.endswith("Up") or histoname.endswith("Down"):
          sysname = histoname.replace("histo_","")
          sysname = sysname[sysname.find("_")+1:]
          yes = False
          for r in relevant:
            if histoname.startswith("histo_"+r+"_"):
              allnuis[roo][r][catname][sysname] = variable.Get(histoname).Integral()
              yes = True
          if not yes:
            allnuis[roo]['Others'][catname][sysname] = 0
      #break # Intergral should be the same for each variable; do only one
  newfile.Close()

 with open('FixSysNorms_FactorsTEMPDELME.json','w') as f:
  json.dump(allnuis, f)

else:
 with open('FixSysNorms_FactorsTEMPDELME.json') as f:
  allnuis = json.load(f)

oldnuis = copy.deepcopy(allnuis)
for r in relevant:
  for y in oldnuis:
    for c in oldnuis[y][r]:
      for s in oldnuis[y][r][c]:
        if s=="nom": continue
        # Check if certain nuisance is exclusive to relevant background. Remove if it's not.
        deld = False
        for r2 in relevant+['Others']:
          if r==r2 or (r in ['DY','DYemb'] and r2 in ['DY','DYemb']) or (r in ['WW','WW2J'] and r2 in ['WW','WW2J']) : continue
          for y2 in oldnuis:
            for c2 in oldnuis[y2][r2]:
              for s2 in oldnuis[y2][r2][c2]:
                if s==s2:
                  del allnuis[y][r][c][s]
                  deld = True
                if deld: break
              if deld: break
            if deld: break
          if deld: break

for y in allnuis:
  del allnuis[y]['Others']

nuisToConsider = {}
for r in relevant:
  nuisToConsider[r] = []
  for y in allnuis:
    for c in allnuis[y][r]:
      for s in allnuis[y][r][c]:
        print y,",",r,",",c,",",s
        if s=="nom": continue
        s = s.replace("Up","").replace("Down","")
        if s not in nuisToConsider[r]: nuisToConsider[r].append(s)
  nuisToConsider[r] = sorted(nuisToConsider[r])

print nuisToConsider

scaleby = {}
categs = ['ggh','vbf','notag']

# Top is by itself, rateparam divided by 2016 / 2017+18. Relevant nuisances are all correlated by year
r = "top"
scaleby[r] = {}
print nuisToConsider[r]
for s in nuisToConsider[r]:
  #yset = [[y for y in rootdict if "2016" in y], [y for y in rootdict if ("2017" in y) or ("2018" in y)]]
  yset = [[y] for y in rootdict] # Split all rateparams
  for years in yset:
   for categ in categs:
    if years==[]: continue
    UP = 0.0
    NOM = 0.0
    DOWN = 0.0
    for y in years:
      for c in allnuis[y][r]:
        if categ not in c: continue
        ts = s
        if "2016" in ts and ("2017" in y or "2018" in y): continue
        if "2016" in y and ("2017" in ts or "2018" in ts): continue
        if "2017" in ts and ("2016" in y or "2018" in y): continue
        if "2017" in y and ("2016" in ts or "2018" in ts): continue
        if "2018" in ts and ("2017" in y or "2016" in y): continue
        if "2018" in y and ("2017" in ts or "2016" in ts): continue
        print "=========="
        print y,",",r,",",c,",",s
        print allnuis[y][r][c]
        UP += allnuis[y][r][c][ts+"Up"]
        NOM += allnuis[y][r][c]["nom"]
        DOWN += allnuis[y][r][c][ts+"Down"]
    if NOM==0.0: continue
    print "Total",s,",",UP,",",NOM,",",DOWN
    UP = NOM/UP
    DOWN = NOM/DOWN
    for y in years:
      if y not in scaleby[r]: scaleby[r][y] = {}
      if categ not in scaleby[r][y]: scaleby[r][y][categ] = {}
      scaleby[r][y][categ][s] = {"Up": UP, "Down": DOWN}

# Same for DY in ee/mumu. All but QCD nuisance uncorrelated by years. Still, 17+18 should be scaled by same factor, because shared rateparam.
r = "DY"
scaleby[r] = {}
print nuisToConsider["DY"]
for s in nuisToConsider["DY"]:
  #yset = [[y for y in rootdict if ("2016" in y) and ("em" not in y)], [y for y in rootdict if (("2017" in y) or ("2018" in y)) and ("em" not in y)]]
  yset = [[y] for y in rootdict if "em" not in y] # Split all rateparams
  for years in yset:
   for categ in categs:
    if years==[]: continue
    UP = 0.0
    NOM = 0.0
    DOWN = 0.0
    for y in years:
      for c in allnuis[y][r]:
        if categ not in c: continue
        if "embed" in s and "em" not in c: continue
        ts = s
        if "2016" in ts and ("2017" in y or "2018" in y): continue
        if "2016" in y and ("2017" in ts or "2018" in ts): continue
        if "2017" in ts and ("2016" in y or "2018" in y): continue
        if "2017" in y and ("2016" in ts or "2018" in ts): continue
        if "2018" in ts and ("2017" in y or "2016" in y): continue
        if "2018" in y and ("2017" in ts or "2016" in ts): continue
        print "=========="
        print y,",",r,",",c,",",s
        print allnuis[y][r][c]
        UP += allnuis[y][r][c][ts+"Up"]
        NOM += allnuis[y][r][c]["nom"]
        DOWN += allnuis[y][r][c][ts+"Down"]
    if NOM==0.0: continue
    print "Total",s,",",UP,",",NOM,",",DOWN
    UP = NOM/UP
    DOWN = NOM/DOWN
    for y in years:
      if y not in scaleby[r]: scaleby[r][y] = {}
      if categ not in scaleby[r][y]: scaleby[r][y][categ] = {}
      scaleby[r][y][categ][s] = {"Up": UP, "Down": DOWN}

if True:
  # WW2J has no individual components. Do only WW, which is only the special resum/scale unc:
  r = "WW"
  scaleby[r] = {}
  print nuisToConsider[r]
  for s in nuisToConsider[r]:
    #yset = [[y for y in rootdict if "2016" in y], [y for y in rootdict if ("2017" in y) or ("2018" in y)]]
    yset = [[y for y in rootdict if "2016" in y], [y for y in rootdict if "2017" in y], [y for y in rootdict if "2018" in y]] # Only correlate by FS now
    for years in yset:
     for categ in categs:
      if years==[]: continue
      UP = 0.0
      NOM = 0.0
      DOWN = 0.0
      for y in years:
        for c in allnuis[y][r]:
          if categ not in c: continue
          ts = s
          if "2016" in ts and ("2017" in y or "2018" in y): continue
          if "2016" in y and ("2017" in ts or "2018" in ts): continue
          if "2017" in ts and ("2016" in y or "2018" in y): continue
          if "2017" in y and ("2016" in ts or "2018" in ts): continue
          if "2018" in ts and ("2017" in y or "2016" in y): continue
          if "2018" in y and ("2017" in ts or "2016" in ts): continue
          if s+"Up" not in allnuis[y][r][c]: continue # Check of nuis of wrong category
          UP += allnuis[y][r][c][ts+"Up"]
          NOM += allnuis[y][r][c]["nom"]
          DOWN += allnuis[y][r][c][ts+"Down"]
      if NOM==0.0: continue
      print "Total",s,",",UP,",",NOM,",",DOWN
      UP = NOM/UP
      DOWN = NOM/DOWN
      for y in years:
        if y not in scaleby[r]: scaleby[r][y] = {}
        if categ not in scaleby[r][y]: scaleby[r][y][categ] = {}
        scaleby[r][y][categ][s] = {"Up": UP, "Down": DOWN}

  # DYemb has only the veto unc:
  r = "DYemb"
  scaleby[r] = {}
  print nuisToConsider[r]
  for s in nuisToConsider[r]:
    #yset = [[y for y in rootdict if ("2016" in y) and ("em" in y)], [y for y in rootdict if (("2017" in y) or ("2018" in y)) and ("em" in y)]]
    yset = [[y] for y in rootdict if "em" in y] # Split all rateparams
    for years in yset:
     for categ in categs:
      if years==[]: continue
      UP = 0.0
      NOM = 0.0
      DOWN = 0.0
      for y in years:
        for c in allnuis[y][r]:
          if categ not in c: continue
          ts = s
          if "2016" in ts and ("2017" in y or "2018" in y): continue
          if "2016" in y and ("2017" in ts or "2018" in ts): continue
          if "2017" in ts and ("2016" in y or "2018" in y): continue
          if "2017" in y and ("2016" in ts or "2018" in ts): continue
          if "2018" in ts and ("2017" in y or "2016" in y): continue
          if "2018" in y and ("2017" in ts or "2016" in ts): continue
          UP += allnuis[y][r][c][ts+"Up"]
          NOM += allnuis[y][r][c]["nom"]
          DOWN += allnuis[y][r][c][ts+"Down"]
      if NOM==0.0: continue
      print "Total",s,",",UP,",",NOM,",",DOWN
      UP = NOM/UP
      DOWN = NOM/DOWN
      for y in years:
        if y not in scaleby[r]: scaleby[r][y] = {}
        if categ not in scaleby[r][y]: scaleby[r][y][categ] = {}
        scaleby[r][y][categ][s] = {"Up": UP, "Down": DOWN}

  # Other DYOF parts:
  r = "DY"
  print nuisToConsider[r]
  for s in nuisToConsider[r]:
    if "mllRew" in s or "DYrecoil_accept" in s: continue # This shouldn't even be here!
    #yset = [[y for y in rootdict if ("2016" in y) and ("em" in y)], [y for y in rootdict if (("2017" in y) or ("2018" in y)) and ("em" in y)]]
    yset = [[y] for y in rootdict if "em" in y] # Split all rateparams
    for years in yset:
     for categ in categs:
      if years==[]: continue
      UP = 0.0
      NOM = 0.0
      DOWN = 0.0
      for y in years:
        for c in allnuis[y][r]:
          if categ not in c: continue
          ts = s
          if "2016" in ts and ("2017" in y or "2018" in y): continue
          if "2016" in y and ("2017" in ts or "2018" in ts): continue
          if "2017" in ts and ("2016" in y or "2018" in y): continue
          if "2017" in y and ("2016" in ts or "2018" in ts): continue
          if "2018" in ts and ("2017" in y or "2016" in y): continue
          if "2018" in y and ("2017" in ts or "2016" in ts): continue
          if ts+"Up" not in allnuis[y][r][c]: continue # Check of DYSF nuis
          UP += allnuis[y][r][c][ts+"Up"]
          NOM += allnuis[y][r][c]["nom"]
          DOWN += allnuis[y][r][c][ts+"Down"]
      if NOM==0.0: continue
      print "Total",s,",",UP,",",NOM,",",DOWN
      UP = NOM/UP
      DOWN = NOM/DOWN
      for y in years:
        if y not in scaleby[r]: scaleby[r][y] = {}
        if categ not in scaleby[r][y]: scaleby[r][y][categ] = {}
        scaleby[r][y][categ][s] = {"Up": UP, "Down": DOWN}

print scaleby
with open('FixSysNorms_Factors2.json','w') as f:
  json.dump(scaleby, f)

#Apply scales to new rootfile.
for roo in []: #rootdict: #Do this in seperate step
  y = roo
  newfile = ROOT.TFile(rootdict[roo].replace(".root", "_new2.root"), 'read')
  newfile2 = ROOT.TFile(rootdict[roo].replace(".root", "_new3.root"), 'recreate')
  for categories in newfile.GetListOfKeys(): # Cut directory
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
                if histoname.endswith("Up"): histo.Scale(scaleby[r][y][s]["Up"])
                if histoname.endswith("Down"): histo.Scale(scaleby[r][y][s]["Down"])
        histo.Write()
  newfile2.Close()
  newfile.Close()

print "Done!"
exit(0)
