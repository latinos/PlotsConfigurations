#!/usr/bin/env python

from __future__ import print_function
import os
from ROOT import gROOT, TFile, TChain, TCut

isDEV=True

# Load configuration
with open("../../configuration.py") as handle:
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
        if len(sample['name']) <= 2:
            continue

        sample['name'] = sample['name'][0:2]
        if 'weights' in sample.keys():
            sample['weights'] = sample['weights'] [0:2]


# Define data to be loaded
cut="(({0}) && ({1}))".format(supercut,cuts['wh3l_13TeV_ossf'])
branchesToCheck=[
    'nElectron',
]

# Lowd keras models
with open("./models.py") as handle:
    exec handle

model = models['seq']
model['model'].save("{0}.h5".format(model['name']))
model['model'].summary()

    # Ref 
tmvaKerasMethodDetail="H:!V:CreateMVAPdfs:VarTransform=D,G"
tmvaKerasMethodDetail+=":FilenameModel={0}.h5".format(model['name'])
tmvaKerasMethodDetail+=":NumEpochs={0}".format(20)
tmvaKerasMethodDetail+=":BatchSize={0}".format(32)
