# WH charge asymmetry analysis

This is an adaptation of the analysis which is part of HIG-20-013. It is used to measure the asymmetry in the prodution of W+H and W-H. Here, the 3-leptons final state is inspected.

The instructions to run the analysis follow.

### Produce distributions using mkShapesMulti.py in batch mode

    mkShapesMulti.py --pycfg=configuration.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch --FixNegativeAfterHadd

Resubmit failed jobs.

    cd $HOME/scripts/jobs/mkShapes__WH3l_2017_v9_chargeAsymmetry_Mu82_EleUL90/
    for i in *jid; do condor_submit ${i/jid/jds}; done
    cd -

Or, if they failed because the wall clock time has been exceeded, resubmit them on a longer-time queue.

    cd $HOME/scripts/jobs/mkShapes__WH3l_2017_v9_chargeAsymmetry_Mu82_EleUL90/
    for i in *jid; do sed -i "s/longlunch/workday/g" ${i/jid/jds}; condor_submit ${i/jid/jds}; done
    cd -

### Merge rootfiles using hadd

    mkShapesMulti.py --pycfg=configuration.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8 --FixNegativeAfterHadd

### Plot original distributions

    ./do_plots.sh

### Produce control plots

We draw distributions for all variables with a reduced set of nuisances, to speed up the production:

    mkShapesMulti.py --pycfg=configuration_control_plots.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch --FixNegativeAfterHadd

    mkShapesMulti.py --pycfg=configuration_control_plots.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8 --FixNegativeAfterHadd

Then, plots the distributions:

    ./do_plots_control.sh

### Create datacards

Using script:

    ./do_datacards.sh

Scaling the signal by a factor 10, to test different strategies in single eras:

    mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2017_v9_chargeAsymmetry_Mu82_EleUL90.root --outputDirDatacard=datacards --structureFile=structure.py --variablesFile=variables_datacard.py

Using the correct signal scaling, for global combination:

    mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_WH3l_2017_v9_chargeAsymmetry_Mu82_EleUL90.root --outputDirDatacard=datacards_original_signal_scale --structureFile=structure_original_signal_scale.py --variablesFile=variables_datacard.py

### Optimize binning using combine harvester

Load combine:

     cd $HOME/work/combine/CMSSW_11_3_4/src/
     cmsenv
     cd -

Now optimize:

    ./do_optimize_cards.sh BDT_WH3l_OSSF_new_v9_100_bins ossf 0.10 &
    ./do_optimize_cards.sh BDT_WH3l_SSSF_new_v9_100_bins sssf 0.30 &

    ./do_optimize_cards.sh BDT_WH3l_OSSF_weight_v9_100_bins ossf 0.10 &
    ./do_optimize_cards.sh BDT_WH3l_SSSF_weight_v9_100_bins sssf 0.30 &


    ./do_optimize_cards.sh BDT_WH3l_OSSF_new_v9_0_75        ossf 0.10 &
    ./do_optimize_cards.sh BDT_WH3l_SSSF_new_v9_0_75        sssf 0.10 &

### Combine datacards

Load combine:

     cd $HOME/work/combine/CMSSW_11_3_4/src/
     cmsenv
     cd -

Actually combine datacards:

     mkdir -p Combination

     python script_datacards_binning.py

### Produce likelihood scans and post-fit plots

To produce likelihood scans, we need to perform the fit using the FitDiagnostic option. If we then save both the shapes and their uncertainties, we will obtain an output file with everything we need to also produce post-fit plots. If we optimized the binning of our discriminant using CombineHarvester, this is also the only way to produce plots of the discriminant with the correct binning.

Run combine using the FitDiagnostic option:

    python script_workspace_and_fit.py --datacard_name Combination/WH_chargeAsymmetry_WH_3l_Full2017_v9_binning_opt --output_name Combination/FitResults_binning_opt.txt --freeze_nuisances r_higgs --sanity_check FD

This will create the output file `fitDiagnostics.root`, storing all the pre- and post-fit shapes. Then, we can produce a rootfile with all the shapes, in the format that mkPlot can read, and then plot:

    bash do_postfit_plots.sh binning_opt Combination/FitResults_binning_opt_fitDiagnostics.root

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

Using datacards with enhanced signal scaling:

    python script_workspace_and_fit.py --datacard_name Combination/WH_chargeAsymmetry_WH_3l_Full2017_v9_binning --output_name=Combination/FitResults_binning.txt --freeze_nuisances=r_higgs

