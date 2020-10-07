The following instructions correspond to the VBF and VH SF HWW STXS Stage 1.2 analysis.

# Produce a valid VOMS proxy

    voms-proxy-init -voms cms -rfc --valid 168:0
    cmsenv
    
# Produce histograms

    mkShapesMulti.py --pycfg=configuration.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

# Group (hadd) histograms

    mkShapesMulti.py --pycfg=configuration.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

# Produce histograms for data-driven DY estimation

    mkShapesMulti.py --pycfg=configuration_DYEST080.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch 
    mkShapesMulti.py --pycfg=configuration_DYEST090.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch 

# Group (hadd) data-driven DY estimation histograms

    mkShapesMulti.py --pycfg=configuration_DYEST080.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8   
    mkShapesMulti.py --pycfg=configuration_DYEST090.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8   

# Perform the data-driven DY estimation

    mkDYestim_data.py --pycfg=configuration.py --dycfg=dyestim_qqH.py --inputFile=rootFile/plots_STXS_qqH_SF_2016.root

Or, by using condor:

    python doDY.py --pycfg=configuration.py --dycfg=dyestim_qqH.py --inputFile=rootFile/plots_STXS_qqH_SF_2016.root

# Plot distributions

Before data-driven DY corrections:

    mkPlot.py --inputFile=rootFile/plots_STXS_qqH_SF_2016.root --linearOnly --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_STXS_qqH_SF_2016_noDY

With corrections:

    mkPlot.py --inputFile=rootFile/plots_STXS_qqH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio

Repeat, but with data-blind signal region. Put to 1 the 'isBlind' flag in plot.py and:

    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mjj65_105_ee            --inputFile=rootFile/plots_STXS_qqH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mjj350_700_pthLT200_ee  --inputFile=rootFile/plots_STXS_qqH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mjjGT700_pthLT200_ee --inputFile=rootFile/plots_STXS_qqH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mjjGT350_pthGT200_ee --inputFile=rootFile/plots_STXS_qqH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio

    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mjj65_105_mm            --inputFile=rootFile/plots_STXS_qqH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mjj350_700_pthLT200_mm  --inputFile=rootFile/plots_STXS_qqH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mjjGT700_pthLT200_mm --inputFile=rootFile/plots_STXS_qqH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mjjGT350_pthGT200_mm --inputFile=rootFile/plots_STXS_qqH_SF_2016_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio

# Make datacards

    mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_STXS_qqH_SF_2016_DYEstimDATA.root --cardList=hww2l2v_13TeV_2j_mjj65_105_ee,hww2l2v_13TeV_2j_mjj65_105_mm,hww2l2v_13TeV_2j_mjj350_700_pthLT200_ee,hww2l2v_13TeV_2j_mjj350_700_pthLT200_mm,hww2l2v_13TeV_2j_mjjGT700_pthLT200_ee,hww2l2v_13TeV_2j_mjjGT700_pthLT200_mm,hww2l2v_13TeV_2j_mjjGT350_pthGT200_ee,hww2l2v_13TeV_2j_mjjGT350_pthGT200_mm,hww2l2v_13TeV_top_2j_vh_ee,hww2l2v_13TeV_top_2j_vh_mm,hww2l2v_13TeV_top_2j_vbf_ee,hww2l2v_13TeV_top_2j_vbf_mm,hww2l2v_13TeV_top_2j_hpt_ee,hww2l2v_13TeV_top_2j_hpt_mm,hww2l2v_13TeV_WW_2j_vh_ee,hww2l2v_13TeV_WW_2j_vh_mm,hww2l2v_13TeV_WW_2j_vbf_ee,hww2l2v_13TeV_WW_2j_vbf_mm,hww2l2v_13TeV_WW_2j_hpt_ee,hww2l2v_13TeV_WW_2j_hpt_mm

# Combine channels/categories

    mkComb.py --pycfg=configuration.py --combineLocation=$HOME/combine/CMSSW_10_2_13/src/ --combcfg=comb_qqH.py

It can happen that some nuisance has negative norm. To drop it (and prevent combine from crashing) open `dropNuisance.sh` and add a line similar to the following one.

    echo "nuisance edit drop Vg hww2l2v_13TeV_top_2j_hpt_mm QCDscale_VV" >> datacards/Full2016_SF_qqH_HTXS_Stage1p2/comb/datacard.txt

Don't forget to run it.

    ./dropNuisance.sh

# Create the workspace from the datacard

    pushd ~piedra/combine/CMSSW_10_2_13/src/
    cmsenv
    popd

    mkdir Combination

    python doWorkspace.py

# Perform the fit on the workspace

    python doFit.py

