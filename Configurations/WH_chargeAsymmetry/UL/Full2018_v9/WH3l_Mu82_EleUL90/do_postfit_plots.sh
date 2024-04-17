#!/bin/bash
if [ $# -eq 0 ];
then
  echo "$0: Missing arguments"
  exit 1
else
  echo "We got some argument(s)"
  echo "==========================="
  echo "Number of arguments. : $#"
  echo "List of arguments... : $@"
  echo "Arg #1: Variable     : $1"
  echo "Arg #2: Input file   : $2"
  echo "==========================="
  VAR=$1
  INPUT=$2
fi

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

echo $VAR

if [ $VAR == new_v9_more ];
then
	VARIABLES=(
		"BDT_WH3l_SSSF_new_v9_more"
		"BDT_WH3l_SSSF_new_v9_more"
		"BDT_WH3l_OSSF_new_v9_more"
		"BDT_WH3l_OSSF_new_v9_more"
	)
fi

if [ $VAR == new_v9_100_bins ];
then
	VARIABLES=(
		"BDT_WH3l_SSSF_new_v9_100_bins"
		"BDT_WH3l_SSSF_new_v9_100_bins"
		"BDT_WH3l_OSSF_new_v9_100_bins"
		"BDT_WH3l_OSSF_new_v9_100_bins"
	)
fi

if [ $VAR == binning_opt ];
then
	VARIABLES=(
		"BDT_WH3l_SSSF_new_v9_0_75"
		"BDT_WH3l_SSSF_new_v9_0_75"
		"BDT_WH3l_OSSF_new_v9_0_75"
		"BDT_WH3l_OSSF_new_v9_0_75"
	)
fi

echo $VARIABLES

# Pre-fit plots for discriminant variable

rm output.root

for ((idx=0; idx<${#CUTS[@]}; ++idx)); do

	mkPostFitPlot.py \
		--inputFileCombine ${INPUT} \
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

# # Post-fit plots for discriminant variable

# rm output.root

# for ((idx=0; idx<${#CUTS[@]}; ++idx)); do

# 	mkPostFitPlot.py \
# 		--inputFileCombine fitDiagnostics.root \
# 		--outputFile output.root \
# 		--variable BDTG6_TT_more \
# 		--cut WH_SS_em_1j_plus \
# 		--cutNameInOriginal ${CUTS_ORIGINAL[$idx]} \
# 		--inputFile datacards_opt/${CUTS_ORIGINAL[$idx]}/BDTG6_TT_more/shapes/histos_${CUTS_ORIGINAL[$idx]}.root \
# 		--isInputFileFromDatacard 1 \
# 		--kind s \
# 		--pycfg configuration_preFit.py \
# 		--samplesFile samples_preFit.py

# 	mkPlot.py \
# 		--pycfg configuration_preFit.py \
# 		--inputFile output.root \
# 		--fileFormats=png \
# 		--onlyPlot=cratio \
# 		--showIntegralLegend=1 \
# 		--onlyCut=${CUTS_ORIGINAL[$idx]} \
# 		--postFit 0 \
# 		--skipMissingNuisance 1 \
# 		--outputDirPlot post_fit_plots_2018 \
# 		--plotFile plot_blind_halfDY_preFit.py \
# 		--samplesFile samples_preFit.py

# done
