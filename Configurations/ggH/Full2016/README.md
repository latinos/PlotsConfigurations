By following these instructions one should be able to read latino trees, produce histograms, make plots and datacards, combine the datacards, and extract the analysis significance.


# 0. Everything starts here

    ssh -Y lxplus.cern.ch -o ServerAliveInterval=240
    bash -l

    export CMSSW_DIRECTORY=~/work/CMSSW_Apr2017_HowToBeALatinLover/CMSSW_8_0_26_patch1/src
    export CONFIGURATION_DIRECTORY=$CMSSW_DIRECTORY/PlotsConfigurations/Configurations/ggH/Full2016
    export COMBINE_DIRECTORY=~/work/Combine/

    cd $CMSSW_DIRECTORY
    cmsenv
    scramv1 b


# 1. First time only

Get the combine package. Follow the instructions documented in the revision **r170** of the [combine twiki](https://twiki.cern.ch/twiki/bin/view/CMS/SWGuideHiggsAnalysisCombinedLimit#ROOT6_SLC6_release_CMSSW_7_4_X).

    cd $COMBINE_DIRECTORY

Get Andrea's scripts to modify datacards.

    cd $COMBINE_DIRECTORY
    git clone https://github.com/amassiro/ModificationDatacards

Copy and edit the latino user configuration file.

    cd $CMSSW_DIRECTORY/LatinoAnalysis/Tools/python
    cp userConfig_TEMPLATE.py userConfig.py


# 2. Produce histograms

This step reads the post-processed latino trees and produces histograms for several variables and phase spaces.

    cd $CONFIGURATION_DIRECTORY

    mkShapes.py --pycfg=configuration.py \
                --inputDir=/eos/cms/store/caf/user/lenzip/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__wwSel__genericFormulas \
                --batchSplit=AsMuchAsPossible \
                --doBatch=True \
                --batchQueue=1nd

The jobs can take a while, thus it is natural to check their status.

    mkBatch.py --status


If a job takes too long / fails, one can kill it and resubmit manually.

    bsub -q 1nd ~/cms/HWW2016/jobs/mkShapes__ggH/mkShapes__ggH__hww2l2v_13TeV_em_mp_1j__top2.sh


# 3. Put all your apples in one basket

Once the previous jobs have finished we _hadd_ the outputs.

    mkShapes.py --pycfg=configuration.py \
                --inputDir=/eos/cms/store/caf/user/lenzip/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__wwSel__genericFormulas \
                --batchSplit=AsMuchAsPossible \
                --doHadd=True


# 4. Read histograms

At this stage one can either produce plots or datacards.

### Produce plots

Now we are ready to make data/MC comparison plots.

    mkPlot.py --inputFile=rootFile/plots_ggH.root \
              --showIntegralLegend=1


### Produce datacards

    mkDatacards.py --pycfg=configuration.py \
                   --inputFile=rootFile/plots_ggH.root


# 5. Pruning

    cd $COMBINE_DIRECTORY/ModificationDatacards
    ls /afs/cern.ch/user/p/piedra/work/CMSSW_Apr2017_HowToBeALatinLover/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/ggH/Full2016/datacards/*/*/*.txt | grep -v "pruned" | \
    awk '{print "python PruneDatacard.py -d "$1" -o "$1".pruned.txt --suppressNegative=True -i examples/input_nuisances_to_prune.py"}' | /bin/sh


# 6. Combine datacards

    pushd $COMBINE_DIRECTORY/CMSSW_7_4_7/src/
    eval `scramv1 runtime -sh`
    popd

    combineCards.py em_mp_1j=datacards/hww2l2v_13TeV_em_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                    me_mp_1j=datacards/hww2l2v_13TeV_me_mp_1j/mllVSmth/datacard.txt.pruned.txt \
                    em_mp_0j=datacards/hww2l2v_13TeV_em_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                    me_mp_0j=datacards/hww2l2v_13TeV_me_mp_0j/mllVSmth/datacard.txt.pruned.txt \
                    em_pm_1j=datacards/hww2l2v_13TeV_em_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                    me_pm_1j=datacards/hww2l2v_13TeV_me_pm_1j/mllVSmth/datacard.txt.pruned.txt \
                    em_pm_0j=datacards/hww2l2v_13TeV_em_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                    me_pm_0j=datacards/hww2l2v_13TeV_me_pm_0j/mllVSmth/datacard.txt.pruned.txt \
                    of0j_Top=datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt \
                    of1j_Top=datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt \
                    of0j_DYtt=datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt \
                    of1j_DYtt=datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt \
                    > Full2016.txt.pruned.txt


# 7. Check consistency of datacards

To check the consistency one can transform the datacard (txt file) into a RooFit binary file (workspace).

    pushd $COMBINE_DIRECTORY/CMSSW_7_4_7/src/
    eval `scramv1 runtime -sh`
    popd

    text2workspace.py Full2016.txt.pruned.txt


# 8. Get the significance

    pushd $COMBINE_DIRECTORY/CMSSW_7_4_7/src/
    eval `scramv1 runtime -sh`
    popd

    combine -M MaxLikelihoodFit \
            --rMin=-2 --rMax=4 \
            Full2016.txt.pruned.root -n Full2016.txt.pruned.root \
            > result.data.MaxLikelihoodFit.Full2016.txt.pruned.txt

