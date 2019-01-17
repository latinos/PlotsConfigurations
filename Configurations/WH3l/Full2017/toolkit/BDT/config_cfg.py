#!/usr/bin/env python

import os, sys
# logFile = open('runTMVA.log', 'w')
# sys.stdout = sys.stderr = logFile

import time 
import threading

import math
import ROOT
ROOT.gROOT.SetBatch()
ROOT.gROOT.LoadMacro("TMVAClass.C++g")
# MVAClassifier = ROOT.MVAClassifier()


if __name__ == "__main__":
    # os.chdir('../../')
    # os.chdir('../../config_Run2016-35pXfbm1_cutOptimization/')

    # pyCfg = open("/afs/cern.ch/work/p/pyu/HWAnalysis/wh3lFull2016MVA/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/WH3l/Full2016MVA/SignalRegion/config.py")
    pyCfg = open("/afs/cern.ch/work/p/pyu/HWAnalysis/wh3lFull2017/CMSSW_9_4_2/src/PlotsConfigurations/Configurations/WH3l/Full2017BDT/config_BDT/config.py")
    exec(pyCfg)
    pyCfg.close()

    samples = {}
    structure = {}

    handle = open(samplesFile)
    exec(handle)
    handle.close()
    handle = open(structureFile)
    exec(handle)
    handle.close()

    # samp = open("/afs/cern.ch/work/p/pyu/HWAnalysis/prod/PlotConf/Configurations/ZH4l/samples.py")
    # samp = open("/afs/cern.ch/work/p/pyu/HWAnalysis/prod/PlotConf/Configurations/WH3l/Full2016/SignalRegion/samples.py")
    # exec(samp)
    # samp.close()
    # stru = open("/afs/cern.ch/work/p/pyu/HWAnalysis/prod/PlotConf/Configurations/ZH4l/structure.py")
    # stru = open("/afs/cern.ch/work/p/pyu/HWAnalysis/prod/PlotConf/Configurations/WH3l/Full2016/SignalRegion/structure.py")
    # exec(stru)
    # stru.close()

    mvaVariables = [
        [ "minmtw_wh3l",  'F'],
        [ "dphilllmet",  'F'],
        [ "pTWWW",  'F'],
        [ "mtwww",  'F'],
        [ "mindphi_lmet",  'F'],
        [ "pt1", 'F'],
        [ "pt2", 'F'],
        [ "pt3", 'F'],
        [ "zveto_3l", 'F'],
        [ "drllmin3l", 'F'],
        [ "mlll", 'F'],
        [ "mllmin3l", 'F'],
        [ "metPfType1", 'F'],
        [ "ptlll", 'F'],
    ]

    supercut = 'mllmin3l>12 && std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>15 && std_vector_lepton_pt[2]>10 && std_vector_lepton_pt[3]<10  && abs(chlll) == 1'
    # ossf  = '(njet_3l == 0 && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.5884 ) && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.5884 )  && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.5884 )  && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.5884 )  && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.5884 )  && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.5884 )  && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.5884 )  && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.5884 )  && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.5884 )  && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.5884 )  && metPfType1 > 45  && zveto_3l > 25 && mllmin3l < 100 && flagOSSF == 1)'
    # sssf = '(njet_3l == 0 && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.5884 )  && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.5884 )  && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.5884 ) && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.5884 )  && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.5884 ) && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.5884 ) && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.5884 ) && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.5884 ) && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.5884 ) && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.5884 ) && metPfType1 > 35 && zveto_3l > 25 && mllmin3l < 100 && flagOSSF == 0)'
    weights = 'XSWeight*SFweight3l*METFilter_MC*(1+(abs(GenLepMatch2l)<900 )*(GenLepMatch2l-1)+(abs(GenLepMatch3l)<900 )*(GenLepMatch3l-GenLepMatch2l))'

    # MVAClassifier.reset()
    mva = ROOT.MVAClassifier()
    mva.reset()
    mva.setOutputFileName("TMVA.root")
    mva.initialFactory()
    mva.setMethodList("BDT")
    # mva.setSigCut('( ({0}) && (({1})||({2})) )'.format(supercut,sssf,ossf))
    # mva.setBkgCut('( ({0}) && (({1})||({2})) )'.format(supercut,sssf,ossf))
    mva.setSigCut('( ({0}) )'.format(supercut))
    mva.setBkgCut('( ({0}) )'.format(supercut))
    mva.setSigWeight('({0})'.format(weights))
    mva.setBkgWeight('({0})'.format(weights))
    # mva.factory.Print()
    # mva.mvaClassification()
    for sampleName, sample in samples.iteritems():
        if sampleName not in ['top','Vg','VgS','WZ','WH_hww','ZH_hww','ggZH_hww','WH_htt'] :
            continue
        # if sampleName in ['DATA'] :
            # continue
        addTree = mva.addSigTree if structure[sampleName]['isSignal']==1 else mva.addBkgTree
        for pathName in sample['name']:
            print pathName
            addTree(pathName,1.0)
    for var in mvaVariables:
        mva.factory.AddVariable(*var)
    mva.mvaClassification()

