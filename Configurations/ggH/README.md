ggH analysis
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
    mkShapes.py      --pycfg=configuration.py  --inputDir=/tmp/<nice-login>/eos/user/j/jlauwers/HWW2015/07Jun2016_spring16__mAODv2/MCl2loose16__hadd__LepEff__l2tight__wwSel/
    mkShapes.py      --pycfg=configuration.py  --doThreads=True   --inputDir=eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWWTightMu/07Jun2016_spring16_mAODv2_4p0fbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/

    mkShapes.py      --pycfg=configuration.py  --doThreads=True   --inputDir=eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_v2/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/
    mkShapes.py      --pycfg=configuration_iteos.py  --doThreads=True    --inputDir=eos/user/a/amassiro/HWW2015/ICHEP/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/

    mkShapes.py      --pycfg=configuration_iteos.py  --doThreads=True   --inputDir=eos/user/r/rodrigo/HWW2016/07Jun2016_spring16_mAODv2_12pXfbm1_repro/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/  
    mkShapes.py      --pycfg=configuration.py  --doThreads=True   --inputDir=eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/07Jun2016_spring16_mAODv2_12pXfbm1_repro/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/
    
    
    
    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_ggH.root
    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_ggHJustPlot.root
    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_ggHtestplot.root
    
    mkDatacards.py   --pycfg=configuration.py  --inputFile=rootFile/plots_ggH.root
    mkDatacards.py   --pycfg=configuration.py  --inputFile=rootFile/plots_ggHtestplot.root
    
    mkDatacards.py   --pycfg=configuration.py  --inputFile=rootFile/plots_ggH_all.root
    

lxbatch submission:

    mkShapes.py --pycfg=configuration_lxbatch.py  --inputDir=root://eosuser.cern.ch//eos/user/r/rodrigo/HWW2016/07Jun2016_spring16_mAODv2_12pXfbm1_repro/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/ \
                --doBatch=True --batchSplit=Cuts,Samples   \
                --batchQueue=8nh
    
    mkBatch.py --status
    
    (when jobs are done)
    
    mkShapes.py --pycfg=configuration_lxbatch.py  --inputDir=root://eosuser.cern.ch//eos/user/r/rodrigo/HWW2016/07Jun2016_spring16_mAODv2_12pXfbm1_repro/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/   \
                --doHadd=True --batchSplit=Cuts,Samples

    
    
    
Pruning:

    cd /afs/cern.ch/user/a/amassiro/Limit/ModificationDatacards
    sh examples/doPruneNuisanceHWW.sh 
    cd -


