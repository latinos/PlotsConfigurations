B1;5202;0c# Quark-quark tag simplified template cross-section analysis 2016

Configuration for the same-flavor qqH-tag simplified template cross-section analysis using 2016 Data.

## Instructions to run the analysis

### Produce distributions using mkShapesMulti.py in batch mode

    mkShapesMulti.py --pycfg=configuration.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

Resubmit failed jobs:

    cd $HOME/scripts/jobs/mkShapes__qqH_HTXS_SF_2016_v7/
    for i in *jid; do condor_submit ${i/jid/jds}; done
    cd -

Or, if they failed because the wall clock time have been exceeded, resubmit them on a longer-time queue:

    cd $HOME/scripts/jobs/mkShapes__qqH_HTXS_SF_2016_v7/
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

    mkDYestim_data_splitNuisances.py --pycfg=configuration.py --dycfg=dyestim_qqH_SF_HTXS.py --inputFile=rootFile/plots_qqH_HTXS_SF_2016_v7.root --year=2016

### Plot distributions

    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_qqH_HTXS_SF_2016_v7_DYEstimDATA_breakdown.root --linearOnly --fileFormats=png --onlyPlot=cratio

Repeat, but with data-blind signal region:

    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mjj65_105_ee           --inputFile=rootFile/plots_qqH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mjj350_700_pthLT200_ee --inputFile=rootFile/plots_qqH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mjjGT700_pthLT200_ee   --inputFile=rootFile/plots_qqH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mjjGT350_pthGT200_ee   --inputFile=rootFile/plots_qqH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py

    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mjj65_105_mm           --inputFile=rootFile/plots_qqH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mjj350_700_pthLT200_mm --inputFile=rootFile/plots_qqH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mjjGT700_pthLT200_mm   --inputFile=rootFile/plots_qqH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mjjGT350_pthGT200_mm   --inputFile=rootFile/plots_qqH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py

### Create datacards

    mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_qqH_HTXS_SF_2016_v7_DYEstimDATA_breakdown.root --cardList=hww2l2v_13TeV_2j_mjj65_105_ee,hww2l2v_13TeV_2j_mjj65_105_mm,hww2l2v_13TeV_2j_mjj350_700_pthLT200_ee,hww2l2v_13TeV_2j_mjj350_700_pthLT200_mm,hww2l2v_13TeV_2j_mjjGT700_pthLT200_ee,hww2l2v_13TeV_2j_mjjGT700_pthLT200_mm,hww2l2v_13TeV_2j_mjjGT350_pthGT200_ee,hww2l2v_13TeV_2j_mjjGT350_pthGT200_mm,hww2l2v_13TeV_top_2j_vh_ee,hww2l2v_13TeV_top_2j_vh_mm,hww2l2v_13TeV_top_2j_vbf_ee,hww2l2v_13TeV_top_2j_vbf_mm,hww2l2v_13TeV_top_2j_hpt_ee,hww2l2v_13TeV_top_2j_hpt_mm,hww2l2v_13TeV_WW_2j_vh_ee,hww2l2v_13TeV_WW_2j_vh_mm,hww2l2v_13TeV_WW_2j_vbf_ee,hww2l2v_13TeV_WW_2j_vbf_mm,hww2l2v_13TeV_WW_2j_hpt_ee,hww2l2v_13TeV_WW_2j_hpt_mm

### Combine channels/categories:

    mkdir -p Combination

    ./doCombination.sh > Combination/Full2016_SF_qqH_HTXS_Stage1p2_v7.txt

Remove nuisances giving negative yileds:

    ./dropNuisances.sh

### Prepare the workspace

Source combine:

    cd $HOME/work/combine/CMSSW_10_2_13/src/
    eval `scramv1 runtime -sh`
    cd -

To avoid possible segmentation fault errors, run this command:

    ulimit -s unlimited

And then, actually produce the workspace:

    python doWorkspace.py

### Do the Fit

    python doFit.py

### Results are stored in:

    cat Combination/FitResults.txt

### Produce Impact Plots

Prepare directory:

    mkdir -p Impact_plots_HTXS

Source combine:

    cd $HOME/work/combine/CMSSW_10_2_13/src/
    eval `scramv1 runtime -sh`
    cd -

To avoid possible segmentation fault errors, run this command:

    ulimit -s unlimited

