# WH charge asymmetry analysis

This is an adaptation of the analysis which is part of HIG-20-013. It is used to measure the asymmetry in the prodution of W+H and W-H. Here, the 3-leptons final state is inspected.

The instructions to run the analysis follow.

### Produce distributions using mkShapesMulti.py in batch mode

    mkShapesMulti.py --pycfg=configuration.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

Resubmit failed jobs.

    cd $HOME/scripts/jobs/mkShapes__WH3l_2018_v9_chargeAsymmetry/
    for i in *jid; do condor_submit ${i/jid/jds}; done
    cd -

Or, if they failed because the wall clock time has been exceeded, resubmit them on a longer-time queue.

    cd $HOME/scripts/jobs/mkShapes__WH3l_2018_v9_chargeAsymmetry/
    for i in *jid; do sed -i "s/longlunch/workday/g" ${i/jid/jds}; condor_submit ${i/jid/jds}; done
    cd -

### Merge rootfiles using hadd

    mkShapesMulti.py --pycfg=configuration.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

### Plot original distributions

    ./do_plots.sh

### Create datacards

Using original distributions:

    mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --outputDirDatacard=datacards --structureFile=structure.py

### Optimize binning using combine harvester

Load combine:

     cd $HOME/work/combine/CMSSW_10_2_13/src/
     cmsenv
     cd -

Now optimize:

    ./do_optimize_cards.sh BDT_WH3l_OSSF_v9_more

    ./do_optimize_cards.sh BDT_WH3l_OSSF_new_v9_more

### Combine datacards

Load combine:

    cd $HOME/work/combine/CMSSW_10_2_13/src/
    cmsenv
    cd -

Actually combine datacards:

    mkdir -p Combination

    python script_datacards.py

    python script_datacards_new_training.py

    python script_datacards_opt.py

### Interpret the results in terms of asymmetry

We define de asymmetry as:

$$ A = \frac{\sigma(W^+h) - \sigma(W^-h)}{\sigma(W^+h) + \sigma(W^-h)}$$

