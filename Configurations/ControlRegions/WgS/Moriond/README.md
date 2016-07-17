WgStar analysis
==============


Some useful aliases:
    
               cf. usual eos mount         /afs/cern.ch/project/eos/installation/0.3.84-aquamarine/bin/eos.select -b fuse mount
    alias eosusermount='/afs/cern.ch/project/eos/installation/0.3.84-aquamarine.user/bin/eos.select -b fuse mount'
    alias eosuserumount='/afs/cern.ch/project/eos/installation/0.3.84-aquamarine.user/bin/eos.select -b fuse umount'

Mounting cernbox:
   source /afs/cern.ch/project/eos/installation/user/etc/setup.sh
   eosmount eos

    
To separate Wg from WgStar:

    std_vector_leptonGen_pt[2]","std_vector_leptonGen_status[2] == 1 && (abs(std_vector_leptonGen_pid[2]) == 11 || abs(std_vector_leptonGen_pid[2]) == 13)
    
    
Steps to get datacards and plots:

    
    cd /tmp/<your nice login>
    eosusermount eos
    cd -
    mkShapes.py      --pycfg=configuration.py  --inputDir=/tmp/<nice-login>/eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight/
    
    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_WgS.root
    
    mkDatacards.py   --pycfg=configuration.py  --inputFile=rootFile/plots_WgS.root


Backup:

    mkShapes.py      --pycfg=configuration.py  --inputDir=eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCWgStarsel__hadd__EpTCorr
    mkShapes.py      --doThreads=True   --pycfg=configuration.py  --inputDir=eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCWgStarsel__hadd__EpTCorr/
    mkShapes.py      --doThreads=True   --pycfg=configuration.py  --inputDir=/media/data/amassiro/LatinoTrees/WgS_new/
    

    
    
    cp   eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCWgStarsel__hadd__EpTCorr/*.root     /tmp/amassiro/WgS/
    cp   eos/user/r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/WgStarsel__hadd/latino_Run2015D_16Dec2015_SingleMuon.root     /tmp/amassiro/WgS/
    
    scp amassiro@lxplus036.cern.ch:/tmp/amassiro/WgS/l*.root /media/data/amassiro/LatinoTrees/WgS/ 
    
    
    mkdir /tmp/amassiro/WgS_new/
    gardener.py l2kinfiller --cmssw=763  -r    /tmp/amassiro/WgS/     /tmp/amassiro/WgS_new/
    
    
    gardener.py l2kinfiller --cmssw=763  -r    /media/data/amassiro/LatinoTrees/WgS/    /media/data/amassiro/LatinoTrees/WgS_new/
    
    
    gardener.py l2kinfiller --cmssw=763    /media/data/amassiro/LatinoTrees/WgS/latino_Run2015C_16Dec2015_SingleElectron.root    /media/data/amassiro/LatinoTrees/WgS_new/latino_Run2015C_16Dec2015_SingleElectron.root
    gardener.py l2kinfiller --cmssw=763    /media/data/amassiro/LatinoTrees/WgS/latino_Run2015D_16Dec2015_SingleElectron.root    /media/data/amassiro/LatinoTrees/WgS_new/latino_Run2015D_16Dec2015_SingleElectron.root
    
    
    scp amassiro@lxplus065.cern.ch:/tmp/amassiro/eos/user/r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/WgStarsel__hadd__EpTCorr/latino_Run2015C_16Dec2015_SingleElectron.root   /media/data/amassiro/LatinoTrees/WgS/
    
    
    
    
    
