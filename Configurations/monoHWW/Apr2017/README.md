MonoHWW analysis
================

# 1 SET UP THE ENVIRONMENT

Setup Latinos:

    cd ~/work/CMSSW_8_0_26_patch1/src

    cmsenv

    cd -


Setup combine:

    cd ~/work/CMSSW_7_4_7/src/HiggsAnalysis/CombinedLimit/

    cmsenv     

    cd -


# 2 PRODUCE HISTOGRAMS

WITH LXBATCH
------------

    mkBatch.py --clean
  
    or
    
    rm -rf /eos/user/n/ntrevisa/jobs/

em Channel:

    mkShapes.py --pycfg=configuration_em.py  --inputDir=/eos/user/c/calderon/monoH/Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__wwSel__monohSel__muccaMonoHem/ --doBatch=True --batchQueue=8nh --batchSplit=AsMuchAsPossible

    mkBatch.py --status

    cd rootFile_em/

    hadd plots_monoHWW_em.root *

    cd ..

    mkPlot.py --pycfg=configuration_em.py --inputFile=rootFile_em/plots_monoHWW_em.root --minLogC=0.01 --minLogCratio=0.01 --maxLogC=1000 --maxLogCratio=1000 --showIntegralLegend=1

    rm rootFile_em/plots_monoHWW_em_monoH_MVA_*


em Channel (blind luminosity):

    mkShapes.py --pycfg=configuration_em_blindData.py  --inputDir=/eos/user/c/calderon/monoH/Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__wwSel__monohSel__muccaMonoHem/ --doBatch=True --batchQueue=8nh --batchSplit=AsMuchAsPossible

    mkBatch.py --status

    cd rootFile_em_blindData/

    hadd plots_monoHWW_em_blindData.root *

    cd ..

    mkPlot.py --pycfg=configuration_em_blindData.py  --inputFile=rootFile_em_blindData/plots_monoHWW_em_blindData.root  --minLogC=0.01 --minLogCratio=0.01 --maxLogC=1000 --maxLogCratio=1000  --showIntegralLegend=1

    rm rootFile_em_blindData/plots_monoHWW_em*


sf Channel:

    mkShapes.py --pycfg=configuration_sf.py  --inputDir=/eos/user/n/ntrevisa/trees/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__sfSel__monohSel/  --doBatch=True --batchQueue=1nd --batchSplit=AsMuchAsPossible

    mkBatch.py --status

    cd rootFile_sf/

    hadd plots_monoHWW_sf.root *

    cd ..

    mkPlot.py --pycfg=configuration_sf.py  --inputFile=rootFile_sf/plots_monoHWW_sf.root  --minLogC=0.01 --minLogCratio=0.01 --maxLogC=1000 --maxLogCratio=1000  --showIntegralLegend=1

    rm rootFile_sf/plots_monoHWW_sf_monoH_MVA_*


ss Channel:

    mkShapes.py --pycfg=configuration_ss.py  --inputDir=/eos/user/n/ntrevisa/trees/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__ssSel/  --doBatch=True --batchQueue=1nd --batchSplit=AsMuchAsPossible

    mkBatch.py --status

    cd rootFile_ss/

    hadd plots_monoHWW_ss.root *

    cd ..

    mkPlot.py        --pycfg=configuration_ss.py  --inputFile=rootFile_ss/plots_monoHWW_ss.root  --minLogC=0.01 --minLogCratio=0.01 --maxLogC=1000 --maxLogCratio=1000  --showIntegralLegend=1

    rm rootFile_ss/plots_monoHWW_ss_monoH_MVA_*

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

    mkDatacards.py   --pycfg=configuration_em_blindData.py  --inputFile=rootFile_em_blindData/plots_monoHWW_em_blindData.root

    mkDatacards.py   --pycfg=configuration_sf.py  --inputFile=rootFile_sf/plots_monoHWW_sf.root


PRUNE DATACARDS
---------------

      cd ../../../../ModificationDatacards/

      ls ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/*/*/*.txt  | grep -v "pruned"  |   \
      awk '{print "python PruneDatacard.py  -d "$1" -o "$1".pruned.txt    -i examples/input_nuisances_to_prune.py"}' | /bin/sh

      ls ~/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards_blindData/*/*/*.txt  | grep -v "pruned"  |   \
      awk '{print "python PruneDatacard.py  -d "$1" -o "$1".pruned.txt    -i examples/input_nuisances_to_prune.py"}' | /bin/sh

      cd -


