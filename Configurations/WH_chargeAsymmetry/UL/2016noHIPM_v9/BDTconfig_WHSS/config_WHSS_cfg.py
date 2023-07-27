#!/usr/bin/env python

from __future__ import print_function
import os
from ROOT import gROOT, TFile, TChain, TCut

# import models
# import preselections
import cuts_BDTTrain

isDEV=True

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
        if sampleName not in ['DY', 'WZ', 'WJets', 'top', 'WH_hww_plus', 'WH_hww_minus', 'WH_htt_plus', 'WH_htt_minus']:
            samples.pop(sampleName)
            continue

# # Define data to be loaded
# with open("./preselections.py") as handle:
#     exec handle

with open("./cuts_BDTTrain.py") as handle:
    exec handle

cut="(({0}))".format(supercut)

mvaVariables = [
    # "Alt$(Lepton_pt[0],0)",
    # "Alt$(Lepton_pt[1],0)",
    "mll",
    "mjj",
    # "mth",
    "mtw1",
    "mtw2",
    "ptll",
    "mlljj20_whss",
    "PuppiMET_pt",
    "dphill",
    # "detall",
    # "drll",
    "dphijj",
    # "detajj",
    "dphillmet",
    # "dphilmet",
    # "dphilmet1",
    "dphilmet2",
    # "dphilljet",
    # "dphilljetjet",
    "dphijet1met",
    # "dphijet2met",
    # "dphilep2jj",
    # "dphilep1jj",
    # "dphilep2jet2",
    # "dphilep2jet1",
    # "dphilep1jet2",
    # "dphilep1jet1",
    "Alt$(CleanJet_pt[0],0)",
    # "Alt$(CleanJet_pt[1],0)",
    'Alt$(Jet_btagDeepB[CleanJet_jetIdx[0]],-2)',
    'Alt$(Jet_btagDeepB[CleanJet_jetIdx[1]],-2)',
]
