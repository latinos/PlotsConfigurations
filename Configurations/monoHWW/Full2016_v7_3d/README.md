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

    mkShapesMulti.py --pycfg=configuration.py  --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/ --doHadd=True --batchSplit=Samples,Files --doNotCleanup --nThreads=100
 
    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_darkHiggs2016_v7.root --minLogC=0.01 --minLogCratio=0.01 --maxLogC=1000 --maxLogCratio=1000 --fileFormats=png,pdf


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

    text2workspace.py datacards_2016/datacard_DH_mhs_180_mx_150_mZp_1200_combined_corr.txt

    combine -M FitDiagnostics -d datacards_2016/datacard_DH_mhs_180_mx_150_mZp_1200_combined_corr.root --rMin -1 --forceRecreateNLL -n _t1
    python $CMSSW_BASE/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py  -a fitDiagnostics_t1.root -g plots_t1.root >> ./fitResults_t1 

    combineTool.py -M Impacts -d datacards_2016/datacard_DH_mhs_180_mx_150_mZp_1200_combined_corr.root --rMin -1 --doInitialFit --allPars -m 1 -n t1

    combineTool.py -M Impacts -d datacards_2016/datacard_DH_mhs_180_mx_150_mZp_1200_combined_corr.root -o impacts_t1.json --rMin -1 --rMax 1 --doFits -m 1 -n t1 --job-mode condor --task-name t1 --sub-opts '+JobFlavour = "espresso"\nrequirements = (OpSysAndVer =?= "CentOS7")'

    combineTool.py -M Impacts -d datacards_2016/datacard_DH_mhs_180_mx_150_mZp_1200_combined_corr.root -m 1 -n t1 -o impacts_t1.json

    plotImpacts.py -i  impacts_t1.json -o  impacts_t1

Run the limits: (add the postFit normalization factors obtained in the previous step in mkLimits.py)

    python mkLimits.py datacards_2016 /afs/cern.ch/work/f/fernanpe/CMSSW_10_2_13/src/HiggsAnalysis/CombinedLimit /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2016_v7_3d/ 
    python mksub.py 
    python submit.py

    ./runLimits.sh


# 4 - MAKE POSTFIT PLOTS

    mkPostFitPlot.py --pycfg=configuration_postfit.py    --inputFileCombine fitDiagnostics.root --outputFile out_SR1.root --inputFile rootFile/plots_darkHiggs2016_v7.root --variable mllVSmtw2_0 --cut ch1 --cutNameInOriginal SR_Incl_drll1  --getSignalFromPrefit 1
    mkPostFitPlot.py --pycfg=configuration_postfit.py    --inputFileCombine fitDiagnostics.root --outputFile out_SR2.root --inputFile rootFile/plots_darkHiggs2016_v7.root --variable mllVSmtw2_0 --cut ch2 --cutNameInOriginal SR_Incl_drll2 --getSignalFromPrefit 1
    mkPostFitPlot.py --pycfg=configuration_postfit.py    --inputFileCombine fitDiagnostics.root --outputFile out_SR3.root --inputFile rootFile/plots_darkHiggs2016_v7.root --variable mllVSmtw2_0 --cut ch3 --cutNameInOriginal SR_Incl_drll3 --getSignalFromPrefit 1
    mkPostFitPlot.py --pycfg=configuration_postfit.py    --inputFileCombine fitDiagnostics.root --outputFile out_WWCR.root --inputFile rootFile/plots_darkHiggs2016_v7.root --variable events --cut ch4 --cutNameInOriginal WWCR_Incl --getSignalFromPrefit 1
    mkPostFitPlot.py --pycfg=configuration_postfit.py    --inputFileCombine fitDiagnostics.root --outputFile out_TopCR.root --inputFile rootFile/plots_darkHiggs2016_v7.root --variable events --cut ch5 --cutNameInOriginal TopCR_Incl --getSignalFromPrefit 1
    mkPostFitPlot.py --pycfg=configuration_postfit.py    --inputFileCombine fitDiagnostics.root --outputFile out_DYCR.root --inputFile rootFile/plots_darkHiggs2016_v7.root --variable events --cut ch6 --cutNameInOriginal DYttCR_Incl --getSignalFromPrefit 1

    mkPlot.py --pycfg=configuration_postfit.py --inputFile=out_SR1.root --onlyCut=SR_Incl_drll1 --onlyVariable=mllVSmtw2_0 --postFit y  --minLogC=0.01 --minLogCratio=0.01 --maxLogC=1000 --maxLogCratio=1000 --fileFormats=pdf,png
    mkPlot.py --pycfg=configuration_postfit.py --inputFile=out_SR2.root --onlyCut=SR_Incl_drll2 --onlyVariable=mllVSmtw2_0 --postFit y  --minLogC=0.01 --minLogCratio=0.01 --maxLogC=1000 --maxLogCratio=1000 --fileFormats=pdf,png
    mkPlot.py --pycfg=configuration_postfit.py --inputFile=out_SR3.root --onlyCut=SR_Incl_drll3 --onlyVariable=mllVSmtw2_0 --postFit y  --minLogC=0.01 --minLogCratio=0.01 --maxLogC=1000 --maxLogCratio=1000 --fileFormats=pdf,png
    mkPlot.py --pycfg=configuration_postfit.py root.  --inputFile=out_WWCRonlyCut=WWCR_InclonlyVariable=events --postFit y  --minLogC=0.01 --minLogCratio=0.01 --maxLogC=1000 --maxLogCratio=1000 --fileFormats=pdf,png
    mkPlot.py --pycfg=configuration_postfit.py root.  --inputFile=out_TopCRonlyCut=TopCR_InclonlyVariable=events --postFit y  --minLogC=0.01 --minLogCratio=0.01 --maxLogC=1000 --maxLogCratio=1000 --fileFormats=pdf,png
    mkPlot.py --pycfg=configuration_postfit.py root.  --inputFile=out_DYCRonlyCut=DYCR_InclonlyVariable=events --postFit y  --minLogC=0.01 --minLogCratio=0.01 --maxLogC=1000 --maxLogCratio=1000 --fileFormats=pdf,png


# 5 - MAKE POSTFIT TABLES

    mkPostFitTable.py --pycfg=configuration_postfit.py    --inputFileCombine fitDiagnostics.root --outputFile table_SR1.txt --variable mllVSmtw2_0 --cut ch1 --cutNameInOriginal SR_Incl_drll1 --inputFile rootFile/plots_darkHiggs2016_v7.root  --getSignalFromPrefit 1
    mkPostFitTable.py --pycfg=configuration_postfit.py    --inputFileCombine fitDiagnostics.root --outputFile table_SR2.txt --variable mllVSmtw2_0 --cut ch2 --cutNameInOriginal SR_Incl_drll2 --inputFile rootFile/plots_darkHiggs2016_v7.root  --getSignalFromPrefit 1
    mkPostFitTable.py --pycfg=configuration_postfit.py    --inputFileCombine fitDiagnostics.root --outputFile table_SR3.txt --variable mllVSmtw2_0 --cut ch3 --cutNameInOriginal SR_Incl_drll3 --inputFile rootFile/plots_darkHiggs2016_v7.root  --getSignalFromPrefit 1

