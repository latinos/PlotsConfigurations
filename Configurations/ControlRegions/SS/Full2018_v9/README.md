# Same'sign Control Plots in Full2018 UL

Control plots in a same'sign phase space, using the Full2018 UL dataset.

The instructions to produce the plots follow.

### Produce distributions using mkShapesMulti.py in batch mode

    mkShapesMulti.py --pycfg=configuration.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

### Merge rootfiles using hadd

    mkShapesMulti.py --pycfg=configuration.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

### Plot distributions

    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_SS_2018_v9.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --minLogCratio=1


