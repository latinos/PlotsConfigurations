# BTag Control Plots in 2016HIPM UL

Control plots in a different-flavor phase spaces, without applying any b tagging SF or b tagging selections, using the 2016HIPM UL dataset.

The instructions to produce the plots follow.

### Produce distributions using mkShapesMulti.py in batch mode

    mkShapesMulti.py --pycfg=configuration.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch --FixNegativeAfterHadd

### Merge rootfiles using hadd

    mkShapesMulti.py --pycfg=configuration.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8 --FixNegativeAfterHadd

### Plot distributions

    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_BTagNoSF_2016HIPM_v9.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --minLogCratio=1

### Get BTag normalization scsale factors

    mkBTagNormalization.py --file_with_sf ../DeepCSVSF/rootFile/plots_BTagDeepCSVSF_2016HIPM_v9.root --file_no_sf rootFile/plots_BTagNoSF_2016HIPM_v9.root --variable events
