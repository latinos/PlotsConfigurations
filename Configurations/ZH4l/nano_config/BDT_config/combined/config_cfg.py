#!/usr/bin/env python

from __future__ import print_function
import os
from ROOT import gROOT, TFile, TChain, TCut

# import models
#import preselections

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
for sampleName, sample in samples.items():
    if sampleName not in ['ZZ','ZZ17','ZZ18','ZH_hww','ZH_hww17','ZH_hww18']:
        samples.pop(sampleName)
        continue

    if isDEV:
        if len(sample['name']) > 2:
            sample['name'] = sample['name'][0:1]
    else :
        sample['name'] = sample['name']

# Define data to be loaded
#with open("./preselections.py") as handle:
#    exec handle

#cut="(({0}) && ({1}))".format(supercut,preselections['ALL'])
#cut="(({0}))".format(preselections['ALL'])
cut="(({0}))".format(supercut)
mvaVariables = [
#   'Lepton_pt[0]',
#   'Lepton_pt[3]',
   'z0DeltaR_zh4l',
   'z1DeltaR_zh4l',
   'lep1Mt_zh4l',
   'lep2Mt_zh4l',
#   'z0Mass_zh4l',
   'z1Mass_zh4l',
#   'mllll_zh4l',
   'z1Mt_zh4l',
   'z1DeltaPhi_zh4l',
   'PuppiMET_pt',
]

