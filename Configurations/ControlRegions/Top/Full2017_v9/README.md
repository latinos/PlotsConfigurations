# Top Control Plots in 2017 UL

Control plots in a Top phase space, using the Full 2017 Run 2 dataset.

The instructions to produce the plots follow.

### Produce distributions using mkShapesMulti.py in batch mode

    mkShapesMulti.py --pycfg=configuration.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

Resubmit failed jobs.

    cd $HOME/scripts/jobs/mkShapes__Top_2017_v9/
    for i in *jid; do condor_submit ${i/jid/jds}; done
    cd -

Or, if they failed because the wall clock time has been exceeded, resubmit them on a longer-time queue.

    cd $HOME/scripts/jobs/mkShapes__Top_2017_v9/
    for i in *jid; do sed -i "s/longlunch/workday/g" ${i/jid/jds}; condor_submit ${i/jid/jds}; done
    cd -

### Merge rootfiles using hadd

    mkShapesMulti.py --pycfg=configuration.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

### Plot distributions

    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_Top_2017_v9.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --minLogCratio=1


## To check the effect of splitting Top into number of gen-matched jets

    mkShapesMulti.py --pycfg=configuration_TTonly.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

    mkShapesMulti.py --pycfg=configuration_TTonly.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

    mkPlot.py --pycfg=configuration_TTonly.py --inputFile=rootFile_TTonly/plots_Top_2017_v9_TTonly.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --minLogCratio=1


## To check the effect of COMPLETELY REMOVING the jet energy resolutions smearing factors

    mkShapesMulti.py --pycfg=configuration_noJER.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

    mkShapesMulti.py --pycfg=configuration_noJER.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

    mkPlot.py --pycfg=configuration_noJER.py --inputFile=rootFile_noJER/plots_Top_2017_v9_noJER.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --minLogCratio=1


## To check the effect of not applying the jet energy resolutions smearing factors to jet with pT > 50 GeV in the horns region

    mkShapesMulti.py --pycfg=configuration_noJERinHorn.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

    mkShapesMulti.py --pycfg=configuration_noJERinHorn.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

    mkPlot.py --pycfg=configuration_noJERinHorn.py --inputFile=rootFile_noJERinHorn/plots_Top_2017_v9_noJERinHorn.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --minLogCratio=1

