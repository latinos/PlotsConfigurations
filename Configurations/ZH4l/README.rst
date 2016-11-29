#############
ZH4l analysis
#############

**Keep this updated!!**

The configurations are based on the **latinos framework** `[Twiki: LatinosTwiki <https://twiki.cern.ch/twiki/bin/view/CMS/LatinosTwiki>`_ 

Before starting the following detailed stuff for ZH4l analysis, please go through twiki above for some basic idea.

Running the confiuguration
==========================

Several packages needed to drive out the plots, significance, p-value, and signal strength.

Prepare datacard and stackplot
------------------------------

#. ``configuration.py`` for all the names of configuration files and etc.

#. ``samples.py`` and ``structure.py`` gives definition to every processes.

#.  ``cuts.py`` describes the phase spaces.

#.  ``variables.py`` decides which variables to be checked and ``plots.py`` handles how it look like.

#.  Check carefully the **consistency** between ``samples.py`` and all above.

#.  Don't forget to **blind** the analysis if running for signal region.

Given well-prepared datacards, the `LatinoAnalysis <https://github.com/latinos/LatinoAnalysis>`_ package is needed to run the following commands.
The input directory for the following step is the path which contains latest latino trees of MC.

.. code:: bash

   mkShapes.py --pycfg=configuration.py --inputDir=/wk_cms/pchen/work/HWAnalysis/data/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_v2/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__vh3lSel__l3kin__l4kin

   mkDatacards.py --pycfg=configuration.py --inputFile=rootFiles/plots_ZH4l.root
   mkPlot.py --pycfg=configuration.py --inputFile=rootFiles/plots_ZH4l.root

The `HiggsAnalysisCombinedLimit <https://github.com/cms-analysis/HiggsAnalysis-CombinedLimit>`_ tool
----------------------------------------------------------------------------------------------------

Follow the `recipe <https://twiki.cern.ch/twiki/bin/view/CMS/SWGuideHiggsAnalysisCombinedLimit#For_end_users_that_don_t_need_to>`_ to get the latest package.

Some **non-standard usage** `[Twiki: NonStandardCombineUses] <https://twiki.cern.ch/twiki/bin/viewauth/CMS/HiggsWG/SWGuideNonStandardCombineUses>`_ is applied.

`Twiki: Nuisance Parameter Impacts <https://twiki.cern.ch/twiki/bin/viewauth/CMS/HiggsWG/SWGuideNonStandardCombineUses#Nuisance_parameter_impacts>`_

`Twiki: Rate Parameters <https://twiki.cern.ch/twiki/bin/viewauth/CMS/HiggsWG/SWGuideNonStandardCombineUses#Rate_Parameters>`_


Right now(2016/Nov/12) the latest CMSSW release to run this is ``CMSSW_7_4_7``.

Some treatment on the generated datacards is needed before running limit tools.

*  Prune datacards with `ModificationDatacards <https://github.com/amassiro/ModificationDatacards>`_