Auto tests:

    cd /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH    
    cmsenv
    cd ..
    sh ggH/scripts/doGGH_blind.sh
    cd -

    cat ../result.Significance.ICHEP2016.v1.txt.pruned.txt
    cat ../result.MaxLikelihoodFit.ICHEP2016.v1.txt.pruned.txt
    
    
    
    cd ..
    sh ggH/scripts/doGGH.sh
    cd -

    
    
    cd ..
    sh ggH/scripts/doBigCombination_blind.sh
    cd -

    cd ..
    sh ggH/scripts/doBigCombination.sh
    cd -
    
    
    
    cd ..
    sh ggH/scripts/doCreateWorkspaces.sh
    cd -

    
    
    
    2015 + 2016 combination 
    
    cat ../result.Significance.superCombination.Total.txt.pruned.txt
    cat ../result.MaxLikelihoodFit.superCombination.Total.txt.pruned.txt
    
    root -l ../higgsCombineLHScanHICHEPTotalcombined.MultiDimFit.mH125.root  \
            scripts/drawNLL.C

     
    root -l ../higgsCombineLHScanHICHEPTotalcombined.MultiDimFit.mH125.root  \
           ../higgsCombineLHScanDATAHICHEPcombinedLXBATCHtotal.root   \
            scripts/drawNLLObs.C

            
            
    root -l ../higgsCombineLHScanHICHEPTotalcombined.MultiDimFit.mH125.root  \
           ../higgsCombineLHScanDATAHICHEPTotalcombined.MultiDimFit.mH125.root   \
            scripts/drawNLLObs.C

    root -l ../higgsCombineLHScanHICHEPTotalcombinedLXBATCH.POINTS.root  \
           ../higgsCombineLHScanDATAHICHEPTotalcombinedLXBATCH.POINTS.root   \
            scripts/drawNLLObs.C
        

    root -l higgsCombineLHScanHICHEPTotalcombined.MultiDimFit.mH125.root  \
            higgsCombineLHScanDATAHICHEPTotalcombined.MultiDimFit.mH125.root   \
            higgsCombineLHScanHICHEPTotalcombinedLXBATCHTheoryFrozen.root  \
            higgsCombineLHScanDATAHICHEPTotalcombinedLXBATCHTheoryFrozen.root  \
            higgsCombineLHScanHICHEPTotalcombinedLXBATCHExpNuisFrozen.root  \
            higgsCombineLHScanDATAHICHEPTotalcombinedLXBATCHExpNuisFrozen.root  \
            ggH/scripts/drawNLLObsNuisSplit.C
    
    root -l higgsCombineLHScanHICHEP2016combined.MultiDimFit.mH125.root  \
            higgsCombineLHScanDATAHICHEP2016combined.MultiDimFit.mH125.root   \
            higgsCombineLHScanHICHEP2016combinedLXBATCHTheoryFrozen.root  \
            higgsCombineLHScanDATAHICHEP2016combinedLXBATCHTheoryFrozen.root  \
            higgsCombineLHScanHICHEP2016combinedLXBATCHExpNuisFrozen.root  \
            higgsCombineLHScanDATAHICHEP2016combinedLXBATCHExpNuisFrozen.root  \
            ggH/scripts/drawNLLObsNuisSplit.C
       
    root -l higgsCombineLHScanHICHEP2015combined.MultiDimFit.mH125.root  \
            higgsCombineLHScanDATAHICHEP2015combined.MultiDimFit.mH125.root   \
            higgsCombineLHScanHICHEP2015combinedLXBATCHTheoryFrozen.root  \
            higgsCombineLHScanDATAHICHEP2015combinedLXBATCHTheoryFrozen.root  \
            higgsCombineLHScanHICHEP2015combinedLXBATCHExpNuisFrozen.root  \
            higgsCombineLHScanDATAHICHEP2015combinedLXBATCHExpNuisFrozen.root  \
            ggH/scripts/drawNLLObsNuisSplit.C
            
            
            
              
    root -l higgsCombineLHScanHICHEPTotalcombinedLXBATCHNominal.root  \
            higgsCombineLHScanDATAHICHEPTotalcombinedLXBATCHNominal.root   \
            higgsCombineLHScanHICHEPTotalcombinedLXBATCHTheoryFrozen.root  \
            higgsCombineLHScanDATAHICHEPTotalcombinedLXBATCHTheoryFrozen.root  \
            higgsCombineLHScanHICHEPTotalcombinedLXBATCHExpNuisFrozen.root  \
            higgsCombineLHScanDATAHICHEPTotalcombinedLXBATCHExpNuisFrozen.root  \
            ggH/scripts/drawNLLObsNuisSplit.C
    
    root -l higgsCombineLHScanHICHEP2016combinedLXBATCHNominal.root  \
            higgsCombineLHScanDATAHICHEP2016combinedLXBATCHNominal.root   \
            higgsCombineLHScanHICHEP2016combinedLXBATCHTheoryFrozen.root  \
            higgsCombineLHScanDATAHICHEP2016combinedLXBATCHTheoryFrozen.root  \
            higgsCombineLHScanHICHEP2016combinedLXBATCHExpNuisFrozen.root  \
            higgsCombineLHScanDATAHICHEP2016combinedLXBATCHExpNuisFrozen.root  \
            ggH/scripts/drawNLLObsNuisSplit.C
       
    root -l higgsCombineLHScanHICHEP2015combinedLXBATCHNominal.root  \
            higgsCombineLHScanDATAHICHEP2015combinedLXBATCHNominal.root   \
            higgsCombineLHScanHICHEP2015combinedLXBATCHTheoryFrozen.root  \
            higgsCombineLHScanDATAHICHEP2015combinedLXBATCHTheoryFrozen.root  \
            higgsCombineLHScanHICHEP2015combinedLXBATCHExpNuisFrozen.root  \
            higgsCombineLHScanDATAHICHEP2015combinedLXBATCHExpNuisFrozen.root  \
            ggH/scripts/drawNLLObsNuisSplit.C
            
            
            
            
            
            
      
      
      
      
            
       
    root -l higgsCombineLHScanHICHEP2015combinedLXBATCHNominal.root  \
            higgsCombineLHScanDATAHICHEP2015combinedLXBATCHNominal.root   \
            higgsCombineLHScanHICHEP2015combinedLXBATCHTheoryFrozen.root  \
            higgsCombineLHScanDATAHICHEP2015combinedLXBATCHTheoryFrozenPostFit.root  \
            higgsCombineLHScanHICHEP2015combinedLXBATCHExpNuisFrozen.root  \
            higgsCombineLHScanDATAHICHEP2015combinedLXBATCHExpNuisFrozenPostFit.root  \
            ggH/scripts/drawNLLObsNuisSplit.C\(1\)
    
    
    root -l higgsCombineLHScanHICHEP2016combinedLXBATCHNominal.root  \
            higgsCombineLHScanDATAHICHEP2016combinedLXBATCHNominal.root   \
            higgsCombineLHScanHICHEP2016combinedLXBATCHTheoryFrozen.root  \
            higgsCombineLHScanDATAHICHEP2016combinedLXBATCHTheoryFrozenPostFit.root  \
            higgsCombineLHScanHICHEP2016combinedLXBATCHExpNuisFrozen.root  \
            higgsCombineLHScanDATAHICHEP2016combinedLXBATCHExpNuisFrozenPostFit.root  \
            ggH/scripts/drawNLLObsNuisSplit.C
              
            
    root -l higgsCombineLHScanHICHEPTotalcombinedLXBATCHNominal.root  \
            higgsCombineLHScanDATAHICHEPTotalcombinedLXBATCHNominal.root   \
            higgsCombineLHScanHICHEPTotalcombinedLXBATCHTheoryFrozen.root  \
            higgsCombineLHScanDATAHICHEPTotalcombinedLXBATCHTheoryFrozenPostFit.root  \
            higgsCombineLHScanHICHEPTotalcombinedLXBATCHExpNuisFrozen.root  \
            higgsCombineLHScanDATAHICHEPTotalcombinedLXBATCHExpNuisFrozenPostFit.root  \
            ggH/scripts/drawNLLObsNuisSplit.C\(2\)
          
            
            


     root -l higgsCombineLHScanDATAHICHEP2015combinedLXBATCHNominal.root  \
           higgsCombineLHScanDATAHICHEPTotal2015sigOnlycombinedLXBATCHNominal.root   \
           ggH/scripts/drawNLLObs.C
      
     root -l higgsCombineLHScanDATAHICHEP2016combinedLXBATCHNominal.root  \
           higgsCombineLHScanDATAHICHEPTotal2016sigOnlycombinedLXBATCHNominal.root   \
           ggH/scripts/drawNLLObs.C
      
          
        
    sh ggH/scripts/doLikelihoodScans.sh 
        
        
        
    2015+2016 WH3l
    
    root -l ../higgsCombineLHScanWH3lLXBATCH.POINTS.root  \
           ../higgsCombineLHScanDATAWH3lLXBATCH.POINTS.root   \
            scripts/drawNLLObs.C

            
    2015+2016 VH2j
    
    root -l ../higgsCombineLHScanVH2jLXBATCH.POINTS.root  \
           ../higgsCombineLHScanDATAVH2jLXBATCH.POINTS.root   \
            scripts/drawNLLObs.C
            
 
 
    
    2016 alone
    root -l ../higgsCombineLHScanHICHEP.MultiDimFit.mH125.root  \
            scripts/drawNLL.C

    
    root -l ../higgsCombineLHScanHICHEP2016combined.MultiDimFit.mH125.root  \
           ../higgsCombineLHScanDATAHICHEP2016combined.MultiDimFit.mH125.root   \
            scripts/drawNLLObs.C

    root -l ../higgsCombineLHScanHICHEP2016combinedLXBATCH.POINTS.root  \
           ../higgsCombineLHScanDATAHICHEP2016combinedLXBATCH.POINTS.root   \
            scripts/drawNLLObs.C
    
 
 
 
    
    cat ../result.Significance.ggHcombined.v1.txt.pruned.txt
    cat ../result.MaxLikelihoodFit.ggHcombined.v1.txt.pruned.txt
    
    cat ../result.Significance.superCombination.v1.txt.pruned.txt    

    
    
    cat ../result.MaxLikelihoodFit.superCombination.2015.txt.pruned.txt
    cat ../result.Significance.superCombination.2015.txt.pruned.txt
    
    cat ../result.Data.MaxLikelihoodFit.superCombination.2015.txt.pruned.txt
    cat ../result.Data.Significance.superCombination.2015.txt.pruned.txt
    
    root -l ../higgsCombineLHScanHICHEP2015combined.MultiDimFit.mH125.root  \
            scripts/drawNLL.C

            
    root -l ../higgsCombineLHScanHICHEP2015combined.MultiDimFit.mH125.root  \
            ../higgsCombineDATALHScanHICHEP2015combined.MultiDimFit.mH125.root  \
            scripts/drawNLLObs.C


    root -l ../higgsCombineLHScanHICHEPggHcombined.MultiDimFit.mH125.root  \
            scripts/drawNLL.C
    
    
    cat ../result.MaxLikelihoodFit.superCombination.2016.txt.pruned.txt
    cat ../result.Significance.superCombination.2016.txt.pruned.txt
    
    root -l ../higgsCombineLHScanHICHEP2016combined.MultiDimFit.mH125.root  \
            scripts/drawNLL.C
    

    
    
    cat ../result.MaxLikelihoodFit.superCombination.Total.txt.pruned.txt
    cat ../result.Significance.superCombination.Total.txt.pruned.txt
    
    root -l ../higgsCombineLHScanHICHEPTotalcombined.MultiDimFit.mH125.root  \
            scripts/drawNLL.C

      
    root -l ../higgsCombineLHScanDATAHICHEPcombinedLXBATCHtotalkvkfmugghfixed.POINTS.root \
            scripts/drawNLL.C

      
      
    cd ..
    sh ggH/scripts/doTable.sh
    cd -

    
    cd ..
    sh ggH/scripts/doGGH_doMultisignal.sh
    cd -

    
    
    r99t ../higgsCombineLH2DICHEP2015combined.MultiDimFit.mH120.root \
        scripts/Draw2D.cxx
    
    r99t ../higgsCombineDataLH2DICHEP2015combined.MultiDimFit.mH120.root  \
        scripts/Draw2D.cxx
    
    r99t ../higgsCombineLH2DICHEPTotalcombined.MultiDimFit.mH120.root \
        scripts/Draw2D.cxx
    
    r99t ../higgsCombineLH2DICHEP2016combined.MultiDimFit.mH120.root \
        scripts/Draw2D.cxx
    
    
    r99t ../higgsCombineLH2DICHEP2016combinedKVKFlxbatch.root \
        scripts/Draw2DImproved.cxx\(\"#mu_{ggH}\",\"#mu_{VBF/VH}\",\"muGGH\",\"muVBF\"\)
    r99t ../higgsCombineLH2DICHEP2016combinedKVKFDATAlxbatch.root \
        scripts/Draw2DImproved.cxx\(\"#mu_{ggH}\",\"#mu_{VBF/VH}\",\"muGGH\",\"muVBF\"\)
    r99t ../higgsCombineLH2DICHEPTotalcombinedKVKFlxbatch.root \
        scripts/Draw2DImproved.cxx\(\"#mu_{ggH}\",\"#mu_{VBF/VH}\",\"muGGH\",\"muVBF\"\)
    r99t ../higgsCombineLH2DICHEPTotalcombinedKVKFDATAlxbatch.root \
        scripts/Draw2DImproved.cxx\(\"#mu_{ggH}\",\"#mu_{VBF/VH}\",\"muGGH\",\"muVBF\"\)
 
    
    r99t ../higgsCombineLH2DICHEPTotalcombinedKVKFDATAlxbatch_OLD.root \
        scripts/Draw2DImproved.cxx\(\"#mu_{ggH}\",\"#mu_{VBF/VH}\",\"muGGH\",\"muVBF\"\)
    
    
    
    
    r99t ../higgsCombineLH2DICHEP2016combinedKVKFlxbatch.root \
        scripts/Draw2D.cxx
    r99t ../higgsCombineLH2DICHEP2016combinedDATAKVKFlxbatch.root \
        scripts/Draw2D.cxx



    ----
    Figure 60 of AN-182
    
    r99t ../higgsCombineLH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch400pointsFIXED.root \
        scripts/Draw2DImproved.cxx\(\"#mu_{ggH}\",\"#mu_{VBF/VH}\",\"muGGH\",\"muVBF\"\)

    Expected
    r99t ../higgsCombineLH2DICHEP2015combined.MultiDimFit.mH120.root \
        scripts/Draw2DImproved.cxx\(\"#mu_{ggH}\",\"#mu_{VBF/VH}\",\"muGGH\",\"muVBF\"\)
        
    r99t ../higgsCombineLH2DICHEP2016combined.MultiDimFit.mH120.root \
        scripts/Draw2DImproved.cxx\(\"#mu_{ggH}\",\"#mu_{VBF/VH}\",\"muGGH\",\"muVBF\"\)

    r99t ../higgsCombineLH2DICHEPTotalcombined.MultiDimFit.mH120.root \
        scripts/Draw2DImproved.cxx\(\"#mu_{ggH}\",\"#mu_{VBF/VH}\",\"muGGH\",\"muVBF\"\)
 

    Observed
    
    r99t ../higgsCombineLH2DICHEP2015combinedKVKFDATAlxbatch14May2017.root \
        scripts/Draw2DImproved.cxx\(\"#mu_{ggH}\",\"#mu_{VBF/VH}\",\"muGGH\",\"muVBF\"\)
        
    r99t ../backup/higgsCombineLH2DICHEP2016combinedKVKFDATAlxbatch.root \
        scripts/Draw2DImproved.cxx\(\"#mu_{ggH}\",\"#mu_{VBF/VH}\",\"muGGH\",\"muVBF\"\)

    r99t ../higgsCombineLH2DICHEPTotalcombinedKVKFDATANEWBISlxbatch400pointsFIXED.root \
        scripts/Draw2DImproved.cxx\(\"#mu_{ggH}\",\"#mu_{VBF/VH}\",\"muGGH\",\"muVBF\"\)
 

 
 
    ----  




    
    cat  ../result.MaxLikelihoodFit.superCombination.2016.txt.pruned.txt
    cat  ../result.Significance.superCombination.2016.txt.pruned.txt


    cat  ../result.MaxLikelihoodFit.ICHEP2016.0jet.me.txt
    cat  ../result.MaxLikelihoodFit.ICHEP2016.0jet.em.txt
    cat  ../result.MaxLikelihoodFit.ICHEP2016.1jet.me.txt
    cat  ../result.MaxLikelihoodFit.ICHEP2016.1jet.em.txt
    cat  ../result.MaxLikelihoodFit.ICHEP2016.0jet.txt
    cat  ../result.MaxLikelihoodFit.ICHEP2016.1jet.txt
    cat  ../result.MaxLikelihoodFit.ICHEP2016.2j.txt
    cat  ../result.MaxLikelihoodFit.ICHEP2016.vbf.txt
    cat  ../result.MaxLikelihoodFit.ICHEP2016.vh2j.txt
    cat  ../result.MaxLikelihoodFit.ICHEP2016.wh3l.txt
    
    cat  ../result.Significance.ICHEP2016.0jet.me.txt
    cat  ../result.Significance.ICHEP2016.0jet.em.txt
    cat  ../result.Significance.ICHEP2016.1jet.me.txt
    cat  ../result.Significance.ICHEP2016.1jet.em.txt
    cat  ../result.Significance.ICHEP2016.0jet.txt
    cat  ../result.Significance.ICHEP2016.1jet.txt
    cat  ../result.Significance.ICHEP2016.2j.txt
    cat  ../result.Significance.ICHEP2016.vbf.txt
    cat  ../result.Significance.ICHEP2016.vh2j.txt
    cat  ../result.Significance.ICHEP2016.wh3l.txt
    
    cat  ../result.MaxLikelihoodFit.ICHEP2016.v1.txt.pruned.txt
    cat  ../result.Significance.ICHEP2016.v1.txt.pruned.txt

    
    
    cat  ../result.MaxLikelihoodFit.Combined.0jet.me.txt
    cat  ../result.MaxLikelihoodFit.Combined.0jet.em.txt
    cat  ../result.MaxLikelihoodFit.Combined.1jet.me.txt
    cat  ../result.MaxLikelihoodFit.Combined.1jet.em.txt
    cat  ../result.MaxLikelihoodFit.Combined.0jet.txt
    cat  ../result.MaxLikelihoodFit.Combined.1jet.txt
    cat  ../result.MaxLikelihoodFit.Combined.2j.txt
    cat  ../result.MaxLikelihoodFit.Combined.vbf.txt
    cat  ../result.MaxLikelihoodFit.Combined.vh2j.txt
    cat  ../result.MaxLikelihoodFit.Combined.wh3l.txt
    
    cat  ../result.Significance.Combined.0jet.me.txt
    cat  ../result.Significance.Combined.0jet.em.txt
    cat  ../result.Significance.Combined.1jet.me.txt
    cat  ../result.Significance.Combined.1jet.em.txt
    cat  ../result.Significance.Combined.0jet.txt
    cat  ../result.Significance.Combined.1jet.txt
    cat  ../result.Significance.Combined.2j.txt
    cat  ../result.Significance.Combined.vbf.txt
    cat  ../result.Significance.Combined.vh2j.txt
    cat  ../result.Significance.Combined.wh3l.txt
    
    cat  ../result.MaxLikelihoodFit.superCombination.Total.txt.pruned.txt
    cat  ../result.Significance.superCombination.Total.txt.pruned.txt
    

    
    


    cat  ../result.data.MaxLikelihoodFit.Moriond2016.0jet.me.txt
    cat  ../result.data.MaxLikelihoodFit.Moriond2016.0jet.em.txt
    cat  ../result.data.MaxLikelihoodFit.Moriond2016.1jet.me.txt
    cat  ../result.data.MaxLikelihoodFit.Moriond2016.1jet.em.txt
    cat  ../result.data.MaxLikelihoodFit.Moriond2016.0jet.txt
    cat  ../result.data.MaxLikelihoodFit.Moriond2016.1jet.txt
    cat  ../result.data.MaxLikelihoodFit.Moriond2016.2j.txt
    cat  ../result.data.MaxLikelihoodFit.Moriond2016.vbf.txt
    cat  ../result.data.MaxLikelihoodFit.Moriond2016.vh2j.txt
    cat  ../result.data.MaxLikelihoodFit.Moriond2016.wh3l.txt

    cat  ../result.data.Significance.Moriond2016.0jet.me.txt
    cat  ../result.data.Significance.Moriond2016.0jet.em.txt
    cat  ../result.data.Significance.Moriond2016.1jet.me.txt
    cat  ../result.data.Significance.Moriond2016.1jet.em.txt
    cat  ../result.data.Significance.Moriond2016.0jet.txt
    cat  ../result.data.Significance.Moriond2016.1jet.txt
    cat  ../result.data.Significance.Moriond2016.2j.txt
    cat  ../result.data.Significance.Moriond2016.vbf.txt
    cat  ../result.data.Significance.Moriond2016.vh2j.txt
    cat  ../result.data.Significance.Moriond2016.wh3l.txt
    

    

    
    
    

    cat  ../result.data.MaxLikelihoodFit.ICHEP2016.0jet.me.txt
    cat  ../result.data.MaxLikelihoodFit.ICHEP2016.0jet.em.txt
    cat  ../result.data.MaxLikelihoodFit.ICHEP2016.1jet.me.txt
    cat  ../result.data.MaxLikelihoodFit.ICHEP2016.1jet.em.txt
    cat  ../result.data.MaxLikelihoodFit.ICHEP2016.0jet.txt
    cat  ../result.data.MaxLikelihoodFit.ICHEP2016.1jet.txt
    cat  ../result.data.MaxLikelihoodFit.ICHEP2016.2j.txt
    cat  ../result.data.MaxLikelihoodFit.ICHEP2016.vbf.txt
    cat  ../result.data.MaxLikelihoodFit.ICHEP2016.vh2j.txt
    cat  ../result.data.MaxLikelihoodFit.ICHEP2016.wh3l.txt

    cat  ../result.data.Significance.ICHEP2016.0jet.me.txt
    cat  ../result.data.Significance.ICHEP2016.0jet.em.txt
    cat  ../result.data.Significance.ICHEP2016.1jet.me.txt
    cat  ../result.data.Significance.ICHEP2016.1jet.em.txt
    cat  ../result.data.Significance.ICHEP2016.0jet.txt
    cat  ../result.data.Significance.ICHEP2016.1jet.txt
    cat  ../result.data.Significance.ICHEP2016.2j.txt
    cat  ../result.data.Significance.ICHEP2016.vbf.txt
    cat  ../result.data.Significance.ICHEP2016.vh2j.txt
    cat  ../result.data.Significance.ICHEP2016.wh3l.txt
    
     
    cat  ../result.data.MaxLikelihoodFit.superCombination.2016.txt.pruned.txt
    cat  ../result.data.Significance.superCombination.2016.txt.pruned.txt

    
    
    cat  ../result.data.MaxLikelihoodFit.Combined.0jet.me.txt
    cat  ../result.data.MaxLikelihoodFit.Combined.0jet.em.txt
    cat  ../result.data.MaxLikelihoodFit.Combined.1jet.me.txt
    cat  ../result.data.MaxLikelihoodFit.Combined.1jet.em.txt
    cat  ../result.data.MaxLikelihoodFit.Combined.0jet.txt
    cat  ../result.data.MaxLikelihoodFit.Combined.1jet.txt
    cat  ../result.data.MaxLikelihoodFit.Combined.2j.txt
    cat  ../result.data.MaxLikelihoodFit.Combined.vbf.txt
    cat  ../result.data.MaxLikelihoodFit.Combined.vh2j.txt
    cat  ../result.data.MaxLikelihoodFit.Combined.wh3l.txt
    
    cat  ../result.data.Significance.Combined.0jet.me.txt
    cat  ../result.data.Significance.Combined.0jet.em.txt
    cat  ../result.data.Significance.Combined.1jet.me.txt
    cat  ../result.data.Significance.Combined.1jet.em.txt
    cat  ../result.data.Significance.Combined.0jet.txt
    cat  ../result.data.Significance.Combined.1jet.txt
    cat  ../result.data.Significance.Combined.2j.txt
    cat  ../result.data.Significance.Combined.vbf.txt
    cat  ../result.data.Significance.Combined.vh2j.txt
    cat  ../result.data.Significance.Combined.wh3l.txt
    
    cat  ../result.data.MaxLikelihoodFit.superCombination.Total.txt.pruned.txt
    cat  ../result.data.Significance.superCombination.Total.txt.pruned.txt

    
    
2D plots for Top and DYtt:

    cd ..
    sh ggH/scripts/doGGH_doMultisignal_topdytt.sh
    cd -
    

    r99t ../higgsCombineLH2DICHEP2015combined.MultiDimFit.mH120.root \
        scripts/Draw2D.cxx
    
    
    r99t ../higgsCombineTest.MultiDimFit.mH120_3bins_new.root scripts/Draw2DImproved.cxx\(\"Top\",\"DYtautau\",\"Topnorm0j\",\"DYttnorm0j\",2,\"r3\>0.9\&\&r3\<1.1\"\)
    
    r99t ../higgsCombinedytop0j.MultiDimFit.mH125.root     scripts/Draw2DImproved.cxx\(\"Top\",\"DYtautau\",\"Topnorm0j\",\"DYttnorm0j\",2\)
    r99t ../higgsCombinedytop1j.MultiDimFit.mH125.root     scripts/Draw2DImproved.cxx\(\"Top\",\"DYtautau\",\"Topnorm1j\",\"DYttnorm1j\",2\)
    r99t ../higgsCombinedytop2j.MultiDimFit.mH125.root     scripts/Draw2DImproved.cxx\(\"Top\",\"DYtautau\",\"Topnorm2j\",\"DYttnorm2j\",2\)
    r99t ../higgsCombinedytop2jvh.MultiDimFit.mH125.root   scripts/Draw2DImproved.cxx\(\"Top\",\"DYtautau\",\"Topnorm2jvh\",\"DYttnorm2jvh\",2\)
    r99t ../higgsCombinedytop2jvbf.MultiDimFit.mH125.root  scripts/Draw2DImproved.cxx\(\"Top\",\"DYtautau\",\"Topnorm2jvbf\",\"DYttnorm2jvbf\",2\)
 
    
    
    
Make tables:

    cd /afs/cern.ch/user/a/amassiro/Limit/PlayWithDatacards
    cd /afs/cern.ch/user/a/amassiro/Framework/Combine/CMSSW_7_1_15/src/HiggsAnalysis/CombinedLimit
    cmsenv
    scramv1 b -j 20
    cd -
    
    
    python      systematicsAnalyzer.py    \
        /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_em_0j/mllVSmth/datacard.txt.pruned.txt   \
       --all    -m      125     -f      tex    >     hww2l2v_13TeV_em_0j.tex
    
    python      systematicsAnalyzer.py    \
        /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_me_0j/mllVSmth/datacard.txt.pruned.txt   \
       --all    -m      125     -f      tex    >     hww2l2v_13TeV_me_0j.tex
    
    python      systematicsAnalyzer.py    \
        /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_em_1j/mllVSmth/datacard.txt.pruned.txt   \
       --all    -m      125     -f      tex    >     hww2l2v_13TeV_em_1j.tex
    
    python      systematicsAnalyzer.py    \
        /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_me_1j/mllVSmth/datacard.txt.pruned.txt   \
       --all    -m      125     -f      tex    >     hww2l2v_13TeV_me_1j.tex

       
       
       
    python      systematicsAnalyzer.py    \
        /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ControlRegions/WW/datacards/ww2l2v_13TeV_ww_of0j/mll/datacard.txt   \
       --all    -m      125     -f      tex    >     hww2l2v_13TeV_ww_0j.tex
    
    python      systematicsAnalyzer.py    \
        /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ControlRegions/WW/datacards/ww2l2v_13TeV_ww_of1j/mll/datacard.txt   \
       --all    -m      125     -f      tex    >     hww2l2v_13TeV_ww_1j.tex
    
        

Make plots:

    cd /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/LatinoAnalysis/ShapeAnalysis/test/draw/
    cmsenv
    
    python DrawNuisancesAll.py \
         --inputFile /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_me_0j/mllVSmth/shapes/histos_hww2l2v_13TeV_me_0j.root  \
         --outputDirPlots ggH0jme  \
         --nuisancesFile  /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/nuisances.py  \
         --samplesFile    /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/samples.py \
         --cutName hww2l2v_13TeV_me_0j

    python DrawNuisancesAll.py \
         --inputFile /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_em_0j/mllVSmth/shapes/histos_hww2l2v_13TeV_em_0j.root  \
         --outputDirPlots ggH0jem  \
         --nuisancesFile  /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/nuisances.py  \
         --samplesFile    /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/samples.py \
         --cutName hww2l2v_13TeV_em_0j
    
    python DrawNuisancesAll.py \
         --inputFile /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_me_1j/mllVSmth/shapes/histos_hww2l2v_13TeV_me_1j.root  \
         --outputDirPlots ggH1jme  \
         --nuisancesFile  /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/nuisances.py  \
         --samplesFile    /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/samples.py \
         --cutName hww2l2v_13TeV_me_1j
    
    python DrawNuisancesAll.py \
         --inputFile /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_em_1j/mllVSmth/shapes/histos_hww2l2v_13TeV_em_1j.root  \
         --outputDirPlots ggH1jem  \
         --nuisancesFile  /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/nuisances.py  \
         --samplesFile    /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/samples.py \
         --cutName hww2l2v_13TeV_em_1j


Impact plots and pulls:

    combine Combined.vbf.pruned.txt       -M MaxLikelihoodFit   -n   Combined.vbf.pruned.txt.MaxLikelihoodFit.root
    python ggH/scripts/diffNuisances.py -a mlfitCombined.vbf.pruned.txt.MaxLikelihoodFit.root.root -g plots.root
    

Draw likelihood scan:

    root -l ../higgsCombineLHScanH.MultiDimFit.mH125.root  \
            scripts/drawNLL.C
    
    root -l ../higgsCombineLHScanH.MultiDimFit.mH125.root  \
            ../higgsCombineLHScanHdata.MultiDimFit.mH125.root  \
            scripts/drawNLLObs.C
    
    
Make pie plot:

    cd /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH
    cmsenv
    sh scripts/doGGH_plot.sh 
    cd -

 
 
Combine:
      
        
      --toysNoSystematics                  Generate all toys with the central value
                                       of the nuisance parameters, without 
                                       fluctuating them
      --toysFrequentist                    Generate all toys in the frequentist 
                                       way. Note that this affects the toys 
                                       generated by option '-t' that happen in 
                                       the main loop, not the ones within the 
                                       Hybrid(New) algorithm.

Perform a Likelihood scan:

    Scan of the signal strength r:
        combine -M MultiDimFit Moriond2016.txt --algo=grid --points 100 --setPhysicsModelParameterRanges r=0.01,2 -t -1 --expectSignal=1 -n "LHScan" -m 125
    
    Scan of a nuisance (eg. Topnorm0j):
        combine -M MultiDimFit Moriond2016.txt --algo=grid --points 100 --redefineSignalPOIs Topnorm0j --freezeNuisances=r --setPhysicsModelParameterRanges Topnorm0j=0.01,2 -t -1 --expectSignal=1 -n "LHScanTopnorm0j" -m 125

    Scan of a nuisance freezing another one (eg. scan of Topnorm0j and freeze of WWnorm0j):
        combine -M MultiDimFit datacardCOMB.txt --algo=grid --points 100 --redefineSignalPOIs Topnorm0j --freezeNuisances=r,WWnorm0j --setPhysicsModelParameterRanges Topnorm0j=0.01,2 -t -1 --expectSignal=1 -n "LHScanTopnorm0j_WWnormFreeze" -m 125
    
    
    
    
Measure DYtt normalization:

    combineCards.py   of0j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt \
                  >   Moriond2016.tau.0j.txt
                 
    combineCards.py   of1j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt \
                  >   Moriond2016.tau.1j.txt
                 
    
    combine -M MultiDimFit Moriond2016.tau.0j.txt --algo=grid --points 100 --redefineSignalPOIs DYttnorm0j --freezeNuisances=r,Topnorm0j,WWnorm0j --setPhysicsModelParameterRanges DYttnorm0j=0.01,2 -t -1 --expectSignal=1 -n "LHScanDYttnorm0j" -m 125
    combine -M MultiDimFit Moriond2016.tau.1j.txt --algo=grid --points 100 --redefineSignalPOIs DYttnorm1j --freezeNuisances=r,Topnorm1j,WWnorm1j --setPhysicsModelParameterRanges DYttnorm1j=0.01,2 -t -1 --expectSignal=1 -n "LHScanDYttnorm1j" -m 125

    combine -M MaxLikelihoodFit Moriond2016.tau.0j.txt --redefineSignalPOIs DYttnorm0j --freezeNuisances=r,Topnorm0j,WWnorm0j --setPhysicsModelParameterRanges DYttnorm0j=0.01,2 -t -1 --expectSignal=1 -n "MLfitDYttnorm0j" -m 125
    combine -M MaxLikelihoodFit Moriond2016.tau.1j.txt --redefineSignalPOIs DYttnorm1j --freezeNuisances=r,Topnorm1j,WWnorm1j --setPhysicsModelParameterRanges DYttnorm1j=0.01,2 -t -1 --expectSignal=1 -n "MLfitDYttnorm1j" -m 125

    
    
Combine secret options:

    --robustFit=1
    --X-rtd FITTER_NEW_CROSSING_ALGO
    --X-rtd FITTER_NEVER_GIVE_UP
    --X-rtd FITTER_BOUND

Datacards checks

    cd ~/Framework/Combine/CMSSW_7_4_7/src/LatinoCombineTools/Tools/
    cmsenv
    text2workspace.py superCombination.Total.txt.pruned.txt   -o    superCombination.Total.txt.pruned.txt.workspace.root 
    combine    -M MaxLikelihoodFit -t -1 --expectSignal 1   superCombination.Total.txt.pruned.txt.workspace.root      -n    superCombination.Total.txt.pruned.txt.workspace.MaxLikelihoodFit.root
     
    python diffNuisances.py  \
           -a  /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/higgsCombinesuperCombination.Total.txt.pruned.txt.workspace.MaxLikelihoodFit.root.MaxLikelihoodFit.mH120.root \
           -g plots.root  &> result.txt    

           
           
           
           
    text2workspace.py Moriond2016.txt    -o    test.root
    combine    -M MaxLikelihoodFit -t -1 --expectSignal 1    test.root
    python diffNuisances.py -a  mlfit.root -g plots.root  &> result.txt
    

    
    combineCards.py   of0j13=ggHMoriond/datacards/hww2l2v_13TeV_of0j/mllVSmth/datacard.txt \
                      of0j13Top=ggHMoriondTop/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt \
                      >   Moriond2016-0j.txt

    text2workspace.py Moriond2016-0j.txt    -o    test.root
    combine    -M MaxLikelihoodFit -t -1 --expectSignal 1    test.root
    python diffNuisances.py -a  mlfit.root -g plots.root  &> result.0j.txt

    combineCards.py   of0j13=ggHMoriond/datacards/hww2l2v_13TeV_of1j/mllVSmth/datacard.txt \
                      of1j13Top=ggHMoriondTop/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt \
                      >   Moriond2016-1j.txt

    text2workspace.py Moriond2016-1j.txt    -o    test.root
    combine    -M MaxLikelihoodFit -t -1 --expectSignal 1    test.root
    python diffNuisances.py -a  mlfit.root -g plots.root  &> result.1j.txt
    
 
Backup:

    https://twiki.cern.ch/twiki/bin/view/CMS/LatinosTreesRun2
    
    mkShapes.py      --pycfg=configuration.py  --doThreads=True   --inputDir=eos/user/j/jlauwers/HWW2015/07Jun2016_spring16__mAODv2/MCl2loose16__hadd__LepEff__l2tight__wwSel/
    mkShapes.py      --pycfg=configuration.py  --doThreads=True   --inputDir=eos/user/j/jlauwers/HWW2015/07Jun2016_spring16__mAODv2/MCl2loose__hadd__bSFLepEff__l2tight__wwSel/
    mkShapes.py      --pycfg=configuration.py  --doThreads=True   --inputDir=eos/user/j/jlauwers/HWW2015/07Jun2016_spring16_mAODv2/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/
      
    mkShapes.py      /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/--pycfg=configuration.py  --doThreads=True   --inputDir=eos/user/p/piedra/HWW2016/07Jun2016_spring16_mAODv2/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/
     

    mkShapes.py      --pycfg=configuration.py  --doThreads=True   --inputDir=eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWWTightMu/07Jun2016_spring16_mAODv2_4p0fbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/
         
    mkShapes.py      --pycfg=configuration.py  --doThreads=True   --inputDir=eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/07Jun2016_spring16_mAODv2_6p3fbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/
    
    mkShapes.py      --pycfg=configuration.py  --doThreads=True   --inputDir=eos/user/a/amassiro/HWW2015/ICHEP/07Jun2016_spring16_mAODv2_6p3fbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/
    
    mkShapes.py      --pycfg=configuration_iteos.py  --doThreads=True    --inputDir=eos/user/a/amassiro/HWW2015/ICHEP/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/

    
      
      

Copy datacards to repository:

    https://svnweb.cern.ch/cern/wsvn/cmshcg/trunk/moriond2016/
    https://svnweb.cern.ch/cern/wsvn/cmshcg/trunk/cadi/HIG-15-003/125/
    
    
    svn co -N svn+ssh://svn.cern.ch/reps/cmshcg/trunk/moriond2016
    cd moriond2016
    svn up -N couplings
    svn up couplings/hww2l2v
    
    cd /afs/cern.ch/user/a/amassiro/work/Latinos/Limit/datacards/moriond2016 
    cd /afs/cern.ch/user/a/amassiro/work/Latinos/Limit/datacards/moriond2016/couplings/hww2l2v/125/
      


    svn co -N svn+ssh://svn.cern.ch/reps/cmshcg/trunk/cadi
    cd cadi
    svn up HIG-15-003
    
    cd /afs/cern.ch/user/a/amassiro/work/Latinos/Limit/datacards/cadi/HIG-15-003/125
    
    mkdir   hww2l2v_13TeV_em_1j/
    mkdir   hww2l2v_13TeV_me_1j/
    mkdir   hww2l2v_13TeV_em_0j/
    mkdir   hww2l2v_13TeV_me_0j/
    mkdir   hww2l2v_13TeV_top_of0j/
    mkdir   hww2l2v_13TeV_top_of1j/
    mkdir   hww2l2v_13TeV_dytt_of0j/
    mkdir   hww2l2v_13TeV_dytt_of1j/
        
    mkdir   hww2l2v_13TeV_em_1j/shapes/
    mkdir   hww2l2v_13TeV_me_1j/shapes/
    mkdir   hww2l2v_13TeV_em_0j/shapes/
    mkdir   hww2l2v_13TeV_me_0j/shapes/
    mkdir   hww2l2v_13TeV_top_of0j/shapes/
    mkdir   hww2l2v_13TeV_top_of1j/shapes/
    mkdir   hww2l2v_13TeV_dytt_of0j/shapes/
    mkdir   hww2l2v_13TeV_dytt_of1j/shapes/

    cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_em_1j/mllVSmth/datacard.txt.pruned.txt       hww2l2v_13TeV_em_1j/hww2l2v_13TeV_em_1j.txt
    cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_me_1j/mllVSmth/datacard.txt.pruned.txt       hww2l2v_13TeV_me_1j/hww2l2v_13TeV_me_1j.txt
    cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_em_0j/mllVSmth/datacard.txt.pruned.txt       hww2l2v_13TeV_em_0j/hww2l2v_13TeV_em_0j.txt
    cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_me_0j/mllVSmth/datacard.txt.pruned.txt       hww2l2v_13TeV_me_0j/hww2l2v_13TeV_me_0j.txt
    cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt      hww2l2v_13TeV_top_of0j/hww2l2v_13TeV_top_of0j.txt
    cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt      hww2l2v_13TeV_top_of1j/hww2l2v_13TeV_top_of1j.txt
    cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt     hww2l2v_13TeV_dytt_of0j/hww2l2v_13TeV_dytt_of0j.txt 
    cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt     hww2l2v_13TeV_dytt_of1j/hww2l2v_13TeV_dytt_of1j.txt 
    
    cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_em_1j/mllVSmth/shapes/*.root            hww2l2v_13TeV_em_1j/shapes/
    cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_me_1j/mllVSmth/shapes/*.root            hww2l2v_13TeV_me_1j/shapes/
    cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_em_0j/mllVSmth/shapes/*.root            hww2l2v_13TeV_em_0j/shapes/
    cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_me_0j/mllVSmth/shapes/*.root            hww2l2v_13TeV_me_0j/shapes/
    cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_top_of0j/events/shapes/*.root           hww2l2v_13TeV_top_of0j/shapes/
    cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_top_of1j/events/shapes/*.root           hww2l2v_13TeV_top_of1j/shapes/
    cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/shapes/*.root          hww2l2v_13TeV_dytt_of0j/shapes/
    cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/shapes/*.root          hww2l2v_13TeV_dytt_of1j/shapes/
    
    
    
    cd /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH
    



 

 
 
 
 
 
 
 
 
 
 
 
 
 
    cd /afs/cern.ch/user/a/amassiro/work/Latinos/Limit/datacards/cadi/HIG-16-021/125
    cd /afs/cern.ch/user/a/amassiro/work/Latinos/Limit/datacards/cadi/HIG-16-021/125/2015
    cd /afs/cern.ch/user/a/amassiro/work/Latinos/Limit/datacards/cadi/HIG-16-021/125/2016
    

    
      mkdir  2015/hww2l2v_13TeV_em_1j/
      mkdir  2015/hww2l2v_13TeV_me_1j/
      mkdir  2015/hww2l2v_13TeV_em_0j/
      mkdir  2015/hww2l2v_13TeV_me_0j/
      mkdir  2015/hww2l2v_13TeV_top_of0j/
      mkdir  2015/hww2l2v_13TeV_top_of1j/
      mkdir  2015/hww2l2v_13TeV_dytt_of0j/
      mkdir  2015/hww2l2v_13TeV_dytt_of1j/
      mkdir  2015/hww2l2v_13TeV_of2j/
      mkdir  2015/hww2l2v_13TeV_top_of2j/
      mkdir  2015/hww2l2v_13TeV_dytt_of2j/
      mkdir  2015/hww2l2v_13TeV_of2j_vbf_lowmjj/
      mkdir  2015/hww2l2v_13TeV_top_of2j_vbf/
      mkdir  2015/hww2l2v_13TeV_dytt_of2j_vbf/
      mkdir  2015/hww2l2v_13TeV_of2j_vh2j/
      mkdir  2015/hww2l2v_13TeV_top_of2j_vh2j/
      mkdir  2015/hww2l2v_13TeV_dytt_of2j_vh2j/
      mkdir  2015/wh3l_13TeV_ossf/
      mkdir  2015/wh3l_13TeV_sssf/
      mkdir  2015/wh3l_wz_13TeV/
      mkdir  2015/wh3l_zg_13TeV/

      mkdir  2015/hww2l2v_13TeV_em_1j/shapes/
      mkdir  2015/hww2l2v_13TeV_me_1j/shapes/
      mkdir  2015/hww2l2v_13TeV_em_0j/shapes/
      mkdir  2015/hww2l2v_13TeV_me_0j/shapes/
      mkdir  2015/hww2l2v_13TeV_top_of0j/shapes/
      mkdir  2015/hww2l2v_13TeV_top_of1j/shapes/
      mkdir  2015/hww2l2v_13TeV_dytt_of0j/shapes/
      mkdir  2015/hww2l2v_13TeV_dytt_of1j/shapes/
      mkdir  2015/hww2l2v_13TeV_of2j/shapes/
      mkdir  2015/hww2l2v_13TeV_top_of2j/shapes/
      mkdir  2015/hww2l2v_13TeV_dytt_of2j/shapes/
      mkdir  2015/hww2l2v_13TeV_of2j_vbf_lowmjj/shapes/
      mkdir  2015/hww2l2v_13TeV_top_of2j_vbf/shapes/
      mkdir  2015/hww2l2v_13TeV_dytt_of2j_vbf/shapes/
      mkdir  2015/hww2l2v_13TeV_of2j_vh2j/shapes/
      mkdir  2015/hww2l2v_13TeV_top_of2j_vh2j/shapes/
      mkdir  2015/hww2l2v_13TeV_dytt_of2j_vh2j/shapes/
      mkdir  2015/wh3l_13TeV_ossf/shapes/
      mkdir  2015/wh3l_13TeV_sssf/shapes/
      mkdir  2015/wh3l_wz_13TeV/shapes/
      mkdir  2015/wh3l_zg_13TeV/shapes/

      mkdir  2016/hww2l2v_13TeV_em_mp_1j/
      mkdir  2016/hww2l2v_13TeV_me_mp_1j/
      mkdir  2016/hww2l2v_13TeV_em_mp_0j/
      mkdir  2016/hww2l2v_13TeV_me_mp_0j/
      mkdir  2016/hww2l2v_13TeV_em_pm_1j/
      mkdir  2016/hww2l2v_13TeV_me_pm_1j/
      mkdir  2016/hww2l2v_13TeV_em_pm_0j/
      mkdir  2016/hww2l2v_13TeV_me_pm_0j/
      mkdir  2016/hww2l2v_13TeV_top_of0j/
      mkdir  2016/hww2l2v_13TeV_top_of1j/
      mkdir  2016/hww2l2v_13TeV_dytt_of0j/
      mkdir  2016/hww2l2v_13TeV_dytt_of1j/
      mkdir  2016/hww2l2v_13TeV_of2j/
      mkdir  2016/hww2l2v_13TeV_top_of2j/
      mkdir  2016/hww2l2v_13TeV_dytt_of2j/
      mkdir  2016/hww2l2v_13TeV_of2j_vbf_lowmjj/
      mkdir  2016/hww2l2v_13TeV_top_of2j_vbf/
      mkdir  2016/hww2l2v_13TeV_dytt_of2j_vbf/
      mkdir  2016/hww2l2v_13TeV_of2j_vh2j/
      mkdir  2016/hww2l2v_13TeV_top_of2j_vh2j/
      mkdir  2016/hww2l2v_13TeV_dytt_of2j_vh2j/
      mkdir  2016/wh3l_13TeV_ossf/
      mkdir  2016/wh3l_13TeV_sssf/
      mkdir  2016/wh3l_wz_13TeV/
      mkdir  2016/wh3l_zg_13TeV/

      
      mkdir  2016/hww2l2v_13TeV_em_mp_1j/shapes/
      mkdir  2016/hww2l2v_13TeV_me_mp_1j/shapes/
      mkdir  2016/hww2l2v_13TeV_em_mp_0j/shapes/
      mkdir  2016/hww2l2v_13TeV_me_mp_0j/shapes/
      mkdir  2016/hww2l2v_13TeV_em_pm_1j/shapes/
      mkdir  2016/hww2l2v_13TeV_me_pm_1j/shapes/
      mkdir  2016/hww2l2v_13TeV_em_pm_0j/shapes/
      mkdir  2016/hww2l2v_13TeV_me_pm_0j/shapes/
      mkdir  2016/hww2l2v_13TeV_top_of0j/shapes/
      mkdir  2016/hww2l2v_13TeV_top_of1j/shapes/
      mkdir  2016/hww2l2v_13TeV_dytt_of0j/shapes/
      mkdir  2016/hww2l2v_13TeV_dytt_of1j/shapes/
      mkdir  2016/hww2l2v_13TeV_of2j/shapes/
      mkdir  2016/hww2l2v_13TeV_top_of2j/shapes/
      mkdir  2016/hww2l2v_13TeV_dytt_of2j/shapes/
      mkdir  2016/hww2l2v_13TeV_of2j_vbf_lowmjj/shapes/
      mkdir  2016/hww2l2v_13TeV_top_of2j_vbf/shapes/
      mkdir  2016/hww2l2v_13TeV_dytt_of2j_vbf/shapes/
      mkdir  2016/hww2l2v_13TeV_of2j_vh2j/shapes/
      mkdir  2016/hww2l2v_13TeV_top_of2j_vh2j/shapes/
      mkdir  2016/hww2l2v_13TeV_dytt_of2j_vh2j/shapes/
      mkdir  2016/wh3l_13TeV_ossf/shapes/
      mkdir  2016/wh3l_13TeV_sssf/shapes/
      mkdir  2016/wh3l_wz_13TeV/shapes/
      mkdir  2016/wh3l_zg_13TeV/shapes/

      
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/Moriond/datacards/hww2l2v_13TeV_em_1j/mllVSmth/shapes/*.root             2015/hww2l2v_13TeV_em_1j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/Moriond/datacards/hww2l2v_13TeV_me_1j/mllVSmth/shapes/*.root             2015/hww2l2v_13TeV_me_1j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/Moriond/datacards/hww2l2v_13TeV_em_0j/mllVSmth/shapes/*.root             2015/hww2l2v_13TeV_em_0j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/Moriond/datacards/hww2l2v_13TeV_me_0j/mllVSmth/shapes/*.root             2015/hww2l2v_13TeV_me_0j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/shapes/*.root            2015/hww2l2v_13TeV_top_of0j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/shapes/*.root            2015/hww2l2v_13TeV_top_of1j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/shapes/*.root           2015/hww2l2v_13TeV_dytt_of0j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/shapes/*.root           2015/hww2l2v_13TeV_dytt_of1j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH2j/Moriond/datacards/hww2l2v_13TeV_of2j/mllVSmth/shapes/*.root            2015/hww2l2v_13TeV_of2j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j/events/shapes/*.root          2015/hww2l2v_13TeV_top_of2j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH2j/Moriond/datacards/hww2l2v_13TeV_dytt_of2j/events/shapes/*.root         2015/hww2l2v_13TeV_dytt_of2j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VBF/Moriond/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/shapes/*.root        2015/hww2l2v_13TeV_of2j_vbf_lowmjj/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/shapes/*.root        2015/hww2l2v_13TeV_top_of2j_vbf/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/shapes/*.root       2015/hww2l2v_13TeV_dytt_of2j_vbf/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VH2j/Moriond/datacards/hww2l2v_13TeV_of2j_vh2j/mll/shapes/*.root             2015/hww2l2v_13TeV_of2j_vh2j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/shapes/*.root      2015/hww2l2v_13TeV_top_of2j_vh2j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VH2j/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/shapes/*.root     2015/hww2l2v_13TeV_dytt_of2j_vh2j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WH3l/Moriond/datacards/wh3l_13TeV_ossf/drllmin3l/shapes/*.root               2015/wh3l_13TeV_ossf/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WH3l/Moriond/datacards/wh3l_13TeV_sssf/drllmin3l/shapes/*.root               2015/wh3l_13TeV_sssf/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WH3l/Moriond/datacards/wh3l_wz_13TeV/events/shapes/*.root                    2015/wh3l_wz_13TeV/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WH3l/Moriond/datacards/wh3l_zg_13TeV/events/shapes/*.root                    2015/wh3l_zg_13TeV/shapes/

      
      
                  em1j13    =    ggH/Moriond/datacards/hww2l2v_13TeV_em_1j/mllVSmth/datacard.txt.pruned.txt 
                  me1j13    =    ggH/Moriond/datacards/hww2l2v_13TeV_me_1j/mllVSmth/datacard.txt.pruned.txt 
                  em0j13    =    ggH/Moriond/datacards/hww2l2v_13TeV_em_0j/mllVSmth/datacard.txt.pruned.txt 
                  me0j13    =    ggH/Moriond/datacards/hww2l2v_13TeV_me_0j/mllVSmth/datacard.txt.pruned.txt 
                  of0j13Top    =    ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt 
                  of1j13Top    =    ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt 
                  of0j13DYtt    =    ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt 
                  of1j13DYtt    =    ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt 
                  of2j2j13    =    ggH2j/Moriond/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt 
                  of2j2j13Top    =    ggH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt 
                  of2j2j13DYtt    =    ggH2j/Moriond/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt 
                  of2jvbf13    =    VBF/Moriond/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.txt.pruned.txt 
                  of2jvbf13Top    =    VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt 
                  of2jvbf13DYtt    =    VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt 
                  of2jvh2j13    =    VH2j/Moriond/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt 
                  of2jvh2j13Top    =    VH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt 
                  of2jvh2j13DYtt    =    VH2j/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt 
                  wh3lossf    =    WH3l/Moriond/datacards/wh3l_13TeV_ossf/drllmin3l/datacard.txt.pruned.txt                  
                  wh3lsssf    =    WH3l/Moriond/datacards/wh3l_13TeV_sssf/drllmin3l/datacard.txt.pruned.txt       
                  wh3lwz    =    WH3l/Moriond/datacards/wh3l_wz_13TeV/events/datacard.txt.pruned.txt                       
                  wh3lzg    =    WH3l/Moriond/datacards/wh3l_zg_13TeV/events/datacard.txt.pruned.txt            
                  
                  ICHEP_em_mp_1j_13    =    ggH/datacards/hww2l2v_13TeV_em_mp_1j/mllVSmth/datacard.txt.pruned.txt 
                  ICHEP_me_mp_1j_13    =    ggH/datacards/hww2l2v_13TeV_me_mp_1j/mllVSmth/datacard.txt.pruned.txt 
                  ICHEP_em_mp_0j_13    =    ggH/datacards/hww2l2v_13TeV_em_mp_0j/mllVSmth/datacard.txt.pruned.txt 
                  ICHEP_me_mp_0j_13    =    ggH/datacards/hww2l2v_13TeV_me_mp_0j/mllVSmth/datacard.txt.pruned.txt 
                  ICHEP_em_pm_1j_13    =    ggH/datacards/hww2l2v_13TeV_em_pm_1j/mllVSmth/datacard.txt.pruned.txt 
                  ICHEP_me_pm_1j_13    =    ggH/datacards/hww2l2v_13TeV_me_pm_1j/mllVSmth/datacard.txt.pruned.txt 
                  ICHEP_em_pm_0j_13    =    ggH/datacards/hww2l2v_13TeV_em_pm_0j/mllVSmth/datacard.txt.pruned.txt 
                  ICHEP_me_pm_0j_13    =    ggH/datacards/hww2l2v_13TeV_me_pm_0j/mllVSmth/datacard.txt.pruned.txt 
                  ICHEP_of0j13Top    =    ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt 
                  ICHEP_of1j13Top    =    ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt 
                  ICHEP_of0j13DYtt    =    ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt 
                  ICHEP_of1j13DYtt    =    ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt 
                  ICHEP_of2j2j13    =    ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt 
                  ICHEP_of2j2j13Top    =    ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt 
                  ICHEP_of2j2j13DYtt    =    ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt 
                  ICHEP_of2jvbf13    =    VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mllfine/datacard.txt.pruned.txt 
                  ICHEP_of2jvbf13Top    =    VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt 
                  ICHEP_of2jvbf13DYtt    =    VBF/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt 
                  ICHEP_of2jvh2j13    =    VH2j/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt 
                  ICHEP_of2jvh2j13Top    =    VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt 
                  ICHEP_of2jvh2j13DYtt    =    VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt 
                  ICHEP_wh3lossf    =    WH3l/datacards/wh3l_13TeV_ossf/drllmin3l/datacard.txt.pruned.txt                  
                  ICHEP_wh3lsssf    =    WH3l/datacards/wh3l_13TeV_sssf/drllmin3l_sssf/datacard.txt.pruned.txt       
                  ICHEP_wh3lwz    =    WH3l/datacards/wh3l_wz_13TeV/events/datacard.txt.pruned.txt                       
                  ICHEP_wh3lzg    =    WH3l/datacards/wh3l_zg_13TeV/events/datacard.txt.pruned.txt            

                  
                  
      ICHEP final

      cd /afs/cern.ch/user/a/amassiro/work/Latinos/Limit/datacards/cadi/HIG-16-021/125
      cd /afs/cern.ch/user/a/amassiro/work/Latinos/Limit/datacards/cadi/HIG-16-021/125/2015
      cd /afs/cern.ch/user/a/amassiro/work/Latinos/Limit/datacards/cadi/HIG-16-021/125/2016
      
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/Moriond/datacards/hww2l2v_13TeV_em_1j/mllVSmth/datacard.txt.pruned.txt             2015/hww2l2v_13TeV_em_1j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/Moriond/datacards/hww2l2v_13TeV_me_1j/mllVSmth/datacard.txt.pruned.txt             2015/hww2l2v_13TeV_me_1j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/Moriond/datacards/hww2l2v_13TeV_em_0j/mllVSmth/datacard.txt.pruned.txt             2015/hww2l2v_13TeV_em_0j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/Moriond/datacards/hww2l2v_13TeV_me_0j/mllVSmth/datacard.txt.pruned.txt             2015/hww2l2v_13TeV_me_0j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt            2015/hww2l2v_13TeV_top_of0j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt            2015/hww2l2v_13TeV_top_of1j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt           2015/hww2l2v_13TeV_dytt_of0j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt           2015/hww2l2v_13TeV_dytt_of1j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH2j/Moriond/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt            2015/hww2l2v_13TeV_of2j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt          2015/hww2l2v_13TeV_top_of2j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH2j/Moriond/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt         2015/hww2l2v_13TeV_dytt_of2j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VBF/Moriond/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/datacard.txt.pruned.txt        2015/hww2l2v_13TeV_of2j_vbf_lowmjj/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt        2015/hww2l2v_13TeV_top_of2j_vbf/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt       2015/hww2l2v_13TeV_dytt_of2j_vbf/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VH2j/Moriond/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt             2015/hww2l2v_13TeV_of2j_vh2j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt      2015/hww2l2v_13TeV_top_of2j_vh2j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VH2j/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt     2015/hww2l2v_13TeV_dytt_of2j_vh2j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WH3l/Moriond/datacards/wh3l_13TeV_ossf/drllmin3l/datacard.txt.pruned.txt               2015/wh3l_13TeV_ossf/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WH3l/Moriond/datacards/wh3l_13TeV_sssf/drllmin3l/datacard.txt.pruned.txt               2015/wh3l_13TeV_sssf/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WH3l/Moriond/datacards/wh3l_wz_13TeV/events/datacard.txt.pruned.txt                    2015/wh3l_wz_13TeV/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WH3l/Moriond/datacards/wh3l_zg_13TeV/events/datacard.txt.pruned.txt                    2015/wh3l_zg_13TeV/datacard.txt
    
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_em_mp_1j/mllVSmth/datacard.txt.pruned.txt                  2016/hww2l2v_13TeV_em_mp_1j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_me_mp_1j/mllVSmth/datacard.txt.pruned.txt                  2016/hww2l2v_13TeV_me_mp_1j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_em_mp_0j/mllVSmth/datacard.txt.pruned.txt                  2016/hww2l2v_13TeV_em_mp_0j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_me_mp_0j/mllVSmth/datacard.txt.pruned.txt                  2016/hww2l2v_13TeV_me_mp_0j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_em_pm_1j/mllVSmth/datacard.txt.pruned.txt                  2016/hww2l2v_13TeV_em_pm_1j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_me_pm_1j/mllVSmth/datacard.txt.pruned.txt                  2016/hww2l2v_13TeV_me_pm_1j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_em_pm_0j/mllVSmth/datacard.txt.pruned.txt                  2016/hww2l2v_13TeV_em_pm_0j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_me_pm_0j/mllVSmth/datacard.txt.pruned.txt                  2016/hww2l2v_13TeV_me_pm_0j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt                    2016/hww2l2v_13TeV_top_of0j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt                    2016/hww2l2v_13TeV_top_of1j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt                   2016/hww2l2v_13TeV_dytt_of0j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt                   2016/hww2l2v_13TeV_dytt_of1j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt                    2016/hww2l2v_13TeV_of2j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt                  2016/hww2l2v_13TeV_top_of2j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt                 2016/hww2l2v_13TeV_dytt_of2j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mllfine/datacard.txt.pruned.txt                2016/hww2l2v_13TeV_of2j_vbf_lowmjj/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt                 2016/hww2l2v_13TeV_top_of2j_vbf/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VBF/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt                2016/hww2l2v_13TeV_dytt_of2j_vbf/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VH2j/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt                     2016/hww2l2v_13TeV_of2j_vh2j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt              2016/hww2l2v_13TeV_top_of2j_vh2j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt             2016/hww2l2v_13TeV_dytt_of2j_vh2j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WH3l/datacards/wh3l_13TeV_ossf/drllmin3l/datacard.txt.pruned.txt                       2016/wh3l_13TeV_ossf/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WH3l/datacards/wh3l_13TeV_sssf/drllmin3l_sssf/datacard.txt.pruned.txt                       2016/wh3l_13TeV_sssf/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WH3l/datacards/wh3l_wz_13TeV/events/datacard.txt.pruned.txt                            2016/wh3l_wz_13TeV/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WH3l/datacards/wh3l_zg_13TeV/events/datacard.txt.pruned.txt                            2016/wh3l_zg_13TeV/datacard.txt
                  
                  
                  
                  
    
    
    
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/Moriond/datacards/hww2l2v_13TeV_em_1j/mllVSmth/shapes/*.root             2015/hww2l2v_13TeV_em_1j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/Moriond/datacards/hww2l2v_13TeV_me_1j/mllVSmth/shapes/*.root             2015/hww2l2v_13TeV_me_1j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/Moriond/datacards/hww2l2v_13TeV_em_0j/mllVSmth/shapes/*.root             2015/hww2l2v_13TeV_em_0j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/Moriond/datacards/hww2l2v_13TeV_me_0j/mllVSmth/shapes/*.root             2015/hww2l2v_13TeV_me_0j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/Moriond/datacards/hww2l2v_13TeV_top_of0j/events/shapes/*.root            2015/hww2l2v_13TeV_top_of0j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/Moriond/datacards/hww2l2v_13TeV_top_of1j/events/shapes/*.root            2015/hww2l2v_13TeV_top_of1j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of0j/events/shapes/*.root           2015/hww2l2v_13TeV_dytt_of0j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/Moriond/datacards/hww2l2v_13TeV_dytt_of1j/events/shapes/*.root           2015/hww2l2v_13TeV_dytt_of1j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH2j/Moriond/datacards/hww2l2v_13TeV_of2j/mllVSmth/shapes/*.root            2015/hww2l2v_13TeV_of2j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j/events/shapes/*.root          2015/hww2l2v_13TeV_top_of2j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH2j/Moriond/datacards/hww2l2v_13TeV_dytt_of2j/events/shapes/*.root         2015/hww2l2v_13TeV_dytt_of2j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VBF/Moriond/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mll/shapes/*.root        2015/hww2l2v_13TeV_of2j_vbf_lowmjj/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VBF/Moriond/datacards/hww2l2v_13TeV_top_of2j_vbf/events/shapes/*.root        2015/hww2l2v_13TeV_top_of2j_vbf/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VBF/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/shapes/*.root       2015/hww2l2v_13TeV_dytt_of2j_vbf/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VH2j/Moriond/datacards/hww2l2v_13TeV_of2j_vh2j/mll/shapes/*.root             2015/hww2l2v_13TeV_of2j_vh2j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VH2j/Moriond/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/shapes/*.root      2015/hww2l2v_13TeV_top_of2j_vh2j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VH2j/Moriond/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/shapes/*.root     2015/hww2l2v_13TeV_dytt_of2j_vh2j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WH3l/Moriond/datacards/wh3l_13TeV_ossf/drllmin3l/shapes/*.root               2015/wh3l_13TeV_ossf/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WH3l/Moriond/datacards/wh3l_13TeV_sssf/drllmin3l/shapes/*.root               2015/wh3l_13TeV_sssf/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WH3l/Moriond/datacards/wh3l_wz_13TeV/events/shapes/*.root                    2015/wh3l_wz_13TeV/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WH3l/Moriond/datacards/wh3l_zg_13TeV/events/shapes/*.root                    2015/wh3l_zg_13TeV/shapes/
    
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_em_mp_1j/mllVSmth/shapes/*.root                  2016/hww2l2v_13TeV_em_mp_1j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_me_mp_1j/mllVSmth/shapes/*.root                  2016/hww2l2v_13TeV_me_mp_1j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_em_mp_0j/mllVSmth/shapes/*.root                  2016/hww2l2v_13TeV_em_mp_0j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_me_mp_0j/mllVSmth/shapes/*.root                  2016/hww2l2v_13TeV_me_mp_0j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_em_pm_1j/mllVSmth/shapes/*.root                  2016/hww2l2v_13TeV_em_pm_1j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_me_pm_1j/mllVSmth/shapes/*.root                  2016/hww2l2v_13TeV_me_pm_1j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_em_pm_0j/mllVSmth/shapes/*.root                  2016/hww2l2v_13TeV_em_pm_0j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_me_pm_0j/mllVSmth/shapes/*.root                  2016/hww2l2v_13TeV_me_pm_0j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_top_of0j/events/shapes/*.root                    2016/hww2l2v_13TeV_top_of0j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_top_of1j/events/shapes/*.root                    2016/hww2l2v_13TeV_top_of1j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/shapes/*.root                   2016/hww2l2v_13TeV_dytt_of0j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/shapes/*.root                   2016/hww2l2v_13TeV_dytt_of1j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/shapes/*.root                    2016/hww2l2v_13TeV_of2j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/shapes/*.root                  2016/hww2l2v_13TeV_top_of2j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/shapes/*.root                 2016/hww2l2v_13TeV_dytt_of2j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mllfine/shapes/*.root                2016/hww2l2v_13TeV_of2j_vbf_lowmjj/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/shapes/*.root                2016/hww2l2v_13TeV_top_of2j_vbf/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VBF/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/shapes/*.root               2016/hww2l2v_13TeV_dytt_of2j_vbf/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VH2j/datacards/hww2l2v_13TeV_of2j_vh2j/mll/shapes/*.root                     2016/hww2l2v_13TeV_of2j_vh2j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/shapes/*.root              2016/hww2l2v_13TeV_top_of2j_vh2j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/shapes/*.root             2016/hww2l2v_13TeV_dytt_of2j_vh2j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WH3l/datacards/wh3l_13TeV_ossf/drllmin3l/shapes/*.root                       2016/wh3l_13TeV_ossf/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WH3l/datacards/wh3l_13TeV_sssf/drllmin3l_sssf/shapes/*.root                       2016/wh3l_13TeV_sssf/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WH3l/datacards/wh3l_wz_13TeV/events/shapes/*.root                            2016/wh3l_wz_13TeV/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WH3l/datacards/wh3l_zg_13TeV/events/shapes/*.root                            2016/wh3l_zg_13TeV/shapes/
    
    
    
    
    
    
    
    
    
    

    cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_em_1j/mllVSmth/datacard.txt.pruned.txt       hww2l2v_13TeV_em_1j/hww2l2v_13TeV_em_1j.txt
    cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_me_1j/mllVSmth/datacard.txt.pruned.txt       hww2l2v_13TeV_me_1j/hww2l2v_13TeV_me_1j.txt
    cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_em_0j/mllVSmth/datacard.txt.pruned.txt       hww2l2v_13TeV_em_0j/hww2l2v_13TeV_em_0j.txt
    cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_me_0j/mllVSmth/datacard.txt.pruned.txt       hww2l2v_13TeV_me_0j/hww2l2v_13TeV_me_0j.txt
    cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt      hww2l2v_13TeV_top_of0j/hww2l2v_13TeV_top_of0j.txt
    cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt      hww2l2v_13TeV_top_of1j/hww2l2v_13TeV_top_of1j.txt
    cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt     hww2l2v_13TeV_dytt_of0j/hww2l2v_13TeV_dytt_of0j.txt 
    cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt     hww2l2v_13TeV_dytt_of1j/hww2l2v_13TeV_dytt_of1j.txt 
    
    cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_em_1j/mllVSmth/shapes/*.root            hww2l2v_13TeV_em_1j/shapes/
    cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_me_1j/mllVSmth/shapes/*.root            hww2l2v_13TeV_me_1j/shapes/
    cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_em_0j/mllVSmth/shapes/*.root            hww2l2v_13TeV_em_0j/shapes/
    cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_me_0j/mllVSmth/shapes/*.root            hww2l2v_13TeV_me_0j/shapes/
    cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_top_of0j/events/shapes/*.root           hww2l2v_13TeV_top_of0j/shapes/
    cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_top_of1j/events/shapes/*.root           hww2l2v_13TeV_top_of1j/shapes/
    cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/shapes/*.root          hww2l2v_13TeV_dytt_of0j/shapes/
    cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/shapes/*.root          hww2l2v_13TeV_dytt_of1j/shapes/
    
 
 
 
 

      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_em_mp_1j/mllVSmth/shapes/*.root                  2016/hww2l2v_13TeV_em_mp_1j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_me_mp_1j/mllVSmth/shapes/*.root                  2016/hww2l2v_13TeV_me_mp_1j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_em_mp_0j/mllVSmth/shapes/*.root                  2016/hww2l2v_13TeV_em_mp_0j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_me_mp_0j/mllVSmth/shapes/*.root                  2016/hww2l2v_13TeV_me_mp_0j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_em_pm_1j/mllVSmth/shapes/*.root                  2016/hww2l2v_13TeV_em_pm_1j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_me_pm_1j/mllVSmth/shapes/*.root                  2016/hww2l2v_13TeV_me_pm_1j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_em_pm_0j/mllVSmth/shapes/*.root                  2016/hww2l2v_13TeV_em_pm_0j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_me_pm_0j/mllVSmth/shapes/*.root                  2016/hww2l2v_13TeV_me_pm_0j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_top_of0j/events/shapes/*.root                    2016/hww2l2v_13TeV_top_of0j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_top_of1j/events/shapes/*.root                    2016/hww2l2v_13TeV_top_of1j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/shapes/*.root                   2016/hww2l2v_13TeV_dytt_of0j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/shapes/*.root                   2016/hww2l2v_13TeV_dytt_of1j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/shapes/*.root                    2016/hww2l2v_13TeV_of2j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/shapes/*.root                  2016/hww2l2v_13TeV_top_of2j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/shapes/*.root                 2016/hww2l2v_13TeV_dytt_of2j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mllfine/shapes/*.root                2016/hww2l2v_13TeV_of2j_vbf_lowmjj/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/shapes/*.root                2016/hww2l2v_13TeV_top_of2j_vbf/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VBF/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/shapes/*.root               2016/hww2l2v_13TeV_dytt_of2j_vbf/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VH2j/datacards/hww2l2v_13TeV_of2j_vh2j/mll/shapes/*.root                     2016/hww2l2v_13TeV_of2j_vh2j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/shapes/*.root              2016/hww2l2v_13TeV_top_of2j_vh2j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/shapes/*.root             2016/hww2l2v_13TeV_dytt_of2j_vh2j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WH3l/datacards/wh3l_13TeV_ossf/drllmin3l/shapes/*.root                       2016/wh3l_13TeV_ossf/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WH3l/datacards/wh3l_13TeV_sssf/drllmin3l_sssf/shapes/*.root                       2016/wh3l_13TeV_sssf/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WH3l/datacards/wh3l_wz_13TeV/events/shapes/*.root                            2016/wh3l_wz_13TeV/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WH3l/datacards/wh3l_zg_13TeV/events/shapes/*.root                            2016/wh3l_zg_13TeV/shapes/
    
    
     
Test new fakes


      
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_em_mp_1j/mllVSmth/datacard.txt.pruned.txt                  2016/hww2l2v_13TeV_em_mp_1j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_me_mp_1j/mllVSmth/datacard.txt.pruned.txt                  2016/hww2l2v_13TeV_me_mp_1j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_em_mp_0j/mllVSmth/datacard.txt.pruned.txt                  2016/hww2l2v_13TeV_em_mp_0j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_me_mp_0j/mllVSmth/datacard.txt.pruned.txt                  2016/hww2l2v_13TeV_me_mp_0j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_em_pm_1j/mllVSmth/datacard.txt.pruned.txt                  2016/hww2l2v_13TeV_em_pm_1j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_me_pm_1j/mllVSmth/datacard.txt.pruned.txt                  2016/hww2l2v_13TeV_me_pm_1j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_em_pm_0j/mllVSmth/datacard.txt.pruned.txt                  2016/hww2l2v_13TeV_em_pm_0j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_me_pm_0j/mllVSmth/datacard.txt.pruned.txt                  2016/hww2l2v_13TeV_me_pm_0j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt                    2016/hww2l2v_13TeV_top_of0j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt                    2016/hww2l2v_13TeV_top_of1j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt                   2016/hww2l2v_13TeV_dytt_of0j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt                   2016/hww2l2v_13TeV_dytt_of1j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/datacard.txt.pruned.txt                    2016/hww2l2v_13TeV_of2j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt                  2016/hww2l2v_13TeV_top_of2j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/datacard.txt.pruned.txt                 2016/hww2l2v_13TeV_dytt_of2j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mllfine/datacard.txt.pruned.txt                2016/hww2l2v_13TeV_of2j_vbf_lowmjj/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt                 2016/hww2l2v_13TeV_top_of2j_vbf/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VBF/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt.pruned.txt.filtered.txt                2016/hww2l2v_13TeV_dytt_of2j_vbf/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VH2j/datacards/hww2l2v_13TeV_of2j_vh2j/mll/datacard.txt.pruned.txt                     2016/hww2l2v_13TeV_of2j_vh2j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt              2016/hww2l2v_13TeV_top_of2j_vh2j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt.pruned.txt             2016/hww2l2v_13TeV_dytt_of2j_vh2j/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WH3l/datacards/wh3l_13TeV_ossf/drllmin3l/datacard.txt.pruned.txt                       2016/wh3l_13TeV_ossf/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WH3l/datacards/wh3l_13TeV_sssf/drllmin3l_sssf/datacard.txt.pruned.txt                       2016/wh3l_13TeV_sssf/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WH3l/datacards/wh3l_wz_13TeV/events/datacard.txt.pruned.txt                            2016/wh3l_wz_13TeV/datacard.txt
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WH3l/datacards/wh3l_zg_13TeV/events/datacard.txt.pruned.txt                            2016/wh3l_zg_13TeV/datacard.txt
                  
                  
                  
    
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_em_mp_1j/mllVSmth/shapes/*.root                  2016/hww2l2v_13TeV_em_mp_1j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_me_mp_1j/mllVSmth/shapes/*.root                  2016/hww2l2v_13TeV_me_mp_1j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_em_mp_0j/mllVSmth/shapes/*.root                  2016/hww2l2v_13TeV_em_mp_0j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_me_mp_0j/mllVSmth/shapes/*.root                  2016/hww2l2v_13TeV_me_mp_0j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_em_pm_1j/mllVSmth/shapes/*.root                  2016/hww2l2v_13TeV_em_pm_1j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_me_pm_1j/mllVSmth/shapes/*.root                  2016/hww2l2v_13TeV_me_pm_1j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_em_pm_0j/mllVSmth/shapes/*.root                  2016/hww2l2v_13TeV_em_pm_0j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_me_pm_0j/mllVSmth/shapes/*.root                  2016/hww2l2v_13TeV_me_pm_0j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_top_of0j/events/shapes/*.root                    2016/hww2l2v_13TeV_top_of0j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_top_of1j/events/shapes/*.root                    2016/hww2l2v_13TeV_top_of1j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/shapes/*.root                   2016/hww2l2v_13TeV_dytt_of0j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/shapes/*.root                   2016/hww2l2v_13TeV_dytt_of1j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH2j/datacards/hww2l2v_13TeV_of2j/mllVSmth/shapes/*.root                    2016/hww2l2v_13TeV_of2j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/shapes/*.root                  2016/hww2l2v_13TeV_top_of2j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH2j/datacards/hww2l2v_13TeV_dytt_of2j/events/shapes/*.root                 2016/hww2l2v_13TeV_dytt_of2j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VBF/datacards/hww2l2v_13TeV_of2j_vbf_lowmjj/mllfine/shapes/*.root                2016/hww2l2v_13TeV_of2j_vbf_lowmjj/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/shapes/*.root                2016/hww2l2v_13TeV_top_of2j_vbf/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VBF/datacards/hww2l2v_13TeV_dytt_of2j_vbf/events/shapes/*.root               2016/hww2l2v_13TeV_dytt_of2j_vbf/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VH2j/datacards/hww2l2v_13TeV_of2j_vh2j/mll/shapes/*.root                     2016/hww2l2v_13TeV_of2j_vh2j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/shapes/*.root              2016/hww2l2v_13TeV_top_of2j_vh2j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VH2j/datacards/hww2l2v_13TeV_dytt_of2j_vh2j/events/shapes/*.root             2016/hww2l2v_13TeV_dytt_of2j_vh2j/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WH3l/datacards/wh3l_13TeV_ossf/drllmin3l/shapes/*.root                       2016/wh3l_13TeV_ossf/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WH3l/datacards/wh3l_13TeV_sssf/drllmin3l_sssf/shapes/*.root                       2016/wh3l_13TeV_sssf/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WH3l/datacards/wh3l_wz_13TeV/events/shapes/*.root                            2016/wh3l_wz_13TeV/shapes/
      cp /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WH3l/datacards/wh3l_zg_13TeV/events/shapes/*.root                            2016/wh3l_zg_13TeV/shapes/
    
    
      in
      ~/public/xLatinos/ICHEP2016_25Nov2016/
 
 
Prepare fakes: 
 
    cp -r eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb_v2__wwSel    eos/user/n/ntrevisa/HWW2015/ICHEPv2/
    
    
    
     /cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_v2_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb_v2/
     /cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb_v2/
     /cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb_v2/
     /cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb_v2/
     /cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb_v2/
     /cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb_v2/
     /cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb_v2/
     /cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb_v2/
 
    
    
    cp -r   eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/21Jun2016_v2_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb_v2__wwSel                  eos/user/n/ntrevisa/HWW2015/ICHEPv2/21Jun2016_v2_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb__wwSel/ 
    cp -r   eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/05Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb_v2__wwSel                     eos/user/k/kfjack/HWW2015/05Jul2016_Run2016B_PromptReco_v2/l2loose__hadd__EpTCorr__fakeW12fb__wwSel/ 
    cp -r   eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016B_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb_v2__wwSel                     eos/user/k/kfjack/HWW2015/08Jul2016_Run2016B_PromptReco_v2/l2loose__hadd__EpTCorr__fakeW12fb__wwSel/ 
    cp -r   eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/08Jul2016_Run2016C_PromptReco/l2loose__hadd__EpTCorr__fakeW12fb_v2__wwSel                     eos/user/k/kfjack/HWW2015/08Jul2016_Run2016C_PromptReco_v2/l2loose__hadd__EpTCorr__fakeW12fb__wwSel/ 
    cp -r   eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/11Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb_v2__wwSel/        eos/user/k/kfjack/HWW2015//11Jul2016_Run2016C_PromptReco_v2/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__wwSel/
    cp -r   eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016C_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb_v2__wwSel/        eos/user/k/kfjack/HWW2015//15Jul2016_Run2016C_PromptReco_v2/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__wwSel/
    cp -r   eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb_v2__wwSel/        eos/user/n/ntrevisa/HWW2015/ICHEPv2/15Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__wwSel/
    cp -r   eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/26Jul2016_Run2016D_PromptReco/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb_v2__wwSel/        eos/user/k/kfjack/HWW2015//26Jul2016_Run2016D_PromptReco_v2/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__wwSel/

      
      
    eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/
    cp -r eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/05Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__wwSel/         eos/user/r/rodrigo/HWW2016/05Jul2016_Run2016B_PromptReco_repro/
    cp -r eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/08Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__wwSel/         eos/user/r/rodrigo/HWW2016/08Jul2016_Run2016B_PromptReco_repro/
    cp -r eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/11Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__wwSel/         eos/user/r/rodrigo/HWW2016/11Jul2016_Run2016C_PromptReco_repro/
    cp -r eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/15Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__wwSel/         eos/user/r/rodrigo/HWW2016/15Jul2016_Run2016D_PromptReco_repro/
    cp -r eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/26Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__wwSel/         eos/user/r/rodrigo/HWW2016/26Jul2016_Run2016D_PromptReco_repro/
    cp -r eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/08Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__wwSel/         eos/user/r/rodrigo/HWW2016/08Jul2016_Run2016C_PromptReco_repro/
    cp -r eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/15Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__wwSel/         eos/user/r/rodrigo/HWW2016/15Jul2016_Run2016C_PromptReco_repro/
    cp -r eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/21Jun2016_v2_Run2016B_PromptReco_repro/l2loose__hadd__EpTCorr__fakeW12fb__wwSel/      eos/user/r/rodrigo/HWW2016/21Jun2016_v2_Run2016B_PromptReco_repro/

    cp -r eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/05Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__wwSel/         eos/user/r/rodrigo/HWW2016/05Jul2016_Run2016B_PromptReco_repro/
    cp -r eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/08Jul2016_Run2016B_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__wwSel/         eos/user/r/rodrigo/HWW2016/08Jul2016_Run2016B_PromptReco_repro/
    cp -r eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/11Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__wwSel/         eos/user/r/rodrigo/HWW2016/11Jul2016_Run2016C_PromptReco_repro/
    cp -r eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/15Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__wwSel/         eos/user/r/rodrigo/HWW2016/15Jul2016_Run2016D_PromptReco_repro/
    cp -r eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/26Jul2016_Run2016D_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__wwSel/         eos/user/r/rodrigo/HWW2016/26Jul2016_Run2016D_PromptReco_repro/
    cp -r eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/08Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__wwSel/         eos/user/r/rodrigo/HWW2016/08Jul2016_Run2016C_PromptReco_repro/
    cp -r eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/15Jul2016_Run2016C_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__wwSel/         eos/user/r/rodrigo/HWW2016/15Jul2016_Run2016C_PromptReco_repro/
    cp -r eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/21Jun2016_v2_Run2016B_PromptReco_repro/l2loose__hadd__ICHEPjson__EpTCorr__fakeW12fb__wwSel/      eos/user/r/rodrigo/HWW2016/21Jun2016_v2_Run2016B_PromptReco_repro/

      



      