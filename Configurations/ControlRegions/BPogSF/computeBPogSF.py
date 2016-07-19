#!/usr/bin/env python

import sys
import copy
import os

import math

import numpy as np

from ROOT import *

from scipy import linalg

import csv


def execFile(file_name):
  if os.path.exists(file_name):
    handle = open(file_name, 'r')
    exec(handle) in globals()
    handle.close()
  else:
    print "!!! ERROR filei", file_name, "does not exist."

def compute(frac_b_TopCr, eff_b_TopCr, eff_l_TopCr, 
            frac_b_ZCr, eff_b_ZCr, eff_l_ZCr, 
            eff_TopCr, eff_ZCr, 
            err2_eff_TopCr, err2_eff_ZCr):
  A = np.array([ [frac_b_TopCr*eff_b_TopCr, (1.-frac_b_TopCr)*eff_l_TopCr],
                 [frac_b_ZCr*eff_b_ZCr,     (1.-frac_b_ZCr)*eff_l_ZCr    ] ])
  b = np.array([eff_TopCr, eff_ZCr])
  V = np.array([[err2_eff_TopCr, 0.],[0., err2_eff_ZCr]])

  Ainv = np.linalg.inv(A)

  sfs = np.linalg.solve(A, b)

  ssfCov = np.dot(np.dot(Ainv.transpose(),V),Ainv)
  
  return {"b": {"sf": sfs[0], "errStat": math.sqrt(ssfCov[0,0])}, 
          "c": {"sf": sfs[0], "errStat": math.sqrt(ssfCov[0,0])}, 
          "l": {"sf": sfs[1], "errStat": math.sqrt(ssfCov[1,1])}} 


def getBFractionZ(histo):
  #from SMP-13-004 Table 5 Madgraph 5f vs 4f -> 15%
  central = histo.GetBinContent(2)/histo.Integral()
  up   = histo.GetBinContent(2)*(1.+0.15)/histo.Integral()
  down = histo.GetBinContent(2)*(1.-0.15)/histo.Integral()
  return central, up, down

def getBFractionTop(histo, histo_tWUp,  histo_tWDown):
  central = histo.GetBinContent(2)/histo.Integral()
  up = histo_tWUp.GetBinContent(2)/histo_tWUp.Integral()
  down = histo_tWDown.GetBinContent(2)/histo_tWDown.Integral()
  return central, up, down 

def getFraction(histo):
  central = histo.GetBinContent(2)/histo.Integral()
  return central

def getMC(samples, rootfile, cut, plotName):

  for isample,sample in enumerate(samples.keys()):
    if isample == 0:
      print cut+"/"+plotName+"/histo_"+sample
      output       = rootfile.Get(cut+"/"+plotName+"/histo_"+sample).Clone()
      outputSTUp   = rootfile.Get(cut+"/"+plotName+"/histo_"+sample).Clone()
      outputSTDown = rootfile.Get(cut+"/"+plotName+"/histo_"+sample).Clone()
      if sample == "singletop":
        outputSTUp.Scale(1.+0.08)
        outputSTDown.Scale(1.-0.08)
    else:
      print cut+"/"+plotName+"/histo_"+sample
      histo = rootfile.Get(cut+"/"+plotName+"/histo_"+sample)
      histoUp = histo.Clone()
      histoDown = histo.Clone()
      if sample == "singletop":
        histoUp.Scale(1.+0.17)
        histoDown.Scale(1.-0.17)
      output.Add(histo)
      outputSTUp.Add(histoUp)
      outputSTDown.Add(histoDown)

  return output, outputSTUp, outputSTDown  


