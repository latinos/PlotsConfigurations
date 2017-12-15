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
                --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__wwSel \
                --batchSplit=AsMuchAsPossible \
                --doBatch=True \
                --batchQueue=1nd

The jobs can take a while, thus it is natural to check their status.

    mkBatch.py --status

After all your jobs are finished, and before going to the next step, check the .jid files in the following output directory (tag is specified in configuration.py):

    ls -l $CONFIGURATION_DIRECTORY/jobs/mkShapes__tag/*.jid
    
If you find .jid files it means that the corresponding jobs failed, check the .err and .out files to understand the reason of the failure.

If a job takes too long / fails, one can kill it and resubmit manually, e.g.:

    bsub -q 1nd $CONFIGURATION_DIRECTORY/jobs/mkShapes__ggH/mkShapes__ggH__hww2l2v_13TeV_em_mp_1j__top2.sh

If several jobs failed and you want to resubmit them all at once you can do:

    cd $CONFIGURATION_DIRECTORY/jobs/mkShapes__tag
    for i in *jid; do bsub -q 1nd ${i/jid/sh}; done

# 3. Put all your apples in one basket

Once the previous jobs have finished we _hadd_ the outputs.

    mkShapes.py --pycfg=configuration.py \
                --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__formulasMC__wwSel \
                --batchSplit=AsMuchAsPossible \
                --doHadd=True
*NB*: If the --batchSplit=AsMuchAsPossible option is used, do not _hadd_ the outputs by hand but use the command above instead. Otherwise the MC statistical uncertainties are not treated in the correct way.


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
    # Do the following to use the automatic approach in combine to include the MC statistical nuisances
    echo "* autoMCStats 10 1" >> Full2016.txt.pruned.txt


# 7. Check consistency of datacards

To check the consistency one can transform the datacard (txt file) into a RooFit binary file (workspace).

    pushd $COMBINE_DIRECTORY/CMSSW_7_4_7/src/
    eval `scramv1 runtime -sh`
    popd

    text2workspace.py Full2016.txt.pruned.txt -o Full2016.txt.pruned.root


# 8. Get the significance

    pushd $COMBINE_DIRECTORY/CMSSW_7_4_7/src/
    eval `scramv1 runtime -sh`
    popd

    combine -M MaxLikelihoodFit \
            --rMin=-2 --rMax=4 \
            Full2016.txt.pruned.root -n Full2016.txt.pruned.root \
            > result.data.MaxLikelihoodFit.Full2016.txt.pruned.txt

            
            
            
# 9. Post-fit plots

Fit with combine and save the output histograms

    combine -M MaxLikelihoodFit datacards/hww2l2v_13TeV_em_pm_0j/mll/datacard.txt -n mytest --saveShapes --saveNormalizations   --saveWithUncertainties
    combine -M MaxLikelihoodFit datacards/hww2l2v_13TeV_top_of1j/mll/datacard.txt -n mytest --saveShapes --saveNormalizations   --saveWithUncertainties  --freezeNuisances=WWnorm1j

    
    combineCards.py phasespace1=datacards/hww2l2v_13TeV_top_of1j/mll/datacard.txt \
                    phasespace2=datacards/hww2l2v_13TeV_top_of1j/mll/datacard.txt \
                    > Full2016.txt

    combine -M MaxLikelihoodFit Full2016.txt -n mytest --saveShapes --saveNormalizations   --saveWithUncertainties  --freezeNuisances=WWnorm1j


Digest the histograms so that they can be used by mkPlot

    mkPostFitPlot.py --pycfg=configuration.py    --inputFileCombine mlfitmytest.root --outputFile out.root --variable mll --cut hww2l2v_13TeV_em_pm_0j --inputFile rootFile/plots_ggH.root
    mkPostFitPlot.py --pycfg=configuration.py    --inputFileCombine mlfitmytest.root --outputFile out.s.root   --variable mll --cut hww2l2v_13TeV_em_pm_0j --kind s    --inputFile rootFile/plots_ggH.root
    mkPostFitPlot.py --pycfg=configuration.py    --inputFileCombine mlfitmytest.root --outputFile out.b.root   --variable mll --cut hww2l2v_13TeV_em_pm_0j --kind b    --inputFile rootFile/plots_ggH.root
    mkPostFitPlot.py --pycfg=configuration.py    --inputFileCombine mlfitmytest.root --outputFile out.pre.root --variable mll --cut hww2l2v_13TeV_em_pm_0j --kind p    --inputFile rootFile/plots_ggH.root

    mkPostFitPlot.py --pycfg=configuration.py    --inputFileCombine mlfitmytest.root --outputFile out.b.root   --variable mll --cut hww2l2v_13TeV_top_of1j --kind b    --inputFile rootFile/plots_ggH.root
    mkPostFitPlot.py --pycfg=configuration.py    --inputFileCombine mlfitmytest.root --outputFile out.b.root   --variable mll --cut phasespace1   --cutNameInOriginal  hww2l2v_13TeV_top_of1j        --kind b    --inputFile rootFile/plots_ggH.root
 
 
 
 
 
Run mkPlot with the new file (NB: only one variable should be defined in variables.py!)
    
    mkPlot.py --pycfg=configuration.py    --inputFile=out.root               --showIntegralLegend=1
    mkPlot.py --pycfg=configuration.py    --inputFile=out.s.root             --showIntegralLegend=1
    mkPlot.py --pycfg=configuration.py    --inputFile=out.b.root             --showIntegralLegend=1
    mkPlot.py --pycfg=configuration.py    --inputFile=out.pre.root           --showIntegralLegend=1
            
and to plot only the variable used in the maximum likelihood fit:

    mkPlot.py --pycfg=configuration.py   --inputFile=out.pre.root           --showIntegralLegend=1        --onlyCut=hww2l2v_13TeV_top_of1j   --onlyVariable=mll        
            
            
            
