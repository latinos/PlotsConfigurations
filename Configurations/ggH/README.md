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
        
    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_ggH.root
    
    mkDatacards.py   --pycfg=configuration.py  --inputFile=rootFile/plots_ggH.root

    

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
    
    
    cd ..
    sh ggH/scripts/doGGH.sh
    cd -

    
    
    cd ..
    sh ggH/scripts/doBigCombination_blind.sh
    cd -
    
    cat ../result.Significance.ggHcombined.v1.txt.pruned.txt
    cat ../result.MaxLikelihoodFit.ggHcombined.v1.txt.pruned.txt
    
    cat ../result.Significance.superCombination.v1.txt.pruned.txt    

    cat ../result.MaxLikelihoodFit.superCombination.2015.txt.pruned.txt
    cat ../result.Significance.superCombination.2015.txt.pruned.txt
    
    
    cd ..
    sh ggH/scripts/doGGH_doMultisignal.sh
    cd -
    
    
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
      
    mkShapes.py      --pycfg=configuration.py  --doThreads=True   --inputDir=eos/user/p/piedra/HWW2016/07Jun2016_spring16_mAODv2/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/
     

    mkShapes.py      --pycfg=configuration.py  --doThreads=True   --inputDir=eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWWTightMu/07Jun2016_spring16_mAODv2_4p0fbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/
         
     
      
      
      
      

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
    
    
    
    mkdir  hww2l2v_13TeV_dytt_of0j/ 
    mkdir  hww2l2v_13TeV_dytt_of1j/ 
    mkdir  hww2l2v_13TeV_top_of0j/    
    mkdir  hww2l2v_13TeV_top_of1j/ 
    mkdir  hww2l2v_13TeV_em_mp_0j/   
    mkdir  hww2l2v_13TeV_me_mp_0j/  
    mkdir  hww2l2v_13TeV_em_pm_0j/ 
    mkdir  hww2l2v_13TeV_me_pm_0j/ 
    mkdir  hww2l2v_13TeV_em_pm_1j/ 
    mkdir  hww2l2v_13TeV_me_pm_1j/ 
    mkdir  hww2l2v_13TeV_em_mp_1j/ 
    mkdir  hww2l2v_13TeV_me_mp_1j/  

    mkdir  hww2l2v_13TeV_dytt_of2j/   
    mkdir  hww2l2v_13TeV_top_of2j/   
    mkdir  hww2l2v_13TeV_of2j/   

    mkdir  hww2l2v_13TeV_of2j_vbf_lowmjj/
    mkdir  hww2l2v_13TeV_top_of2j_vbf/
    mkdir  hww2l2v_13TeV_dytt_of2j_vbf/

    mkdir  hww2l2v_13TeV_of2j_vh2j/
    mkdir  hww2l2v_13TeV_top_of2j_vh2j/
    mkdir  hww2l2v_13TeV_dytt_of2j_vh2j/
    

    
    mkdir  hww2l2v_13TeV_dytt_of0j/shapes/ 
    mkdir  hww2l2v_13TeV_dytt_of1j/shapes/ 
    mkdir  hww2l2v_13TeV_top_of0j/shapes/    
    mkdir  hww2l2v_13TeV_top_of1j/shapes/ 
    mkdir  hww2l2v_13TeV_em_mp_0j/shapes/   
    mkdir  hww2l2v_13TeV_me_mp_0j/shapes/  
    mkdir  hww2l2v_13TeV_em_pm_0j/shapes/ 
    mkdir  hww2l2v_13TeV_me_pm_0j/shapes/ 
    mkdir  hww2l2v_13TeV_em_pm_1j/shapes/ 
    mkdir  hww2l2v_13TeV_me_pm_1j/shapes/ 
    mkdir  hww2l2v_13TeV_em_mp_1j/shapes/ 
    mkdir  hww2l2v_13TeV_me_mp_1j/shapes/  

    mkdir  hww2l2v_13TeV_dytt_of2j/shapes/   
    mkdir  hww2l2v_13TeV_top_of2j/shapes/   
    mkdir  hww2l2v_13TeV_of2j/shapes/   

    mkdir  hww2l2v_13TeV_of2j_vbf_lowmjj/shapes/
    mkdir  hww2l2v_13TeV_top_of2j_vbf/shapes/
    mkdir  hww2l2v_13TeV_dytt_of2j_vbf/shapes/

    mkdir  hww2l2v_13TeV_of2j_vh2j/shapes/
    mkdir  hww2l2v_13TeV_top_of2j_vh2j/shapes/
    mkdir  hww2l2v_13TeV_dytt_of2j_vh2j/shapes/

    
    
    

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
    
 
 
 
 