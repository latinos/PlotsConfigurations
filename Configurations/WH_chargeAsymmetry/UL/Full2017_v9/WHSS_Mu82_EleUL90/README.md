# WH charge asymmetry analysis

This is an adaptation of the analysis which is part of HIG-20-013. It is used to measure the asymmetry in the prodution of W+H and W-H. Here, the 2-leptons final state (one of the W bosons decays hadronically) is inspected.

The instructions to run the analysis follow.

### Produce distributions using mkShapesMulti.py in batch mode

    mkShapesMulti.py --pycfg=configuration.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

Resubmit failed jobs.

    cd $HOME/scripts/jobs/mkShapes__WHSS_2017_v9_chargeAsymmetry/
    for i in *jid; do condor_submit ${i/jid/jds}; done
    cd -

Or, if they failed because the wall clock time has been exceeded, resubmit them on a longer-time queue.

    cd $HOME/scripts/jobs/mkShapes__WHSS_2017_v9_chargeAsymmetry/
    for i in *jid; do sed -i "s/longlunch/workday/g" ${i/jid/jds}; condor_submit ${i/jid/jds}; done
    cd -

### Merge rootfiles using hadd

    mkShapesMulti.py --pycfg=configuration.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

### Include DY -> ee estimation from opposite-sign phase space

Go into the `DY_OS_CR` directory and follow the instructions in the `README` file:

    cd DY_OS_CR/
    
### Plot distributions with DY->ee data-driven histograms

    ./do_plot_DYflip_distributions.sh

### Plot original distributions

    ./do_plot_original_distributions.sh

### Create datacards

Using DY->ee data-driven distributions and scaling the signal by a factor 10, to test different strategies in single eras:

    mkDatacards.py --pycfg=configuration_datacard.py --inputFile=rootFile/plots_WHSS_2017_v9_chargeAsymmetry_Mu82_EleUL90_DYflip.root

Using DY->ee data-driven distributions and the correct signal scaling, for global combination:

    mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2017_v9_chargeAsymmetry_Mu82_EleUL90_DYflip.root --outputDirDatacard=datacards_DYflip_original_signal_scale --structureFile=structure_DYflip_original_signal_scale.py --variablesFile=variables_datacard.py

### Optimize binning using combine harvester

Load combine:

     cd $HOME/work/combine/CMSSW_11_3_4/src/
     cmsenv
     cd -

Now optimize:

    ./do_optimize_cards.sh BDTG6_TT_more     0.10
    ./do_optimize_cards.sh BDTG6_TT_100_bins 0.10

### Combine datacards

Create Combination directory:

     mkdir -p Combination

Load combine:

     cd $HOME/work/combine/CMSSW_11_3_4/src/
     cmsenv
     cd -

Actually combine datacards:

     python script_datacards_opt.py

### Produce prefit, postfit, and likelihood scans plots

To produce likelihood scans, we need to perform the fit using the FitDiagnostic option. If we then save both the shapes and their uncertainties, we will obtain an output file with everything we need to also produce post-fit plots. If we optimized the binning of our discriminant using CombineHarvester, this is also the only way to produce plots of the discriminant with the correct binning.

Run combine using the FitDiagnostic option:

    python script_workspace_and_fit.py --datacard_name Combination/WH_chargeAsymmetry_WH_SS_Full2017_v9_BDTG6_TT_more_allFinalStates_alsoLowPt_opt_noZveto --output_name Combination/FitResults_BDTG6_TT_more.txt --freeze_nuisances r_higgs --sanity_check FD

    python script_workspace_and_fit.py --datacard_name Combination/WH_chargeAsymmetry_WH_SS_Full2017_v9_BDTG6_TT_100_bins_allFinalStates_alsoLowPt_opt_noZveto --output_name Combination/FitResults_BDTG6_TT_100_bins.txt --freeze_nuisances r_higgs --sanity_check FD

This will create the output file `fitDiagnostics.root`, storing all the pre- and post-fit shapes. Then, we can produce a rootfile with all the shapes, in the format that mkPlot can read, and then plot:

    bash do_postfit_plots.sh BDTG6_TT_more Combination/FitResults_BDTG6_TT_more_fitDiagnostics.root

    bash do_postfit_plots.sh BDTG6_TT_100_bins Combination/FitResults_BDTG6_TT_100_bins_fitDiagnostics.root

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

For newer trainings, where we only want to compare the full strategy:

    python script_workspace_and_fit.py --datacard_name Combination/WH_chargeAsymmetry_WH_SS_Full2017_v9_BDTG6_TT_more_allFinalStates_alsoLowPt_opt_noZveto     --output_name Combination/FitResults_BDTG6_TT_more.txt     --freeze_nuisances r_higgs
    python script_workspace_and_fit.py --datacard_name Combination/WH_chargeAsymmetry_WH_SS_Full2017_v9_BDTG6_TT_100_bins_allFinalStates_alsoLowPt_opt_noZveto --output_name Combination/FitResults_BDTG6_TT_100_bins.txt --freeze_nuisances r_higgs

