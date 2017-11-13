#!/usr/bin/env python
import sys, re, os, os.path, math, copy
from optparse import OptionParser
from collections import OrderedDict

import subprocess

import ROOT

fileIn = ROOT.TFile.Open("rootFile/plots_ggH_SF_UEPS.root", "READ")

for iProc in ['WW','ggH_hww','qqH_hww'] :
  Nominal = fileIn.Get('hww2l2v_13TeV_sf/events/histo_'+iProc).Integral()
  UEUp    = fileIn.Get('hww2l2v_13TeV_sf/events/histo_'+iProc+'_UEUp').Integral()
  UEDown    = fileIn.Get('hww2l2v_13TeV_sf/events/histo_'+iProc+'_UEDown').Integral()
  PSUp    = fileIn.Get('hww2l2v_13TeV_sf/events/histo_'+iProc+'_PSUp').Integral()
  PSDown    = fileIn.Get('hww2l2v_13TeV_sf/events/histo_'+iProc+'_PSDown').Integral()
  print '---- '+iProc+' ----'
  print 'Nominal = ' , Nominal
  print 'UE = ' , UEUp , UEDown , Nominal/UEUp , Nominal/UEDown
  print 'PS = ' , PSUp , PSDown , Nominal/PSUp , Nominal/PSDown
