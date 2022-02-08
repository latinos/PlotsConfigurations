# Quark-quark tag analysis 2017

Configuration for the same-flavor qqH-tag analysis using 2017 Data.

## Instructions to run the analysis

### Produce distributions using mkShapesMulti.py in batch mode

    mkShapesMulti.py --pycfg=configuration.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

Resubmit failed jobs:

    cd $HOME/scripts/jobs/mkShapes__qqH_SF_2017_v7/
    for i in *jid; do condor_submit ${i/jid/jds}; done
    cd -

Or, if they failed because the wall clock time have been exceeded, resubmit them on a longer-time queue:

    cd $HOME/scripts/jobs/mkShapes__qqH_SF_2017_v7/
    for i in *jid; do sed -i "s/longlunch/workday/g" ${i/jid/jds}; condor_submit ${i/jid/jds}; done
    cd -

### Merge rootfiles using hadd

    mkShapesMulti.py --pycfg=configuration.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

### Prepare histograms for DY data-driven estimation and merge rootfiles

    mkShapesMulti.py --pycfg=configuration_DYEST090.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch
    mkShapesMulti.py --pycfg=configuration_DYEST090.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

    mkShapesMulti.py --pycfg=configuration_DYEST080.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch 
    mkShapesMulti.py --pycfg=configuration_DYEST080.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

### Use previously-produced data-driven DY estimation histograms to correct yields in original distributions

    mkDYestim_data_splitNuisances.py --pycfg=configuration.py --dycfg=dyestim_qqH_SF.py --inputFile=rootFile/plots_qqH_SF_2017_v7.root --year=2017

This step will also produce a new file, 'Nuisances_file.txt': copy its content in nuisances.py to properly consider uncertainties on the DY process. 
Remember to first delete the old values of the uncertainties! You can find them in nuisances.py, looking for the string 'Nuisances breakdown'.

### Plot distributions

    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_qqH_SF_2017_v7_DYEstimDATA_breakdown.root --linearOnly --fileFormats=png --onlyPlot=cratio

Repeat, but with data-blind signal region:

    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_vh_ee  --inputFile=rootFile/plots_qqH_SF_2017_v7_DYEstimDATA_breakdown.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_vbf_ee --inputFile=rootFile/plots_qqH_SF_2017_v7_DYEstimDATA_breakdown.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py

    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_vh_mm  --inputFile=rootFile/plots_qqH_SF_2017_v7_DYEstimDATA_breakdown.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_vbf_mm --inputFile=rootFile/plots_qqH_SF_2017_v7_DYEstimDATA_breakdown.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py

### Create datacards

    mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_qqH_SF_2017_v7_DYEstimDATA_breakdown.root --cardList=hww2l2v_13TeV_2j_vbf_ee,hww2l2v_13TeV_2j_vbf_mm,hww2l2v_13TeV_2j_vh_ee,hww2l2v_13TeV_2j_vh_mm,hww2l2v_13TeV_WW_2j_vbf_ee,hww2l2v_13TeV_WW_2j_vbf_mm,hww2l2v_13TeV_WW_2j_vh_ee,hww2l2v_13TeV_WW_2j_vh_mm,hww2l2v_13TeV_top_2j_vbf_ee,hww2l2v_13TeV_top_2j_vbf_mm,hww2l2v_13TeV_top_2j_vh_ee,hww2l2v_13TeV_top_2j_vh_mm

### Combine channels/categories

    mkComb.py --pycfg=configuration.py --combineLocation=$HOME/work/combine/CMSSW_10_2_13/src/ --combcfg=comb_qqH_SF.py

Drop nuisances giving negative values:

    ./dropNuisances.sh

### Compute significance and best fit

    mkOptim.py --pycfg=configuration.py --combineLocation=$HOME/work/combine/CMSSW_10_2_13/src/ --combcfg=comb_qqH_SF.py --fomList=SExpPre,BestFit

### Significance and best fit results are stored in:

    grep Significance: datacards/*/comb/SExpPre_*
    grep "fit r:" datacards/*/comb/BestFit_*

### Produce Impact Plots

Source combine:

    cd $HOME/work/combine/CMSSW_10_2_13/src/
    cmsenv
    cd -

    ulimit -s unlimited

Prepare directory:

    mkdir -p Impact_plots

VBF category:

    text2workspace.py datacards/hww2l2v_13TeV_VBF/comb/datacard.txt -o datacards/hww2l2v_13TeV_VBF/comb/datacard.root

    combineTool.py -M Impacts -d datacards/hww2l2v_13TeV_VBF/comb/datacard.root -m 125 --doInitialFit -t -1 --expectSignal=1 --X-rtd MINIMIZER_analytic --cminDefaultMinimizerStrategy=0 --rMin=-6 --rMax=10
    combineTool.py -M Impacts -d datacards/hww2l2v_13TeV_VBF/comb/datacard.root -m 125 --doFits -t -1 --expectSignal=1 --X-rtd MINIMIZER_analytic --cminDefaultMinimizerStrategy=0 --job-mode=interactive --parallel=10 --rMin=-6 --rMax=10
    combineTool.py -M Impacts -d datacards/hww2l2v_13TeV_VBF/comb/datacard.root -m 125  -t -1 --X-rtd MINIMIZER_analytic --cminDefaultMinimizerStrategy=0 -o datacards/hww2l2v_13TeV_VBF/comb/impacts.json

    plotImpacts.py -i datacards/hww2l2v_13TeV_VBF/comb/impacts.json -o Impact_plots/Impact_qqH_2j_vbf_2017

    rm higgsCombine_*

VH category:

    text2workspace.py datacards/hww2l2v_13TeV_VH/comb/datacard.txt -o datacards/hww2l2v_13TeV_VH/comb/datacard.root

    combineTool.py -M Impacts -d datacards/hww2l2v_13TeV_VH/comb/datacard.root -m 125 --doInitialFit -t -1 --expectSignal=1 --X-rtd MINIMIZER_analytic --cminDefaultMinimizerStrategy=0 --rMin=-6 --rMax=10
    combineTool.py -M Impacts -d datacards/hww2l2v_13TeV_VH/comb/datacard.root -m 125 --doFits -t -1 --expectSignal=1 --X-rtd MINIMIZER_analytic --cminDefaultMinimizerStrategy=0 --job-mode=interactive --parallel=10 --rMin=-6 --rMax=10
    combineTool.py -M Impacts -d datacards/hww2l2v_13TeV_VH/comb/datacard.root -m 125 -t -1 --X-rtd MINIMIZER_analytic --cminDefaultMinimizerStrategy=0 -o datacards/hww2l2v_13TeV_VH/comb/impacts.json

    plotImpacts.py -i datacards/hww2l2v_13TeV_VH/comb/impacts.json -o Impact_plots/Impact_qqH_2j_vh_2017

    rm higgsCombine_*

### Create table of yields

    grep "proc" datacards/hww2l2v_13TeV_*/events/datacard.txt > yield.txt
    grep "rate " datacards/hww2l2v_13TeV_*/events/datacard.txt >> yield.txt
    column -t yield.txt > yield_organized.txt