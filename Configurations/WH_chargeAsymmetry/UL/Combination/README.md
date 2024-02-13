# WH charge asymmetry combination

Here we list the instructions needed to run the WH charge asymmetry analysis combination using Full Run 2 UL samples.

### Setup environment

Load combine:

    cd $HOME/work/combine/CMSSW_11_3_4/src/
    cmsenv
    cd -

    ulimit -s unlimited

Create output directory:

    mkdir -p Combination

### Combine datacards

All the combinations, by era or final state, are described in the `script_combine_datacards.py` script. In this case, to have sensitivity to the asymmetry, we enhance the signal normalization by a factor 10. Run the script using:

    python script_combine_datacards_100_bins.py

For the combination of the full Run 2, we use the original signal normalization. Run the script using:

    python script_combine_datacards_100_bins.py 1

### Extract results

Extract the results associated to the combination of categories described in the `script_combine_datacards.py` script.

Scaling the signal processes by a factor 10 and considering all systematic uncertainties:

    python script_workspace_and_fit.py --datacard_name Combination/WH_chargeAsymmetry_WH_Full2018_v9_100_bins   --output_name Combination/FitResults_WH_Full2018_v9_100_bins.txt   --freeze_nuisances r_higgs &
    python script_workspace_and_fit.py --datacard_name Combination/WH_chargeAsymmetry_WH_Full2017_v9_100_bins   --output_name Combination/FitResults_WH_Full2017_v9_100_bins.txt   --freeze_nuisances r_higgs &
    python script_workspace_and_fit.py --datacard_name Combination/WH_chargeAsymmetry_WH_2016noHIPM_v9_100_bins --output_name Combination/FitResults_WH_2016noHIPM_v9_100_bins.txt --freeze_nuisances r_higgs &
    python script_workspace_and_fit.py --datacard_name Combination/WH_chargeAsymmetry_WH_2016HIPM_v9_100_bins   --output_name Combination/FitResults_WH_2016HIPM_v9_100_bins.txt   --freeze_nuisances r_higgs &

    python script_workspace_and_fit.py --datacard_name Combination/WH_chargeAsymmetry_WH_FullRun2_v9_100_bins   --output_name Combination/FitResults_WH_FullRun2_v9_100_bins.txt   --freeze_nuisances r_higgs &

Scaling the signal processes by a factor 10 and freezing all constrained nuisances, to check the effect of systematic uncertainties:

    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_Full2018_v9_100_bins   --output_name=Combination/FitResults_WH_Full2018_v9_100_bins_freeze_all.txt   --freeze_nuisances all &
    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_Full2017_v9_100_bins   --output_name=Combination/FitResults_WH_Full2017_v9_100_bins_freeze_all.txt   --freeze_nuisances all &
    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_2016noHIPM_v9_100_bins --output_name=Combination/FitResults_WH_2016noHIPM_v9_100_bins_freeze_all.txt --freeze_nuisances all & 
    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_2016HIPM_v9_100_bins   --output_name=Combination/FitResults_WH_2016HIPM_v9_100_bins_freeze_all.txt   --freeze_nuisances all &

    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_FullRun2_v9_100_bins   --output_name=Combination/FitResults_WH_FullRun2_v9_100_bins_freeze_all.txt   --freeze_nuisances all &