Make initial fit:

    combineTool.py -M Impacts -d Combination/Full2016_SF_qqH_HTXS_Stage1p2_v7.root -m 125 -t -1 --doInitialFit --X-rtd MINIMIZER_analytic --cminDefaultMinimizerStrategy=0 --setParameters r_ggH_hww_GE2J_MJJ_0_350_PTH_120_200=1,r_VH_had_hww_MJJ_60_120=1,r_qqH_hww_MJJ_350_700_PTH_LT200=1,r_qqH_hww_MJJ_GT350_PTH_GT200=1,r_ggH_hww_GE2J_MJJ_350_700=1,r_qqH_hww_MJJ_GT700_PTH_LT200=1,r_ggH_hww_GE2J_MJJ_GT700=1,r_ggH_hww_GE2J_MJJ_0_350_PTH_LT120=1,r_ggH_hww_PTH_200_300=1,r_ggH_hww_PTH_GT300=1 --redefineSignalPOIs r_ggH_hww_GE2J_MJJ_0_350_PTH_120_200,r_VH_had_hww_MJJ_60_120,r_qqH_hww_MJJ_350_700_PTH_LT200,r_qqH_hww_MJJ_GT350_PTH_GT200,r_ggH_hww_GE2J_MJJ_350_700,r_qqH_hww_MJJ_GT700_PTH_LT200,r_ggH_hww_GE2J_MJJ_GT700,r_ggH_hww_GE2J_MJJ_0_350_PTH_LT120,r_ggH_hww_PTH_200_300,r_ggH_hww_PTH_GT300

Send actual fits jobs to condor:    

    combineTool.py -M Impacts -d Combination/Full2016_SF_qqH_HTXS_Stage1p2_v7.root --doFits -t -1 --X-rtd MINIMIZER_analytic --cminDefaultMinimizerStrategy=0 -m 125 --setParameters r_ggH_hww_GE2J_MJJ_0_350_PTH_120_200=1,r_VH_had_hww_MJJ_60_120=1,r_qqH_hww_MJJ_350_700_PTH_LT200=1,r_qqH_hww_MJJ_GT350_PTH_GT200=1,r_ggH_hww_GE2J_MJJ_350_700=1,r_qqH_hww_MJJ_GT700_PTH_LT200=1,r_ggH_hww_GE2J_MJJ_GT700=1,r_ggH_hww_GE2J_MJJ_0_350_PTH_LT120=1,r_ggH_hww_PTH_200_300=1,r_ggH_hww_PTH_GT300=1 --redefineSignalPOIs r_ggH_hww_GE2J_MJJ_0_350_PTH_120_200,r_VH_had_hww_MJJ_60_120,r_qqH_hww_MJJ_350_700_PTH_LT200,r_qqH_hww_MJJ_GT350_PTH_GT200,r_ggH_hww_GE2J_MJJ_350_700,r_qqH_hww_MJJ_GT700_PTH_LT200,r_ggH_hww_GE2J_MJJ_GT700,r_ggH_hww_GE2J_MJJ_0_350_PTH_LT120,r_ggH_hww_PTH_200_300,r_ggH_hww_PTH_GT300 --job-mode=condor --sub-opt '+JobFlavour = "tomorrow"'

Create json file:

    combineTool.py -M Impacts -d Combination/Full2016_SF_qqH_HTXS_Stage1p2_v7.root -t -1 --X-rtd MINIMIZER_analytic --cminDefaultMinimizerStrategy=0 -m 125 --setParameters r_ggH_hww_GE2J_MJJ_0_350_PTH_120_200=1,r_VH_had_hww_MJJ_60_120=1,r_qqH_hww_MJJ_350_700_PTH_LT200=1,r_qqH_hww_MJJ_GT350_PTH_GT200=1,r_ggH_hww_GE2J_MJJ_350_700=1,r_qqH_hww_MJJ_GT700_PTH_LT200=1,r_ggH_hww_GE2J_MJJ_GT700=1,r_ggH_hww_GE2J_MJJ_0_350_PTH_LT120=1,r_ggH_hww_PTH_200_300=1,r_ggH_hww_PTH_GT300=1 --redefineSignalPOIs r_ggH_hww_GE2J_MJJ_0_350_PTH_120_200,r_VH_had_hww_MJJ_60_120,r_qqH_hww_MJJ_350_700_PTH_LT200,r_qqH_hww_MJJ_GT350_PTH_GT200,r_ggH_hww_GE2J_MJJ_350_700,r_qqH_hww_MJJ_GT700_PTH_LT200,r_ggH_hww_GE2J_MJJ_GT700,r_ggH_hww_GE2J_MJJ_0_350_PTH_LT120,r_ggH_hww_PTH_200_300,r_ggH_hww_PTH_GT300 -o Combination/impacts_total.json

Create impact plots, one for each POI:

    plotImpacts.py -i Combination/impacts_total.json -o Impact_plots_HTXS/Impact_VH_had_hww_MJJ_60_120		     --POI r_VH_had_hww_MJJ_60_120
    plotImpacts.py -i Combination/impacts_total.json -o Impact_plots_HTXS/Impact_qqH_hww_MJJ_350_700_PTH_LT200	     --POI r_qqH_hww_MJJ_350_700_PTH_LT200
    plotImpacts.py -i Combination/impacts_total.json -o Impact_plots_HTXS/Impact_qqH_hww_MJJ_GT350_PTH_GT200	     --POI r_qqH_hww_MJJ_GT350_PTH_GT200
    plotImpacts.py -i Combination/impacts_total.json -o Impact_plots_HTXS/Impact_qqH_hww_MJJ_GT700_PTH_LT200	     --POI r_qqH_hww_MJJ_GT700_PTH_LT200

Clean the mess:

    rm higgsCombine_*
    rm combine_* 
    rm condor_combine_task.s*