def computeSF(binSuffix, nickname, wpname, mcsamples, datasamples, rootfile):
  print binSuffix, nickname, wpname
  #for a given bin in pt, eta, a given tagger and WP do stuff.
  #for Top Cr use the second jet (_2 suffix below)
  #get the MC sum discriminator plot in two bins, with the cut corresponding to the needed WP, for heavy flavor 
  totalmcTopCrH, totalmcTopCrH_tWUp, totalmcTopCrH_tWDown          = getMC(mcsamples, rootfile, "Topem"+binSuffix+"_Heavy", nickname+wpname+"_2")
  #get the MC sum discriminator plot in two bins, with the cut corresponding to the needed WP, for light flavor 
  totalmcTopCrL, totalmcTopCrHL_tWUp, totalmcTopCrL_tWDown         = getMC(mcsamples, rootfile, "Topem"+binSuffix+"_Light", nickname+wpname+"_2")
  #get the MC sum composition plot, where 1 ins b or c, 0 is light 
  compositionTopCr, compositionTopCr_tWUp, compositionTopCr_tWDown = getMC(mcsamples, rootfile, "Topem"+binSuffix, "flavor_2")
  #get the discriminator plot on data 
  dataTopCr, notNeeded1, notNeeded2                                = getMC(datasamples, rootfile, "Topem"+binSuffix, nickname+wpname+"_2")

  #relate data and MC as follows:
  # eff_TopCr = frac_b_TopCr*eff_b_TopCr*SFb + (1-frac_b_TopCr)*eff_l_TopCr*SFl
  eff_b_TopCr  = getFraction(totalmcTopCrH)
  eff_l_TopCr  = getFraction(totalmcTopCrL)
  eff_TopCr    = getFraction(dataTopCr)
  err2_eff_TopCr = eff_TopCr*(1.-eff_TopCr)/dataTopCr.Integral()
  frac_b_TopCr, frac_b_TopCrUp, frac_b_TopCrDown = getBFractionTop(compositionTopCr, compositionTopCr_tWUp, compositionTopCr_tWDown)
  print "eff_b_TopCr", eff_b_TopCr, "eff_l_TopCr", eff_l_TopCr, "eff_TopCr", eff_TopCr, "frac_b_TopCr", frac_b_TopCr

  #for Z Cr use the first jet (_1 suffix below)
  totalmcZCrH, notNeeded3, notNeeded4      = getMC(mcsamples, rootfile, "Z"+binSuffix+"_Heavy", nickname+wpname+"_1")
  totalmcZCrL, notNeeded5, notNeeded6      = getMC(mcsamples, rootfile, "Z"+binSuffix+"_Light", nickname+wpname+"_1")
  compositionZCr,  notNeeded7, notNeeded8  = getMC(mcsamples, rootfile, "Z"+binSuffix, "flavor_1")
  dataZCr,  notNeeded9, notNeeded10        = getMC(datasamples, rootfile, "Z"+binSuffix, nickname+wpname+"_1")

  #relate data and MC as follows:
  # eff_ZCr = frac_b_TopCr*eff_b_TopCr*SFb + (1-frac_b_TopCr)*eff_l_TopCr*SFl
  eff_b_ZCr    = getFraction(totalmcZCrH)
  eff_l_ZCr    = getFraction(totalmcZCrL)
  print dataZCr
  eff_ZCr      = getFraction(dataZCr)
  err2_eff_ZCr = eff_ZCr*(1.-eff_ZCr)/dataZCr.Integral()
  frac_b_ZCr, frac_b_ZCrUp, frac_b_ZCrDown = getBFractionZ(compositionZCr)
  print "eff_b_ZCr", eff_b_ZCr, "eff_l_ZCr", eff_l_ZCr, "eff_ZCr", eff_ZCr, "frac_b_ZCr", frac_b_ZCr

  output = {}
  sf_central = compute(frac_b_TopCr, eff_b_TopCr, eff_l_TopCr, 
                       frac_b_ZCr, eff_b_ZCr, eff_l_ZCr, 
                       eff_TopCr, eff_ZCr, 
                       err2_eff_TopCr, err2_eff_ZCr)
  sf_tWUp    = compute(frac_b_TopCrUp, eff_b_TopCr, eff_l_TopCr, 
                       frac_b_ZCr, eff_b_ZCr, eff_l_ZCr, 
                       eff_TopCr, eff_ZCr, 
                       err2_eff_TopCr, err2_eff_ZCr) 
  sf_tWDown  = compute(frac_b_TopCrDown, eff_b_TopCr, eff_l_TopCr,
                       frac_b_ZCr, eff_b_ZCr, eff_l_ZCr,
                       eff_TopCr, eff_ZCr,
                       err2_eff_TopCr, err2_eff_ZCr) 

  sf_ZUp     = compute(frac_b_TopCr, eff_b_TopCr, eff_l_TopCr,
                       frac_b_ZCrUp, eff_b_ZCr, eff_l_ZCr,
                       eff_TopCr, eff_ZCr,
                       err2_eff_TopCr, err2_eff_ZCr)
  sf_ZDown   = compute(frac_b_TopCr, eff_b_TopCr, eff_l_TopCr,
                       frac_b_ZCrDown, eff_b_ZCr, eff_l_ZCr,
                       eff_TopCr, eff_ZCr,
                       err2_eff_TopCr, err2_eff_ZCr)
  
  output["central"] = sf_central
  output["tWUp"]    = sf_tWUp
  output["tWDown"]  = sf_tWDown
  output["central"] = sf_central
  output["ZUp"]     = sf_ZUp
  output["ZDown"]   = sf_ZDown  

  return output


