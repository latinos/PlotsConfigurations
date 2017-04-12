ggH2j analysis
==============

Some useful aliases:
    
    alias eosusermount='/afs/cern.ch/project/eos/installation/0.3.84-aquamarine.user/bin/eos.select -b fuse mount'
    alias eosuserumount='/afs/cern.ch/project/eos/installation/0.3.84-aquamarine.user/bin/eos.select -b fuse umount'

Steps to get datacards and plots:

    
    cd /tmp/<your nice login>
    eosusermount eos
    cd -
    ln -s /tmp/<nice-login>/eos
    
    mkShapes.py      --pycfg=configuration.py  --doThreads=True   --inputDir=eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWWTightMu/07Jun2016_spring16_mAODv2_4p0fbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/
    
    mkShapes.py      --pycfg=configuration.py  --doThreads=True   --inputDir=eos/user/a/amassiro/HWW2015/ICHEP/07Jun2016_spring16_mAODv2_6p3fbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/
    
    mkShapes.py      --pycfg=configuration_iteos.py  --doThreads=True   --inputDir=eos/user/a/amassiro/HWW2015/ICHEP/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/

     
    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_ggH2j.root
    
    mkDatacards.py   --pycfg=configuration.py  --inputFile=rootFile/plots_ggH2j.root



Pruning (same as ggH):

    cd /afs/cern.ch/user/a/amassiro/Limit/ModificationDatacards
    sh examples/doPruneNuisanceHWW.sh 
    cd -



Auto tests:


    cd ..
    sh ggH2j/scripts/doGGH2j.sh
    cd -

    cat ../result.MaxLikelihoodFit.Data2015.2j.pruned.txt
    cat ../result.Significance.Data2015.2j.pruned.txt
    
    
    

    
