# DY Control Plots in 2017 UL

Control plots in a DY phase space, using the Full 2017 Run 2 dataset.

The instructions to produce the plots follow.

### Produce distributions using mkShapesMulti.py in batch mode

    mkShapesMulti.py --pycfg=configuration.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

Resubmit failed jobs.

    cd $HOME/scripts/jobs/mkShapes__DY_2017_v9/
    for i in *jid; do condor_submit ${i/jid/jds}; done
    cd -

Or, if they failed because the wall clock time has been exceeded, resubmit them on a longer-time queue.

    cd $HOME/scripts/jobs/mkShapes__DY_2017_v9/
    for i in *jid; do sed -i "s/longlunch/workday/g" ${i/jid/jds}; condor_submit ${i/jid/jds}; done
    cd -

### Merge rootfiles using hadd

    mkShapesMulti.py --pycfg=configuration.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

### Plot distributions

    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_DY_2017_v9.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --minLogCratio=1


## To check the effect of COMPLETELY REMOVING the jet energy resolutions smearing factors

    mkShapesMulti.py --pycfg=configuration_noJER.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

    mkShapesMulti.py --pycfg=configuration_noJER.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

    mkPlot.py --pycfg=configuration_noJER.py --inputFile=rootFile_noJER/plots_DY_2017_v9_noJER.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --minLogCratio=1


## To check the effect of applying the jet energy resolutions smearing factors only to jets with PT > 50 GeV

    mkShapesMulti.py --pycfg=configuration_50GeVJER.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

    mkShapesMulti.py --pycfg=configuration_50GeVJER.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

    mkPlot.py --pycfg=configuration_50GeVJER.py --inputFile=rootFile_50GeVJER/plots_DY_2017_v9_50GeVJER.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --minLogCratio=1
