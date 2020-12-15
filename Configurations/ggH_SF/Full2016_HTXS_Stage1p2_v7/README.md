# Gluon-gluon fusion tag simplified template cross-section analysis 2016

Configuration for the same-flavor ggH-tag simplified template cross-section analysis using 2016 Data.

## Instructions to run the analysis

### Produce distributions using mkShapesMulti.py in batch mode

    mkShapesMulti.py --pycfg=configuration.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

Resubmit failed jobs:

    cd $HOME/scripts/jobs/mkShapes__ggH_HTXS_SF_2016_v7/
    for i in *jid; do condor_submit ${i/jid/jds}; done
    cd -

Or, if they failed because the wall clock time have been exceeded, resubmit them on a longer-time queue:

    cd $HOME/scripts/jobs/mkShapes__ggH_HTXS_SF_2016_v7/
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

    mkDYestim_data.py --pycfg=configuration.py --dycfg=dyestim_ggH_SF_HTXS.py --inputFile=rootFile/plots_ggH_HTXS_SF_2016_v7.root

### Plot distributions

    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_ggH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio

Repeat, but with data-blind signal region:

    mkPlot.py --onlyCut=hww2l2v_13TeV_0j_ee_pth0_10              --inputFile=rootFile/plots_ggH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_0j_ee_pth10_200            --inputFile=rootFile/plots_ggH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_1j_ee_pth0_60              --inputFile=rootFile/plots_ggH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_1j_ee_pth60_120            --inputFile=rootFile/plots_ggH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_1j_ee_pth120_200           --inputFile=rootFile/plots_ggH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_ee_mjj0_350_pth0_60     --inputFile=rootFile/plots_ggH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_ee_mjj0_350_pth60_120   --inputFile=rootFile/plots_ggH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_ee_mjj0_350_pth120_200  --inputFile=rootFile/plots_ggH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_ee_mjj350_700_pthjj0_25 --inputFile=rootFile/plots_ggH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_ee_mjj350_700_pthjj25   --inputFile=rootFile/plots_ggH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_ee_mjj700_pthjj0_25     --inputFile=rootFile/plots_ggH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_ee_mjj700_pthjj25       --inputFile=rootFile/plots_ggH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_hpt_ee_pth200_300          --inputFile=rootFile/plots_ggH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_hpt_ee_pth300_450          --inputFile=rootFile/plots_ggH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_hpt_ee_pth450_650          --inputFile=rootFile/plots_ggH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_hpt_ee_pth650              --inputFile=rootFile/plots_ggH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py

    mkPlot.py --onlyCut=hww2l2v_13TeV_0j_mm_pth0_10              --inputFile=rootFile/plots_ggH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_0j_mm_pth10_200            --inputFile=rootFile/plots_ggH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_1j_mm_pth0_60              --inputFile=rootFile/plots_ggH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_1j_mm_pth60_120            --inputFile=rootFile/plots_ggH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_1j_mm_pth120_200           --inputFile=rootFile/plots_ggH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mm_mjj0_350_pth0_60     --inputFile=rootFile/plots_ggH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mm_mjj0_350_pth60_120   --inputFile=rootFile/plots_ggH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mm_mjj0_350_pth120_200  --inputFile=rootFile/plots_ggH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mm_mjj350_700_pthjj0_25 --inputFile=rootFile/plots_ggH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mm_mjj350_700_pthjj25   --inputFile=rootFile/plots_ggH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mm_mjj700_pthjj0_25     --inputFile=rootFile/plots_ggH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mm_mjj700_pthjj25       --inputFile=rootFile/plots_ggH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_hpt_mm_pth200_300          --inputFile=rootFile/plots_ggH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_hpt_mm_pth300_450          --inputFile=rootFile/plots_ggH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_hpt_mm_pth450_650          --inputFile=rootFile/plots_ggH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_hpt_mm_pth650              --inputFile=rootFile/plots_ggH_HTXS_SF_2016_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py

### Create datacards

    mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_ggH_HTXS_SF_2016_v7_DYEstimDATA.root --cardList=hww2l2v_13TeV_0j_ee_pth0_10,hww2l2v_13TeV_0j_mm_pth0_10,hww2l2v_13TeV_0j_ee_pth10_200,hww2l2v_13TeV_0j_mm_pth10_200,hww2l2v_13TeV_1j_ee_pth0_60,hww2l2v_13TeV_1j_mm_pth0_60,hww2l2v_13TeV_1j_ee_pth60_120,hww2l2v_13TeV_1j_mm_pth60_120,hww2l2v_13TeV_1j_ee_pth120_200,hww2l2v_13TeV_1j_mm_pth120_200,hww2l2v_13TeV_2j_ee_mjj0_350_pth0_60,hww2l2v_13TeV_2j_mm_mjj0_350_pth0_60,hww2l2v_13TeV_2j_ee_mjj0_350_pth60_120,hww2l2v_13TeV_2j_mm_mjj0_350_pth60_120,hww2l2v_13TeV_2j_ee_mjj0_350_pth120_200,hww2l2v_13TeV_2j_mm_mjj0_350_pth120_200,hww2l2v_13TeV_2j_ee_mjj350_700_pthjj0_25,hww2l2v_13TeV_2j_mm_mjj350_700_pthjj0_25,hww2l2v_13TeV_2j_ee_mjj350_700_pthjj25,hww2l2v_13TeV_2j_mm_mjj350_700_pthjj25,hww2l2v_13TeV_2j_ee_mjj700_pthjj0_25,hww2l2v_13TeV_2j_mm_mjj700_pthjj0_25,hww2l2v_13TeV_2j_ee_mjj700_pthjj25,hww2l2v_13TeV_2j_mm_mjj700_pthjj25,hww2l2v_13TeV_hpt_ee_pth200_300,hww2l2v_13TeV_hpt_mm_pth200_300,hww2l2v_13TeV_hpt_ee_pth300_450,hww2l2v_13TeV_hpt_mm_pth300_450,hww2l2v_13TeV_hpt_ee_pth450_650,hww2l2v_13TeV_hpt_mm_pth450_650,hww2l2v_13TeV_hpt_ee_pth650,hww2l2v_13TeV_hpt_mm_pth650,hww2l2v_13TeV_top_0j_ee,hww2l2v_13TeV_top_1j_ee,hww2l2v_13TeV_top_2j_ee,hww2l2v_13TeV_top_hpt_ee,hww2l2v_13TeV_top_0j_mm,hww2l2v_13TeV_top_1j_mm,hww2l2v_13TeV_top_2j_mm,hww2l2v_13TeV_top_hpt_mm,hww2l2v_13TeV_WW_0j_ee,hww2l2v_13TeV_WW_1j_ee,hww2l2v_13TeV_WW_2j_ee,hww2l2v_13TeV_WW_hpt_ee,hww2l2v_13TeV_WW_0j_mm,hww2l2v_13TeV_WW_1j_mm,hww2l2v_13TeV_WW_2j_mm,hww2l2v_13TeV_WW_hpt_mm

### Combine channels/categories:

    mkdir -p Combination

    ./doCombination.sh > Combination/Full2016_SF_ggH_HTXS_Stage1p2_v7.txt

Remove nuisances giving negative yileds:

    ./dropNuisances.sh

### Prepare the workspace

To avoid possible segmentation fault errors, run this command:

    ulimit -s unlimited

And then, actually produce the workspace:

    python doWorkspace.py

### Do the Fit

    python doFit.py

### Results are stored in:

    Combination/FitResults.txt