def getSFEnvelope(sf):
  for flavor in ["b", "c", "l"]:
    tWError = max(abs(sf["tWUp"][flavor]["sf"] - sf["central"][flavor]["sf"]), abs(sf["tWDown"][flavor]["sf"] - sf["central"][flavor]["sf"]))
    ZError  = max(abs(sf["ZUp"][flavor]["sf"] - sf["central"][flavor]["sf"]), abs(sf["ZDown"][flavor]["sf"] - sf["central"][flavor]["sf"]))
    stat    = sf["central"][flavor]["errStat"]

    total = math.sqrt(tWError**2+ZError**2+stat**2)
    sf["central"][flavor]["errTot"] = total




if __name__ == '__main__':

  rootfile = TFile(sys.argv[1]  )

  execFile("bins.py")
  execFile("wps.py")
  samples={}
  execFile("samples.py")

  mcsamples = copy.deepcopy(samples)
  if "DATA" in mcsamples:
    del mcsamples["DATA"]
  datasamples = copy.deepcopy(samples)
  for key in datasamples.keys():
    if key != "DATA":
      del datasamples[key]


  print datasamples
  lines = {}

  
  for ipt in range(len(ptranges)-1):
    for ieta in range(len(etaranges)-1):
      ptmin  = str(ptranges[ipt])
      ptmax  = str(ptranges[ipt+1])
      ptmaxName = ptmax if ptranges[ipt+1] != -1 else "inf"
      ptmaxNumber= ptmax if ptranges[ipt+1] != -1  else 10000
      etamin = str(etaranges[ieta])
      etamax = str(etaranges[ieta+1])
      binSuffix = "_pt_"+ptmin+"_"+ptmaxName+"_eta_"+etamin+"_"+etamax 
      for ialgo, algo in enumerate(algos):
        wp = wps[nicknames[ialgo]]
        nickname = nicknames[ialgo]
        if nickname not in lines.keys():
          lines[nickname]=[]
          lines[nickname].append([nickname+"; OperatingPoint", "measurementType", "sysType", "jetFlavor", "etaMin", "etaMax", "ptMin", "ptMax", "discrMin", "discrMax", "formula"])
        for wpname in wp.keys():
          print "*"*76
          sf = computeSF(binSuffix, nickname,wpname, mcsamples, datasamples, rootfile)
          getSFEnvelope(sf)
          print "\\begin{table}"
          print "\\begin{tabular}{c|c|c|c|c|c|}"
          print "flavor & SF & stat & tW & Z & total\\\\"
          print "\\hline"
          print "b & ", "{:.4f}".format(sf["central"]["b"]["sf"]), "&", "{:.4f}".format(sf["central"]["b"]["errStat"]), \
                 " & +","{:.4f}".format(abs(sf["tWUp"]["b"]["sf"]-sf["central"]["b"]["sf"])),"-","{:0.4f}".format(abs(sf["central"]["b"]["sf"]-sf["tWDown"]['b']["sf"])), \
                 " & +","{:.4f}".format(abs(sf["ZUp"]["b"]["sf"] -sf["central"]["b"]["sf"])),"-","{:.4f}".format(abs(sf["central"]["b"]["sf"]-sf["ZDown"]['b']["sf"])), \
                 " & +/-", "{:.4f}".format(sf["central"]["b"]["errTot"])+"\\\\"
          print "l & ", "{:.4f}".format(sf["central"]["l"]["sf"]), "&", "{:.4f}".format(sf["central"]["l"]["errStat"]), \
                 " & +","{:.4f}".format(abs(sf["tWUp"]["l"]["sf"]-sf["central"]["l"]["sf"])),"-","{:.4f}".format(abs(sf["central"]["l"]["sf"]-sf["tWDown"]['l']["sf"])), \
                 " & +","{:.4f}".format(abs(sf["ZUp"]["l"]["sf"] -sf["central"]["l"]["sf"])),"-","{:.4f}".format(abs(sf["central"]["l"]["sf"]-sf["ZDown"]['l']["sf"])), \
                 " & +/-", "{:.4f}".format(sf["central"]["l"]["errTot"])+"\\\\"
          print "\\hline"
          print "\\end{tabular}"
          print "\\caption{SF for %s WP %s, pt bin[%s, %s], etabin [%s, %s]}" %(nickname, wpname, ptmin, ptmaxName, etamin, etamax)     
          print "\\end{table}"
          if wpname=="L":
            operatingPoint = 0
          if wpname=="M": 
            operatingPoint = 1
          if wpname=="T":
            operatingPoint = 2  
          lines[nickname].append([operatingPoint, "hww", "central", 0, etaranges[ieta], etaranges[ieta+1], ptranges[ipt], ptmaxNumber, -1, 1, sf["central"]["b"]["sf"]])       
          lines[nickname].append([operatingPoint, "hww", "up", 0, etaranges[ieta], etaranges[ieta+1], ptranges[ipt], ptmaxNumber, -1, 1, sf["central"]["b"]["sf"]+sf["central"]["b"]["errTot"]])       
          lines[nickname].append([operatingPoint, "hww", "down", 0, etaranges[ieta], etaranges[ieta+1], ptranges[ipt], ptmaxNumber, -1, 1, sf["central"]["b"]["sf"]-sf["central"]["b"]["errTot"]])
          
          lines[nickname].append([operatingPoint, "hww", "central", 1, etaranges[ieta], etaranges[ieta+1], ptranges[ipt], ptmaxNumber, -1, 1, sf["central"]["c"]["sf"]])
          lines[nickname].append([operatingPoint, "hww", "up", 1, etaranges[ieta], etaranges[ieta+1], ptranges[ipt], ptmaxNumber, -1, 1, sf["central"]["c"]["sf"]+sf["central"]["c"]["errTot"]])
          lines[nickname].append([operatingPoint, "hww", "down", 1, etaranges[ieta], etaranges[ieta+1], ptranges[ipt], ptmaxNumber, -1, 1, sf["central"]["c"]["sf"]-sf["central"]["c"]["errTot"]])                
          lines[nickname].append([operatingPoint, "hww", "central", 2, etaranges[ieta], etaranges[ieta+1], ptranges[ipt], ptmaxNumber, -1, 1, sf["central"]["l"]["sf"]])
          lines[nickname].append([operatingPoint, "hww", "up", 2, etaranges[ieta], etaranges[ieta+1], ptranges[ipt], ptmaxNumber, -1, 1, sf["central"]["l"]["sf"]+sf["central"]["l"]["errTot"]])
          lines[nickname].append([operatingPoint, "hww", "down", 2, etaranges[ieta], etaranges[ieta+1], ptranges[ipt], ptmaxNumber, -1, 1, sf["central"]["l"]["sf"]-sf["central"]["l"]["errTot"]])                
  for algo in lines.keys():
    with open(algo+'.csv', 'wb') as f:
      writer = csv.writer(f)
      writer.writerows(lines[algo])
