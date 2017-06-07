WW analysis
===========

Steps to get datacards and plots:

    cd ~/work/CMSSW_8_0_26/src

    cmsenv

    cd -


Produce Histograms Using lxbatch:

    mkBatch.py --clean

em Channel:

   mkShapes.py --pycfg=configuration_em.py  --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__wwSel/  --doBatch=True --batchSplit=Cuts,Samples --batchQueue=1nd

    mkBatch.py --status

    mkShapes.py --pycfg=configuration_em.py  --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__wwSel/ --doHadd=True --batchSplit=Cuts,Samples


sf Channel:

    mkShapes.py --pycfg=configuration_sf.py  --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__sfSel/  --doBatch=True --batchSplit=Cuts,Samples --batchQueue=1nd

    mkBatch.py --status

    mkShapes.py --pycfg=configuration_sf.py  --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__sfSel/ --doHadd=True --batchSplit=Cuts,Samples


Produce Plots for em Channel:

    mkShapes.py      --pycfg=configuration_em.py  --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__wwSel/ --doThread=True

    mkPlot.py        --pycfg=configuration_em.py  --inputFile=rootFile_em/plots_WW_em.root --minLogC=0.0001 --minLogCratio=0.0001 --maxLogC=1000 --maxLogCratio=1000  --showIntegralLegend=1  


Produce Plots for sf Channel:

    mkShapes.py      --pycfg=configuration_sf.py  --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__sfSel/ --doThread=True

    mkPlot.py        --pycfg=configuration_sf.py  --inputFile=rootFile_sf/plots_monoHWW_sf.root  --minLogC=0.0001 --minLogCratio=0.0001 --maxLogC=1000 --maxLogCratio=1000  --showIntegralLegend=1

Produce Datacards:

    mkDatacards.py   --pycfg=configuration_lxbatch.py  --inputFile=rootFile/plots_WW.root
