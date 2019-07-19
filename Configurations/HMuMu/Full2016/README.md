Higgs -> MuMu analysis
======================

# 0 INSTALL LATINOS

Full set of instructions can be found in https://github.com/latinos/setup

    cmsrel CMSSW_10_2_9

    cd CMSSW_10_2_9/src

    cmsenv

    git cms-init

    git clone --branch 13TeV git@github.com:latinos/setup.git LatinosSetup	

    source LatinosSetup/SetupShapeOnly.sh


# 1 SET UP THE ENVIRONMENT

    cd ~/work/CMSSW_10_2_9/src

    cmsenv

    cd -

# 2 PRODUCE HISTOGRAMS
  
    voms-proxy-init -voms cms -rfc --valid 168:0
 
    mkShapesMulti.py --pycfg=configuration.py  --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/ --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files
 
    mkShapesMulti.py --pycfg=configuration.py  --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/ --doHadd=True --batchSplit=Samples,Files --doNotCleanup
 
    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFilehmm/plots_hmm.root --minLogC=0.01 --minLogCratio=0.01 --maxLogC=1000 --maxLogCratio=1000  --showIntegralLegend=1 
