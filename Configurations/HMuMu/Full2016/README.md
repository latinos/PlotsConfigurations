Higgs -> MuMu analysis
======================

# 0 - INSTALL LATINOS

Full set of instructions can be found in https://github.com/latinos/setup

    cd ~/work

    cmsrel CMSSW_10_2_9

    cd CMSSW_10_2_9/src

    cmsenv

    git cms-init

    git clone --branch 13TeV git@github.com:latinos/setup.git LatinosSetup	

    source LatinosSetup/SetupShapeOnly.sh

Configure you userConfig file:

    cp ~/work/CMSSW_10_2_9/src/LatinoAnalysis/Tools/python/userConfig_TEMPLATE.py ~/work/CMSSW_10_2_9/src/LatinoAnalysis/Tools/python/userConfig.py

Your userConfig file should look like this:

    baseDir     = '/afs/cern.ch/user/n/ntrevisa/'
    jobDir      = baseDir+'jobs/'
    workDir     = baseDir+'workspace/'
    batchType   = 'condor'
    jobDirSplit = True

Now compile:

    cd ~/work/CMSSW_10_2_9/src/LatinoAnalysis

    scram b -j 10

Be sure you have the latest version of MultiDraw (code for producing histograms, originally developed independently on latinos framework):

    cd ~/work/CMSSW_10_2_9/src/LatinoAnalysis/MultiDraw/

    git checkout 2.0.5

    git pull

    cd ~/work/CMSSW_10_2_9/src/LatinoAnalysis

    scram b -j 10

Then, install PlotsConfiguration

    cd ~/work/CMSSW_10_2_9/src

    cmsenv

    git clone git@github.com:latinos/PlotsConfigurations.git

# 1 - SET UP THE ENVIRONMENT

    cd ~/work/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/HMuMu/Full2016

    cmsenv

# 2 - PRODUCE HISTOGRAMS
  
    voms-proxy-init -voms cms -rfc --valid 168:0
 
    rm ~/jobs/mkShapes__hmm/* 

    rm rootFilehmm/* 

    rm plothmm/*

    mkShapesMulti.py --pycfg=configuration.py  --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/ --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files
 
Check the jobs:

    condor_q

Once they are done, merge all the rootfiles produced, and plot the distributions:

    mkShapesMulti.py --pycfg=configuration.py  --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/ --doHadd=True --batchSplit=Samples,Files --doNotCleanup
 
    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFilehmm/plots_hmm.root --minLogC=0.01 --minLogCratio=0.01 --maxLogC=1000 --maxLogCratio=1000  --showIntegralLegend=1 

    rm plothmm/c_* plothmm/log_c_* plothmm/*cdifference* plothmm/*.root

    cp ~/www/index.php plothmm/

