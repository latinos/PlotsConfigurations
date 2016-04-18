Wg* analysis
==============


Some useful aliases:
    
    alias eosusermount='/afs/cern.ch/project/eos/installation/0.3.84-aquamarine.user/bin/eos.select -b fuse mount'
    alias eosuserumount='/afs/cern.ch/project/eos/installation/0.3.84-aquamarine.user/bin/eos.select -b fuse umount'

    
To separate Wg from Wg*:

    std_vector_leptonGen_pt[2]","std_vector_leptonGen_status[2] == 1 && (abs(std_vector_leptonGen_pid[2]) == 11 || abs(std_vector_leptonGen_pid[2]) == 13)
    
    
Steps to get datacards and plots:

    
    cd /tmp/<your nice login>
    eosusermount eos
    cd -
    mkShapes.py      --pycfg=configuration.py  --inputDir=/tmp/<nice-login>/eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight/
    
    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_WgS.root
    
    mkDatacards.py   --pycfg=configuration.py  --inputFile=rootFile/plots_WgS.root


Backup:

    mkShapes.py      --doThreads=True   --pycfg=configuration.py  --inputDir=eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/
    

    
    