# Control plots for DY R(out/in) method

Configuration to produce validation plots for the R(out/in) data-driven Drell-Yan estimation method

## Instructions to produce the plots - First Validation Region - Z-peak sideband

This first validation region is a Z-peak side-band. For this reason, we use just R(out/in) to estimate the DY contamination.

### Produce distributions using mkShapesMulti.py in batch mode

    mkShapesMulti.py --pycfg=configuration_Z.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

Resubmit failed jobs:

    cd $HOME/scripts/jobs/mkShapes__DY_validation_Zpeak_2017_v7/
    for i in *jid; do condor_submit ${i/jid/jds}; done
    cd -

Or, if they failed because the wall clock time have been exceeded, resubmit them on a longer-time queue:

    cd $HOME/scripts/jobs/mkShapes__DY_validation_Zpeak_2017_v7/
    for i in *jid; do sed -i "s/longlunch/workday/g" ${i/jid/jds}; condor_submit ${i/jid/jds}; done
    cd -

### Merge rootfiles using hadd

    mkShapesMulti.py --pycfg=configuration_Z.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

### Prepare histograms for DY data-driven estimation and merge rootfiles

    mkShapesMulti.py --pycfg=configuration_DYEST_Zpeak.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch 
    mkShapesMulti.py --pycfg=configuration_DYEST_Zpeak.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

### Use previously-produced data-driven DY estimation histograms to correct yields in original distributions

    mkDYestim_data_splitNuisances.py --pycfg=configuration_Z.py --dycfg=dyestim_Zpeak.py --inputFile=rootFile/plots_DY_validation_Zpeak_2017_v7.root --year=2017

### Plot distributions

    mkPlot.py --pycfg=configuration_Z.py --inputFile=rootFile/plots_DY_validation_Zpeak_2017_v7_DYEstimDATA_breakdown.root --linearOnly --fileFormats=png --onlyPlot=cratio



## Instructions to produce the plots - Second Validation Region - Loose DNN Selection 

The second validation region is similar to the signal region, but with a looser DNN cut. On top of the R(out/in), the DY contamination is estimated using the sideband-to-region acceptance.

### Produce distributions using mkShapesMulti.py in batch mode

    mkShapesMulti.py --pycfg=configuration_loose.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

Resubmit failed jobs:

    cd $HOME/scripts/jobs/mkShapes__DY_validation_Zpeak_2017_v7/
    for i in *jid; do condor_submit ${i/jid/jds}; done
    cd -

Or, if they failed because the wall clock time have been exceeded, resubmit them on a longer-time queue:

    cd $HOME/scripts/jobs/mkShapes__DY_validation_Zpeak_2017_v7/
    for i in *jid; do sed -i "s/longlunch/workday/g" ${i/jid/jds}; condor_submit ${i/jid/jds}; done
    cd -

### Merge rootfiles using hadd

    mkShapesMulti.py --pycfg=configuration_loose.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

## Prepare histograms for DY data-driven estimation and merge rootfiles

    mkShapesMulti.py --pycfg=configuration_DYEST050.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch 
    mkShapesMulti.py --pycfg=configuration_DYEST050.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

### Use previously-produced data-driven DY estimation histograms to correct yields in original distributions

    mkDYestim_data_splitNuisances.py --pycfg=configuration_loose.py --dycfg=dyestim_loose.py --inputFile=rootFile/plots_DY_validation_loose_2017_v7.root --year=2017

### Plot distributions

    mkPlot.py --pycfg=configuration_loose.py --inputFile=rootFile/plots_DY_validation_loose_2017_v7_DYEstimDATA_breakdown.root --linearOnly --fileFormats=png --onlyPlot=cratio
