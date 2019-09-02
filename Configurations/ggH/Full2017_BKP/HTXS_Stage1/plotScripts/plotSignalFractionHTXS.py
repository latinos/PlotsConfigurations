#!/usr/bin/env python

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

(options, args) = parser.parse_args()
options.bin = True # fake that is a binary output, so that we parse shape lines
options.noJMax = False
options.nuisancesToExclude = ''
options.verbose = False
options.stat = False

DC = parseCard(file(args[0]), options)

signals_orig     = DC.list_of_signals()
signals = []

for s in signals_orig:
  if not 'htt' in s: signals.append(s)

signals = sorted(signals, key=lambda s: s.lower())

overallSignalRate = OrderedDict()
overallTotalSignal = OrderedDict()
channels_orig = DC.exp
channels = OrderedDict()


for i in sorted(channels_orig, reverse=True):
  channels[i] = channels_orig[i]


for c in channels:
  if "Top" in c or "DYtt" in c or "WW" in c or "wh3l_wz" in c or "wh3l_zg" in c or "zh4l_ZZ" in c: continue
  overallSignalRate[c] = OrderedDict()
  overallTotalSignal[c] = 0.
  for s in signals:
    overallSignalRate[c][s] = 0.
    if s not in channels[c].keys(): continue
    overallSignalRate[c][s] +=  channels[c][s]
    overallTotalSignal[c] += channels[c][s]


stack = ROOT.THStack()
histos = {}
leg = ROOT.TLegend(0.82,0.45,0.99,0.8)
color = 0.

ncat=0
combChannelsToConsider = []
for k in channels:
  if "Top" in k or "DYtt" in k or "WW" in k or "wh3l_wz" in k or "wh3l_zg" in k or "zh4l_ZZ" in k: continue
  if overallTotalSignal[k] == 0: continue
  ncat+=1
  combChannelsToConsider.append(k)
  print k

for s in signals:
  histos[s] = ROOT.TH1F(s,s,ncat,0,ncat)

frame = histos[list(histos)[0]].Clone()# histos.items()[0].Clone()
frame.GetYaxis().SetRangeUser(0,1)
frame.GetYaxis().SetTitle("Signal fraction")
frame.GetXaxis().SetLabelSize(0.05)
frame.GetYaxis().SetLabelSize(0.05)
frame.GetYaxis().SetTitleSize(0.05)
frame.GetYaxis().SetTitleOffset(1.1)
frame.SetTitle("")
frame.SetStats(0)

events = {}
#ROOT.TColor.SetPalette(51)
#cols = ROOT.TColor.GetPalette()
stops = [0.00, 0.5, 1.00]
red   = [1.00, 0., 0.00]
green = [0.00, 1.0, 0.00]
blue  = [0.00, 0., 1.00]
s = np.array(stops)
r = np.array(red)
g = np.array(green)
b = np.array(blue)
ROOT.TColor.CreateGradientColorTable(len(s), s, r, g, b, len(signals))
ROOT.gStyle.SetNumberContours(len(signals))


for i,c in enumerate(combChannelsToConsider):
#  if overallTotalSignal[c] == 0: continue
  frame.GetXaxis().SetBinLabel(i+1,c)
  for num,s in enumerate(overallSignalRate[c]):
    histos[s].SetBinContent(i+1,overallSignalRate[c][s]/overallTotalSignal[c])
    histos[s].SetFillColor(ROOT.TColor.GetColorPalette(num))
    histos[s].SetLineColor(ROOT.TColor.GetColorPalette(num))
    #histos[s].SetFillColor(int(format(plot[s]['color'], "d")))
    #histos[s].SetLineColor(int(format(plot[s]['color'], "d")))
    histos[s].SetBarWidth(0.5)
    histos[s].SetBarOffset(0.25)
    print "category ", c," ", " signal ",s," signal fraction = ",overallSignalRate[c][s]/overallTotalSignal[c], " events = ", overallSignalRate[c][s]

for s in overallSignalRate[combChannelsToConsider[0]]: #used just to preserve the order of the signals
  stack.Add(histos[s])
  leg.AddEntry(histos[s],s,"f")



#change the CMS_lumi variables (see CMS_lumi.py)
CMS_lumi.lumi_13TeV = "41.5 fb^{-1}"
CMS_lumi.writeExtraText = 1
CMS_lumi.extraText = "Preliminary"

#iPos = 33
iPos = 0

H_ref = 1000
W_ref = 1400
W = W_ref
H  = H_ref

# references for T, B, L, R
T = 0.08*H_ref
B = 0.12*H_ref
L = 0.25*W_ref
R = 0.20*W_ref

canvas = ROOT.TCanvas("c2","c2",50,50,W,H)
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


frame.Draw("hbars")

stack.Draw("hbars same")
leg.SetBorderSize(0)
leg.Draw()

CMS_lumi.CMS_lumi(canvas, 4, iPos)


events = ROOT.TLatex()
events.SetTextSize(0.033)
events.SetTextAngle(0)
events.SetTextAlign(22)

for i,c in enumerate(combChannelsToConsider):
#  if overallTotalSignal[c] == 0: continue
  x = ROOT.gPad.GetUxmin() + 0.15*frame.GetXaxis().GetBinWidth(i+1)
  y = frame.GetXaxis().GetBinCenter(i+1)
  events.DrawLatex(x,y,"#color[10]{ "+" {0:.1f}".format(overallTotalSignal[c])+" events}")

ROOT.gPad.RedrawAxis()


a = raw_input()

