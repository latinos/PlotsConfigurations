monoHWW > lvjj analysis
==============

Semileptonic final state: e/mu

    cd /afs/cern.ch/user/a/amassiro/work/Latinos/Framework/CMSSW_8_0_26_patch1/src/LatinoTrees/AnalysisStep/test/
    cd /afs/cern.ch/user/a/amassiro/work/Latinos/Framework/CMSSW_8_0_26_patch1/src/LatinoAnalysis/
    cmsenv
    cd /afs/cern.ch/work/a/amassiro/Latinos/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/monoHWW/lvjj
    
    
    mkShapes.py      --pycfg=configuration.py  --doThreads=True  \
         --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/Feb2017_summer16/MCl1looseCut__bSFL1pTEffCut__hadd/
    
    
    
    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_WWlvjj.root
    
    mkDatacards.py   --pycfg=configuration.py  --inputFile=rootFile/plots_WWlvjj.root

    
    
 


    
    mkShapes.py --pycfg=configuration.py  --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/Feb2017_summer16/MCl1looseCut__bSFL1pTEffCut__hadd/ \
                --doBatch=True --batchSplit=Cuts,Samples   \
                --batchQueue=8nh
    
    mkShapes.py --pycfg=configuration.py  --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/Feb2017_summer16/MCl1looseCut__bSFL1pTEffCut__hadd/ \
                --doBatch=True --batchSplit=AsMuchAsPossible   \
                --batchQueue=8nh
    
    
    
    
    
    mkBatch.py --status
    
    (when jobs are done)
    
    mkShapes.py --pycfg=configuration.py  --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/Feb2017_summer16/MCl1looseCut__bSFL1pTEffCut__hadd/   \
                --doHadd=True --batchSplit=Cuts,Samples

                
    mkShapes.py --pycfg=configuration.py  --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016/Feb2017_summer16/MCl1looseCut__bSFL1pTEffCut__hadd/   \
                --doHadd=True --batchSplit=AsMuchAsPossible

                
                