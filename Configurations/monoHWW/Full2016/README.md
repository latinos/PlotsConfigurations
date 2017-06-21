MonoHWW analysis
================

# 1 SET UP THE ENVIRONMENT

    cd ~/work/CMSSW_8_0_26_patch1/src

    cmsenv

    cd -


# 2 PRODUCE HISTOGRAMS

WITH LXBATCH
------------

    mkBatch.py --clean

em Channel:

    mkShapes.py --pycfg=configuration_em.py  --inputDir=/eos/user/n/ntrevisa/trees/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__wwSel__monohSel/  --doBatch=True --batchSplit=Cuts,Samples --batchQueue=1nd

    mkBatch.py --status

    cd rootFile_em/

    hadd plots_monoHWW_em.root *

    cd ..

    mkPlot.py        --pycfg=configuration_em.py  --inputFile=rootFile_em/plots_monoHWW_em.root  --minLogC=0.01 --minLogCratio=0.01 --maxLogC=1000 --maxLogCratio=1000  --showIntegralLegend=1

    rm rootFile_em/plots_monoHWW_em_monoH_MVA_*


sf Channel:

    mkShapes.py --pycfg=configuration_sf.py  --inputDir=/eos/user/n/ntrevisa/trees/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__sfSel__monohSel/  --doBatch=True --batchSplit=Cuts,Samples --batchQueue=1nd

    mkBatch.py --status

    cd rootFile_sf/

    hadd plots_monoHWW_sf.root *

    cd ..

    mkPlot.py --pycfg=configuration_sf.py  --inputFile=rootFile_sf/plots_monoHWW_sf.root  --minLogC=0.01 --minLogCratio=0.01 --maxLogC=1000 --maxLogCratio=1000  --showIntegralLegend=1

    rm rootFile_sf/plots_monoHWW_sf_monoH_MVA_*



INTERACTIVELY
-------------

Produce Plots for em Channel:

    mkShapes.py      --pycfg=configuration_em.py  --inputDir=/eos/user/n/ntrevisa/trees/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__wwSel__monohSel/  --doThread=True

    mkPlot.py        --pycfg=configuration_em.py  --inputFile=rootFile_em/plots_monoHWW_em.root  --minLogC=0.01 --minLogCratio=0.01 --maxLogC=1000 --maxLogCratio=1000  --showIntegralLegend=1


Produce Plots for sf Channel:

    mkShapes.py      --pycfg=configuration_sf.py  --inputDir=/eos/user/n/ntrevisa/trees/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__sfSel__monohSel/ --doThread=True

    mkPlot.py        --pycfg=configuration_sf.py  --inputFile=rootFile_sf/plots_monoHWW_sf.root  --minLogC=0.01 --minLogCratio=0.01 --maxLogC=1000 --maxLogCratio=1000  --showIntegralLegend=1


# 3 PRODUCE DATACARDS

    mkDatacards.py   --pycfg=configuration_em.py  --inputFile=rootFile_em/plots_monoHWW_em.root

    mkDatacards.py   --pycfg=configuration_sf.py  --inputFile=rootFile_sf/plots_monoHWW_sf.root


PRUNE DATACARDS
---------------

      cd ../../../../ModificationDatacards/

      ls ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Full2016/datacards/*/*/*.txt  | grep -v "pruned"  |   \
      awk '{print "python PruneDatacard.py  -d "$1" -o "$1".pruned.txt    -i examples/input_nuisances_to_prune.py"}' | /bin/sh

      cd -


# 4 COMBINE DATACARDS

Setup combine:

      cd ~/work/CMSSW_7_4_7/src/HiggsAnalysis/CombinedLimit/

      cmsenv     

      cd -

Do the combination:

      combineCards.py datacards/monoH_MVA_em/mth_control/datacard.txt.pruned.txt datacards/monoH_MVA_WW_em/events/datacard.txt.pruned.txt datacards/monoH_MVA_Top_em/events/datacard.txt.pruned.txt datacards/monoH_MVA_DYtt_em/events/datacard.txt.pruned.txt > datacards/monoH_MVA_em/mth_control/datacard_combined.txt


# 5 GET THE LIMITS

