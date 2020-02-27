VH2j analysis
==============

Some useful aliases:
    
    alias eosusermount='/afs/cern.ch/project/eos/installation/0.3.84-aquamarine.user/bin/eos.select -b fuse mount'
    alias eosuserumount='/afs/cern.ch/project/eos/installation/0.3.84-aquamarine.user/bin/eos.select -b fuse umount'

Steps to get datacards and plots:

    
    cd /tmp/<your nice login>
    eosusermount eos
    cd -
    ln -s /tmp/<nice-login>/eos
    
    mkShapes.py      --pycfg=configuration.py  --inputDir=eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/
    mkShapes.py      --doThreads=True  --pycfg=configuration.py  --inputDir=eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/    
    
    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_VH2j.root
    
    mkDatacards.py   --pycfg=configuration.py  --inputFile=rootFile/plots_VH2j.root



Pruning:

    cd /afs/cern.ch/user/a/amassiro/Limit/ModificationDatacards
    sh examples/doPruneNuisanceVHWW.sh 
    cd -


Auto tests:


    cd ..
    sh VH2j/scripts/doVH2j.sh
    cd -

    cat ../result.MaxLikelihoodFit.Data2015.vh2j.pruned.txt
    cat ../result.Significance.Data2015.vh2j.pruned.txt
    
    
    
    