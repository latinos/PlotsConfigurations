# Systematic Uncertainties Extraction for Data-Driven Drell-Yan Estimation Method

Configuration for the extraction of the systematic uncertainties associated to the data-driven method used for Drell-Yan estimation in the same-flavor channel

### Submit shapesmulti in batch

    mkShapesMulti.py --pycfg=configuration.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

### Hadd files

    mkShapesMulti.py --pycfg=configuration.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

### Make plots 

    mkDnnDYEstim.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS.root --jet_bin=0j
    mkDnnDYEstim.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS.root --jet_bin=1j
    mkDnnDYEstim.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS.root --jet_bin=2j
    mkDnnDYEstim.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS.root --jet_bin=VBF
    mkDnnDYEstim.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS.root --jet_bin=VH

### Plot input distributions

    mkPlot.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS.root --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_DYDNN_CR_2016 --minLogCratio=1 --maxLogCratio=1000000 --onlyCut=0j --onlyVariable=dymva_alt_dnn_0j
    mkPlot.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS.root --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_DYDNN_CR_2016 --minLogCratio=1 --maxLogCratio=1000000 --onlyCut=1j --onlyVariable=dymva_alt_dnn_1j
    mkPlot.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS.root --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_DYDNN_CR_2016 --minLogCratio=1 --maxLogCratio=1000000 --onlyCut=2j --onlyVariable=dymva_alt_dnn_2j
    mkPlot.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS.root --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_DYDNN_CR_2016 --minLogCratio=1 --maxLogCratio=1000000 --onlyCut=VBF --onlyVariable=dymva_alt_dnn_VBF
    mkPlot.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS.root --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_DYDNN_CR_2016 --minLogCratio=1 --maxLogCratio=1000000 --onlyCut=VH --onlyVariable=dymva_alt_dnn_VH

    mkPlot.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS.root --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_DYDNN_CR_2016 --minLogCratio=1 --maxLogCratio=1000000 --onlyVariable=ptll
    mkPlot.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS.root --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_DYDNN_CR_2016 --minLogCratio=1 --maxLogCratio=1000000 --onlyVariable=puppimet







## Using met recoil corrections

### Submit shapesmulti in batch

    mkShapesMulti.py --pycfg=configuration_met_recoil.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

### Hadd files

    mkShapesMulti.py --pycfg=configuration_met_recoil.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

### Make plots 

    mkDnnDYEstim.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS_MET_recoil.root --jet_bin=0j
    mkDnnDYEstim.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS_MET_recoil.root --jet_bin=1j
    mkDnnDYEstim.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS_MET_recoil.root --jet_bin=2j
    mkDnnDYEstim.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS_MET_recoil.root --jet_bin=VBF
    mkDnnDYEstim.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS_MET_recoil.root --jet_bin=VH

### Plot input distributions

    mkPlot.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS_MET_recoil.root --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_DYDNN_CR_2016_MET_recoil --minLogCratio=1 --maxLogCratio=1000000 --onlyCut=0j --onlyVariable=dymva_alt_dnn_0j
    mkPlot.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS_MET_recoil.root --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_DYDNN_CR_2016_MET_recoil --minLogCratio=1 --maxLogCratio=1000000 --onlyCut=1j --onlyVariable=dymva_alt_dnn_1j
    mkPlot.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS_MET_recoil.root --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_DYDNN_CR_2016_MET_recoil --minLogCratio=1 --maxLogCratio=1000000 --onlyCut=2j --onlyVariable=dymva_alt_dnn_2j
    mkPlot.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS_MET_recoil.root --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_DYDNN_CR_2016_MET_recoil --minLogCratio=1 --maxLogCratio=1000000 --onlyCut=VBF --onlyVariable=dymva_alt_dnn_VBF
    mkPlot.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS_MET_recoil.root --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_DYDNN_CR_2016_MET_recoil --minLogCratio=1 --maxLogCratio=1000000 --onlyCut=VH --onlyVariable=dymva_alt_dnn_VH

    mkPlot.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS_MET_recoil.root --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_DYDNN_CR_2016_MET_recoil --minLogCratio=1 --maxLogCratio=1000000 --onlyVariable=ptll
    mkPlot.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS_MET_recoil.root --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_DYDNN_CR_2016_MET_recoil --minLogCratio=1 --maxLogCratio=1000000 --onlyVariable=puppimet


## Using old z-pT reweighting

### Submit shapesmulti in batch

    mkShapesMulti.py --pycfg=configuration_pt_rew.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

### Hadd files

    mkShapesMulti.py --pycfg=configuration_pt_rew.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

### Make plots 

    mkDnnDYEstim.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS_pt_rew.root --jet_bin=0j
    mkDnnDYEstim.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS_pt_rew.root --jet_bin=1j
    mkDnnDYEstim.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS_pt_rew.root --jet_bin=2j
    mkDnnDYEstim.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS_pt_rew.root --jet_bin=VBF
    mkDnnDYEstim.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS_pt_rew.root --jet_bin=VH

### Plot input distributions

    mkPlot.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS_pt_rew.root --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_DYDNN_CR_2016_pt_rew --minLogCratio=1 --maxLogCratio=1000000 --onlyCut=0j --onlyVariable=dymva_alt_dnn_0j
    mkPlot.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS_pt_rew.root --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_DYDNN_CR_2016_pt_rew --minLogCratio=1 --maxLogCratio=1000000 --onlyCut=1j --onlyVariable=dymva_alt_dnn_1j
    mkPlot.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS_pt_rew.root --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_DYDNN_CR_2016_pt_rew --minLogCratio=1 --maxLogCratio=1000000 --onlyCut=2j --onlyVariable=dymva_alt_dnn_2j
    mkPlot.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS_pt_rew.root --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_DYDNN_CR_2016_pt_rew --minLogCratio=1 --maxLogCratio=1000000 --onlyCut=VBF --onlyVariable=dymva_alt_dnn_VBF
    mkPlot.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS_pt_rew.root --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_DYDNN_CR_2016_pt_rew --minLogCratio=1 --maxLogCratio=1000000 --onlyCut=VH --onlyVariable=dymva_alt_dnn_VH

    mkPlot.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS_pt_rew.root --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_DYDNN_CR_2016_pt_rew --minLogCratio=1 --maxLogCratio=1000000 --onlyVariable=ptll
    mkPlot.py --inputFile=rootFile/plots_ggH_SF_2016_v7_DYMVA_SYS_pt_rew.root --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_DYDNN_CR_2016_pt_rew --minLogCratio=1 --maxLogCratio=1000000 --onlyVariable=puppimet