Using correct signal scaling and considering all systematic uncertainties:

    python script_workspace_and_fit.py --datacard_name Combination/WH_chargeAsymmetry_WH_Full2018_v9_100_bins_original_signal_scale   --output_name Combination/FitResults_WH_Full2018_v9_100_bins_original_signal_scale.txt   --freeze_nuisances r_higgs &
    python script_workspace_and_fit.py --datacard_name Combination/WH_chargeAsymmetry_WH_Full2017_v9_100_bins_original_signal_scale   --output_name Combination/FitResults_WH_Full2017_v9_100_bins_original_signal_scale.txt   --freeze_nuisances r_higgs & 
    python script_workspace_and_fit.py --datacard_name Combination/WH_chargeAsymmetry_WH_2016noHIPM_v9_100_bins_original_signal_scale --output_name Combination/FitResults_WH_2016noHIPM_v9_100_bins_original_signal_scale.txt --freeze_nuisances r_higgs &
    python script_workspace_and_fit.py --datacard_name Combination/WH_chargeAsymmetry_WH_2016HIPM_v9_100_bins_original_signal_scale   --output_name Combination/FitResults_WH_2016HIPM_v9_100_bins_original_signal_scale.txt   --freeze_nuisances r_higgs & 

    python script_workspace_and_fit.py --datacard_name Combination/WH_chargeAsymmetry_WH_FullRun2_v9_100_bins_original_signal_scale   --output_name Combination/FitResults_WH_FullRun2_v9_100_bins_original_signal_scale.txt   --freeze_nuisances r_higgs &
																																		   
Freezing all constrained nuisances, to check the effect of systematic uncertainties:													   
																																		   
    python script_workspace_and_fit.py --datacard_name Combination/WH_chargeAsymmetry_WH_Full2018_v9_100_bins_original_signal_scale   --output_name Combination/FitResults_WH_Full2018_v9_100_bins_original_signal_scale_freeze_all.txt   --freeze_nuisances all &
    python script_workspace_and_fit.py --datacard_name Combination/WH_chargeAsymmetry_WH_Full2017_v9_100_bins_original_signal_scale   --output_name Combination/FitResults_WH_Full2017_v9_100_bins_original_signal_scale_freeze_all.txt   --freeze_nuisances all &
    python script_workspace_and_fit.py --datacard_name Combination/WH_chargeAsymmetry_WH_2016noHIPM_v9_100_bins_original_signal_scale --output_name Combination/FitResults_WH_2016noHIPM_v9_100_bins_original_signal_scale_freeze_all.txt --freeze_nuisances all &
    python script_workspace_and_fit.py --datacard_name Combination/WH_chargeAsymmetry_WH_2016HIPM_v9_100_bins_original_signal_scale   --output_name Combination/FitResults_WH_2016HIPM_v9_100_bins_original_signal_scale_freeze_all.txt   --freeze_nuisances all &

    python script_workspace_and_fit.py --datacard_name Combination/WH_chargeAsymmetry_WH_FullRun2_v9_100_bins_original_signal_scale   --output_name Combination/FitResults_WH_FullRun2_v9_100_bins_original_signal_scale_freeze_all.txt   --freeze_nuisances all &

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

Using r_A as POI:

    combineTool.py -M Impacts -d ../Combination/WH_chargeAsymmetry_WH_FullRun2_v9_100_bins_original_signal_scale.root -m 125 --doInitialFit -t -1 --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 --setParameterRanges r_S=0,10:r_A=-1,1 --redefineSignalPOIs r_A --freezeParameters r_higgs

    combineTool.py -M Impacts -d ../Combination/WH_chargeAsymmetry_WH_FullRun2_v9_100_bins_original_signal_scale.root -m 125 --doFits -t -1 --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 --setParameterRanges r_S=0,10:r_A=-1,1 --redefineSignalPOIs r_A --job-mode=condor --freezeParameters r_higgs --sub-opts='+JobFlavour="workday"'

    combineTool.py -M Impacts -d ../Combination/WH_chargeAsymmetry_WH_FullRun2_v9_100_bins_original_signal_scale.root -m 125 -t -1 -o impacts_FullRun2_v9_100_bins.json --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 --setParameterRanges r_S=0,10:r_A=-1,1 --redefineSignalPOIs r_A --freezeParameters r_higgs

    plotImpacts.py -i impacts_FullRun2_v9_100_bins.json -o Impact_FullRun2_v9_100_bins

    rm combine_*
    rm condor_*
    rm higgsCombine_*

