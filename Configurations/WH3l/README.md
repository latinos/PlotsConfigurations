WH3l analysis
==============

Needs to be updated.

Some useful aliases:
    
    alias eosusermount='/afs/cern.ch/project/eos/installation/0.3.84-aquamarine.user/bin/eos.select -b fuse mount'
    alias eosuserumount='/afs/cern.ch/project/eos/installation/0.3.84-aquamarine.user/bin/eos.select -b fuse umount'

    cd /tmp/<your nice login>
    eosusermount eos

Running the confiuguration.

   	mkShapes.py --pycfg=configuration.py --inputDir=/tmp/arun/eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__vh3lSel__l3kin/

        mkDatacards.py --pycfg=configuration.py --inputFile=rootFiles_WH_Zg/plots_WH3l.root

   	mkPlot.py --pycfg=configuration.py --inputFile=rootFiles_WH_WZ_v1/plots_WH3l.root

1. Before running it, have a careful look at configuration.py for all the names of files etc.
2. Check that every process is defined in samples.py, plot.py and structure.py.
3. cuts.py is for defining phase spaces
4. Don't forget to blind the analysis if running for signal region ;)


Run combine:
Follow the recipe here to get the latest combine package:
Right now the latest one to run is in CMSSW_7_4_7.

https://twiki.cern.ch/twiki/bin/view/CMS/SWGuideHiggsAnalysisCombinedLimit#For_end_users_that_don_t_need_to

Twiki to get info for Impact Tool
https://twiki.cern.ch/twiki/bin/viewauth/CMS/HiggsWG/SWGuideNonStandardCombineUses#Nuisance_parameter_impacts
   
1. To Run the limits:
 
    combine -M Asymptotic datacard.txt
    combine -M Asymptotic -t -1 datacard.txt
    
2. To Run for significance and p-value

    combine -M ProfileLikelihood --significance datacard.txt -t -1 --expectSignal=1

3. To Run the Likelihood Scan for getting the plot for signal strength

combine -M MultiDimFit datacard_WH3l_4July_divided.txt --algo=grid --point 100 --setPhysicsModelParameterRanges r=-10,10 -t -1 --expectSignal=1 -n "LHScan" -m 125




For pruning of datacard:

cd /afs/cern.ch/work/a/arun/Latinos/CMSSW_7_6_3/src/ModificationDatacards/examples
./doPruneNuisanceVHWW3l.sh
    



Combine datacards:


