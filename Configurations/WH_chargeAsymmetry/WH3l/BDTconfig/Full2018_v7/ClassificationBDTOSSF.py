#!/usr/bin/env python
from ROOT import TMVA, TFile, TTree, TCut, TChain
from subprocess import call
from os.path import isfile

import configOSSF_cfg as config

# Setup TMVA
def runJob():
    TMVA.Tools.Instance()
    TMVA.PyMethodBase.PyInitialize()

    output = TFile.Open('TMVA_OSSF.root', 'RECREATE')
    factory = TMVA.Factory('TMVAClassification', output,'!V:!Silent:Color:DrawProgressBar:AnalysisType=Classification')
    # factory = TMVA.Factory('TMVAClassification', output,'!V:!Silent:Color:DrawProgressBar:Transformations=D,G:AnalysisType=Classification')

    dataloader = TMVA.DataLoader('datasetOSSF')
    for br in config.mvaVariables:
        dataloader.AddVariable(br)

    for sampleName, sample in config.samples.items():
        if config.structure[sampleName]['isData']==1:
            continue

        sample['tree'] = TChain("Events")
        print sampleName
        # print sample['name']
        for f in sample['name']:
            # print f
            sample['tree'].Add(f)

        if config.structure[sampleName]['isSignal']==1:
            dataloader.AddSignalTree(sample['tree'], 1.0)
        else:
            dataloader.AddBackgroundTree(sample['tree'], 1.0)
        # output_dim += 1
    dataloader.PrepareTrainingAndTestTree(TCut(config.cut),'SplitMode=Random:NormMode=NumEvents:!V')
    # dataloader.PrepareTrainingAndTestTree(TCut(config.cut),'nTrain_Signal=100000:nTrain_Background=100000:SplitMode=Random:NormMode=NumEvents:!V')#SSSF

    factory.BookMethod(dataloader, TMVA.Types.kBDT, "BDTG4",   "!H:!V:NTrees=500:MinNodeSize=1.5%:BoostType=Grad:Shrinkage=0.05:UseBaggedBoost:GradBaggingFraction=0.5:nCuts=500:MaxDepth=2" );
    factory.BookMethod(dataloader, TMVA.Types.kBDT, "BDTG4D3",   "!H:!V:NTrees=500:MinNodeSize=1.5%:BoostType=Grad:Shrinkage=0.05:UseBaggedBoost:GradBaggingFraction=0.5:nCuts=500:MaxDepth=3" );
    factory.BookMethod(dataloader, TMVA.Types.kBDT, "BDTG4D4",   "!H:!V:NTrees=500:MinNodeSize=1.5%:BoostType=Grad:Shrinkage=0.05:UseBaggedBoost:GradBaggingFraction=0.5:nCuts=500:MaxDepth=4" );
    factory.BookMethod(dataloader, TMVA.Types.kBDT, "BDTG4D5",   "!H:!V:NTrees=500:MinNodeSize=1.5%:BoostType=Grad:Shrinkage=0.05:UseBaggedBoost:GradBaggingFraction=0.5:nCuts=500:MaxDepth=5" );
    factory.BookMethod(dataloader, TMVA.Types.kBDT, "BDTG4D6",   "!H:!V:NTrees=500:MinNodeSize=1.5%:BoostType=Grad:Shrinkage=0.05:UseBaggedBoost:GradBaggingFraction=0.5:nCuts=500:MaxDepth=6" );
    factory.BookMethod(dataloader, TMVA.Types.kBDT, "BDTG4C3", "!H:!V:NTrees=500:MinNodeSize=1.5%:BoostType=Grad:Shrinkage=0.05:UseBaggedBoost:GradBaggingFraction=0.5:nCuts=300:MaxDepth=2" );
    factory.BookMethod(dataloader, TMVA.Types.kBDT, "BDTG4SK01",   "!H:!V:NTrees=500:MinNodeSize=1.5%:BoostType=Grad:Shrinkage=0.01:UseBaggedBoost:GradBaggingFraction=0.5:nCuts=500:MaxDepth=2" );
    factory.BookMethod(dataloader, TMVA.Types.kBDT, "BDTG4F07"    ,   "!H:!V:NTrees=500:MinNodeSize=1.5%:BoostType=Grad:Shrinkage=0.05:UseBaggedBoost:GradBaggingFraction=0.7:nCuts=500:MaxDepth=2" );
    factory.BookMethod(dataloader, TMVA.Types.kBDT, "BDTG4SK01F07",   "!H:!V:NTrees=500:MinNodeSize=1.5%:BoostType=Grad:Shrinkage=0.01:UseBaggedBoost:GradBaggingFraction=0.7:nCuts=500:MaxDepth=2" );
    # Run training, test and evaluation
    factory.TrainAllMethods()
    factory.TestAllMethods()
    factory.EvaluateAllMethods()

    output.Close()

if __name__ == "__main__":
    runJob()
