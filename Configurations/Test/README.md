Test
====

Steps to get plots and datacards.

    cd /tmp/$USER
    eosmount eosBig
    cd -

    mkShapes.py      --pycfg=configuration.py  --doThreads=True  --inputDir=/tmp/$USER/eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_v2/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__hadd__bSFL2pTEff__l2tight/
    
    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_Test.root
    
    mkDatacards.py   --pycfg=configuration.py  --inputFile=rootFile/plots_Test.root

