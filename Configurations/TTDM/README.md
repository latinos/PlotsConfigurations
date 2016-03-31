ggH analysis
==============

Common tools for analysis:

    plot distributions
    limit and significance results


Some useful aliases:
    
    alias eosusermount='/afs/cern.ch/project/eos/installation/0.3.84-aquamarine.user/bin/eos.select -b fuse mount'
    alias eosuserumount='/afs/cern.ch/project/eos/installation/0.3.84-aquamarine.user/bin/eos.select -b fuse umount'


Steps to get datacards and plots:

      source /afs/cern.ch/project/eos/installation/user/etc/setup.sh

      eosmount eosuser

      mkShapes.py      --pycfg=configuration.py  --inputDir=eosuser/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel 
    
      mkDatacards.py   --pycfg=configuration.py  --inputFile=rootFile/plots_WW.root

      mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_WW.root
    

Or, if you want to exploit the lxplus queues:

    bsub -q 1nd script.sh

    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_WW.root


Setup combine:
      
      cd (your_path)/CMSSW_7_1_5/src/HiggsAnalysis/CombinedLimit

      cmsenv

      cd (your path)/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/WW/


Extract signal strenght from datacard using combine:

	combine -M MultiDimFit datacards/ww_BVeto0j_em/events/datacard.txt --algo=grid --points 100 --setPhysicsModelParameterRanges r=0.01,2 -t -1 --expectSignal=1 -n "LHScan" -m 125

	combine -M MultiDimFit datacards/ww_BVeto1j_em/events/datacard.txt --algo=grid --points 100 --setPhysicsModelParameterRanges r=0.01,2 -t -1 --expectSignal=1 -n "LHScan" -m 125




    
Run combine:

    git clone https://github.com/cms-analysis/HiggsAnalysis-CombinedLimit.git HiggsAnalysis/CombinedLimit
    cd HiggsAnalysis/CombinedLimit
    #   ---->  git checkout 74x-root6  //---- don't do it anymore

    cd ~/Framework/CMSSW_7_1_15/src/
    cmsenv
    cd -
    
    combine -M MaxLikelihoodFit -t -1 --expectSignal 1  -S 0  datacard.txt 
    combine -M MaxLikelihoodFit -t -1 --expectSignal 1        datacard.txt 

    combine -M Asymptotic datacard.txt
    combine -M Asymptotic -t -1 datacard.txt
    
    
    combine -M MultiDimFit datacard.txt  --algo=grid --points 100  --setPhysicsModelParameterRanges r=0.01,10  -m 125   -t -1 --expectSignal=1 --saveToys
    
    combine -M ProfileLikelihood --significance datacard.txt -t -1 --expectSignal=1

    Significance: 1.63231