..  code:: bash

   cd ModificationDatacards
   ls /configpath/datacards/*/somevar/datacard.txt | grep -v "pruned" | awk '{print "python PruneDatacard.py -d "$1" -o "$1".pruned.txt --suppressNegative=True -i examples/input_nuisances_to_prune.py"}' | /bin/sh

*  Combine datacards with ``combineCards.py`` provided by the combine package

..  code:: bash

   combineCards.py processID1=/somepath1/datacard.txt.pruned.txt \
                   processID2=/somepath2/datacard.txt.pruned.txt \
                   [...] \
                   > forCombined/datacard.txt.comb.txt


Time to run combine tool now!

..  code:: bash
   
   # Observed limit
   combine -M Asymptotic datacard.txt
   combine -M Asymptotic -t -1 datacard.txt

   # Significance
   combine -M ProfileLikelihood --significance datacard.txt.comb.txt -t -1 -m 125 --expectSignal=1

   # To estimate the scale factor ZZ4lnorm
   combine -M MaxLikelihoodFit datacard.txt.comb.txt --redefineSignalPOIs ZZ4lnorm --freezeNuisances=r --setPhysicsModelParameterRanges ZZ4lnorm=0.01,2 -n "MLfitZZ4lnorm" -m 125

   # To Run the Likelihood Scan for getting the plot for signal strength
   combine -M MultiDimFit datacard_ZH4l_4July_divided.txt --algo=grid --point 100 --setPhysicsModelParameterRanges r=-10,10 -t -1 --expectSignal=1 -n "LHScan" -m 125


Make plots(To be updated)

..  code:: bash

    cd LatinoAnalysis/ShapeAnalysis/test/draw
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


Combine(To be updated)

..  code:: bash

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

    # postFit toys:     -t -1 (--> Asimov)
    combine -M MaxLikelihoodFit -t -1 --expectSignal 1      Moriond2016.txt
    combine -M MaxLikelihoodFit -t -1 --toysNoSystematics    --expectSignal 1      Moriond2016.txt

    # preFit toys:     -t -1  --toysFreq
    combine -M MaxLikelihoodFit -t -1 --toysFreq --expectSignal 1      Moriond2016.txt
    combine -M MaxLikelihoodFit -t -1 --toysNoSystematics --expectSignal 1      Moriond2016.txt

    combineCards.py   of0j13=ggHMoriond/datacards/hww2l2v_13TeV_of0j/mllVSmth/datacard.txt \
                      of1j13=ggHMoriond/datacards/hww2l2v_13TeV_of1j/mllVSmth/datacard.txt \
                      >   Moriond2016.txt

    combine -M MaxLikelihoodFit -t -1 --expectSignal 1        Moriond2016.txt
        
      --toysNoSystematics               Generate all toys with the central value
                                        of the nuisance parameters, without 
                                        fluctuating them
      --toysFrequentist                 Generate all toys in the frequentist 
                                        way. Note that this affects the toys 
                                        generated by option '-t' that happen in 
                                        the main loop, not the ones within the 
                                        Hybrid(New) algorithm.

Perform a Likelihood scan(To be updated)

..  code:: bash

   # Scan of the signal strength r:
   combine -M MultiDimFit Moriond2016.txt --algo=grid --points 100 --setPhysicsModelParameterRanges r=0.01,2 -t -1 --expectSignal=1 -n "LHScan" -m 125

   # Scan of a nuisance (eg. Topnorm0j):
   combine -M MultiDimFit Moriond2016.txt --algo=grid --points 100 --redefineSignalPOIs Topnorm0j --freezeNuisances=r --setPhysicsModelParameterRanges Topnorm0j=0.01,2 -t -1 --expectSignal=1 -n "LHScanTopnorm0j" -m 125

   # Scan of a nuisance freezing another one (eg. scan of Topnorm0j and freeze of WWnorm0j):
   combine -M MultiDimFit datacardCOMB.txt --algo=grid --points 100 --redefineSignalPOIs Topnorm0j --freezeNuisances=r,WWnorm0j --setPhysicsModelParameterRanges Topnorm0j=0.01,2 -t -1 --expectSignal=1 -n "LHScanTopnorm0j_WWnormFreeze" -m 125

Measure DYttbar normalization(To be updated)

..  code:: bash

    combineCards.py   of0j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt \
                  >   Moriond2016.tau.0j.txt

    combineCards.py   of1j13DYtt=ggH/datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt \
                  >   Moriond2016.tau.1j.txt

    combine -M MultiDimFit Moriond2016.tau.0j.txt --algo=grid --points 100 --redefineSignalPOIs DYttnorm0j --freezeNuisances=r,Topnorm0j,WWnorm0j --setPhysicsModelParameterRanges DYttnorm0j=0.01,2 -t -1 --expectSignal=1 -n "LHScanDYttnorm0j" -m 125
    combine -M MultiDimFit Moriond2016.tau.1j.txt --algo=grid --points 100 --redefineSignalPOIs DYttnorm1j --freezeNuisances=r,Topnorm1j,WWnorm1j --setPhysicsModelParameterRanges DYttnorm1j=0.01,2 -t -1 --expectSignal=1 -n "LHScanDYttnorm1j" -m 125

    combine -M MaxLikelihoodFit Moriond2016.tau.0j.txt --redefineSignalPOIs DYttnorm0j --freezeNuisances=r,Topnorm0j,WWnorm0j --setPhysicsModelParameterRanges DYttnorm0j=0.01,2 -t -1 --expectSignal=1 -n "MLfitDYttnorm0j" -m 125
    combine -M MaxLikelihoodFit Moriond2016.tau.1j.txt --redefineSignalPOIs DYttnorm1j --freezeNuisances=r,Topnorm1j,WWnorm1j --setPhysicsModelParameterRanges DYttnorm1j=0.01,2 -t -1 --expectSignal=1 -n "MLfitDYttnorm1j" -m 125


FAQ
===

Combine tool
------------

*   Why combine doesn't work if data was not turned on in samples?

    Observation in the datacards should be settled exactly the same as the weight in input rootfile. Just manually give it the value as the ZH4l signal channel.

Others
------

*   How to mount ``eosuser`` to ``/tmp/${USER}/eosuser``.

.. code:: bash

   alias eosusermount='/afs/cern.ch/project/eos/installation/0.3.84-aquamarine.user/bin/eos.select -b fuse mount'

   cd /tmp/${USER}
   eosusermount eosuser

