VBF analysis
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
    
    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_VBF.root
    
    mkDatacards.py   --pycfg=configuration.py  --inputFile=rootFile/plots_VBF.root


Pruning:

    cd /afs/cern.ch/user/a/amassiro/Limit/ModificationDatacards
    sh examples/doPruneNuisanceVBFHWW.sh 
    cd -


Auto tests:
 
    cd ../../
    sh VBF/Moriond/scripts/doVBF.sh
    cd -


    cat ../result.MaxLikelihoodFit.Data2015.vbf.pruned.txt
    cat ../result.Significance.Data2015.vbf.pruned.txt
    
    

plot:

    root -l ../higgsCombineLHScanHVBF.MultiDimFit.mH125.root  \
            ../ggH/scripts/drawNLL.C

            
            
            
            
    eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/   
    
    eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__JESMaxdo__wwSel/ 
    eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__JESMaxup__wwSel/
    eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__METdo__wwSel/
    eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__METup__wwSel/
    eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTdo__wwSel/ 
    eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTup__wwSel/
    eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepMupTdo__wwSel/
    eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepMupTup__wwSel/




    
    
    gardener.py  genvariablesfiller  \
        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_WpWmJJ_EWK_QCD_noTop.root \
        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_WpWmJJ_EWK_QCD_noTop_genVar.root 
        
    gardener.py  genvariablesfiller  \
        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_WpWmJJ_QCD_noTop.root \
        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/latino_WpWmJJ_QCD_noTop_genVar.root 
    

    
    gardener.py  genvariablesfiller  \
        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__JESMaxdo__wwSel/latino_WpWmJJ_EWK_QCD_noTop.root \
        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__JESMaxdo__wwSel/latino_WpWmJJ_EWK_QCD_noTop_genVar.root 
        
    gardener.py  genvariablesfiller  \
        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__JESMaxdo__wwSel/latino_WpWmJJ_QCD_noTop.root \
        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__JESMaxdo__wwSel/latino_WpWmJJ_QCD_noTop_genVar.root 
    

    
    gardener.py  genvariablesfiller  \
        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__JESMaxup__wwSel/latino_WpWmJJ_EWK_QCD_noTop.root \
        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__JESMaxup__wwSel/latino_WpWmJJ_EWK_QCD_noTop_genVar.root 
        
    gardener.py  genvariablesfiller  \
        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__JESMaxup__wwSel/latino_WpWmJJ_QCD_noTop.root \
        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__JESMaxup__wwSel/latino_WpWmJJ_QCD_noTop_genVar.root 
    
    
    
    gardener.py  genvariablesfiller  \
        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__METdo__wwSel/latino_WpWmJJ_EWK_QCD_noTop.root \
        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__METdo__wwSel/latino_WpWmJJ_EWK_QCD_noTop_genVar.root 
        
    gardener.py  genvariablesfiller  \
        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__METdo__wwSel/latino_WpWmJJ_QCD_noTop.root \
        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__METdo__wwSel/latino_WpWmJJ_QCD_noTop_genVar.root 
    

    
    gardener.py  genvariablesfiller  \
        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__METup__wwSel/latino_WpWmJJ_EWK_QCD_noTop.root \
        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__METup__wwSel/latino_WpWmJJ_EWK_QCD_noTop_genVar.root 
        
    gardener.py  genvariablesfiller  \
        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__METup__wwSel/latino_WpWmJJ_QCD_noTop.root \
        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__METup__wwSel/latino_WpWmJJ_QCD_noTop_genVar.root 
    

    
    gardener.py  genvariablesfiller  \
        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTdo__wwSel/latino_WpWmJJ_EWK_QCD_noTop.root \
        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTdo__wwSel/latino_WpWmJJ_EWK_QCD_noTop_genVar.root 
        
    gardener.py  genvariablesfiller  \
        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTdo__wwSel/latino_WpWmJJ_QCD_noTop.root \
        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTdo__wwSel/latino_WpWmJJ_QCD_noTop_genVar.root 
    

    
    gardener.py  genvariablesfiller  \
        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTup__wwSel/latino_WpWmJJ_EWK_QCD_noTop.root \
        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTup__wwSel/latino_WpWmJJ_EWK_QCD_noTop_genVar.root 
        
    gardener.py  genvariablesfiller  \
        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTup__wwSel/latino_WpWmJJ_QCD_noTop.root \
        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTup__wwSel/latino_WpWmJJ_QCD_noTop_genVar.root 
    
    
    
    

    
    gardener.py  genvariablesfiller  \
        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepMupTdo__wwSel/latino_WpWmJJ_EWK_QCD_noTop.root \
        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepMupTdo__wwSel/latino_WpWmJJ_EWK_QCD_noTop_genVar.root 
        
    gardener.py  genvariablesfiller  \
        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepMupTdo__wwSel/latino_WpWmJJ_QCD_noTop.root \
        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepMupTdo__wwSel/latino_WpWmJJ_QCD_noTop_genVar.root 
    

    
    gardener.py  genvariablesfiller  \
        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepMupTup__wwSel/latino_WpWmJJ_EWK_QCD_noTop.root \
        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepMupTup__wwSel/latino_WpWmJJ_EWK_QCD_noTop_genVar.root 
        
    gardener.py  genvariablesfiller  \
        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepMupTup__wwSel/latino_WpWmJJ_QCD_noTop.root \
        eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__LepMupTup__wwSel/latino_WpWmJJ_QCD_noTop_genVar.root 
    
    
    
    
    
    