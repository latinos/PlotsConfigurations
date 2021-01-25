# Systematic uncertainties extraction for data-driven Drell-Yan estimation method

Configuration for the extraction of the systematic uncertainties associated to the data-driven method used for Drell-Yan estimation in the same-flavor channel

### Produce a valid VOMS proxy

    voms-proxy-init -voms cms -rfc --valid 168:0
    cmsenv

# Produce distributions using mkShapesMulti.py in batch mode

    mkShapesMulti.py --pycfg=configuration.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

# Merge rootfiles using hadd

    mkShapesMulti.py --pycfg=configuration.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

# Make plots 

    mkDnnDYEstim.py --inputFile=rootFile/plots_ggH_SF_2018_v7_DYMVA_SYS.root --jet_bin=0j
    mkDnnDYEstim.py --inputFile=rootFile/plots_ggH_SF_2018_v7_DYMVA_SYS.root --jet_bin=1j
    mkDnnDYEstim.py --inputFile=rootFile/plots_ggH_SF_2018_v7_DYMVA_SYS.root --jet_bin=2j
    mkDnnDYEstim.py --inputFile=rootFile/plots_ggH_SF_2018_v7_DYMVA_SYS.root --jet_bin=VBF
    mkDnnDYEstim.py --inputFile=rootFile/plots_ggH_SF_2018_v7_DYMVA_SYS.root --jet_bin=VH

# Plot input distributions

    mkPlot.py --inputFile=rootFile/plots_ggH_SF_2018_v7_DYMVA_SYS.root --fileFormats=png --onlyPlot=cratio --outputDirPlots=plots_sr_ggH2018_v7_noDY --minLogCratio=1 --maxLogCratio=1000000 

Remove meaningless plots.

    rm plots_sr_ggH2018_v7_noDY/*cratio*H*
    rm plots_sr_ggH2018_v7_noDY/*cratio*ww*
    rm plots_sr_ggH2018_v7_noDY/*cratio*btag*

    rm plots_sr_ggH2018_v7_noDY/*cratio*_0j_*dnn_1j* 
    rm plots_sr_ggH2018_v7_noDY/*cratio*_0j_*dnn_2j* 
    rm plots_sr_ggH2018_v7_noDY/*cratio*_0j_*dnn_VH* 
    rm plots_sr_ggH2018_v7_noDY/*cratio*_0j_*dnn_VBF* 

    rm plots_sr_ggH2018_v7_noDY/*cratio*_1j_*dnn_0j* 
    rm plots_sr_ggH2018_v7_noDY/*cratio*_1j_*dnn_2j* 
    rm plots_sr_ggH2018_v7_noDY/*cratio*_1j_*dnn_VH* 
    rm plots_sr_ggH2018_v7_noDY/*cratio*_1j_*dnn_VBF* 

    rm plots_sr_ggH2018_v7_noDY/*cratio*_2j_*dnn_0j* 
    rm plots_sr_ggH2018_v7_noDY/*cratio*_2j_*dnn_1j* 
    rm plots_sr_ggH2018_v7_noDY/*cratio*_2j_*dnn_VH* 
    rm plots_sr_ggH2018_v7_noDY/*cratio*_2j_*dnn_VBF* 

    rm plots_sr_ggH2018_v7_noDY/*cratio*_VBF_*dnn_0j* 
    rm plots_sr_ggH2018_v7_noDY/*cratio*_VBF_*dnn_1j* 
    rm plots_sr_ggH2018_v7_noDY/*cratio*_VBF_*dnn_2j* 
    rm plots_sr_ggH2018_v7_noDY/*cratio*_VBF_*dnn_VH* 

    rm plots_sr_ggH2018_v7_noDY/*cratio*_VH_*dnn_0j* 
    rm plots_sr_ggH2018_v7_noDY/*cratio*_VH_*dnn_1j* 
    rm plots_sr_ggH2018_v7_noDY/*cratio*_VH_*dnn_2j* 
    rm plots_sr_ggH2018_v7_noDY/*cratio*_VH_*dnn_VBF* 

