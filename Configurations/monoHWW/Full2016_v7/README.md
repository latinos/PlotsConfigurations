darkHiggs analysis
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
 
    mkShapesMulti.py --pycfg=configuration.py  --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/ --doBatch=True --batchQueue=longlunch --treeName=Events --batchSplit=Samples,Files
 
Check the jobs:

    condor_q

Once they are done, merge all the rootfiles produced, and plot the distributions:

    mkShapesMulti.py --pycfg=configuration.py  --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/ --doHadd=True --batchSplit=Samples,Files --doNotCleanup --nThreads=40
 
    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_darkHiggs2016_v7.root --minLogC=0.01 --minLogCratio=0.01 --maxLogC=1000 --maxLogCratio=1000  --showIntegralLegend=1 


Optimize the binning by launching configuration_binning.py, anf after that:

    python doBinning.py --Variable mtw2 --TestCutName SR_Incl --SignalSamples DH_mhs_160_mx_100_mZp_500 --BackgroundSamples WW,top,DY,ggWW,Vg,VVV,VZ,VgS_H,VgS_L,WWewk,Higgs --nbins 500 --inputFile rootFile_binning/plots_darkHiggs2016_v7.root


Rerun mkShapesMulti.py using configuration.py


# 3 - MAKE THE DATACARDS, COMBINATIONS, AND GET THE LIMITS

    mkDatacards.py   --pycfg=configuration.py  --inputFile=rootFile/plots_darkHiggs2016_v7.root    
    
    cd /afs/cern.ch/work/f/fernanpe/CMSSW_10_2_13/src/HiggsAnalysis/CombinedLimit/	
    cmsenv
    cd -
    
    python mkCombinations.py --inputDir datacards_2016
    ./runCombination.sh


Add brackets for the impacts:
    python addBracket.py --inputDir datacards_2016

Run the impacts and checks:

    text2workspace.py datacards_2016/datacard_DH_mhs_160_mx_100_mZp_500_combined_corr.txt

    combine -M FitDiagnostics -d datacards_2016/datacard_DH_mhs_160_mx_100_mZp_500_combined_corr.root -t -1 --expectSignal 0 --rMin -10 --forceRecreateNLL -n _t0

    python $CMSSW_BASE/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py  -a fitDiagnostics_t0.root -g plots_t0.root >> ./fitResults_t0 

    combine -M FitDiagnostics -d datacards_2016/datacard_DH_mhs_160_mx_100_mZp_500_combined_corr.root -t -1 --expectSignal 1  --forceRecreateNLL -n _t1
    python $CMSSW_BASE/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py  -a fitDiagnostics_t1.root -g plots_t1.root >> ./fitResults_t1 

    combineTool.py -M Impacts -d datacards_2016/datacard_DH_mhs_160_mx_100_mZp_500_combined_corr.root -t -1 --expectSignal 0 --rMin -10 --doInitialFit --allPars -m 1 -n t0
    combineTool.py -M Impacts -d datacards_2016/datacard_DH_mhs_160_mx_100_mZp_500_combined_corr.root -t -1 --expectSignal 1 --rMin -10 --doInitialFit --allPars -m 1 -n t1

    combineTool.py -M Impacts -d datacards_2016/datacard_DH_mhs_160_mx_100_mZp_500_combined_corr.root -o impacts_t0.json -t -1 --expectSignal 0 --rMin -10 --doFits -m 1 -n t0 --job-mode condor --task-name t0 --sub-opts '+JobFlavour = "espresso"\nrequirements = (OpSysAndVer =?= "CentOS7")'
    combineTool.py -M Impacts -d datacards_2016/datacard_DH_mhs_160_mx_100_mZp_500_combined_corr.root -o impacts_t1.json -t -1 --expectSignal 1 --rMin -10 --doFits -m 1 -n t1 --job-mode condor --task-name t1 --sub-opts '+JobFlavour = "espresso"\nrequirements = (OpSysAndVer =?= "CentOS7")'

    combineTool.py -M Impacts -d datacards_2016/datacard_DH_mhs_160_mx_100_mZp_500_combined_corr.root -m 1 -n t0 -o impacts_t0.json
    combineTool.py -M Impacts -d datacards_2016/datacard_DH_mhs_160_mx_100_mZp_500_combined_corr.root -m 1 -n t1 -o impacts_t1.json

    plotImpacts.py -i  impacts_t0.json -o  impacts_t0
    plotImpacts.py -i  impacts_t1.json -o  impacts_t1

    

Run the limits:

    python mkLimits.py datacards_2016 /afs/cern.ch/work/f/fernanpe/CMSSW_10_2_13/src/HiggsAnalysis/CombinedLimit /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2016_v7/ 
    python mksub.py 
    python submit.py

    ./runLimits.sh