Using datacards with correct signal scaling:

    python script_workspace_and_fit.py --datacard_name Combination/WH_chargeAsymmetry_WH_SS_Full2017_v9_BDTG6_TT_more_allFinalStates_alsoLowPt_DYflip_original_signal_scale_opt_noZveto --output_name Combination/FitResults_BDTG6_TT_more_original_signal_scale.txt --freeze_nuisances r_higgs
    python script_workspace_and_fit.py --datacard_name Combination/WH_chargeAsymmetry_WH_SS_Full2017_v9_BDTG6_TT_100_bins_allFinalStates_alsoLowPt_DYflip_original_signal_scale_opt_noZveto --output_name Combination/FitResults_BDTG6_TT_100_bins_original_signal_scale.txt --freeze_nuisances r_higgs

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

	VAR=BDTG6_TT_100_bins
	FINAL_STATE=_allFinalStates_alsoLowPt_opt_noZveto

    combineTool.py -M Impacts -d ../Combination/WH_chargeAsymmetry_WH_SS_Full2017_v9_${VAR}${FINAL_STATE}.root -m 125 --doInitialFit -t -1 --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 --setParameterRanges r_S=0,10:r_A=-1,1 --redefineSignalPOIs r_A --freezeParameters r_higgs

    combineTool.py -M Impacts -d ../Combination/WH_chargeAsymmetry_WH_SS_Full2017_v9_${VAR}${FINAL_STATE}.root -m 125 --doFits -t -1 --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 --setParameterRanges r_S=0,10:r_A=-1,1 --redefineSignalPOIs r_A --job-mode=condor --freezeParameters r_higgs

    combineTool.py -M Impacts -d ../Combination/WH_chargeAsymmetry_WH_SS_Full2017_v9_${VAR}${FINAL_STATE}.root -m 125 -t -1 -o impacts_WHSS_2017_${VAR}${FINAL_STATE}.json --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 --setParameterRanges r_S=0,10:r_A=-1,1 --redefineSignalPOIs r_A

    plotImpacts.py -i impacts_WHSS_2017_${VAR}${FINAL_STATE}.json -o Impact_WHSS_2017_${VAR}${FINAL_STATE}

    rm combine_*
    rm condor_*
    rm higgsCombine_*

Produce impact plots for signal strength measurement. Using original signal scale:

	VAR=BDTG6_TT_100_bins
	FINAL_STATE=_allFinalStates_alsoLowPt_DYflip_original_signal_scale_opt_noZveto_WH_strength

    cd Impact_plots

    combineTool.py -M Impacts -d ../Combination/WH_chargeAsymmetry_WH_SS_Full2017_v9_${VAR}${FINAL_STATE}.root -m 125 --doInitialFit -t -1 --setParameters r_WH=1 --setParameterRanges r_WH=0.01,10 --redefineSignalPOIs r_WH --freezeParameters r_higgs -n signal_strength

    combineTool.py -M Impacts -d ../Combination/WH_chargeAsymmetry_WH_SS_Full2017_v9_${VAR}${FINAL_STATE}.root -m 125 --doFits -t -1 --setParameters r_WH=1 --setParameterRanges r_WH=0.01,10 --redefineSignalPOIs r_WH --job-mode=condor -n signal_strength

    combineTool.py -M Impacts -d ../Combination/WH_chargeAsymmetry_WH_SS_Full2017_v9_${VAR}${FINAL_STATE}.root -m 125 -t -1 -o impacts_WHSS_2017_${VAR}${FINAL_STATE}.json --setParameters r_WH=1 --setParameterRanges r_WH=0.01,10 --redefineSignalPOIs r_WH -n signal_strength

    plotImpacts.py -i impacts_WHSS_2017_${VAR}${FINAL_STATE}.json -o Impact_WHSS_2017_${VAR}${FINAL_STATE}

    rm combine_*
    rm condor_*
    rm higgsCombine_*

### Produce likelihood scans and post-fit plots

To produce likelihood scans, we need to perform the fit using the FitDiagnostic option. If we then save both the shapes and their uncertainties, we will obtain an output file with everything we need to also produce post-fit plots. If we optimized the binning of our discriminant using CombineHarvester, this is also the only way to produce plots of the discriminant with the correct binning.

Run combine using the FitDiagnostic option:

    python script_workspace_and_fit.py --datacard_name Combination/WH_chargeAsymmetry_WH_SS_Full2017_v9_BDTG6_TT_more_allFinalStates_alsoLowPt_opt_noZveto --output_name Combination/FitResults_BDTG6_TT_more.txt --freeze_nuisances r_higgs --sanity_check FD

This will create the output file `fitDiagnostics.root`, storing all the pre- and post-fit shapes. Then, we can produce a rootfile with all the shapes, in the format that mkPlot can read, and then plot:

    bash do_postfit_plots.sh

Using original distributions and scaling the signal by a factor 10, to test different strategies in single eras:

    mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_WHSS_2017_v9_chargeAsymmetry_Mu82_EleUL90.root --outputDirDatacard=datacards --structureFile=structure.py --variablesFile=variables_datacard.py

Using BDT variable (true/false refer to the usage of data-driven DYee):

    ./do_workspace_and_fit.sh BDTG6 true
    ./do_workspace_and_fit.sh BDTG6 false

    ./do_workspace_and_fit.sh mlljj20_whss_1j_bin true
    ./do_workspace_and_fit.sh mlljj20_whss_1j_bin false

    ./do_workspace_and_fit.sh BDTG6_TT_more

For newer training, where we only want to compare the full strategy:

    python script_workspace_and_fit.py --datacard_name Combination/WH_chargeAsymmetry_WH_SS_Full2017_v9_BDTG6_TT_more_allFinalStates_alsoLowPt_opt_noZveto --output_name=Combination/FitResults_BDTG6_TT_more.txt --freeze_nuisances=r_higgs

    python script_workspace_and_fit.py --datacard_name Combination/WH_chargeAsymmetry_WH_SS_Full2017_v9_BDTG6_TT_more_allFinalStates_alsoLowPt_DYflip_original_signal_scale_opt_noZveto --output_name Combination/FitResults_BDTG6_TT_more_original_signal_scale.txt --freeze_nuisances r_higgs