Using r_S as POI:

    combineTool.py -M Impacts -d ../Combination/WH_chargeAsymmetry_WH_FullRun2_v9_100_bins_original_signal_scale.root -m 125 --doInitialFit -t -1 --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 --setParameterRanges r_S=0,10:r_A=-1,1 --redefineSignalPOIs r_S --freezeParameters r_higgs

    combineTool.py -M Impacts -d ../Combination/WH_chargeAsymmetry_WH_FullRun2_v9_100_bins_original_signal_scale.root -m 125 --doFits -t -1 --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 --setParameterRanges r_S=0,10:r_A=-1,1 --redefineSignalPOIs r_S --job-mode=condor --freezeParameters r_higgs --sub-opts='+JobFlavour="workday"'
z
    combineTool.py -M Impacts -d ../Combination/WH_chargeAsymmetry_WH_FullRun2_v9_100_bins_original_signal_scale.root -m 125 -t -1 -o impacts_FullRun2_v9_100_bins_r_S.json --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 --setParameterRanges r_S=0,10:r_A=-1,1 --redefineSignalPOIs r_S --freezeParameters r_higgs

    plotImpacts.py -i impacts_FullRun2_v9_100_bins_r_S.json -o Impact_FullRun2_v9_100_bins_r_S

    rm combine_*
    rm condor_*
    rm higgsCombine_*


### Produce Likelihood scan

Considering all systematics:

    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_FullRun2_v9_100_bins_original_signal_scale   --output_name=Combination/FitResults_WH_FullRun2_v9_100_bins.txt   --freeze_nuisances=r_higgs --sanity_check=rA_scan

Freezing all systematic effects and leaving only the statistical uncertainty:

    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_FullRun2_v9_100_bins_original_signal_scale   --output_name=Combination/FitResults_WH_FullRun2_v9_100_bins_freeze_all.txt   --freeze_nuisances all --sanity_check=rA_scan

Produce likelihood scan plots:

	plot1DScan.py Combination/FitResults_WH_FullRun2_v9_100_bins_rA.root --main-label "All syst" \
    --others 'Combination/FitResults_WH_FullRun2_v9_100_bins_freeze_all_rA.root:Freeze all:600' \
    -o scan1D --POI r_A  --y-max 3 
                       
Example in case more scans need to be compared:

    plot1DScan.py higgsCombineimpactWorkspace.nominal.MultiDimFit.mH120.root --main-label "some label  \
    --others \
    'higgsCombineimpactWorkspace.freeze_RateParams.MultiDimFit.mH120.root:Freeze RateParams:920' \
    'higgsCombineimpactWorkspace.freeze_QCDscaleVV.MultiDimFit.mH120.root:Freeze RateParams+QCDscaleVV:600' \
    'higgsCombineimpactWorkspace.freeze_PS.MultiDimFit.mH120.root:Freeze RateParams+QCDscaleVV+PS:500' \
    'higgsCombineimpactWorkspace.freeze_QCDscaleOther.MultiDimFit.mH120.root:Freeze RateParams+PS+QCDscale:800' \
    'higgsCombineimpactWorkspace.freeze_MCstat.MultiDimFit.mH120.root:Freeze RateParams+PS+QCDscale+MCstat:416' \
    'higgsCombineimpactWorkspace.freeze_all.MultiDimFit.mH120.root:Freeze all:632' \
    -o freeze_th_exp_st \
    --breakdown "RateParams,QCDscaleVV,PS,otherQCDscale,MCstat,rest,stat"


### Produce cumulative plots for the four eras of Run 2

    ./do_cumulative_plots_whss.sh &

    ./do_cumulative_plots_wh3l.sh &

