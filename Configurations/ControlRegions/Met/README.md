MET analysis
==============


Some useful aliases:
    
    alias eosusermount='/afs/cern.ch/project/eos/installation/0.3.84-aquamarine.user/bin/eos.select -b fuse mount'
    alias eosuserumount='/afs/cern.ch/project/eos/installation/0.3.84-aquamarine.user/bin/eos.select -b fuse umount'
    
Mounting cernbox:

   source /afs/cern.ch/project/eos/installation/user/etc/setup.sh
   eosmount eosuser
    
Steps to get datacards and plots:

    
    mkShapes.py      --pycfg=configuration.py  --inputDir=/tmp/<nice-login>/eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight/
    
    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_Met.root
    
    mkDatacards.py   --pycfg=configuration.py  --inputFile=rootFile/plots_Met.root

