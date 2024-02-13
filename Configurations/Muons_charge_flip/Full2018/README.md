# WH charge flip extraction

We include here the workflow to extract charge-flip probabilities in electrons. These probabilities are used to weight MC events in the WHSS analysis.

The instructions to run the workflow follow.

### Produce same-sign and opposite-sign distributions in a DY phase space using mkShapesMulti.py in batch mode

    mkShapesMulti.py --pycfg=configuration.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch --FixNegativeAfterHadd

Resubmit failed jobs.

    cd $HOME/scripts/jobs/mkShapes__WHSS_2018_v9_chargeFlip_MuTight/
    for i in *jid; do condor_submit ${i/jid/jds}; done
    cd -

Or, if they failed because the wall clock time has been exceeded, resubmit them on a longer-time queue.

    cd $HOME/scripts/jobs/mkShapes__WHSS_2018_v9_chargeFlip_MuTight/
    for i in *jid; do sed -i "s/longlunch/workday/g" ${i/jid/jds}; condor_submit ${i/jid/jds}; done
    cd -

### Merge rootfiles using hadd

    mkShapesMulti.py --pycfg=configuration.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8 --FixNegativeAfterHadd

### Plot distributions

    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_Full2018_v9_HighPtMuons.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --plotFile=plot.py

### Fit distributions to get momentum resolution

    python mkRFit.py --inputFile rootFile/plots_Full2018_v9_HighPtMuons.root --outputFile output_file_test.root --cutsFile cuts.py --variable R_reco_gen1_zoom --outputDir sigma_plots

### Plots

The latest version of the plots is available at:

    https://ntrevisa.web.cern.ch/ntrevisa/plots/2024_01_18/
