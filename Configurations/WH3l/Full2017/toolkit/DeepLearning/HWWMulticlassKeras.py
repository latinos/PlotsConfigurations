#!/usr/bin/env python

from ROOT import TMVA, TFile, TTree, TCut, gROOT

# Load configuration
with open("./config_cfg.py") as handle:
    exec handle

# Setup TMVA
TMVA.Tools.Instance()
TMVA.PyMethodBase.PyInitialize()

output = TFile.Open("TMVA_{0}.root".format(model['name']), 'RECREATE')
factory = TMVA.Factory('TMVAClassification', output,
    '!V:!Silent:Color:DrawProgressBar:Transformations=D,G:AnalysisType=multiclass')

# Load data
dataloader = TMVA.DataLoader('dataset')
for br in branchesToCheck:
    dataloader.AddVariable(br)

for sampleName, sample in samples.items():
    if structure[sampleName]['isData']==1:
        continue

    sample['tree'] = TChain("Events")
    for f in sample['name']:
        sample['tree'].Add(f)

    dataloader.AddTree(sample['tree'], sampleName)

dataloader.PrepareTrainingAndTestTree(TCut(cut),
        'SplitMode=Random:NormMode=NumEvents:!V')

# Book methods
factory.BookMethod(dataloader, TMVA.Types.kPyKeras, "PyKeras",tmvaKerasMethodDetail)

# Run TMVA
factory.TrainAllMethods()
factory.TestAllMethods()
factory.EvaluateAllMethods()
