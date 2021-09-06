import ROOT
import sys
import os
import re
import math
import scipy.optimize
import copy

#ToMerge = {"DY": ["DY", "DYemb"], "Bkg": ["Fake_em", "Fake_me", "Fake_mm", "Fake_ee", "VVV", "VZ", "Vg", "WWewk", "VgS_H", "VgS_L", "ZH_hww", "WH_hww", "ggH_htt", "qqH_htt", "ZH_htt", "WH_htt"], "ggBkg": ["ggH_hww", "ggWW"], "qqBkg": ["qqH_hww", "qqWWqq"], "WW": ["WW", "WW2J"]}
ToMerge = {"DYc": ["DY", "DYemb"], "SM": ["ZH_hww", "WH_hww", "ggH_htt", "qqH_htt", "ZH_htt", "WH_htt"], "VV": ["VVV", "VZ", "Vg", "VgS_H", "VgS_L"]}

try:
  rootfile = sys.argv[1]
except IndexError:
  rootfile = 'v7_Full2016/rootFile_Full2016_ee/plots_Full2016_ee.root'

for y in ['2016', '2017', '2018']:
  if y in rootfile: year = y
for s in ['_em', '_mm', '_ee']:
  if s in rootfile: state = s

# Hardcoded lnN
if year=='2016':
  handle = open('FixMergeBackgrounds_16.py','r')
if year=='2017':
  handle = open('FixMergeBackgrounds_17.py','r')
if year=='2018':
  handle = open('FixMergeBackgrounds_18.py','r')
exec(handle)
handle.close()

if not os.path.exists(rootfile.replace(".root", "_new2.root")): exit()
newfile = ROOT.TFile(rootfile.replace(".root", "_new2.root"), 'read')
newfile2 = ROOT.TFile(rootfile.replace(".root", "_new3.root"), 'recreate')

