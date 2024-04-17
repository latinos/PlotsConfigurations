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
	"WH_SS_em_1j_plus" 
	"WH_SS_em_1j_minus"
	"WH_SS_mm_1j_plus"
	"WH_SS_mm_1j_minus"
	"WH_SS_ee_1j_plus"
	"WH_SS_ee_1j_minus"
	"WH_SS_em_2j_plus"
	"WH_SS_em_2j_minus"
	"WH_SS_mm_2j_plus"
	"WH_SS_mm_2j_minus"
	"WH_SS_ee_2j_plus"
	"WH_SS_ee_2j_minus"
	"WH_SS_em_1j_plus_low_pt" 
	"WH_SS_em_1j_minus_low_pt"
	"WH_SS_mm_1j_plus_low_pt"
	"WH_SS_mm_1j_minus_low_pt"
	"WH_SS_ee_1j_plus_low_pt"
	"WH_SS_ee_1j_minus_low_pt"
	"WH_SS_em_2j_plus_low_pt"
	"WH_SS_em_2j_minus_low_pt"
	"WH_SS_mm_2j_plus_low_pt"
	"WH_SS_mm_2j_minus_low_pt"
	"WH_SS_ee_2j_plus_low_pt"
	"WH_SS_ee_2j_minus_low_pt"
)

CUTS_ORIGINAL=(
	"hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20" 
	"hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20" 
	"hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2ge20" 
	"hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2ge20" 
	"hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20" 
	"hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20" 
	"hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20" 
	"hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20" 
	"hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2ge20" 
	"hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2ge20" 
	"hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20" 
	"hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20" 
	"hww2l2v_13TeV_WH_SS_em_1j_plus_pt2lt20" 
	"hww2l2v_13TeV_WH_SS_em_1j_minus_pt2lt20" 
	"hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2lt20" 
	"hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2lt20" 
	"hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2lt20" 
	"hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2lt20" 
	"hww2l2v_13TeV_WH_SS_em_2j_plus_pt2lt20" 
	"hww2l2v_13TeV_WH_SS_em_2j_minus_pt2lt20" 
	"hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2lt20" 
	"hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2lt20" 
	"hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2lt20" 
	"hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2lt20" 
)

if [ $VAR == binning ];
then
	VARIABLES=(
		"BDTG6_TT_0_6"
		"BDTG6_TT_0_6"
		"BDTG6_TT_0_6"
		"BDTG6_TT_0_6"
		"BDTG6_TT_0_6"
		"BDTG6_TT_0_6"
		"BDTG6_TT_0_5"
		"BDTG6_TT_0_5"
		"BDTG6_TT_0_0"
		"BDTG6_TT_0_0"
		"BDTG6_TT_0_0"
		"BDTG6_TT_0_0"
		"BDTG6_TT_0_5"
		"BDTG6_TT_0_5"
		"BDTG6_TT_0_5"
		"BDTG6_TT_0_5"
		"BDTG6_TT_0_0"
		"BDTG6_TT_0_0"
		"BDTG6_TT_0_0"
		"BDTG6_TT_0_0"
		"BDTG6_TT_0_0"
		"BDTG6_TT_0_0"
		"BDTG6_TT_0_0"
		"BDTG6_TT_0_0"
	)
fi

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
		--outputDirPlot pre_fit_plots_WHSS_2016noHIPM \
		--plotFile plot_blind_halfDY_preFit.py \
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