Considering the Yellow Report Cross sections for the two processes (https://twiki.cern.ch/twiki/bin/view/LHCPhysics/CERNYellowReportPageAt13TeV):
- XS W+h = 0.8380 pb
- XS W-h = 0.5313 pb

When fitting, it is more convenient to re-define the quantities we want to measure:

$$ S = \sigma(W^+h) + \sigma(W^-h) $$

$$ A = \frac{\sigma(W^+h) - \sigma(W^-h)}{S}$$

This means that:

$$ \sigma(W^+h) = \frac{S(1+A)}{2} $$

$$ \sigma(W^-h) = \frac{S(1-A)}{2} $$

In the combine 'notation':

$$ \sigma(W^+h) = r(W^+h) \times \sigma_{theory}(W^+h) $$

$$ \sigma(W^-h) = r(W^-h) \times \sigma_{theory}(W^-h) $$

And this brings to:

$$ r(W^+h) = \frac{S (1+A)}{2 \sigma_{theory}(W^+h)} $$

$$ r(W^-h) = \frac{S (1-A)}{2 \sigma_{theory}(W^-h)} $$

Since S appears in the denominator of the asymmetry expression, it cannot be 0, and we will require it to be always positive to avoid poles in the asymmetry definition.

### Use script to extract asymmetry

    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_3l_Full2018_v9               --output_name=Combination/FitResults.txt               --freeze_nuisances=r_higgs
    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_3l_Full2018_v9_optimizedSSSF --output_name=Combination/FitResults_optimizedSSSF.txt --freeze_nuisances=r_higgs
    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_3l_Full2018_v9_alsoLowPt     --output_name=Combination/FitResults_alsoLowPt.txt     --freeze_nuisances=r_higgs

    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_3l_new_Full2018_v9           --output_name=Combination/FitResults_new.txt           --freeze_nuisances=r_higgs
    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_3l_new_Full2018_v9_optimized --output_name=Combination/FitResults_new_optimized.txt --freeze_nuisances=r_higgs
    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_3l_new_Full2018_v9_alsoLowPt --output_name=Combination/FitResults_new_alsoLowPt.txt --freeze_nuisances=r_higgs
    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_3l_new_Full2018_v9_0_7       --output_name=Combination/FitResults_new_0_7.txt       --freeze_nuisances=r_higgs
    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_3l_new_Full2018_v9_0_9       --output_name=Combination/FitResults_new_0_9.txt       --freeze_nuisances=r_higgs

    python script_workspace_and_fit.py --datacard_name Combination/WH_chargeAsymmetry_WH_3l_Full2018_v9_opt           --output_name=Combination/FitResults_opt.txt           --freeze_nuisances=r_higgs
    python script_workspace_and_fit.py --datacard_name Combination/WH_chargeAsymmetry_WH_3l_Full2018_v9_alsoLowPt_opt --output_name=Combination/FitResults_alsoLowPt_opt.txt --freeze_nuisances=r_higgs

### Produce Impact Plots

Source combine:

    cd $HOME/work/combine/CMSSW_10_2_13/src/
    cmsenv
    cd -

    ulimit -s unlimited

Prepare directory:

    mkdir -p Impact_plots

Actually produce impact plots:

    cd Impact_plots

Using standard strategy from AN-22-120:

    combineTool.py -M Impacts -d ../Combination/WH_chargeAsymmetry_WH_3l_Full2018_v9.root -m 125 --doInitialFit -t -1 --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 --setParameterRanges r_S=0,10:r_A=-1,1 --redefineSignalPOIs r_A --freezeParameters r_higgs

    combineTool.py -M Impacts -d ../Combination/WH_chargeAsymmetry_WH_3l_Full2018_v9.root -m 125 --doFits -t -1 --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 --setParameterRanges r_S=0,10:r_A=-1,1 --redefineSignalPOIs r_A --job-mode=condor --freezeParameters r_higgs

    combineTool.py -M Impacts -d ../Combination/WH_chargeAsymmetry_WH_3l_Full2018_v9.root -m 125 -t -1 -o impacts_WH3l_2018.json --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 --setParameterRanges r_S=0,10:r_A=-1,1 --redefineSignalPOIs r_A

    plotImpacts.py -i impacts_WH3l_2018.json -o Impact_WH3l_2018

    rm combine_*
    rm condor_*
    rm higgsCombine_*

Using new training with top and Z+jets as fakes

    combineTool.py -M Impacts -d ../Combination/WH_chargeAsymmetry_WH_3l_new_Full2018_v9.root -m 125 --doInitialFit -t -1 --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 --setParameterRanges r_S=0,10:r_A=-1,1 --redefineSignalPOIs r_A --freezeParameters r_higgs

    combineTool.py -M Impacts -d ../Combination/WH_chargeAsymmetry_WH_3l_new_Full2018_v9.root -m 125 --doFits -t -1 --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 --setParameterRanges r_S=0,10:r_A=-1,1 --redefineSignalPOIs r_A --job-mode=condor --freezeParameters r_higgs

    combineTool.py -M Impacts -d ../Combination/WH_chargeAsymmetry_WH_3l_new_Full2018_v9.root -m 125 -t -1 -o impacts_WH3l_2018_new.json --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 --setParameterRanges r_S=0,10:r_A=-1,1 --redefineSignalPOIs r_A

    plotImpacts.py -i impacts_WH3l_2018_new.json -o Impact_WH3l_2018_new

    rm combine_*
    rm condor_*
    rm higgsCombine_*


### OLD: Select binning for BDT

Training used in AN-22-120_v2:

    mkBinningOptimization.py --pyCfg=binning_ossf.py --input=rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=wh3l_13TeV_ossf_plus_pt2ge20  --variable=BDT_WH3l_OSSF_v9_more --figure=S_B
    mkBinningOptimization.py --pyCfg=binning_ossf.py --input=rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=wh3l_13TeV_ossf_minus_pt2ge20 --variable=BDT_WH3l_OSSF_v9_more --figure=S_B
    
    mkBinningOptimization.py --pyCfg=binning_ossf.py --input=rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=wh3l_13TeV_ossf_plus_pt2lt20  --variable=BDT_WH3l_OSSF_v9_more --figure=S_B
    mkBinningOptimization.py --pyCfg=binning_ossf.py --input=rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=wh3l_13TeV_ossf_minus_pt2lt20 --variable=BDT_WH3l_OSSF_v9_more --figure=S_B
    
    
    mkBinningOptimization.py --pyCfg=binning_sssf.py --input=rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=wh3l_13TeV_sssf_plus_pt2ge20  --variable=BDT_WH3l_SSSF_v9_more --figure=S_B
    mkBinningOptimization.py --pyCfg=binning_sssf.py --input=rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=wh3l_13TeV_sssf_minus_pt2ge20 --variable=BDT_WH3l_SSSF_v9_more --figure=S_B
    
    mkBinningOptimization.py --pyCfg=binning_sssf.py --input=rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=wh3l_13TeV_sssf_plus_pt2lt20  --variable=BDT_WH3l_SSSF_v9_more --figure=S_B
    mkBinningOptimization.py --pyCfg=binning_sssf.py --input=rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=wh3l_13TeV_sssf_minus_pt2lt20 --variable=BDT_WH3l_SSSF_v9_more --figure=S_B

Training considering Z+jets and Top as Fakes:

    mkBinningOptimization.py --pyCfg=binning_ossf.py --input=rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=wh3l_13TeV_ossf_plus_pt2ge20  --variable=BDT_WH3l_OSSF_new_v9_more --figure=S_sqrtB
    mkBinningOptimization.py --pyCfg=binning_ossf.py --input=rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=wh3l_13TeV_ossf_minus_pt2ge20 --variable=BDT_WH3l_OSSF_new_v9_more --figure=S_sqrtB

    mkBinningOptimization.py --pyCfg=binning_ossf.py --input=rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=wh3l_13TeV_ossf_plus_pt2lt20  --variable=BDT_WH3l_OSSF_new_v9_more --figure=S_sqrtB
    mkBinningOptimization.py --pyCfg=binning_ossf.py --input=rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=wh3l_13TeV_ossf_minus_pt2lt20 --variable=BDT_WH3l_OSSF_new_v9_more --figure=S_sqrtB


    mkBinningOptimization.py --pyCfg=binning_sssf.py --input=rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=wh3l_13TeV_sssf_plus_pt2ge20  --variable=BDT_WH3l_SSSF_new_v9_more --figure=S_sqrtB
    mkBinningOptimization.py --pyCfg=binning_sssf.py --input=rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=wh3l_13TeV_sssf_minus_pt2ge20 --variable=BDT_WH3l_SSSF_new_v9_more --figure=S_sqrtB

    mkBinningOptimization.py --pyCfg=binning_sssf.py --input=rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=wh3l_13TeV_sssf_plus_pt2lt20  --variable=BDT_WH3l_SSSF_new_v9_more --figure=S_sqrtB
    mkBinningOptimization.py --pyCfg=binning_sssf.py --input=rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root --cut=wh3l_13TeV_sssf_minus_pt2lt20 --variable=BDT_WH3l_SSSF_new_v9_more --figure=S_sqrtB