# 4 COMBINE DATACARDS

Do the combination:

      combineCards.py datacards/monoH_MVA_em/mth_control/datacard.txt.pruned.txt datacards/monoH_MVA_WW_em/events/datacard.txt.pruned.txt datacards/monoH_MVA_Top_em/events/datacard.txt.pruned.txt datacards/monoH_MVA_DYtt_em/events/datacard.txt.pruned.txt > datacards/monoH_MVA_em/mth_control/datacard_combined.txt


# 5 GET THE LIMITS

By hand (for 2HDM model, mZ' = 800 GeV, mA0 = 300 GeV):

    text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  --PO verbose --PO 'map=.*/monoH_800:r[1,0,10]' --PO 'map=.*/monoH_1200:0' --PO 'map=.*/monoH_1400:0' --PO 'map=.*/monoH_1700:0' --PO 'map=.*/monoH_2000:0' datacards/monoH_MVA_em/mth_control/datacard_combined.txt -o monoH800.root
    
    combine -M Asymptotic monoH800.root

    python scriptMonoH.py


# 6 DRAW THE EXCLUSION PLOTS

    root -l -b -q 'macroPlotAsymptotic.C("","em","mthBin","MVA","2HDM")'
    root -l -b -q 'macroExclusionTable.C("mthBin","em","MVA","2HDM")'
    
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

      python RemoveSample.py   ../PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_MVA_em/muccamva2HDMadaptFull/datacard.txt.pruned.txt    -i   inputRemoval.py

      cp test.tex cp test.txt ../PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_MVA_em/muccamva2HDMadaptFull/

      cd -

And then create the actual table from that small datacard

    cd ~/work/CMSSW_8_0_26_patch1/src/PlayWithDatacards/

    python systematicsAnalyzer.py ../PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_MVA_em/muccamva2HDMadaptFull/test.txt --all -f tex > ../PlotsConfigurations/Configurations/monoHWW/Apr2017/tables/monoH_MVA_em_muccamva2HDMadaptFull.tex

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

    combineTool.py -M Impacts -d combine_em_MVA/monoH_600_300_muccamva2HDMadaptFull.root -m 125 --doInitialFit -t -1 --expectSignal=1 --robustFit 1 -n 600_300_muccamva2HDMadaptFull
  
    combineTool.py -M Impacts -d combine_em_MVA/monoH_600_300_muccamva2HDMadaptFull.root -m 125 --robustFit 1 --doFits --parallel 5 --job-mode lxbatch --task-name 600_300_muccamva2HDMadaptFull  --sub-opts='-q 2nd' -n 600_300_muccamva2HDMadaptFull

    combineTool.py -M Impacts -d combine_em_MVA/monoH_600_300_muccamva2HDMadaptFull.root -m 125 -o pulls_em_MVA/impact_mthBin.json -n 600_300_muccamva2HDMadaptFull
  
    plotImpacts.py -i pulls_em_MVA/impact_mthBin.json -o pulls_em_MVA/mthBin

Or using the script:

    python scriptImpact.py em mthBin MVA

# 11 DRAW THE EFFECT OF SHAPE-BASED NUISANCES ON EACH SAMPLE ONE BY ONE

    cd ~/work/CMSSW_8_0_26_patch1/src/LatinoAnalysis/ShapeAnalysis/test/draw/
  
    python DrawNuisancesAll.py --inputFile /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards_top/monoH_MVA_em/muccamva2HDMadaptFull/shapes/histos_monoH_MVA_em.root --outputDirPlots nuisancesPlots_MVA_em_muccamva2HDMadaptFull --nuisancesFile /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/nuisances_full.py --samplesFile /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/samples_em.py --cutName monoH_MVA_em

    cd -

# 12 SPLIT DATACARDS IN ORDER TO HAVE JUST ONE SIGNAL IN EACH OF THEM (USE THIS FOR COMBINATION PURPOSES)

    python scriptSplitting.py em mthBin MVA
