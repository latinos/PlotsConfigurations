#!/usr/bin/env python
from ROOT import TMVA, TFile, TTree, TCut, TChain
from subprocess import call
from os.path import isfile

import config_WHSS_2j_cfg as config

import sys

# Setup TMVA
def runJob(output_and_dataset_name = ""):
    TMVA.Tools.Instance()
    TMVA.PyMethodBase.PyInitialize()

    output  = TFile.Open('TMVA_2j{}.root'.format(output_and_dataset_name), 'RECREATE')
    factory = TMVA.Factory('TMVAClassification', output,   '!V:!Silent:Color:DrawProgressBar:AnalysisType=Classification')

    # dataloader = TMVA.DataLoader('dataset_WHSS_noCorrelatedVariables')
    dataloader = TMVA.DataLoader("dataset_2j{}".format(output_and_dataset_name))

    for br in config.mvaVariables:
        dataloader.AddVariable(br)

    for sampleName, sample in config.samples.items():
        print(sampleName)
        if config.structure[sampleName]=='Fake': continue
        if config.structure[sampleName]['isData']==1:
            continue

        print sampleName
        sample['tree'] = TChain("Events")
        for f in sample['name']:
            sample['tree'].Add(f)

        if config.structure[sampleName]['isSignal']==1:
            dataloader.AddSignalTree(sample['tree'], 1.0)
        else:
            dataloader.AddBackgroundTree(sample['tree'], 1.0)

    dataloader.PrepareTrainingAndTestTree(TCut(config.cut),'SplitMode=Random:NormMode=NumEvents:!V')
    # dataloader.PrepareTrainingAndTestTree(TCut(config.cut),'nTrain_Signal=100000:nTrain_Background=100000:SplitMode=Random:NormMode=NumEvents:!V')

    # Actual BDT definitions
    factory.BookMethod(dataloader, TMVA.Types.kBDT, "BDTG_1",
                       "!H:!V:NTrees=500:MinNodeSize=1.5%:BoostType=Grad:Shrinkage=0.1:UseBaggedBoost:GradBaggingFraction=0.2:nCuts=1000:MaxDepth=2")

    factory.BookMethod(dataloader, TMVA.Types.kBDT, "BDTG_2",
                       "!H:!V:NTrees=1000:MinNodeSize=1.5%:BoostType=Grad:Shrinkage=0.1:UseBaggedBoost:GradBaggingFraction=0.2:nCuts=1000:MaxDepth=2")

    factory.BookMethod(dataloader, TMVA.Types.kBDT, "BDTG_3",
                       "!H:!V:NTrees=1000:MinNodeSize=1.5%:BoostType=Grad:Shrinkage=0.1:UseBaggedBoost:GradBaggingFraction=0.2:nCuts=1000:MaxDepth=3")

    factory.BookMethod(dataloader, TMVA.Types.kBDT, "BDTG_4",
                       "!H:!V:NTrees=1000:MinNodeSize=1.5%:BoostType=Grad:Shrinkage=0.1:UseBaggedBoost:GradBaggingFraction=0.2:nCuts=1000:MaxDepth=4")

    factory.BookMethod(dataloader, TMVA.Types.kBDT, "BDTG_5",
                       "!H:!V:NTrees=1000:MinNodeSize=1.5%:BoostType=Grad:Shrinkage=0.01:UseBaggedBoost:GradBaggingFraction=0.2:nCuts=1000:MaxDepth=4")

    factory.BookMethod(dataloader, TMVA.Types.kBDT, "BDTG_6",
                       "!H:!V:NTrees=500:MinNodeSize=1.5%:BoostType=Grad:Shrinkage=0.1:UseBaggedBoost:GradBaggingFraction=0.2:nCuts=1000:MaxDepth=4")

    # Run training, test and evaluation
    factory.TrainAllMethods()
    factory.TestAllMethods()
    factory.EvaluateAllMethods()

    output.Close()

if __name__ == "__main__":

    print("Input arguments: {}".format(sys.argv))
    if len(sys.argv) > 1:
        print("Suffix is: {}".format(sys.argv[1]))
        output_and_dataset = sys.argv[1]
        runJob(output_and_dataset)
        os.system("mv dataset dataset{}".format(output_and_dataset))
    else:
        print("No suffix, running with standard output name")
        runJob()
