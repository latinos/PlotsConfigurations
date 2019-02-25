By following these instructions one should be able to read latino trees, produce histograms, make plots and datacards, combine the datacards, and extract the analysis significance.


# 0. Everything starts here

    export CMSSW_DIRECTORY=/afs/cern.ch/work/g/govoni/Alessandro/CMSSW_8_0_26_patch1/src
    export CONFIGURATION_DIRECTORY=$CMSSW_DIRECTORY/PlotsConfigurations/Configurations/My_Config/MyConfig_VBS
    export COMBINE_DIRECTORY=~/work/Combine/
    
# 1. Produce histograms

This step reads the post-processed latino trees and produces histograms for several variables and phase spaces.

    cd $CONFIGURATION_DIRECTORY

    mkShapes.py --pycfg=configuration.py \
                --batchSplit=AsMuchAsPossible \
                --doBatch=True \
                --batchQueue=microcentury

The jobs can take a while, thus it is natural to check their status.

    mkBatch.py --status

After all your jobs are finished, and before going to the next step, check the .jid files in the following output directory (tag is specified in configuration.py):

    ls -l $CMSSW_DIRECTORY/jobs/mkShapes__VBS_SS_test/*.jid
    
If you find .jid files it means that the corresponding jobs failed, check the .err and .out files to understand the reason of the failure.

If several jobs failed and you want to resubmit them all at once you can do:

    cd $CMSSW_DIRECTORY/jobs/mkShapes__VBS_SS_test
    for i in *jid; do sed -i "s/espresso/microcentury/g" ${i/jid/jds}; condor_submit ${i/jid/jds}; done

# 3. Put all your apples in one basket

Once the previous jobs have finished we _hadd_ the outputs.

    mkShapes.py --pycfg=configuration.py \
                --batchSplit=AsMuchAsPossible \
                --doHadd=True
*NB*: If the --batchSplit=AsMuchAsPossible option is used, do not _hadd_ the outputs by hand but use the command above instead. Otherwise the MC statistical uncertainties are not treated in the correct way.


# 4. Read histograms

At this stage one can either produce plots or datacards.

### Produce plots

Now we are ready to make data/MC comparison plots.

    mkPlot.py --inputFile=rootFile_test/plots_VBS_SS_test.root \
              --showIntegralLegend=1


### Produce datacards

    mkDatacards.py --pycfg=configuration.py \
                   --inputFile=rootFile_test/plots_VBS_SS_test.root


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
            
            
            


