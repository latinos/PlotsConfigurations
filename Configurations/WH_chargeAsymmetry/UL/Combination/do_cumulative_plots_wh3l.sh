# CUTS_WH3L="
# wh3l_13TeV_sssf_plus_pt2ge20 \
# wh3l_13TeV_sssf_minus_pt2ge20 \
# wh3l_13TeV_ossf_plus_pt2ge20 \
# wh3l_13TeV_ossf_minus_pt2ge20 \
# "

# VARIABLES="
# BDT_WH3l_OSSF_new_v9 \
# BDT_WH3l_SSSF_new_v9 \
# "

# for CUT in $CUTS_WH3L; do

# 	for VAR in $VARIABLES; do

# 		echo $CUT
# 		echo $VAR


#         mkPlot.py --inputFile      ../Full2018_v9/WH3l_Mu82_EleUL90/rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root \
#                   --pycfg          ../Full2018_v9/WH3l_Mu82_EleUL90/configuration.py \
#                   --nuisancesFile  ../Full2018_v9/WH3l_Mu82_EleUL90/nuisances.py \
#                   --variablesFile  ../Full2018_v9/WH3l_Mu82_EleUL90/variables.py \
#                   --samplesFile    ../Full2018_v9/WH3l_Mu82_EleUL90/samples.py \
#                   --cutsFile       ../Full2018_v9/WH3l_Mu82_EleUL90/cuts.py \
#                   --onlyVariable   ${VAR} \
#                   --onlyCut        ${CUT} \
#                   --plotFile       plot_blind_wh3l.py \
#                   --outputDirPlots plots_Full2018 \
#                   --removeWeight
    
#         mkPlot.py --inputFile      ../Full2017_v9/WH3l_Mu82_EleUL90/rootFile/plots_WH3l_2017_v9_chargeAsymmetry_Mu82_EleUL90.root \
#                   --pycfg          ../Full2017_v9/WH3l_Mu82_EleUL90/configuration.py \
#                   --nuisancesFile  ../Full2017_v9/WH3l_Mu82_EleUL90/nuisances.py \
#                   --variablesFile  ../Full2017_v9/WH3l_Mu82_EleUL90/variables.py \
#                   --samplesFile    ../Full2017_v9/WH3l_Mu82_EleUL90/samples.py \
#                   --cutsFile       ../Full2017_v9/WH3l_Mu82_EleUL90/cuts.py \
#                   --onlyVariable   ${VAR} \
#                   --onlyCut        ${CUT} \
#                   --plotFile       plot_blind_wh3l.py \
#                   --outputDirPlots plots_Full2017 \
#                   --removeWeight
    
#         mkPlot.py --inputFile      ../2016noHIPM_v9/WH3l_Mu82_EleUL90/rootFile/plots_WH3l_2016noHIPM_v9_chargeAsymmetry_Mu82_EleUL90.root \
#                   --pycfg          ../2016noHIPM_v9/WH3l_Mu82_EleUL90/configuration.py \
#                   --nuisancesFile  ../2016noHIPM_v9/WH3l_Mu82_EleUL90/nuisances.py \
#                   --variablesFile  ../2016noHIPM_v9/WH3l_Mu82_EleUL90/variables.py \
#                   --samplesFile    ../2016noHIPM_v9/WH3l_Mu82_EleUL90/samples.py \
#                   --cutsFile       ../2016noHIPM_v9/WH3l_Mu82_EleUL90/cuts.py \
#                   --onlyVariable   ${VAR} \
#                   --onlyCut        ${CUT} \
#                   --plotFile       plot_blind_wh3l.py \
#                   --outputDirPlots plots_2016noHIPM \
#                   --removeWeight
    
#         mkPlot.py --inputFile      ../2016HIPM_v9/WH3l_Mu82_EleUL90/rootFile/plots_WH3l_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90.root \
#                   --pycfg          ../2016HIPM_v9/WH3l_Mu82_EleUL90/configuration.py \
#                   --nuisancesFile  ../2016HIPM_v9/WH3l_Mu82_EleUL90/nuisances.py \
#                   --variablesFile  ../2016HIPM_v9/WH3l_Mu82_EleUL90/variables.py \
#                   --samplesFile    ../2016HIPM_v9/WH3l_Mu82_EleUL90/samples.py \
#                   --cutsFile       ../2016HIPM_v9/WH3l_Mu82_EleUL90/cuts.py \
#                   --onlyVariable   ${VAR} \
#                   --onlyCut        ${CUT} \
#                   --plotFile       plot_wh3l_blind_py \
#                   --outputDirPlots plots_2016HIPM \
#                   --removeWeight
    
#     	python do_cuts_to_merge_WH3l.py ${CUT} ${VAR}
    
#         mkCombinedPlot.py --pycfg          ../Full2018_v9/WH3l_Mu82_EleUL90/configuration.py \
#                           --cutsFile       ../Full2018_v9/WH3l_Mu82_EleUL90/cuts.py \
#                           --variablesFile  ../Full2018_v9/WH3l_Mu82_EleUL90/variables.py \
#                           --inputCutsList  cuts_to_merge_WH3l.py \
#                           --outputDirPlots plots_WH3l_cumulative \
#                           --variable       ${VAR} \
#                           --minvariable    -1.0 \
#                           --maxvariable    +1.0 \
#                           --variableHR     "BDT Discriminant" \
#                           --plotFile       plot_blind_wh3l_run2.py \
#                           --yAxisTitle     "Events" \

