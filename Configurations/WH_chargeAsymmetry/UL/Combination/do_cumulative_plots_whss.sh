CUTS_WHSS="
hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2ge20 \
hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2ge20 \
hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2lt20 \
hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2lt20 \
hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2ge20 \
hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2ge20 \
hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2lt20 \
hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2lt20 \
hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20 \
hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20 \
hww2l2v_13TeV_WH_SS_em_1j_plus_pt2lt20 \
hww2l2v_13TeV_WH_SS_em_1j_minus_pt2lt20 \
hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20 \
hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20 \
hww2l2v_13TeV_WH_SS_em_2j_plus_pt2lt20 \
hww2l2v_13TeV_WH_SS_em_2j_minus_pt2lt20 \
hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20 \
hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20 \
hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2lt20 \
hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2lt20 \
hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20 \
hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20 \
hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2lt20 \
hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2lt20 \
"

for CUT in $CUTS_WHSS; do

	echo $CUT

    mkPlot.py --inputFile      ../Full2018_v9/WHSS_Mu82_EleUL90/rootFile/plots_WHSS_2018_v9_chargeAsymmetry_Mu82_EleUL90_DYflip.root \
              --pycfg          ../Full2018_v9/WHSS_Mu82_EleUL90/configuration.py \
              --nuisancesFile  ../Full2018_v9/WHSS_Mu82_EleUL90/nuisances.py \
              --variablesFile  ../Full2018_v9/WHSS_Mu82_EleUL90/variables.py \
              --samplesFile    ../Full2018_v9/WHSS_Mu82_EleUL90/samples.py \
              --cutsFile       ../Full2018_v9/WHSS_Mu82_EleUL90/cuts.py \
              --onlyVariable   BDTG6_TT \
              --onlyCut        ${CUT} \
              --plotFile       plot_blind.py \
              --outputDirPlots plots_Full2018 \
              --removeWeight

    mkPlot.py --inputFile      ../Full2017_v9/WHSS_Mu82_EleUL90/rootFile/plots_WHSS_2017_v9_chargeAsymmetry_Mu82_EleUL90_DYflip.root \
              --pycfg          ../Full2017_v9/WHSS_Mu82_EleUL90/configuration.py \
              --nuisancesFile  ../Full2017_v9/WHSS_Mu82_EleUL90/nuisances.py \
              --variablesFile  ../Full2017_v9/WHSS_Mu82_EleUL90/variables.py \
              --samplesFile    ../Full2017_v9/WHSS_Mu82_EleUL90/samples.py \
              --cutsFile       ../Full2017_v9/WHSS_Mu82_EleUL90/cuts.py \
              --onlyVariable   BDTG6_TT \
              --onlyCut        ${CUT} \
              --plotFile       plot_blind.py \
              --outputDirPlots plots_Full2017 \
              --removeWeight

    mkPlot.py --inputFile      ../2016noHIPM_v9/WHSS_Mu82_EleUL90/rootFile/plots_WHSS_2016noHIPM_v9_chargeAsymmetry_Mu82_EleUL90_DYflip.root \
              --pycfg          ../2016noHIPM_v9/WHSS_Mu82_EleUL90/configuration.py \
              --nuisancesFile  ../2016noHIPM_v9/WHSS_Mu82_EleUL90/nuisances.py \
              --variablesFile  ../2016noHIPM_v9/WHSS_Mu82_EleUL90/variables.py \
              --samplesFile    ../2016noHIPM_v9/WHSS_Mu82_EleUL90/samples.py \
              --cutsFile       ../2016noHIPM_v9/WHSS_Mu82_EleUL90/cuts.py \
              --onlyVariable   BDTG6_TT \
              --onlyCut        ${CUT} \
              --plotFile       plot_blind.py \
              --outputDirPlots plots_2016noHIPM \
              --removeWeight

    mkPlot.py --inputFile      ../2016HIPM_v9/WHSS_Mu82_EleUL90/rootFile/plots_WHSS_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90_DYflip.root \
              --pycfg          ../2016HIPM_v9/WHSS_Mu82_EleUL90/configuration.py \
              --nuisancesFile  ../2016HIPM_v9/WHSS_Mu82_EleUL90/nuisances.py \
              --variablesFile  ../2016HIPM_v9/WHSS_Mu82_EleUL90/variables.py \
              --samplesFile    ../2016HIPM_v9/WHSS_Mu82_EleUL90/samples.py \
              --cutsFile       ../2016HIPM_v9/WHSS_Mu82_EleUL90/cuts.py \
              --onlyVariable   BDTG6_TT \
              --onlyCut        ${CUT} \
              --plotFile       plot_blind.py \
              --outputDirPlots plots_2016HIPM \
              --removeWeight

	python do_cuts_to_merge_WHSS.py ${CUT}

    mkCombinedPlot.py --pycfg          ../Full2018_v9/WHSS_Mu82_EleUL90/configuration.py \
                      --cutsFile       ../Full2018_v9/WHSS_Mu82_EleUL90/cuts.py \
                      --variablesFile  ../Full2018_v9/WHSS_Mu82_EleUL90/variables.py \
                      --inputCutsList  cuts_to_merge_WHSS.py \
                      --outputDirPlots plots_WHSS_cumulative \
                      --variable       BDTG6_TT \
                      --minvariable    -1.0 \
                      --maxvariable    +1.0 \
                      --variableHR     "BDT Discriminant" \
                      --plotFile       plot_blind_run2.py \
                      --yAxisTitle     "Events" \

done
