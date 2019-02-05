MonoHWW analysis
================

# 1 SET UP THE ENVIRONMENT

Setup Latinos:

    cd ~/work/CMSSW_9_4_9/src

    cmsenv

    cd -


Setup combine:

    cd ~/work/CMSSW_8_1_0/src/HiggsAnalysis/CombinedLimit/

    cmsenv     

    cd -


# 2 PRODUCE HISTOGRAMS

WITH LXBATCH
------------

    mkBatch.py --clean
  
    or
    
    rm -rf /eos/user/n/ntrevisa/jobs/

em Channel:

<<<<<<< HEAD
    mkShapes.py --pycfg=configuration_em.py  --inputDir=/eos/user/c/calderon/monoH/Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__formulasMC__wwSel__monohSel__muccaAll_em/ --doBatch=True --batchSplit=AsMuchAsPossible --batchQueue=8nh
=======
    voms-proxy-init cms

    mkShapesMulti.py --pycfg=configuration_em.py  --inputDir=/eos/user/c/calderon/monoH/Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__formulasMC__wwSel__monohSel__muccaAll_em/ --doBatch=1 --batchSplit=Samples,Files --batchQueue=longlunch

    cd rootFile_em/

    hadd plots_monoHWW_em.root *

    cd ..

    mkPlot.py --pycfg=configuration_em.py --inputFile=rootFile_em/plots_monoHWW_em_ALL.root --minLogC=1.001 --minLogCratio=1.001 --maxLogC=100000 --maxLogCratio=100000

    mkDatacards.py   --pycfg=configuration_em.py  --inputFile=rootFile_em/plots_monoHWW_em_ALL.root
>>>>>>> 3849cb41e4046ce4fd0345b02bde5ec3145593f2