Auto tests:

    cd /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH
    cmsenv
    cd ..
    sh ggH/scripts/doGGH_blind.sh
    cd -
    
    cd ..
    sh ggH/scripts/doGGH.sh
    cd -

    cd ..
    sh ggH/scripts/doGGH_alternative.sh
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

    cd ~/Framework/CMSSW_7_1_15/src/
    cmsenv
    cd -
    
    
    
    combineCards.py   empm1j13=ggH/datacards/hww2l2v_13TeV_em_pm_1j/mllVSmth/datacard.txt \
                      emmp1j13=ggH/datacards/hww2l2v_13TeV_em_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                      mepm1j13=ggH/datacards/hww2l2v_13TeV_me_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                      memp1j13=ggH/datacards/hww2l2v_13TeV_me_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                      empm0j13=ggH/datacards/hww2l2v_13TeV_em_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                      emmp0j13=ggH/datacards/hww2l2v_13TeV_em_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                      mepm0j13=ggH/datacards/hww2l2v_13TeV_me_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                      memp0j13=ggH/datacards/hww2l2v_13TeV_me_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                      of0j13Top=ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                      of1j13Top=ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                      of0j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                      of1j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                      >   Moriond2016.txt.pruned.txt
     
     
    combineCards.py   em1j13=ggH/datacards/hww2l2v_13TeV_em_1j/mllVSmth/datacard.txt.pruned.txt \
                      me1j13=ggH/datacards/hww2l2v_13TeV_me_1j/mllVSmth/datacard.txt.pruned.txt \
                      em0j13=ggH/datacards/hww2l2v_13TeV_em_0j/mllVSmth/datacard.txt.pruned.txt \
                      me0j13=ggH/datacards/hww2l2v_13TeV_me_0j/mllVSmth/datacard.txt.pruned.txt \
                      of0j13Top=ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                      of1j13Top=ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                      of0j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                      of1j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                      >   Moriond2016.v1.txt.pruned.txt

    combineCards.py   of1j13=ggH/datacards/hww2l2v_13TeV_of1j/mllVSmth/datacard.txt.pruned.txt \
                      of0j13=ggH/datacards/hww2l2v_13TeV_of0j/mllVSmth/datacard.txt.pruned.txt \
                      of0j13Top=ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                      of1j13Top=ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                      of0j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                      of1j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                      >   Moriond2016.v0.txt.pruned.txt
                      
                      
         
         
    combine -M MaxLikelihoodFit -t -1 --expectSignal 1        Moriond2016.txt       &> result.txt
    combine -M MaxLikelihoodFit -t -1 --expectSignal 1        Moriond2016.v0.txt    &> result.v0.txt
    combine -M MaxLikelihoodFit -t -1 --expectSignal 1        Moriond2016.v1.txt    &> result.v1.txt
    
    combine -M ProfileLikelihood --significance Moriond2016.txt     -t -1 --expectSignal=1     &> result.sig.txt
    combine -M ProfileLikelihood --significance Moriond2016.v0.txt  -t -1 --expectSignal=1     &> result.sig.v0.txt
    combine -M ProfileLikelihood --significance Moriond2016.v1.txt  -t -1 --expectSignal=1     &> result.sig.v1.txt

    
    
    
    combine -M MaxLikelihoodFit -t -1 --expectSignal 1        Moriond2016.txt.pruned.txt       &> result.txt.pruned.txt
    combine -M MaxLikelihoodFit -t -1 --expectSignal 1        Moriond2016.v0.txt.pruned.txt    &> result.v0.txt.pruned.txt
    combine -M MaxLikelihoodFit -t -1 --expectSignal 1        Moriond2016.v1.txt.pruned.txt    &> result.v1.txt.pruned.txt
    
    combine -M ProfileLikelihood --significance Moriond2016.txt.pruned.txt     -t -1 --expectSignal=1     &> result.sig.txt.pruned.txt
    combine -M ProfileLikelihood --significance Moriond2016.v0.txt.pruned.txt  -t -1 --expectSignal=1     &> result.sig.v0.txt.pruned.txt
    combine -M ProfileLikelihood --significance Moriond2016.v1.txt.pruned.txt  -t -1 --expectSignal=1     &> result.sig.v1.txt.pruned.txt

    
    
    
    
    text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  --PO verbose --PO 'map=.*/ggH:1' --PO 'map=.*/ggWW_Int:r_ggWW_Int_r[-1,0,-2]' Moriond2016.txt -o Moriond2016.root
    text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  --PO verbose --PO 'map=.*/ggWW_Int:-1' Moriond2016.txt -o Moriond2016.root
    text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  --PO verbose --PO 'map=.*/ggH:r[1,0,3]' --PO 'map=.*/ggWW_Int:r_ggWW_Int_r[-1,-0.99,-1.01]' Moriond2016.txt -o Moriond2016.root
    text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel  --PO verbose \
                       --PO 'map=.*/ggH:r[1,0,3]' \
                       --PO 'map=.*/qqH:r[1,0,3]'  \
                       --PO 'map=.*/WH:r[1,0,3]'  \
                       --PO 'map=.*/ZH:r[1,0,3]'  \
                       --PO 'map=.*/ggZH:r[1,0,3]'  \
                       --PO 'map=.*/ggWW_Int:r_ggWW_Int_r[-1,-1.01,-0.99]' \
                       Moriond2016.txt -o Moriond2016.root

                       
                       
    combine -M MaxLikelihoodFit -t -1 --expectSignal 1        Moriond2016.root

    
    postFit toys:     -t -1 (--> Asimov)
    combine -M MaxLikelihoodFit -t -1 --expectSignal 1      Moriond2016.txt
    combine -M MaxLikelihoodFit -t -1 --toysNoSystematics    --expectSignal 1      Moriond2016.txt

    preFit toys:     -t -1  --toysFreq
    combine -M MaxLikelihoodFit -t -1 --toysFreq --expectSignal 1      Moriond2016.txt
    combine -M MaxLikelihoodFit -t -1 --toysNoSystematics --expectSignal 1      Moriond2016.txt
    
    
    combineCards.py   of0j13=ggHMoriond/datacards/hww2l2v_13TeV_of0j/mllVSmth/datacard.txt \
                      of1j13=ggHMoriond/datacards/hww2l2v_13TeV_of1j/mllVSmth/datacard.txt \
                      >   Moriond2016.txt
    
    combine -M MaxLikelihoodFit -t -1 --expectSignal 1        Moriond2016.txt
        
        
        
        
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
    
    

