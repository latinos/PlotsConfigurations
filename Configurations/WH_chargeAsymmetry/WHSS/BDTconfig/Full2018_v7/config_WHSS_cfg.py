#!/usr/bin/env python

from __future__ import print_function
import os
from ROOT import gROOT, TFile, TChain, TCut

# import models
import preselections
import cuts_BDTTrain

isDEV=False

# Load configuration
with open("configuration.py") as handle:
    exec handle

samples={}
structure={}
cuts={}
for f in [samplesFile, structureFile, cutsFile]:
    with open(f) as handle:
        exec handle


# Reduce sample files for fast dev
if isDEV:
    for sampleName, sample in samples.items():
        if sampleName not in ['DY','WH_hww_plus','WH_hww_minus','WH_htt_plus','WH_htt_minus']:
            samples.pop(sampleName)
            continue

# Define data to be loaded
with open("./preselections.py") as handle:
    exec handle

with open("./cuts_BDTTrain.py") as handle:
    exec handle

cut="(({0}))".format(supercut)

mvaVariables = [
    "Alt$(Lepton_pt[0],0)",
    "Alt$(Lepton_pt[1],0)",
    "mll",
    "mjj",
    "ptll",
    "mlljj20_whss",
    "PuppiMET_pt",
    "dphill",
    "detall",
    "dphijj",
    "detajj",
    "Alt$(CleanJet_pt[0],0)",
    "Alt$(CleanJet_pt[1],0)",
]
