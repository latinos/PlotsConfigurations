#!/usr/bin/env python

import sys
import re
import os.path
from optparse import OptionParser
from math import sqrt,fabs
from collections import OrderedDict
import CMS_lumi, tdrstyle
import numpy as np

import ROOT
ROOT.gSystem.Load("libHiggsAnalysisCombinedLimit")

from HiggsAnalysis.CombinedLimit.DatacardParser import *

## Style features
tdrstyle.setTDRStyle()

parser = OptionParser()
#parser.add_option("-s", "--stat",   dest="stat",          default=False, action="store_true")  # ignore systematic uncertainties to consider statistical uncertainties only
parser.add_option("-s", "--sr", action="store", type="string", dest="sr", default="2j")

(options, args) = parser.parse_args()
options.bin = True # fake that is a binary output, so that we parse shape lines
options.noJMax = False
options.nuisancesToExclude = ''
options.verbose = False
options.stat = False

sr = options.sr

print('sr : ', sr)

STXSbins=[
    'WH_hww_PTV_LT150','WH_hww_PTV_GT150'
]

sampleNames = OrderedDict()
for cat in STXSbins:
    sampleNames[cat] = 0.

DC = parseCard(file(args[0]), options)

signals_orig     = DC.list_of_signals()

signals = []
totalSignal = OrderedDict()

# choose here what signals you want to show
for j,value in sampleNames.items():
    for s in signals_orig:
        if j!=s: continue
        if 'WH_hww' in s:
            if 'FWDH' in s: continue
            if 'htt' in s: continue
            signals.append(j)
            totalSignal[j] = value

print signals
print totalSignal
print ""

overallSignalRate = OrderedDict()
overallTotalSignal = OrderedDict()
channels_orig = DC.exp
channels = OrderedDict()

for i in sorted(channels_orig):
    channels[i] = channels_orig[i]

for j,value in sampleNames.items():
    q=j.split('WH_hww_')[1]
    for c in channels:
        #filter chunck of list
        if "Top" in c or "DYtt" in c or "WW" in c or "wh3l_wz" in c or "wh3l_zg" in c or "zh4l_ZZ" in c: continue
        if 'LT' in q:
            q='PTV_LE150'
        if q not in c: continue
        overallSignalRate[c] = OrderedDict()
        overallTotalSignal[c] = 0.
        for s in signals:
            overallSignalRate[c][s] = 0.
            if s not in channels[c].keys(): continue
            overallSignalRate[c][s] +=  channels[c][s]
            overallTotalSignal[c] += channels[c][s]
            totalSignal[s] += channels[c][s]

print overallSignalRate
print overallTotalSignal

ncat=0
combChannelsToConsider = []
for j,value in sampleNames.items():
    q=j.split('WH_hww_')[1]
    for k in channels:
        if 'LT' in q:
            q='PTV_LE150'
        if q not in k: continue
        if "Top" in k or "DYtt" in k or "WW" in k or "wh3l_wz" in k or "wh3l_zg" in k or "zh4l_ZZ" in k: continue
        if "FWDH" in k: continue
        if sr not in k: continue
        if "ee" in k: continue
        if overallTotalSignal[k] == 0: continue
        ncat+=1
        combChannelsToConsider.append(k)
    print k

matrixByCol = ROOT.TH2F("matrixByCol","matrixByCol",len(combChannelsToConsider),0,len(combChannelsToConsider),len(signals),0,len(signals))

matrixByCol.GetXaxis().SetLabelSize(0.04)
matrixByCol.GetYaxis().SetLabelSize(0.04)
matrixByCol.GetYaxis().SetTitleSize(0.05)
matrixByCol.GetYaxis().SetTitleOffset(1.1)
matrixByCol.GetZaxis().SetRangeUser(0,1)
matrixByCol.SetTitle("")
matrixByCol.SetStats(0)

events = {}
#ROOT.TColor.SetPalette(51)
#cols = ROOT.TColor.GetPalette()
stops = [0.00, 0.5, 1.00]
red   = [1.00, 0, 1.00]
green = [1.00, 0, 0.00]
blue  = [1.00, 1.0, 0.00]
s = np.array(stops)
r = np.array(red)
g = np.array(green)
b = np.array(blue)
ROOT.TColor.CreateGradientColorTable(len(s), s, r, g, b, 99)
ROOT.gStyle.SetNumberContours(99)

for i,c in enumerate(combChannelsToConsider):
#  if overallTotalSignal[c] == 0: continue
  matrixByCol.GetXaxis().SetBinLabel(i+1,c)
  for num,s in enumerate(overallSignalRate[c]):
    matrixByCol.GetYaxis().SetBinLabel(num+1,s)
    #if ratio < 0.005: ratio=0
    print c, s, overallSignalRate[c][s], overallTotalSignal[c], totalSignal[s]
    ratioByCol = overallSignalRate[c][s]/overallTotalSignal[c]
    if (totalSignal[s]>0):
      ratioByRow = overallSignalRate[c][s]/totalSignal[s]
    else : ratioByRow= 0
    matrixByCol.SetBinContent(i+1,num+1,ratioByCol)
    print "category ", c," ", " signal ",s," signal fraction = ",overallSignalRate[c][s]/overallTotalSignal[c], " events = ", overallSignalRate[c][s]

#change the CMS_lumi variables (see CMS_lumi.py)
CMS_lumi.lumi_13TeV = "59.74 fb^{-1}"
CMS_lumi.writeExtraText = 1
CMS_lumi.extraText = "Preliminary"
ROOT.gStyle.SetPaintTextFormat("4.2f")
ROOT.gStyle.SetHistMinimumZero()

#iPos = 33
iPos = 0

H_ref = 1000
W_ref = 1400
W = W_ref
H  = H_ref

# references for T, B, L, R
T = 0.08*H_ref
B = 0.12*H_ref
L = 0.28*W_ref
R = 0.16*W_ref

canvas = ROOT.TCanvas("col","col",50,50,W,H)
canvas.SetFillColor(0)
canvas.SetBorderMode(0)
canvas.SetFrameFillStyle(0)
canvas.SetFrameBorderMode(0)
canvas.SetLeftMargin( L/W )
canvas.SetRightMargin( R/W )
canvas.SetTopMargin( T/H )
canvas.SetBottomMargin( B/H )
canvas.SetTickx(0)
canvas.SetTicky(0)
#canvas.SetGrid()

matrixByCol.Draw("colz text")

CMS_lumi.CMS_lumi(canvas, 4, iPos)

ROOT.gPad.RedrawAxis()
canvas.SaveAs("confusionmatrix_bycol_2018_%s_1p5.png" %sr)

a = raw_input()
