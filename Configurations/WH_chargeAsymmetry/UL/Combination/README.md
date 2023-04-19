# WH charge asymmetry combination

Here we list the instructions needed to run the WH charge asymmetry analysis combination using Full Run 2 UL samples.

### Setup environment

Load combine:

    cd $HOME/work/combine/CMSSW_10_2_13/src/
    cmsenv
    cd -

    ulimit -s unlimited

Create output directory:

    mkdir -p Combination

### Combine datacards

All the combinations, by era or final state, are described in the `script_combine_datacards.py` script. In this case, to have sensitivity to the asymmetry, we enhance the signal normalization by a factor 10. Run the script using:

    python script_combine_datacards.py

For the combination of the full Run 2, we use the original signal normalization. Run the script using:

    python script_combine_datacards.py 1

To compare with old approach: loose bVeto WP in WHSS channel and old WZ normalization

    python script_combine_datacards.py old

### Extract results

Extract the results associated to the combination of categories described in the `script_combine_datacards.py` script.

Scaling the signal processes by a factor 10 and considering all systematic uncertainties:

    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_Full2018_v9   --output_name=Combination/FitResults_WH_Full2018_v9.txt   --freeze_nuisances=r_higgs
    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_Full2017_v9   --output_name=Combination/FitResults_WH_Full2017_v9.txt   --freeze_nuisances=r_higgs
    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_2016noHIPM_v9 --output_name=Combination/FitResults_WH_2016noHIPM_v9.txt --freeze_nuisances=r_higgs
    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_2016HIPM_v9   --output_name=Combination/FitResults_WH_2016HIPM_v9.txt   --freeze_nuisances=r_higgs

    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_FullRun2_v9   --output_name=Combination/FitResults_WH_FullRun2_v9.txt   --freeze_nuisances=r_higgs

Scaling the signal processes by a factor 10 and freezing all constrained nuisances, to check the effect of systematic uncertainties:

    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_Full2018_v9   --output_name=Combination/FitResults_WH_Full2018_v9_freeze_all.txt   --freeze_nuisances=all
    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_Full2017_v9   --output_name=Combination/FitResults_WH_Full2017_v9_freeze_all.txt   --freeze_nuisances=all
    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_2016noHIPM_v9 --output_name=Combination/FitResults_WH_2016noHIPM_v9_freeze_all.txt --freeze_nuisances=all
    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_2016HIPM_v9   --output_name=Combination/FitResults_WH_2016HIPM_v9_freeze_all.txt   --freeze_nuisances=all

    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_FullRun2_v9   --output_name=Combination/FitResults_WH_FullRun2_v9_freeze_all.txt   --freeze_nuisances=all


Using correct signal scaling and considering all systematic uncertainties:

    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_Full2018_v9_original_signal_scale   --output_name=Combination/FitResults_WH_Full2018_v9_original_signal_scale.txt   --freeze_nuisances=r_higgs
    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_Full2017_v9_original_signal_scale   --output_name=Combination/FitResults_WH_Full2017_v9_original_signal_scale.txt   --freeze_nuisances=r_higgs
    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_2016noHIPM_v9_original_signal_scale --output_name=Combination/FitResults_WH_2016noHIPM_v9_original_signal_scale.txt --freeze_nuisances=r_higgs
    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_2016HIPM_v9_original_signal_scale   --output_name=Combination/FitResults_WH_2016HIPM_v9_original_signal_scale.txt   --freeze_nuisances=r_higgs

    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_FullRun2_v9_original_signal_scale   --output_name=Combination/FitResults_WH_FullRun2_v9_original_signal_scale.txt   --freeze_nuisances=r_higgs

Freezing all constrained nuisances, to check the effect of systematic uncertainties:

    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_Full2018_v9_original_signal_scale   --output_name=Combination/FitResults_WH_Full2018_v9_original_signal_scale_freeze_all.txt   --freeze_nuisances=all
    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_Full2017_v9_original_signal_scale   --output_name=Combination/FitResults_WH_Full2017_v9_original_signal_scale_freeze_all.txt   --freeze_nuisances=all
    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_2016noHIPM_v9_original_signal_scale --output_name=Combination/FitResults_WH_2016noHIPM_v9_original_signal_scale_freeze_all.txt --freeze_nuisances=all
    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_2016HIPM_v9_original_signal_scale   --output_name=Combination/FitResults_WH_2016HIPM_v9_original_signal_scale_freeze_all.txt   --freeze_nuisances=all

    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_FullRun2_v9_original_signal_scale   --output_name=Combination/FitResults_WH_FullRun2_v9_original_signal_scale_freeze_all.txt   --freeze_nuisances=all

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

    combineTool.py -M Impacts -d ../Combination/WH_chargeAsymmetry_WH_FullRun2_v9.root -m 125 --doInitialFit -t -1 --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 --setParameterRanges r_S=0,10:r_A=-1,1 --redefineSignalPOIs r_A --freezeParameters r_higgs

    combineTool.py -M Impacts -d ../Combination/WH_chargeAsymmetry_WH_FullRun2_v9.root -m 125 --doFits -t -1 --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 --setParameterRanges r_S=0,10:r_A=-1,1 --redefineSignalPOIs r_A --job-mode=condor --freezeParameters r_higgs --sub-opts='+JobFlavour="workday"'

    combineTool.py -M Impacts -d ../Combination/WH_chargeAsymmetry_WH_FullRun2_v9.root -m 125 -t -1 -o impacts_WHSS_FullRun2_v9.json --setParameters r_S=1.3693,r_A=0.224,r_higgs=1 --setParameterRanges r_S=0,10:r_A=-1,1 --redefineSignalPOIs r_A --freezeParameters r_higgs

    plotImpacts.py -i impacts_WHSS_FullRun2_v9.json -o Impact_WHSS_FullRun2_v9

    rm combine_*
    rm condor_*
    rm higgsCombine_*