By hand (for 2HDM model, mZ' = 800 GeV, mA0 = 300 GeV):

    text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  --PO verbose --PO 'map=.*/monoH_800:r[1,0,10]' --PO 'map=.*/monoH_1200:0' --PO 'map=.*/monoH_1400:0' --PO 'map=.*/monoH_1700:0' --PO 'map=.*/monoH_2000:0' datacards/monoH_MVA_em/mth_control/datacard_combined.txt -o monoH800.root
    
    combine -M Asymptotic monoH800.root

Using the script:

      python scriptMonoH.py em mth

      python scriptMonoH.py sf mth


# 6 DRAW THE EXCLUSION PLOTS

    root -l -b -q 'plot_Asymptotic_ForCombination.C("","em","mthBin","MVA","2HDM")'


# 7 PERFORM A GOODNESS OF FIT TEST ON THE CONTROL REGIONS

By hand for mth variable:

    combine -M GoodnessOfFit datacards/monoH_MVA_Top_em/mth/datacard.txt.pruned.txt --algo=KS --fixedSignalStrength=1    
    
    combine -M GoodnessOfFit datacards/monoH_MVA_DYtt_em/mth/datacard.txt.pruned.txt --algo=KS --fixedSignalStrength=1    

    combine -M GoodnessOfFit datacards/monoH_MVA_WW_em/mth/datacard.txt.pruned.txt --algo=KS --fixedSignalStrength=1

Using the script on the three control regions:

    python scriptGoodnessOfFit.py mth

# 8 PRODUCE PRE-FIT TABLES FOR NUISANCES IN THE SIGNAL REGION

First produce a copy of the datacard with just one signal sample (in order to be able to read the table)	

      cd ~/work/CMSSW_8_0_26_patch1/src/ModificationDatacards

      python RemoveSample.py   ../PlotsConfigurations/Configurations/monoHWW/Full2016/datacards/monoH_MVA_em/muccamva2HDMadaptFull/datacard.txt.pruned.txt    -i   inputRemoval.py

      cp test.tex cp test.txt ../PlotsConfigurations/Configurations/monoHWW/Full2016/datacards/monoH_MVA_em/muccamva2HDMadaptFull/

      cd -

And then create the actual table from that small datacard

    cd ~/work/CMSSW_8_0_26_patch1/src/PlayWithDatacards/

    python systematicsAnalyzer.py ../PlotsConfigurations/Configurations/monoHWW/Full2016/datacards/monoH_MVA_em/muccamva2HDMadaptFull/test.txt --all -f tex > ../PlotsConfigurations/Configurations/monoHWW/Full2016/tables/monoH_MVA_em_muccamva2HDMadaptFull.tex

    cd -

# 9 CALCULATE PDF AND QCD ACCEPTANCE UNCERTANTIES

    At the end you will find the nuisances values in the testPDF folder. Copy them in your favourite nuisances.py file. 

    cd PDFQCD/

    mkShapes.py --pycfg=configuration.py --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__wwSel/ --doThread==True 

    mkPDF.py --pycfg=configuration.py --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__wwSel/ --inputFile=rootFile/plots_monoHWW_em.root --outputDirPDF=testPDF/

    cd -

    
# 10 PRODUCE SYSTEMATIC PULLS AND IMPACT PLOTS

Step by step:

    text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose --PO 'map=.*/monoH_*:0' --PO 'map=.*/monoH_800_300:r[1,0,10]' datacards/monoH_MVA_em/mthBin/datacard_combined.txt -o datacards/monoH_MVA_em/mthBin/datacard_combined.root

    combineTool.py -M Impacts -d datacards/monoH_MVA_em/mthBin/datacard_combined.root -m 125 --doInitialFit -t -1 --expectSignal=1 --robustFit 1
  
    combineTool.py -M Impacts -d datacards/monoH_MVA_em/mthBin/datacard_combined.root -m 125 -t -1 --expectSignal=1 --robustFit 1 --doFits
  
    combineTool.py -M Impacts -d datacards/monoH_MVA_em/mthBin/datacard_combined.root -m 125 -o impactPlots_em/mthBin.json
  
    plotImpacts.py -i impactPlots_em/mthBin.json -o impactPlots_em/mthBin

Or using the script:

    python scriptImpact.py em mthBin MVA

# 11 DRAW THE EFFECT OF SHAPE-BASED NUISANCES ON EACH SAMPLE ONE BY ONE

    cd ~/work/CMSSW_8_0_26_patch1/src/LatinoAnalysis/ShapeAnalysis/test/draw/
  
    python DrawNuisancesAll.py --inputFile /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Full2016/datacards/monoH_MVA_em/muccamva2HDMadaptFull/shapes/histos_monoH_MVA_em.root --outputDirPlots nuisancesPlots_MVA_em_muccamva2HDMadaptFull --nuisancesFile /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Full2016/nuisances_full_em.py --samplesFile /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Full2016/samples_em.py --cutName monoH_MVA_em

    cd -

# 12 SPLIT DATACARDS IN ORDER TO HAVE JUST ONE SIGNAL IN EACH OF THEM (USE THIS FOR COMBINATION PURPOSES)

  python scriptSplitting.py em mthBin MVA