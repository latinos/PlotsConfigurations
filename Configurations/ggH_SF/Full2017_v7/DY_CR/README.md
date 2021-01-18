# Systematic Uncertainties Extraction for Data-Driven Drell-Yan Estimation Method

Configuration for the extraction of the systematic uncertainties associated to the data-driven method used for Drell-Yan estimation in the same-flavor channel

### Submit shapesmulti in batch

    mkShapesMulti.py --pycfg=configuration.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

### Hadd files

    mkShapesMulti.py --pycfg=configuration.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

### Plot input distributions

    mkPlot.py --inputFile=rootFile/plots_ggH_SF_2017_v7_DY_CR.root --fileFormats=png --onlyPlot=cratio --minLogCratio=1 --maxLogCratio=1000000

