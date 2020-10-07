# Common tools for analysis:
  
    voms-proxy-init -voms cms -rfc --valid 168:0

## Produce distributions using mkShapesMulti.py in batch mode
  
    mkShapesMulti.py --pycfg=configuration.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

Resubmit failed jobs:

    cd $HOME/scripts/jobs/mkShapes__STXS_qqH_SF_2018/
    for i in *jid; do condor_submit ${i/jid/jds}; done
    cd -

## Hadd files

    mkShapesMulti.py --pycfg=configuration.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

## Produce distributions for data-driven DY estimation using mkShapesMulti.py in batch mode 

    mkShapesMulti.py --pycfg=configuration_DYEST080.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch 
    mkShapesMulti.py --pycfg=configuration_DYEST080.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

    mkShapesMulti.py --pycfg=configuration_DYEST090.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch 
    mkShapesMulti.py --pycfg=configuration_DYEST090.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

## Perform data-driven DY estimation

    mkDYestim_data.py --pycfg=configuration.py --dycfg=dyestim_qqH.py --inputFile=rootFile/plots_STXS_qqH_SF_2018.root

Or, by using condor:

    python doDY.py --pycfg=configuration.py --dycfg=dyestim_qqH.py --inputFile=rootFile/plots_STXS_qqH_SF_2018.root

## Plot distributions:

Before data-driven DY corrections:

    mkPlot.py --inputFile=rootFile/plots_STXS_qqH_SF_2018.root --linearOnly --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_STXS_qqH_SF_2018_noDY

With corrections:

    mkPlot.py --inputFile=rootFile/plots_STXS_qqH_SF_2018_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio

Repeat, but with data-blind signal region. Put to 1 the 'isBlind' flag in plot.py and:

    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mjj65_105_ee            --inputFile=rootFile/plots_STXS_qqH_SF_2018_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mjj350_700_pthLT200_ee  --inputFile=rootFile/plots_STXS_qqH_SF_2018_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mjjGT700_pthLT200_ee --inputFile=rootFile/plots_STXS_qqH_SF_2018_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mjjGT350_pthGT200_ee --inputFile=rootFile/plots_STXS_qqH_SF_2018_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio

    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mjj65_105_mm            --inputFile=rootFile/plots_STXS_qqH_SF_2018_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mjj350_700_pthLT200_mm  --inputFile=rootFile/plots_STXS_qqH_SF_2018_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mjjGT700_pthLT200_mm --inputFile=rootFile/plots_STXS_qqH_SF_2018_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mjjGT350_pthGT200_mm --inputFile=rootFile/plots_STXS_qqH_SF_2018_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio

## Produce datacards:

    mkDatacards.py \
        --pycfg=configuration.py \
	--inputFile=rootFile/plots_STXS_qqH_SF_2018_DYEstimDATA.root \
	--cardList=hww2l2v_13TeV_2j_mjj65_105_ee,hww2l2v_13TeV_2j_mjj65_105_mm,hww2l2v_13TeV_2j_mjj350_700_pthLT200_ee,hww2l2v_13TeV_2j_mjj350_700_pthLT200_mm,hww2l2v_13TeV_2j_mjjGT700_pthLT200_ee,hww2l2v_13TeV_2j_mjjGT700_pthLT200_mm,hww2l2v_13TeV_2j_mjjGT350_pthGT200_ee,hww2l2v_13TeV_2j_mjjGT350_pthGT200_mm,hww2l2v_13TeV_top_2j_vh_ee,hww2l2v_13TeV_top_2j_vh_mm,hww2l2v_13TeV_top_2j_vbf_ee,hww2l2v_13TeV_top_2j_vbf_mm,hww2l2v_13TeV_top_2j_hpt_ee,hww2l2v_13TeV_top_2j_hpt_mm,hww2l2v_13TeV_WW_2j_vh_ee,hww2l2v_13TeV_WW_2j_vh_mm,hww2l2v_13TeV_WW_2j_vbf_ee,hww2l2v_13TeV_WW_2j_vbf_mm,hww2l2v_13TeV_WW_2j_hpt_ee,hww2l2v_13TeV_WW_2j_hpt_mm

## Combine datacards:

Just combine all the datacards in one:

    mkComb.py --pycfg=configuration.py --combineLocation=../../../../../../../combine/CMSSW_10_2_13/src/ --combcfg=comb_qqH.py

Drop bogus nuisances:

    ./dropNuisance.sh 

## Create the workspace from the datacard

    python doWorkspace.py

## Perform the fit on the workspace

    python doFit.py
