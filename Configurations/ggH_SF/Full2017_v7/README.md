# Gluon-gluon fusion tag analysis 2017

Configuration for the same-flavor ggH-tag analysis using 2017 Data.

## Instructions to run the analysis

### Produce distributions using mkShapesMulti.py in batch mode

    mkShapesMulti.py --pycfg=configuration.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

Resubmit failed jobs:

    cd $HOME/scripts/jobs/mkShapes__ggH_SF_2017_v7/
    for i in *jid; do condor_submit ${i/jid/jds}; done
    cd -

Or, if they failed because the wall clock time have been exceeded, resubmit them on a longer-time queue:

    cd $HOME/scripts/jobs/mkShapes__ggH_SF_2017_v7/
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

    mkDYestim_data.py --pycfg=configuration.py --dycfg=dyestim_ggH_SF.py --inputFile=rootFile/plots_ggH_SF_2017_v7.root

### Plot distributions

    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_ggH_SF_2017_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio

Repeat, but with data-blind signal region:

    mkPlot.py --onlyCut=hww2l2v_13TeV_0j_ee --inputFile=rootFile/plots_ggH_SF_2017_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_1j_ee --inputFile=rootFile/plots_ggH_SF_2017_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_ee --inputFile=rootFile/plots_ggH_SF_2017_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py

    mkPlot.py --onlyCut=hww2l2v_13TeV_0j_mm --inputFile=rootFile/plots_ggH_SF_2017_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_1j_mm --inputFile=rootFile/plots_ggH_SF_2017_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py
    mkPlot.py --onlyCut=hww2l2v_13TeV_2j_mm --inputFile=rootFile/plots_ggH_SF_2017_v7_DYEstimDATA.root --linearOnly --fileFormats=png --onlyPlot=cratio --plotFile=plot_blind.py

### Create datacards

    mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_ggH_SF_2017_v7_DYEstimDATA.root --cardList=hww2l2v_13TeV_0j_ee,hww2l2v_13TeV_WW_0j_ee,hww2l2v_13TeV_top_0j_ee,hww2l2v_13TeV_0j_mm,hww2l2v_13TeV_WW_0j_mm,hww2l2v_13TeV_top_0j_mm,hww2l2v_13TeV_1j_ee,hww2l2v_13TeV_WW_1j_ee,hww2l2v_13TeV_top_1j_ee,hww2l2v_13TeV_1j_mm,hww2l2v_13TeV_WW_1j_mm,hww2l2v_13TeV_top_1j_mm,hww2l2v_13TeV_2j_ee,hww2l2v_13TeV_WW_2j_ee,hww2l2v_13TeV_top_2j_ee,hww2l2v_13TeV_2j_mm,hww2l2v_13TeV_WW_2j_mm,hww2l2v_13TeV_top_2j_mm

### Combine channels/categories

    mkComb.py --pycfg=configuration.py --combineLocation=$HOME/work/combine/CMSSW_10_2_13/src/ --combcfg=comb_ggH_SF.py

Drop nuisances giving negative values:

     ./dropNuisances.sh

### Compute significance and best fit

    mkOptim.py --pycfg=configuration.py --combineLocation=$HOME/work/combine/CMSSW_10_2_13/src/ --combcfg=comb_ggH_SF.py --fomList=SExpPre,BestFit

### Significance and best fit results are stored in:

    grep Significance: datacards/*/comb/SExpPre_*
    grep "fit r:" datacards/*/comb/BestFit_*

### Create table of yields

    grep "proc" datacards/hww2l2v_13TeV_*/events/datacard.txt > yield.txt
    grep "rate " datacards/hww2l2v_13TeV_*/events/datacard.txt >> yield.txt
    column -t yield.txt > yield_organized.txt