for categories in newfile.GetListOfKeys(): # Cut directory
  category = newfile.GetDirectory(categories.GetName())
  newfile2.cd()
  newfile2.mkdir(categories.GetName())

  for variables in category.GetListOfKeys(): # Variable directory
    variable = category.GetDirectory(variables.GetName())
    newfile2.GetDirectory(categories.GetName()).cd()
    ROOT.gDirectory.mkdir(variables.GetName())
    newfile2.GetDirectory(categories.GetName()).GetDirectory(variables.GetName()).cd()

    print "==========",categories.GetName(),"/",variables.GetName(),"=========="
    histnames = {}
    for histoname_ in variable.GetListOfKeys(): # nominal Histograms
      histoname = histoname_.GetName()
      if not (histoname.endswith("Up") or histoname.endswith("Down")) and not ("INT" in histoname) and not (histoname.endswith("Var")): histnames[histoname] = []

    for histoname_ in variable.GetListOfKeys(): # up/down Histograms
      histoname = histoname_.GetName()
      if histoname.endswith("Up"):
        for key,val in histnames.iteritems():
          if histoname.startswith(key+"_"):
            if [histoname,histoname.replace("Up", "Down")] not in histnames[key]:
              histnames[key].append([histoname,histoname.replace("Up", "Down")])
              break

    for alpha in ToMerge: # Remove combination of MC DY with Embedded DY if it's not present:
      if "DYemb" in ToMerge[alpha] and "histo_DYemb" not in histnames:
        del ToMerge[alpha]
        break
    for alpha in ToMerge: # Also remove non-existing Fakes
      todel = []
      for beta in ToMerge[alpha]:
        if "Fake" in beta and "histo_"+beta not in histnames: todel.append(beta)
      for beta in todel:
        ToMerge[alpha].remove(beta)

    print ">>> Search for empty bins in nominals:"
    initialBinc = {}
    for nom in histnames:
      if "data" in nom or "DATA" in nom: continue # Blind!
      if "GGH" in nom or "QQH" in nom or "events" in variables.GetName() or "high" in variables.GetName(): continue # High mass
      histo = variable.Get(nom)
      spaces = " "*(len(max(histnames, key=len))-len(nom))
      initialBinc[nom] = []
      for i in range(histo.GetNbinsX()):
        thisbin = "X" if histo.GetBinContent(i+1) > 0.0 else "0"
        initialBinc[nom].append(thisbin)
      print nom[6:],":"+spaces,initialBinc[nom]
    #continue

    print ">>> Now merging..."
    for newname,parts in ToMerge.iteritems():
      allvars = {}# First get all nuisances: Do shapes exists for all parts?
      i = 0
      keyval = []
      for part in parts:
        keyval.append("1")
        if i>0: keyval[i-1]="0" # If a new process has shapes a previous process didn't set "0" for the previous processes
        i+=1
        for var in histnames["histo_"+part]:
          varname = var[0][len(part)+7:-2]
          if varname not in allvars:
            allvars[varname] = copy.deepcopy(keyval)
          else:
            allvars[varname].append("1")
        for varname in allvars: # Add "0" for new processes that don't have a shape nuisance from previous processes
          if len(allvars[varname])<i: allvars[varname].append("0")
      for n in nuisances: #Then check lnN: Turn these into shapes and then merge
        need = False
        for part in parts:
          if part in nuisances[n]['samples']: need = True
        if not need: continue
        allvars[nuisances[n]['name']] = []
        for part in parts:
          if part in nuisances[n]['samples']:
            lnupdn = nuisances[n]['samples'][part]
            if "/" not in lnupdn: lnupdn = lnupdn+"/"+str(1.0/float(lnupdn))
            allvars[nuisances[n]['name']].append(lnupdn)
          else:
            allvars[nuisances[n]['name']].append("0")

      merged = variable.Get("histo_"+parts[0]) # Now merge the nominals
      merged.SetNameTitle("histo_"+newname, "histo_"+newname)
      for part in parts:
        if part == parts[0]: continue
        merged.Add(variable.Get("histo_"+part))
      merged.Write()
      for var in sorted(allvars): # And merge all variations
        for direction in ["Up", "Down"]:
          for i,part in enumerate(parts):
            if i==0:
              if allvars[var][i]=="0":
                merged = variable.Get("histo_"+part)
              elif allvars[var][i]=="1":
                merged = variable.Get("histo_"+part+"_"+var+direction)
              else:
                lnn = float(allvars[var][i].split("/")[0]) if direction=="Up" else float(allvars[var][i].split("/")[1])
                merged = variable.Get("histo_"+part)
                merged.Add(merged, merged, lnn, 0)
              merged.SetNameTitle("histo_"+newname+"_"+var+direction, "histo_"+newname+"_"+var+direction)
            else:
              if allvars[var][i]=="0":
                merged.Add(variable.Get("histo_"+part))
              elif allvars[var][i]=="1":
                merged.Add(variable.Get("histo_"+part+"_"+var+direction))
              else:
                lnn = float(allvars[var][i].split("/")[0]) if direction=="Up" else float(allvars[var][i].split("/")[1])
                merged.Add(variable.Get("histo_"+part), lnn)
          merged.Write()

      for part in parts: # Clean up
        del histnames["histo_"+part]
      histnames["histo_"+newname] = []
      for var in allvars:
        histnames["histo_"+newname].append(["histo_"+newname+"_"+var+"Up","histo_"+newname+"_"+var+"Down"])


    print ">>> Copying all remaining unmerged histos..."
    for nom,var in sorted(histnames.iteritems()):
      skip = False
      for alpha,beta in ToMerge.iteritems():
        if nom[6:] in beta: skip = True
      if skip: continue
      dothese = [nom]
      for val in sorted(var):
        dothese.append(val[0])
        dothese.append(val[1])
      for histoname in dothese:
        histo = variable.Get(histoname)
        histo.Write()

    print ">>> Search for empty bins in NEW nominals:"
    initialBinc = {}
    for nom in histnames:
      if "data" in nom or "DATA" in nom: continue # Blind!
      if "GGH" in nom or "QQH" in nom or "events" in variables.GetName() or "high" in variables.GetName(): continue # High mass
      histo = variable.Get(nom)
      spaces = " "*(len(max(histnames, key=len))-len(nom))
      initialBinc[nom] = []
      for i in range(histo.GetNbinsX()):
        thisbin = "X" if histo.GetBinContent(i+1) > 0.0 else "0"
        initialBinc[nom].append(thisbin)
      print nom[6:],":"+spaces,initialBinc[nom]

print "Closing..."
newfile2.Close()
#print "Closing1..." # This takes too long for some reason!
#newfile.Close()
print "Done!"
exit(0)