One example, step by step:

    mkPlot.py --inputFile      ../Full2018_v9/WHSS_Mu82_EleUL90/rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90_DYflip.root \
              --pycfg          ../Full2018_v9/WHSS_Mu82_EleUL90/configuration.py \
              --nuisancesFile  ../Full2018_v9/WHSS_Mu82_EleUL90/nuisances.py \
              --variablesFile  ../Full2018_v9/WHSS_Mu82_EleUL90/variables.py \
              --samplesFile    ../Full2018_v9/WHSS_Mu82_EleUL90/samples.py \
              --cutsFile       ../Full2018_v9/WHSS_Mu82_EleUL90/cuts.py \
              --onlyVariable   BDTG6_TT \
              --onlyCut        hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20 \
              --plotFile       plot_blind.py \
              --outputDirPlots plots_Full2018 \
			  --onlyPlot=cratio --showIntegralLegend=1 \
              --removeWeight

    mkPlot.py --inputFile      ../Full2017_v9/WHSS_Mu82_EleUL90/rootFile/plots_WHSS_2017_v9_chargeAsymmetry_Mu82_EleUL90_DYflip.root \
              --pycfg          ../Full2017_v9/WHSS_Mu82_EleUL90/configuration.py \
              --nuisancesFile  ../Full2017_v9/WHSS_Mu82_EleUL90/nuisances.py \
              --variablesFile  ../Full2017_v9/WHSS_Mu82_EleUL90/variables.py \
              --samplesFile    ../Full2017_v9/WHSS_Mu82_EleUL90/samples.py \
              --cutsFile       ../Full2017_v9/WHSS_Mu82_EleUL90/cuts.py \
              --onlyVariable   BDTG6_TT \
              --onlyCut        hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20 \
              --plotFile       plot_blind.py \
              --outputDirPlots plots_Full2017 \
			  --onlyPlot=cratio --showIntegralLegend=1 \
              --removeWeight

    mkPlot.py --inputFile      ../2016noHIPM_v9/WHSS_Mu82_EleUL90/rootFile/plots_WHSS_2016noHIPM_v9_chargeAsymmetry_Mu82_EleUL90_DYflip.root \
              --pycfg          ../2016noHIPM_v9/WHSS_Mu82_EleUL90/configuration.py \
              --nuisancesFile  ../2016noHIPM_v9/WHSS_Mu82_EleUL90/nuisances.py \
              --variablesFile  ../2016noHIPM_v9/WHSS_Mu82_EleUL90/variables.py \
              --samplesFile    ../2016noHIPM_v9/WHSS_Mu82_EleUL90/samples.py \
              --cutsFile       ../2016noHIPM_v9/WHSS_Mu82_EleUL90/cuts.py \
              --onlyVariable   BDTG6_TT \
              --onlyCut        hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20 \
              --plotFile       plot_blind.py \
              --outputDirPlots plots_2016noHIPM \
			  --onlyPlot=cratio --showIntegralLegend=1 \
              --removeWeight

    mkPlot.py --inputFile      ../2016HIPM_v9/WHSS_Mu82_EleUL90/rootFile/plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90_DYflip.root \
              --pycfg          ../2016HIPM_v9/WHSS_Mu82_EleUL90/configuration.py \
              --nuisancesFile  ../2016HIPM_v9/WHSS_Mu82_EleUL90/nuisances.py \
              --variablesFile  ../2016HIPM_v9/WHSS_Mu82_EleUL90/variables.py \
              --samplesFile    ../2016HIPM_v9/WHSS_Mu82_EleUL90/samples.py \
              --cutsFile       ../2016HIPM_v9/WHSS_Mu82_EleUL90/cuts.py \
              --onlyVariable   BDTG6_TT \
              --onlyCut        hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20 \
              --plotFile       plot_blind.py \
              --outputDirPlots plots_2016HIPM \
			  --onlyPlot=cratio --showIntegralLegend=1 \
              --removeWeight


    mkCombinedPlot.py --pycfg          ../Full2018_v9/WHSS_Mu82_EleUL90/configuration.py \
                      --cutsFile       ../Full2018_v9/WHSS_Mu82_EleUL90/cuts.py \
                      --variablesFile  ../Full2018_v9/WHSS_Mu82_EleUL90/variables.py \
                      --inputCutsList  cuts_to_merge_WHSS.py \
                      --outputDirPlots plots_WHSS_cumulative \
                      --variable       BDTG6_TT \
                      --variableHR     "BDT Discriminant" \
                      --plotFile       plot_blind_run2.py \
                      --yAxisTitle     "Events" \
                      --minvariable    -1 \
                      --maxvariable    +1 \
                      --divideByBinWidth

### Goodness of Fit Test

