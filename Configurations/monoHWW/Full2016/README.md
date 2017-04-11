MonoHWW analysis
================

Steps to get datacards and plots:

    cd ~/work/CMSSW_8_0_26/src

    cmsenv

    cd -


Produce Histograms Using lxbatch:

    mkBatch.py --clean

    mkShapes.py --pycfg=configuration.py  --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__wwSel/  --doBatch=True --batchSplit=Cuts,Samples --batchQueue=8nh

    mkBatch.py --status

    mkShapes.py --pycfg=configuration.py  --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__wwSel/ --doHadd=True --batchSplit=Cuts,Samples


Produce Plots:

    mkShapes.py      --pycfg=configuration.py  --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__wwSel/ --doThread=True

    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_WW.root  --minLogC=0.0001 --minLogCratio=0.0001 --maxLogC=1000 --maxLogCratio=1000  --showIntegralLegend=1


Produce Datacards:

    mkDatacards.py   --pycfg=configuration_lxbatch.py  --inputFile=rootFile/plots_WW.root
