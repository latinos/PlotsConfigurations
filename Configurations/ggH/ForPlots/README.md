ggH analysis - just for plots
==============

Common tools for analysis:

    plot distributions
    limit and significance results



Some useful aliases:
    
    alias eosusermount='/afs/cern.ch/project/eos/installation/0.3.84-aquamarine.user/bin/eos.select -b fuse mount'
    alias eosuserumount='/afs/cern.ch/project/eos/installation/0.3.84-aquamarine.user/bin/eos.select -b fuse umount'

Steps to get datacards and plots:

    
    cd /tmp/<your nice login>
    eosusermount eos
    cd -
    
    mkPlot.py        --pycfg=configuration_lxbatch.py  --inputFile=rootFile/plots_ggH.root
    

lxbatch submission:

    mkShapes.py --pycfg=configuration_lxbatch.py  --inputDir=root://eosuser.cern.ch//eos/user/r/rodrigo/HWW2016/07Jun2016_spring16_mAODv2_12pXfbm1_repro/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/ \
                --doBatch=True --batchSplit=Cuts,Samples   \
                --batchQueue=8nh
    
    mkBatch.py --status
    
    (when jobs are done)
    
    mkShapes.py --pycfg=configuration_lxbatch.py  --inputDir=root://eosuser.cern.ch//eos/user/r/rodrigo/HWW2016/07Jun2016_spring16_mAODv2_12pXfbm1_repro/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/   \
                --doHadd=True --batchSplit=Cuts,Samples

    
    
    