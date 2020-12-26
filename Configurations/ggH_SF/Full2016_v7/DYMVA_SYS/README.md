# Systematic Uncertainties Extraction for Data-Driven Drell-Yan Estimation Method

Configuration for the extraction of the systematic uncertainties associated to the data-driven method used for Drell-Yan estimation in the same-flavor channel

# Submit shapesmulti in batch

    mkShapesMulti.py --pycfg=configuration.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

# Hadd files

    mkShapesMulti.py --pycfg=configuration.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

# Make plots 

    mkDnnDYEstim.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS.root --jet_bin=0j
    mkDnnDYEstim.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS.root --jet_bin=1j
    mkDnnDYEstim.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS.root --jet_bin=2j
    mkDnnDYEstim.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS.root --jet_bin=VBF
    mkDnnDYEstim.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS.root --jet_bin=VH

# Plot input distributions

    mkPlot.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS.root --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_sr_ggH2016_v7_noDY --minLogCratio=1 --maxLogCratio=1000000 