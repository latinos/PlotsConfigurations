# datacards_opt/wh3l_13TeV_sssf_plus_pt2ge20/BDT_WH3l_SSSF_new_v9_more/shapes/histos_wh3l_13TeV_sssf_plus_pt2ge20.root

CUTS=(
"WH_3l_sssf_plus"
"WH_3l_sssf_minus"
"WH_3l_ossf_plus"
"WH_3l_ossf_minus"
)

CUTS_ORIGINAL=(
"wh3l_13TeV_sssf_plus_pt2ge20"
"wh3l_13TeV_sssf_minus_pt2ge20"
"wh3l_13TeV_ossf_plus_pt2ge20"
"wh3l_13TeV_ossf_minus_pt2ge20"
)

VARIABLES=(
"BDT_WH3l_SSSF_new_v9_more"
"BDT_WH3l_SSSF_new_v9_more"
"BDT_WH3l_OSSF_new_v9_more"
"BDT_WH3l_OSSF_new_v9_more"
)

# Pre-fit plots for discriminant variable

rm output.root

for ((idx=0; idx<${#CUTS[@]}; ++idx)); do

	mkPostFitPlot.py \
		--inputFileCombine fitDiagnostics.root \
		--outputFile output.root \
		--variable ${VARIABLES[$idx]} \
		--cut ${CUTS[$idx]} \
		--cutNameInOriginal ${CUTS_ORIGINAL[$idx]} \
		--inputFile datacards_opt/${CUTS_ORIGINAL[$idx]}/${VARIABLES[$idx]}/shapes/histos_${CUTS_ORIGINAL[$idx]}.root \
		--isInputFileFromDatacard 1 \
		--kind p \
		--pycfg configuration_preFit.py \
		--getSignalFromPrefit 1 \
		--samplesFile samples.py

	mkPlot.py \
		--pycfg configuration_preFit.py \
		--inputFile output.root \
		--fileFormats=png \
		--onlyPlot=cratio \
		--showIntegralLegend=1 \
		--onlyCut=${CUTS_ORIGINAL[$idx]} \
		--postFit 0 \
		--skipMissingNuisance 1 \
		--outputDirPlot pre_fit_plots_WH3l_2018 \
		--plotFile plot_blind_preFit.py \
		--samplesFile samples.py

done
