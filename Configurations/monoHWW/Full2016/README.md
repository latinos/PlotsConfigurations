MonoHWW analysis
================

1. SET UP THE ENVIRONMENT
-------------------------

    cd ~/work/CMSSW_8_0_26/src

    cmsenv

    cd -


2. PRODUCE HISTOGRAMS
---------------------

WITH LXBATCH

    mkBatch.py --clean

em Channel:

    mkShapes.py --pycfg=configuration_em.py  --inputDir=/eos/user/n/ntrevisa/trees/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__wwSel__monohSel/  --doBatch=True --batchSplit=Cuts,Samples --batchQueue=1nd

    mkBatch.py --status

    cd rootFile_em/

    hadd plots_monoHWW_em.root *

    cd ..

    mkPlot.py        --pycfg=configuration_em.py  --inputFile=rootFile_em/plots_monoHWW_em.root  --minLogC=0.0001 --minLogCratio=0.0001 --maxLogC=1000 --maxLogCratio=1000  --showIntegralLegend=1

    rm rootFile_em/plots_monoHWW_em_monoH_MVA_*

    mkDatacards.py   --pycfg=configuration_em.py  --inputFile=rootFile_em/plots_monoHWW_em.root

sf Channel:

    mkShapes.py --pycfg=configuration_sf.py  --inputDir=/eos/user/n/ntrevisa/trees/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__sfSel__monohSel/  --doBatch=True --batchSplit=Cuts,Samples --batchQueue=1nd

    mkBatch.py --status

    cd rootFile_sf/

    hadd plots_monoHWW_sf.root *

    cd ..

    mkPlot.py --pycfg=configuration_sf.py  --inputFile=rootFile_sf/plots_monoHWW_sf.root  --minLogC=0.0001 --minLogCratio=0.0001 --maxLogC=1000 --maxLogCratio=1000  --showIntegralLegend=1

    rm rootFile_sf/plots_monoHWW_sf_monoH_MVA_*

    mkDatacards.py   --pycfg=configuration_sf.py  --inputFile=rootFile_sf/plots_monoHWW_sf.root


INTERACTIVELY

Produce Plots for em Channel:

    mkShapes.py      --pycfg=configuration_em.py  --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__wwSel/ --doThread=True

    mkPlot.py        --pycfg=configuration_em.py  --inputFile=rootFile_em/plots_monoHWW_em.root  --minLogC=0.0001 --minLogCratio=0.0001 --maxLogC=1000 --maxLogCratio=1000  --showIntegralLegend=1


Produce Plots for sf Channel:

    mkShapes.py      --pycfg=configuration_sf.py  --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__sfSel/ --doThread=True

    mkPlot.py        --pycfg=configuration_sf.py  --inputFile=rootFile_sf/plots_monoHWW_sf.root  --minLogC=0.0001 --minLogCratio=0.0001 --maxLogC=1000 --maxLogCratio=1000  --showIntegralLegend=1

Produce Datacards:

    mkDatacards.py   --pycfg=configuration_lxbatch.py  --inputFile=rootFile/plots_WW.root


PRUNE DATACARDS
---------------

      cd ../../../../ModificationDatacards/

      ls ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Full2016/datacards/*/*/*.txt  | grep -v "pruned"  |   \
      awk '{print "python PruneDatacard.py  -d "$1" -o "$1".pruned.txt    -i examples/input_nuisances_to_prune.py"}' | /bin/sh

      cd -


COMBINE DATACARDS
-----------------

Setup combine:

      cd ~/work/CMSSW_7_4_7/src/HiggsAnalysis/CombinedLimit/

      cmsenv     

      cd -


      combineCards.py datacards/monoH_MVA_em/mth_control/datacard.txt.pruned.txt datacards/monoH_MVA_WW_em/events/datacard.txt.pruned.txt datacards/monoH_MVA_Top_em/events/datacard.txt.pruned.txt datacards/monoH_MVA_DYtt_em/events/datacard.txt.pruned.txt > datacards/monoH_MVA_em/mth_control/datacard_combined.txt


By hand:

   text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  --PO verbose --PO 'map=.*/monoH_800:r[1,0,10]' --PO 'map=.*/monoH_1200:0' --PO 'map=.*/monoH_1400:0' --PO 'map=.*/monoH_1700:0' --PO 'map=.*/monoH_2000:0' datacards/monoH_MVA_em/mth_control/datacard_combined.txt -o monoH800.root