Combine datacards:

    combineCards.py   of0j13=ggHMoriond/datacards/hww2l2v_13TeV_of0j/mllVSmth/datacard.txt \
                      of1j13=ggHMoriond/datacards/hww2l2v_13TeV_of1j/mllVSmth/datacard.txt \
                      of0j13Top=ggHMoriondTop/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt \
                      of1j13Top=ggHMoriondTop/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt \
                      >   Moriond2016.txt

                      
    combineCards.py   of0j13=ggH/datacards/hww2l2v_13TeV_of0j/mllVSmth/datacard.txt \
                      of1j13=ggH/datacards/hww2l2v_13TeV_of1j/mllVSmth/datacard.txt \
                      of0j13Top=ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt \
                      of1j13Top=ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt \
                      >   Moriond2016.txt

                      
    combineCards.py   of0j13=ggH/datacards/hww2l2v_13TeV_of0j/mllVSmth/datacard.txt \
                      of1j13=ggH/datacards/hww2l2v_13TeV_of1j/mllVSmth/datacard.txt \
                      of0j13Top=ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt \
                      of1j13Top=ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt \
                      of0j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt \
                      of1j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt \
                      >   Moriond2016.txt


                      
    combineCards.py   of0j13=ggHMoriond/datacards/hww2l2v_13TeV_of0j/mllVSmth/datacard.txt \
                      of1j13=ggHMoriond/datacards/hww2l2v_13TeV_of1j/mllVSmth/datacard.txt \
                      of0j13Top=ggHMoriondTop/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt \
                      of1j13Top=ggHMoriondTop/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt \
                      of0j13DYtt=ggHMoriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt \
                      of1j13DYtt=ggHMoriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt \
                      >   Moriond2016.txt
         
         
    Upgrade:
    
    combineCards.py   empm1j13=ggH/datacards/hww2l2v_13TeV_em_pm__of1j/mllVSmth/datacard.txt \
                      emmp1j13=ggH/datacards/hww2l2v_13TeV_em_mp__of1j/mllVSmth/datacard.txt \
                      mepm1j13=ggH/datacards/hww2l2v_13TeV_me_pm__of1j/mllVSmth/datacard.txt \
                      memp1j13=ggH/datacards/hww2l2v_13TeV_me_mp__of1j/mllVSmth/datacard.txt \
                      empm0j13=ggH/datacards/hww2l2v_13TeV_em_pm_0j/mllVSmth/datacard.txt \
                      emmp0j13=ggH/datacards/hww2l2v_13TeV_em_mp_0j/mllVSmth/datacard.txt \
                      mepm0j13=ggH/datacards/hww2l2v_13TeV_me_pm_0j/mllVSmth/datacard.txt \
                      memp0j13=ggH/datacards/hww2l2v_13TeV_me_mp_0j/mllVSmth/datacard.txt \
                      of0j13Top=ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt \
                      of1j13Top=ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt \
                      of0j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt \
                      of1j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt \
                      >   Moriond2016.txt
     
     



         
         
    combine -M MaxLikelihoodFit -t -1 --expectSignal 1        Moriond2016.txt
    
    combine -M ProfileLikelihood --significance Moriond2016.txt -t -1 --expectSignal=1

    
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
    

    
    cat ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt  | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1" &> ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.test.txt
    mv ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.test.txt ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt
    
    cat ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt  | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1" &> ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.test.txt
    mv ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.test.txt ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt
    
    cat ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt   | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1"  &> ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt
    mv ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt
    
    cat ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt   | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1"  &> ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt
    mv ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt
 
    cat ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt   | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1"  &> ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt
    mv ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt
    
    cat ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt   | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1"  &> ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt
    mv ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt

    
    
    
    
    cat ggHMoriondTop/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt  | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1" &> ggHMoriondTop/datacards/hww2l2v_13TeV_top_of0j/events/datacard.test.txt
    mv ggHMoriondTop/datacards/hww2l2v_13TeV_top_of0j/events/datacard.test.txt ggHMoriondTop/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt
    
    cat ggHMoriondTop/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt  | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1" &> ggHMoriondTop/datacards/hww2l2v_13TeV_top_of1j/events/datacard.test.txt
    mv ggHMoriondTop/datacards/hww2l2v_13TeV_top_of1j/events/datacard.test.txt ggHMoriondTop/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt
    
    cat ggHMoriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt   | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1"  &> ggHMoriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt
    mv ggHMoriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt ggHMoriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt
    
    cat ggHMoriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt   | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1"  &> ggHMoriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt
    mv ggHMoriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt ggHMoriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt
 
    cat ggHMoriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt   | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1"  &> ggHMoriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt
    mv ggHMoriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt ggHMoriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt
    
    cat ggHMoriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt   | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1"  &> ggHMoriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt
    mv ggHMoriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt ggHMoriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt
 
    
    
    
    
    
    
    
    
    
    
    cat ggHMoriondTop/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt  | grep -v "ggWW_Int_ibin_" | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1" &> ggHMoriondTop/datacards/hww2l2v_13TeV_top_of0j/events/datacard.test.txt
    mv ggHMoriondTop/datacards/hww2l2v_13TeV_top_of0j/events/datacard.test.txt ggHMoriondTop/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt
    
    cat ggHMoriondTop/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt  | grep -v "ggWW_Int_ibin_" | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1" &> ggHMoriondTop/datacards/hww2l2v_13TeV_top_of1j/events/datacard.test.txt
    mv ggHMoriondTop/datacards/hww2l2v_13TeV_top_of1j/events/datacard.test.txt ggHMoriondTop/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt
    
    cat ggHMoriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt   | grep -v "ggWW_Int_ibin_" | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1"  &> ggHMoriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt
    mv ggHMoriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt ggHMoriond/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt
    
    cat ggHMoriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt   | grep -v "ggWW_Int_ibin_" | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1"  &> ggHMoriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt
    mv ggHMoriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt ggHMoriond/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt
    
    
    
    
    
    cat ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt  | grep -v "CMS_fakehww" | grep -v "fakestathww" | grep -v "ggWW_Int_ibin_" | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1"  &> ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.test.txt
    mv ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.test.txt ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt
    
    cat ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt  | grep -v "CMS_fakehww" | grep -v "fakestathww" | grep -v "ggWW_Int_ibin_" | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1"  &> ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.test.txt
    mv ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.test.txt ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt
    
    cat ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt  | grep -v "CMS_fakehww" | grep -v "fakestathww" | grep -v "ggWW_Int_ibin_" | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1"  &> ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt
    mv ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt
    
    cat ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt  | grep -v "CMS_fakehww" | grep -v "fakestathww" | grep -v "ggWW_Int_ibin_" | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1"  &> ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt
    mv ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt
    
    cat ggH/datacards/hww2l2v_13TeV_of0j/events/datacard.txt  | grep -v "CMS_fakehww" | grep -v "fakestathww" | grep -v "ggWW_Int_ibin_" | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1"  &> ggH/datacards/hww2l2v_13TeV_of0j/events/datacard.test.txt
    mv ggH/datacards/hww2l2v_13TeV_of0j/events/datacard.test.txt ggH/datacards/hww2l2v_13TeV_of0j/events/datacard.txt
    
    cat ggH/datacards/hww2l2v_13TeV_of1j/events/datacard.txt  | grep -v "CMS_fakehww" | grep -v "fakestathww" | grep -v "ggWW_Int_ibin_" | grep -v "_DY_ibin_1" | grep -v "_VVV_ibin_1"  &> ggH/datacards/hww2l2v_13TeV_of1j/events/datacard.test.txt
    mv ggH/datacards/hww2l2v_13TeV_of1j/events/datacard.test.txt ggH/datacards/hww2l2v_13TeV_of1j/events/datacard.txt
    
    
    
    
    
    cat datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt  | grep -v "shape               -"  &> datacards/hww2l2v_13TeV_top_of0j/events/datacard.test.txt
    mv datacards/hww2l2v_13TeV_top_of0j/events/datacard.test.txt datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt
    
    cat datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt  | grep -v "shape               -"  &> datacards/hww2l2v_13TeV_top_of1j/events/datacard.test.txt
    mv datacards/hww2l2v_13TeV_top_of1j/events/datacard.test.txt datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt
    
    cat datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt  | grep -v "shape               -"  &> datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt
    mv datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.test.txt datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt
    
    cat datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt  | grep -v "shape               -"  &> datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt
    mv datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.test.txt datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt
    
    cat datacards/hww2l2v_13TeV_of0j/mllVSmth/datacard.txt  | grep -v "shape               -"  &> datacards/hww2l2v_13TeV_of0j/mllVSmth/datacard.test.txt
    mv datacards/hww2l2v_13TeV_of0j/mllVSmth/datacard.test.txt datacards/hww2l2v_13TeV_of0j/mllVSmth/datacard.txt
    
    cat datacards/hww2l2v_13TeV_of1j/mllVSmth/datacard.txt  | grep -v "shape               -"  &> datacards/hww2l2v_13TeV_of1j/mllVSmth/datacard.test.txt
    mv datacards/hww2l2v_13TeV_of1j/mllVSmth/datacard.test.txt datacards/hww2l2v_13TeV_of1j/mllVSmth/datacard.txt
    