# 	done

# done



CUTS_WH3L="
hww2l2v_13TeV_WH_SS_WZ_1j \
hww2l2v_13TeV_WH_SS_WZ_2j \
wh3l_wz_13TeV \
"

VARIABLES="
BDTG6_TT \
BDT_WH3l_OSSF_new_v9 \
BDT_WH3l_SSSF_new_v9 \
"

for CUT in $CUTS_WH3L; do

	for VAR in $VARIABLES; do

		echo $CUT
		echo $VAR


        mkPlot.py --inputFile      ../Full2018_v9/WH3l_Mu82_EleUL90/rootFile/plots_WH3l_2018_v9_chargeAsymmetry_Mu82_EleUL90.root \
                  --pycfg          ../Full2018_v9/WH3l_Mu82_EleUL90/configuration.py \
                  --nuisancesFile  ../Full2018_v9/WH3l_Mu82_EleUL90/nuisances.py \
                  --variablesFile  ../Full2018_v9/WH3l_Mu82_EleUL90/variables.py \
                  --samplesFile    ../Full2018_v9/WH3l_Mu82_EleUL90/samples.py \
                  --cutsFile       ../Full2018_v9/WH3l_Mu82_EleUL90/cuts.py \
                  --onlyVariable   ${VAR} \
                  --onlyCut        ${CUT} \
                  --plotFile       plot_wh3l.py \
                  --outputDirPlots plots_Full2018 \
                  --removeWeight
    
        mkPlot.py --inputFile      ../Full2017_v9/WH3l_Mu82_EleUL90/rootFile/plots_WH3l_2017_v9_chargeAsymmetry_Mu82_EleUL90.root \
                  --pycfg          ../Full2017_v9/WH3l_Mu82_EleUL90/configuration.py \
                  --nuisancesFile  ../Full2017_v9/WH3l_Mu82_EleUL90/nuisances.py \
                  --variablesFile  ../Full2017_v9/WH3l_Mu82_EleUL90/variables.py \
                  --samplesFile    ../Full2017_v9/WH3l_Mu82_EleUL90/samples.py \
                  --cutsFile       ../Full2017_v9/WH3l_Mu82_EleUL90/cuts.py \
                  --onlyVariable   ${VAR} \
                  --onlyCut        ${CUT} \
                  --plotFile       plot_wh3l.py \
                  --outputDirPlots plots_Full2017 \
                  --removeWeight
    
        mkPlot.py --inputFile      ../2016noHIPM_v9/WH3l_Mu82_EleUL90/rootFile/plots_WH3l_2016noHIPM_v9_chargeAsymmetry_Mu82_EleUL90.root \
                  --pycfg          ../2016noHIPM_v9/WH3l_Mu82_EleUL90/configuration.py \
                  --nuisancesFile  ../2016noHIPM_v9/WH3l_Mu82_EleUL90/nuisances.py \
                  --variablesFile  ../2016noHIPM_v9/WH3l_Mu82_EleUL90/variables.py \
                  --samplesFile    ../2016noHIPM_v9/WH3l_Mu82_EleUL90/samples.py \
                  --cutsFile       ../2016noHIPM_v9/WH3l_Mu82_EleUL90/cuts.py \
                  --onlyVariable   ${VAR} \
                  --onlyCut        ${CUT} \
                  --plotFile       plot_wh3l.py \
                  --outputDirPlots plots_2016noHIPM \
                  --removeWeight
    
        mkPlot.py --inputFile      ../2016HIPM_v9/WH3l_Mu82_EleUL90/rootFile/plots_WH3l_2016HIPM_v9_chargeAsymmetry_Mu82_EleUL90.root \
                  --pycfg          ../2016HIPM_v9/WH3l_Mu82_EleUL90/configuration.py \
                  --nuisancesFile  ../2016HIPM_v9/WH3l_Mu82_EleUL90/nuisances.py \
                  --variablesFile  ../2016HIPM_v9/WH3l_Mu82_EleUL90/variables.py \
                  --samplesFile    ../2016HIPM_v9/WH3l_Mu82_EleUL90/samples.py \
                  --cutsFile       ../2016HIPM_v9/WH3l_Mu82_EleUL90/cuts.py \
                  --onlyVariable   ${VAR} \
                  --onlyCut        ${CUT} \
                  --plotFile       plot_wh3l.py \
                  --outputDirPlots plots_2016HIPM \
                  --removeWeight
    
    	python do_cuts_to_merge_WH3l.py ${CUT} ${VAR}
    
        mkCombinedPlot.py --pycfg          ../Full2018_v9/WH3l_Mu82_EleUL90/configuration.py \
                          --cutsFile       ../Full2018_v9/WH3l_Mu82_EleUL90/cuts.py \
                          --variablesFile  ../Full2018_v9/WH3l_Mu82_EleUL90/variables.py \
                          --inputCutsList  cuts_to_merge_WH3l.py \
                          --outputDirPlots plots_WH3l_cumulative \
                          --variable       ${VAR} \
                          --minvariable    -1.0 \
                          --maxvariable    +1.0 \
                          --variableHR     "BDT Discriminant" \
                          --plotFile       plot_wh3l_run2.py \
                          --yAxisTitle     "Events" \

	done

done