### Produce Likelihood scan

Considering all systematics:

    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_FullRun2_v9   --output_name=Combination/FitResults_WH_FullRun2_v9.txt   --freeze_nuisances=r_higgs --sanity_check=rA_scan

Freezing all systematic effects and leaving only the statistical uncertainty:

    python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_FullRun2_v9   --output_name=Combination/FitResults_WH_FullRun2_v9_freeze_all.txt   --freeze_nuisances=all --sanity_check=rA_scan

### Produce cumulative plots for the four eras of Run 2

    ./do_cumulative_plots_whss.sh	 

    ./do_cumulative_plots_wh3l.sh	 



    mkPlot.py --inputFile      ../Full2018_v9/WHSS_Mu82_EleUL90/rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90_DYflip.root \
              --pycfg          ../Full2018_v9/WHSS_Mu82_EleUL90/configuration.py \
              --nuisancesFile  ../Full2018_v9/WHSS_Mu82_EleUL90/nuisances.py \
              --variablesFile  ../Full2018_v9/WHSS_Mu82_EleUL90/variables.py \
              --samplesFile    ../Full2018_v9/WHSS_Mu82_EleUL90/samples.py \
              --cutsFile       ../Full2018_v9/WHSS_Mu82_EleUL90/cuts.py \
              --onlyVariable   BDTG6 \
              --onlyCut        hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20 \
              --plotFile       plot_blind.py \
              --outputDirPlots plots_Full2018 \
              --removeWeight

    mkPlot.py --inputFile      ../Full2017_v9/WHSS_Mu82_EleUL90/rootFile/plots_WHSS_2017_v9_chargeAsymmetry_Mu82_EleUL90_DYflip.root \
              --pycfg          ../Full2017_v9/WHSS_Mu82_EleUL90/configuration.py \
              --nuisancesFile  ../Full2017_v9/WHSS_Mu82_EleUL90/nuisances.py \
              --variablesFile  ../Full2017_v9/WHSS_Mu82_EleUL90/variables.py \
              --samplesFile    ../Full2017_v9/WHSS_Mu82_EleUL90/samples.py \
              --cutsFile       ../Full2017_v9/WHSS_Mu82_EleUL90/cuts.py \
              --onlyVariable   BDTG6 \
              --onlyCut        hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20 \
              --plotFile       plot_blind.py \
              --outputDirPlots plots_Full2017 \
              --removeWeight

    mkPlot.py --inputFile      ../2016noHIPM_v9/WHSS_Mu82_EleUL90/rootFile/plots_WHSS_2016noHIPM_v9_chargeAsymmetry_Mu82_EleUL90_DYflip.root \
              --pycfg          ../2016noHIPM_v9/WHSS_Mu82_EleUL90/configuration.py \
              --nuisancesFile  ../2016noHIPM_v9/WHSS_Mu82_EleUL90/nuisances.py \
              --variablesFile  ../2016noHIPM_v9/WHSS_Mu82_EleUL90/variables.py \
              --samplesFile    ../2016noHIPM_v9/WHSS_Mu82_EleUL90/samples.py \
              --cutsFile       ../2016noHIPM_v9/WHSS_Mu82_EleUL90/cuts.py \
              --onlyVariable   BDTG6 \
              --onlyCut        hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20 \
              --plotFile       plot_blind.py \
              --outputDirPlots plots_2016noHIPM \
              --removeWeight

    mkPlot.py --inputFile      ../2016HIPM_v9/WHSS_Mu82_EleUL90/rootFile/plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90_DYflip.root \
              --pycfg          ../2016HIPM_v9/WHSS_Mu82_EleUL90/configuration.py \
              --nuisancesFile  ../2016HIPM_v9/WHSS_Mu82_EleUL90/nuisances.py \
              --variablesFile  ../2016HIPM_v9/WHSS_Mu82_EleUL90/variables.py \
              --samplesFile    ../2016HIPM_v9/WHSS_Mu82_EleUL90/samples.py \
              --cutsFile       ../2016HIPM_v9/WHSS_Mu82_EleUL90/cuts.py \
              --onlyVariable   BDTG6 \
              --onlyCut        hww2l2v_13TeV_WH_SS_mm_2j_plus_pt2ge20 \
              --plotFile       plot_blind.py \
              --outputDirPlots plots_2016HIPM \
              --removeWeight


    mkCombinedPlot.py --pycfg          ../Full2018_v9/WHSS_Mu82_EleUL90/configuration.py \
                      --cutsFile       ../Full2018_v9/WHSS_Mu82_EleUL90/cuts.py \
                      --variablesFile  ../Full2018_v9/WHSS_Mu82_EleUL90/variables.py \
                      --inputCutsList  cuts_to_merge_WHSS.py \
                      --outputDirPlots plots_WHSS_cumulative \
                      --variable       BDTG6 \
                      --minvariable    -1.0 \
                      --maxvariable    +1.0 \
                      --variableHR     "BDT Discriminant" \
                      --plotFile       plot_blind_run2.py \
                      --yAxisTitle     "Events" \
                      --divideByBinWidth