Move to the dedicated directory before running the commands:

	 mkdir -p GoF
	 cd GoF

Run fit on real data:

	combineTool.py -M GoodnessOfFit ../Combination/WH_chargeAsymmetry_WH_FullRun2_v9_100_bins_original_signal_scale.root --algo=saturated

Run fit on many MC toys:

	combineTool.py -M GoodnessOfFit ../Combination/WH_chargeAsymmetry_WH_FullRun2_v9_100_bins_original_signal_scale.root --algo=saturated -t 1 -s 0:1000:1  --job-mode=condor --freezeParameters r_higgs --sub-opts='+JobFlavour="workday"'
	hadd higgsCombine.GoF.root higgsCombine.Test.GoodnessOfFit.mH120.*root

Produce plot comparing toys distribution and actual fit:

    python GoF.py

### Unblinded Impact Plots

Create a dedicated directory:

    mkdir -p Impact_unblid
	cd Impact_unblid/

Using r_A as POI:

    combineTool.py -M Impacts -d ../Combination/WH_chargeAsymmetry_WH_FullRun2_v9_100_bins_original_signal_scale.root -m 125 --doInitialFit --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 --setParameterRanges r_S=0,10:r_A=-1,1 --redefineSignalPOIs r_A --freezeParameters r_higgs --robustFit 1

    combineTool.py -M Impacts -d ../Combination/WH_chargeAsymmetry_WH_FullRun2_v9_100_bins_original_signal_scale.root -m 125 --doFits --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 --setParameterRanges r_S=0,10:r_A=-1,1 --redefineSignalPOIs r_A --job-mode=condor --freezeParameters r_higgs --sub-opts='+JobFlavour="workday"' --robustFit 1

    combineTool.py -M Impacts -d ../Combination/WH_chargeAsymmetry_WH_FullRun2_v9_100_bins_original_signal_scale.root -m 125 -o impacts_FullRun2_v9_100_bins.json --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 --setParameterRanges r_S=0,10:r_A=-1,1 --redefineSignalPOIs r_A --freezeParameters r_higgs --robustFit 1

    plotImpacts.py -i impacts_FullRun2_v9_100_bins.json -o Impact_FullRun2_v9_100_bins --blind

    rm combine_*
    rm condor_*
    rm higgsCombine_*
	

### Unblinded results

Using correct signal scaling and considering all systematic uncertainties:

    python script_workspace_and_fit_unblind.py --datacard_name Combination/WH_chargeAsymmetry_WH_FullRun2_v9_100_bins_original_signal_scale --output_name Combination/FitResults_WH_FullRun2_v9_100_bins_original_signal_scale_unblind.txt --freeze_nuisances r_higgs --sanity_check rA_scan
																																		   
Freezing all constrained nuisances, to check the effect of systematic uncertainties:													   
																																		   
    python script_workspace_and_fit_unblind.py --datacard_name Combination/WH_chargeAsymmetry_WH_FullRun2_v9_100_bins_original_signal_scale --output_name Combination/FitResults_WH_FullRun2_v9_100_bins_original_signal_scale_freeze_all_unblind.txt --freeze_nuisances all --sanity_check rA_scan









### Really needed?? Produce maximum likelihood fit and post-fit plots

To produce likelihood scans, we need to perform the fit using the FitDiagnostic option. If we then save both the shapes and their uncertainties, we will obtain an output file with everything we need to also produce post-fit plots. If we optimized the binning of our discriminant using CombineHarvester, this is also the only way to produce plots of the discriminant with the correct binning.

Run combine using the FitDiagnostic option:

    python script_workspace_and_fit.py --datacard_name Combination/WH_chargeAsymmetry_WH_FullRun2_v9_100_bins.txt  --output_name Combination/WH_chargeAsymmetry_WH_FullRun2_v9_100_bins_FD.txt --freeze_nuisances r_higgs --sanity_check FD

This will create the output file `fitDiagnostics.root`, storing all the pre- and post-fit shapes. Then, we can produce a rootfile with all the shapes, in the format that mkPlot can read, and then plot:

    bash do_postfit_plots.sh

