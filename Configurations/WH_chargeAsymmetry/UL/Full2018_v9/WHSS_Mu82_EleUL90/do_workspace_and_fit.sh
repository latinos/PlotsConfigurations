#!/bin/bash

if [ $# -eq 0 ];
then
  echo "$0: Missing arguments"
  exit 1
else
  echo "We got some argument(s)"
  echo "==========================="
  echo "Number of arguments.: $#"
  echo "List of arguments...: $@"
  echo "Arg #1: fit variable: $1"
  echo "Arg #2: use DYflip  : $2"
  echo "==========================="
  VAR=$1
  DYFLIP=$2
fi

if [ $DYFLIP == true ];
then
	echo "I'll use DYflip datacards"
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_${VAR}_DYflip                           --output_name=Combination/FitResults_${VAR}_DYflip.txt
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_${VAR}_eeFinalState_DYflip              --output_name=Combination/FitResults_${VAR}_eeFinalStates_DYflip.txt
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_${VAR}_allFinalStates_DYflip            --output_name=Combination/FitResults_${VAR}_allFinalStates_DYflip.txt
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_${VAR}_alsoLowPt_DYflip                 --output_name=Combination/FitResults_${VAR}_alsoLowPt_DYflip.txt
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_${VAR}_allFinalStates_alsoLowPt_DYflip  --output_name=Combination/FitResults_${VAR}_allFinalStates_alsoLowPt_DYflip.txt
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_${VAR}_allFinalStates_incl_DYflip       --output_name=Combination/FitResults_${VAR}_allFinalStates_incl_DYflip.txt

	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_${VAR}_allFinalStates_DYflip_noZveto           --output_name=Combination/FitResults_${VAR}_allFinalStates_DYflip_noZveto.txt
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_${VAR}_alsoLowPt_DYflip_noZveto                --output_name=Combination/FitResults_${VAR}_alsoLowPt_DYflip_noZveto.txt
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_${VAR}_allFinalStates_alsoLowPt_DYflip_noZveto --output_name=Combination/FitResults_${VAR}_allFinalStates_alsoLowPt_DYflip_noZveto.txt
else
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_${VAR}_allFinalStates		            --output_name=Combination/FitResults_${VAR}_allFinalStates.txt
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_${VAR}_alsoLowPt		                --output_name=Combination/FitResults_${VAR}_alsoLowPt.txt
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_${VAR}_allFinalStates_alsoLowPt         --output_name=Combination/FitResults_${VAR}_allFinalStates_alsoLowPt.txt
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_${VAR}_incl                             --output_name=Combination/FitResults_${VAR}_incl.txt
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_${VAR}_allFinalStates_incl              --output_name=Combination/FitResults_${VAR}_allFinalStates_incl.txt
	
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_${VAR}_noZveto                          --output_name=Combination/FitResults_${VAR}_noZveto.txt
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_${VAR}_allFinalStates_noZveto	        --output_name=Combination/FitResults_${VAR}_allFinalStates_noZveto.txt
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_${VAR}_alsoLowPt_noZveto	            --output_name=Combination/FitResults_${VAR}_alsoLowPt_noZveto.txt
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_${VAR}_allFinalStates_alsoLowPt_noZveto --output_name=Combination/FitResults_${VAR}_allFinalStates_alsoLowPt_noZveto.txt
	
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_${VAR}_ee                               --output_name=Combination/FitResults_${VAR}_ee.txt
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_${VAR}_mm                               --output_name=Combination/FitResults_${VAR}_mm.txt
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_${VAR}                                  --output_name=Combination/FitResults_${VAR}.txt

	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_${VAR}_mm_alsoLowPt                     --output_name=Combination/FitResults_${VAR}_mm_alsoLowPt.txt
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_${VAR}_ee_alsoLowPt                     --output_name=Combination/FitResults_${VAR}_ee_alsoLowPt.txt
fi

