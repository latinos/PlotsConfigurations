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

    mkShapes.py      --doThreads=True   --pycfg=configuration.py  --inputDir=eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWWTightMu/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/
    mkShapes.py      --doThreads=True   --pycfg=configuration.py  --inputDir=eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_v2/07Jun2016_spring16_mAODv2_12pXfbm1/MCWgStarsel__hadd__EpTCorr/
    
    mkShapes.py      --doThreads=True   --pycfg=configuration.py  --inputDir=eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/07Jun2016_spring16_mAODv2_12pXfbm1_repro/MCWgStarsel__hadd__EpTCorr/
    
    
    
    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_WgS.root
    
    mkDatacards.py   --pycfg=configuration.py  --inputFile=rootFile/plots_WgS.root


Backup:

    mkShapes.py      --doThreads=True   --pycfg=configuration.py  --inputDir=eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWWTightMu/07Jun2016_spring16_mAODv2_4p0fbm1/MCWgStarsel__hadd__EpTCorr/    
    
    mkShapes.py      --doThreads=True   --pycfg=configuration.py  --inputDir=eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_v2/07Jun2016_spring16_mAODv2_12pXfbm1/MCWgStarsel__hadd__EpTCorr/
    
    
    
    
    