Old:

    python script_workspace_and_fit.py --datacard_name Combination/WH_chargeAsymmetry_WH_3l_Full2017_v9_binning          --output_name=Combination/FitResults_binning.txt          --freeze_nuisances=r_higgs

Using datacards with correct signal scaling:

    python script_workspace_and_fit.py --datacard_name Combination/WH_chargeAsymmetry_WH_3l_Full2017_v9_original_signal_scale_binning --output_name=Combination/FitResults_binning_original_signal_scale.txt --freeze_nuisances=r_higgs

### Produce Impact Plots

Source combine:

    cd $HOME/work/combine/CMSSW_11_3_4/src/
    cmsenv
    cd -

    ulimit -s unlimited

Prepare directory:

    mkdir -p Impact_plots

Actually produce impact plots:

    cd Impact_plots

Using new training with top and Z+jets as fakes

    combineTool.py -M Impacts -d ../Combination/WH_chargeAsymmetry_WH_3l_Full2017_v9_binning.root -m 125 --doInitialFit -t -1 --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 --setParameterRanges r_S=0,10:r_A=-1,1 --redefineSignalPOIs r_A --freezeParameters r_higgs

    combineTool.py -M Impacts -d ../Combination/WH_chargeAsymmetry_WH_3l_Full2017_v9_binning.root -m 125 --doFits -t -1 --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 --setParameterRanges r_S=0,10:r_A=-1,1 --redefineSignalPOIs r_A --job-mode condor --freezeParameters r_higgs --sub-opts='+JobFlavour="workday"'

    combineTool.py -M Impacts -d ../Combination/WH_chargeAsymmetry_WH_3l_Full2017_v9_binning.root -m 125 -t -1 -o impacts_WH3l_2017_binning.json --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 --setParameterRanges r_S=0,10:r_A=-1,1 --redefineSignalPOIs r_A

    plotImpacts.py -i impacts_WH3l_2017_binning.json -o Impact_WH3l_2017_binning

    rm combine_*
    rm condor_*
    rm higgsCombine_*

Produce impact plots for signal strength measurement. Using original signal scale:

    combineTool.py -M Impacts -d ../Combination/WH_chargeAsymmetry_WH_3l_Full2017_v9_100_bins_new_opt_WH_strength.root -m 125 --doInitialFit -t -1 --setParameters r_WH=1 --setParameterRanges r_WH=0.01,10 --redefineSignalPOIs r_WH --freezeParameters r_higgs -n signal_strength

    combineTool.py -M Impacts -d ../Combination/WH_chargeAsymmetry_WH_3l_Full2017_v9_100_bins_new_opt_WH_strength.root -m 125 --doFits -t -1 --setParameters r_WH=1 --setParameterRanges r_WH=0.01,10 --redefineSignalPOIs r_WH --job-mode interactive --parallel 8 -n signal_strength

    combineTool.py -M Impacts -d ../Combination/WH_chargeAsymmetry_WH_3l_Full2017_v9_100_bins_new_opt_WH_strength.root -m 125 -t -1 -o impacts_WH3l_2017_100_bins_new_opt_WH_strength.json --setParameters r_WH=1 --setParameterRanges r_WH=0.01,10 --redefineSignalPOIs r_WH -n signal_strength

    plotImpacts.py -i impacts_WH3l_2017_100_bins_new_opt_WH_strength.json -o Impact_WH3l_2017_100_bins_new_opt_WH_strength

    rm combine_*
    rm condor_*
    rm higgsCombine_*

### Produce likelihood scans and post-fit plots

To produce likelihood scans, we need to perform the fit using the FitDiagnostic option. If we then save both the shapes and their uncertainties, we will obtain an output file with everything we need to also produce post-fit plots. If we optimized the binning of our discriminant using CombineHarvester, this is also the only way to produce plots of the discriminant with the correct binning.

Run combine using the FitDiagnostic option:

    python script_workspace_and_fit.py --datacard_name Combination/WH_chargeAsymmetry_WH_3l_Full2017_v9_new_opt --output_name Combination/FitResults_new_opt.txt --freeze_nuisances r_higgs --sanity_check FD

This will create the output file `fitDiagnostics.root`, storing all the pre- and post-fit shapes. Then, we can produce a rootfile with all the shapes, in the format that mkPlot can read, and then plot:

    bash do_postfit_plots.sh
