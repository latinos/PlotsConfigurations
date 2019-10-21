# VH2j

The following instructions and configurations correspond to the VH2j analysis. The target is the associated Higgs production (VH) in which the V boson (W or Z) decays hadronically and the Higgs boson decays to WW, with both W bosons decaying leptonically. This analysis is focused on events with missing transverse energy, an electron-muon pair and two jets.


# Produce a valid VOMS proxy

    voms-proxy-init -voms cms -rfc --valid 168:0
    cmsenv


# Produce histograms

    cd $CMSSW_BASE/src/PlotsConfigurations/Configurations/VH2j/Full2016_nanoAODv4
    cd $CMSSW_BASE/src/PlotsConfigurations/Configurations/VH2j/Full2017
    cd $CMSSW_BASE/src/PlotsConfigurations/Configurations/VH2j/Full2018

    mkShapesMulti.py \
        --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/ \
        --doBatch=True \
        --batchQueue=workday \
        --batchSplit=Samples,Files


# Check job status

    condor_q

And wait until all jobs have finished.


# Group (hadd) histograms

    mkShapesMulti.py \
        --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/ \
        --doHadd=True \
        --batchSplit=Samples,Files \
        --nThreads=8 \
        --doNotCleanup


# Draw distributions

    mkPlot.py --inputFile=rootFile/plots_VH2j_2016.root --minLogC=0.01 --minLogCratio=0.01 --maxLogC=1000 --maxLogCratio=1000 --showIntegralLegend=1
    mkPlot.py --inputFile=rootFile/plots_VH2j_2017.root --minLogC=0.01 --minLogCratio=0.01 --maxLogC=1000 --maxLogCratio=1000 --showIntegralLegend=1
    mkPlot.py --inputFile=rootFile/plots_VH2j_2018.root --minLogC=0.01 --minLogCratio=0.01 --maxLogC=1000 --maxLogCratio=1000 --showIntegralLegend=1
    
To produce blinded distributions (no data) open `plot.py` and set the variable `isBlind` to 1 for `DATA`. Then you will have to produce again the signal region plots.

    mkPlot.py --onlyCut=VH_2j_emu --inputFile=rootFile/plots_VH2j_2016.root --minLogC=0.01 --minLogCratio=0.01 --maxLogC=1000 --maxLogCratio=1000 --showIntegralLegend=1
    mkPlot.py --onlyCut=VH_2j_emu --inputFile=rootFile/plots_VH2j_2017.root --minLogC=0.01 --minLogCratio=0.01 --maxLogC=1000 --maxLogCratio=1000 --showIntegralLegend=1
    mkPlot.py --onlyCut=VH_2j_emu --inputFile=rootFile/plots_VH2j_2018.root --minLogC=0.01 --minLogCratio=0.01 --maxLogC=1000 --maxLogCratio=1000 --showIntegralLegend=1


# Make datacards

    cd $CMSSW_BASE/src
    cmsenv

    cd $CMSSW_BASE/src/PlotsConfigurations/Configurations/VH2j/Full2016_nanoAODv4
    mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_VH2j_2016.root

    cd $CMSSW_BASE/src/PlotsConfigurations/Configurations/VH2j/Full2017
    mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_VH2j_2017.root

    cd $CMSSW_BASE/src/PlotsConfigurations/Configurations/VH2j/Full2018
    mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_VH2j_2018.root


# Combine datacards

    pushd $HOME/combine/CMSSW_10_2_13/src/
    cmsenv
    popd

    pushd datacards
    
    combineCards.py VH_2j_emu/mll/datacard.txt VH_2j_DYtautau/events/datacard.txt VH_2j_topemu/events/datacard.txt > datacard_combined.txt
    
    text2workspace.py datacard_combined.txt -m 125

    popd


# Fixed signal strength

    combineTool.py -M Impacts --expectSignal=1 -d datacards/datacard_combined.root -m 125 -t -1 --doInitialFit --robustFit 1
    combineTool.py -M Impacts --expectSignal=1 -d datacards/datacard_combined.root -m 125 -t -1 --doFits --robustFit 1
    combineTool.py -M Impacts --expectSignal=1 -d datacards/datacard_combined.root -m 125 -t -1 -o impacts.json
    plotImpacts.py -i impacts.json -o impacts


# Significance

    combine -M Significance --expectSignal=1 -t -1 -m 125 datacards/datacard_combined.txt


# Signal strength

    combine -M FitDiagnostics --rMin=-4 --rMax=7 --expectSignal=1 -t -1 datacards/datacard_combined.txt -m 125 -n mytest > result.txt


# Likelihood scan

    combine -M MultiDimFit datacards/datacard_combined.txt -m 125 --expectSignal=1 -t -1 --algo=grid --points 100 --setParameterRanges r=-4,7 -n "_MyScan"

    wget https://raw.githubusercontent.com/latinos/PlotsConfigurations/master/Configurations/ggH/scripts/drawNLL.C

    root -l higgsCombine_MyScan.MultiDimFit.mH125.root drawNLL.C


# MC Asimov

    combine -M FitDiagnostics --expectSignal=1 -t -1 -m 125 datacards/datacard_combined.txt


# Significance (profile likelihood)

    combine -M ProfileLikelihood --significance --expectSignal=1 -t -1 -m 125 datacards/datacard_combined.txt > result.txt


# Fit the data

    combineTool.py -M Impacts -d datacards/datacard_combined.root -m 125 --doInitialFit --robustFit 1
    combineTool.py -M Impacts -d datacards/datacard_combined.root -m 125 --doFits --robustFit 1
    combineTool.py -M Impacts -d datacards/datacard_combined.root -m 125 -o impacts.json
    plotImpacts.py -i impacts.json -o impacts