Data:

    /eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight/
    /eos/user/j/jlauwers/HWW2015/22Jan_Run2015C_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/
    /eos/user/j/jlauwers/HWW2015/22Jan_Run2015D_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/


Backup:

    mkShapes.py      --pycfg=configuration.py  --inputDir=/media/data/amassiro/LatinoTrees/Moriond/MCl2loose__hadd__bSFL2pTEff__l2tight/
    mkShapes.py      --pycfg=configuration.py  --inputDir=/tmp/amassiro/eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight/
    mkShapes.py      --pycfg=configuration.py  --inputDir=/tmp/amassiro/eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/
    mkShapes.py      --pycfg=configuration.py  --inputDir=eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/
    mkShapes.py      --doThreads=True   --pycfg=configuration.py  --inputDir=eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__bPogSF/
    mkShapes.py      --doThreads=True   --pycfg=configuration.py  --inputDir=eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/
    mkShapes.py      --doThreads=True   --pycfg=configuration.py  --inputDir=eos/user/x/xjanssen/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/
    

    mkShapes.py      --doThreads=True   --pycfg=configuration.py  --inputDir=eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight/
    
 
Plots:

    TH2F histo("histo","", 1000,20,100,   2000,0,1.1);
    latino->Draw("effTrigW:std_vector_lepton_pt[0] >> histo","std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[0]<100 && std_vector_lepton_pt[1]>10 && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) && abs(std_vector_lepton_flavour[0]) == 11 ", "colz");
    latino->Draw("effTrigW:std_vector_lepton_pt[0] >> histo","std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[0]<100 && std_vector_lepton_pt[1]>10 && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) && abs(std_vector_lepton_flavour[0]) == 13 ", "colz");
    
    TH2F histo("histo","", 1000,10,100,   2000,0,1.1);
    latino->Draw("effTrigW:std_vector_lepton_pt[1] >> histo","std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]<100 && std_vector_lepton_pt[1]>10 && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) && abs(std_vector_lepton_flavour[1]) == 11 ", "colz");
    latino->Draw("effTrigW:std_vector_lepton_pt[1] >> histo","std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]<100 && std_vector_lepton_pt[1]>10 && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) && abs(std_vector_lepton_flavour[1]) == 13 ", "colz");
    
    histo.GetXaxis()->SetTitle("p_{T} 1st [GeV]")
    histo.GetYaxis()->SetTitle("Trigger Efficiency")
    gPad->SetGrid();
    histo.GetXaxis()->SetTitle("p_{T} 2nd [GeV]")
    
    
    latino->Draw("effTrigW","std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]<100 && std_vector_lepton_pt[1]>10 && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13)");
    
    latino->Draw("bPogSF>>h(100,0.8,1.5)","njet==1 && std_vector_jet_pt[0]>120 &&  std_vector_jet_pt[0]<320 && abs(std_vector_jet_HadronFlavour[0])==5 && std_vector_jet_cmvav2[0]>-0.715 && abs(std_vector_jet_eta[0])<2.4 ")
    latino->Draw("bPogSF>>h(100,0.8,1.5)","std_vector_jet_pt[1]<20 && std_vector_jet_pt[0]>120 &&  std_vector_jet_pt[0]<320 && abs(std_vector_jet_HadronFlavour[0])==5 && std_vector_jet_cmvav2[0]>-0.715 && abs(std_vector_jet_eta[0])<2.4 ")
    latino->Draw("bPogSF","std_vector_jet_pt[2]<20 ")
    latino->Draw("bPogSFUp","std_vector_jet_pt[2]<20 ")
    latino->Draw("bPogSFDown","std_vector_jet_pt[2]<20 ")
    
    
    
    
    r99t eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCWgStarsel__hadd__EpTCorr/latino_WZTo3LNu.root    \
    eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCWgStarsel__hadd__EpTCorr/latino_WgStarLNuMuMu.root
    
    
    latinoWZ  = (TTree*) _file0->Get("latino");
    latinoWgS = (TTree*) _file1->Get("latino");
    
    latinoWZ -> Draw("Gen_ZGstar_mass >> hWZ(100,0,10)", "Gen_ZGstar_mu1_pt > 10 &&  Gen_ZGstar_mu2_pt > 10 &&  (abs(std_vector_lepton_flavour[0]) == 13 && abs(std_vector_lepton_flavour[1]) == 13 && abs(std_vector_lepton_flavour[2]) == 13) * puW*baseW*GEN_weight_SM/abs(GEN_weight_SM)");
    
    latinoWgS -> Draw("Gen_ZGstar_mass >> hWgS(100,0,10)", "Gen_ZGstar_mu1_pt > 10 &&  Gen_ZGstar_mu2_pt > 10 &&  (abs(std_vector_lepton_flavour[0]) == 13 && abs(std_vector_lepton_flavour[1]) == 13 && abs(std_vector_lepton_flavour[2]) == 13) * puW*GEN_weight_SM/abs(GEN_weight_SM)");
    

    
    
    latinoWZ -> Draw("Gen_ZGstar_mass >> hWZ(100,0,10)", "Gen_ZGstar_mu1_pt > 10 &&  Gen_ZGstar_mu2_pt > 10 &&  (abs(std_vector_lepton_flavour[0]) == 11 && abs(std_vector_lepton_flavour[1]) == 13 && abs(std_vector_lepton_flavour[2]) == 13) * puW*baseW*GEN_weight_SM/abs(GEN_weight_SM)");
    
    latinoWgS -> Draw("Gen_ZGstar_mass >> hWgS(100,0,10)", "Gen_ZGstar_mu1_pt > 10 &&  Gen_ZGstar_mu2_pt > 10 &&  (abs(std_vector_lepton_flavour[0]) == 11 && abs(std_vector_lepton_flavour[1]) == 13 && abs(std_vector_lepton_flavour[2]) == 13) * puW*GEN_weight_SM/abs(GEN_weight_SM)");
    
    hWZ -> SetLineColor(kBlue);
    hWgS-> SetLineColor(kRed);
    
    hWgS->Draw("histo");
    hWZ->Draw("histo same");
    
    
     
    
    latinoWZ -> Draw("Gen_ZGstar_mass >> hWZ(100,0,100)", "Gen_ZGstar_mu1_pt > 10 &&  Gen_ZGstar_mu2_pt > 10 &&  (abs(std_vector_lepton_flavour[0]) == 11 && abs(std_vector_lepton_flavour[1]) == 13 && abs(std_vector_lepton_flavour[2]) == 13) * puW*baseW*GEN_weight_SM/abs(GEN_weight_SM)");
    
    latinoWgS -> Draw("Gen_ZGstar_mass >> hWgS(100,0,100)", "Gen_ZGstar_mu1_pt > 10 &&  Gen_ZGstar_mu2_pt > 10 &&  (abs(std_vector_lepton_flavour[0]) == 11 && abs(std_vector_lepton_flavour[1]) == 13 && abs(std_vector_lepton_flavour[2]) == 13) * puW*GEN_weight_SM/abs(GEN_weight_SM)");
    
    hWZ -> SetLineColor(kBlue);
    hWgS-> SetLineColor(kRed);
    
    hWgS->Draw("histo");
    hWZ->Draw("histo same");

    
    
    
    
    
    
    latinoWgS -> Draw("Gen_ZGstar_mass", "")
    
    
    
    latinoWgS -> Draw("sqrt((Gen_ZGstar_mu1_pt * cos(Gen_ZGstar_mu1_phi) + Gen_ZGstar_mu2_pt * cos(Gen_ZGstar_mu2_phi)) *(Gen_ZGstar_mu1_pt * cos(Gen_ZGstar_mu1_phi) + Gen_ZGstar_mu2_pt * cos(Gen_ZGstar_mu2_phi))    +(Gen_ZGstar_mu1_pt * sin(Gen_ZGstar_mu1_phi) + Gen_ZGstar_mu2_pt * sin(Gen_ZGstar_mu2_phi))  *(Gen_ZGstar_mu1_pt * sin(Gen_ZGstar_mu1_phi) + Gen_ZGstar_mu2_pt * sin(Gen_ZGstar_mu2_phi)))")

    
    
    


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
    



 
 
