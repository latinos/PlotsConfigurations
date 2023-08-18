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
	if [ $VAR == "BDTG6_jetbins" ] || [ $VAR == "BDTG6_TT" ];
	then
		echo "I'll use the BDT trained in jet bins"
		python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_${VAR}_DYflip_noZveto                           --output_name=Combination/FitResults_${VAR}_DYflip_noZveto.txt                          --freeze_nuisances=r_higgs
		python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_${VAR}_allFinalStates_DYflip_noZveto            --output_name=Combination/FitResults_${VAR}_allFinalStates_DYflip_noZveto.txt	        --freeze_nuisances=r_higgs
		python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_${VAR}_alsoLowPt_DYflip_noZveto                 --output_name=Combination/FitResults_${VAR}_alsoLowPt_DYflip_noZveto.txt            	--freeze_nuisances=r_higgs
		python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_Full2018_v9_${VAR}_allFinalStates_alsoLowPt_DYflip_noZveto  --output_name=Combination/FitResults_${VAR}_allFinalStates_alsoLowPt_DYflip_noZveto.txt	--freeze_nuisances=r_higgs
	else
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_2016noHIPM_v9_${VAR}_DYflip                           --output_name=Combination/FitResults_${VAR}_DYflip.txt --freeze_nuisances=r_higgs
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_2016noHIPM_v9_${VAR}_eeFinalState_DYflip              --output_name=Combination/FitResults_${VAR}_eeFinalStates_DYflip.txt --freeze_nuisances=r_higgs
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_2016noHIPM_v9_${VAR}_allFinalStates_DYflip            --output_name=Combination/FitResults_${VAR}_allFinalStates_DYflip.txt --freeze_nuisances=r_higgs
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_2016noHIPM_v9_${VAR}_alsoLowPt_DYflip                 --output_name=Combination/FitResults_${VAR}_alsoLowPt_DYflip.txt --freeze_nuisances=r_higgs
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_2016noHIPM_v9_${VAR}_allFinalStates_alsoLowPt_DYflip  --output_name=Combination/FitResults_${VAR}_allFinalStates_alsoLowPt_DYflip.txt --freeze_nuisances=r_higgs
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_2016noHIPM_v9_${VAR}_allFinalStates_incl_DYflip       --output_name=Combination/FitResults_${VAR}_allFinalStates_incl_DYflip.txt --freeze_nuisances=r_higgs

	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_2016noHIPM_v9_${VAR}_allFinalStates_DYflip_noZveto           --output_name=Combination/FitResults_${VAR}_allFinalStates_DYflip_noZveto.txt --freeze_nuisances=r_higgs
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_2016noHIPM_v9_${VAR}_alsoLowPt_DYflip_noZveto                --output_name=Combination/FitResults_${VAR}_alsoLowPt_DYflip_noZveto.txt --freeze_nuisances=r_higgs
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_2016noHIPM_v9_${VAR}_allFinalStates_alsoLowPt_DYflip_noZveto --output_name=Combination/FitResults_${VAR}_allFinalStates_alsoLowPt_DYflip_noZveto.txt --freeze_nuisances=r_higgs
	fi
else
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_2016noHIPM_v9_${VAR}_allFinalStates		            --output_name=Combination/FitResults_${VAR}_allFinalStates.txt --freeze_nuisances=r_higgs
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_2016noHIPM_v9_${VAR}_alsoLowPt		                --output_name=Combination/FitResults_${VAR}_alsoLowPt.txt --freeze_nuisances=r_higgs
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_2016noHIPM_v9_${VAR}_allFinalStates_alsoLowPt         --output_name=Combination/FitResults_${VAR}_allFinalStates_alsoLowPt.txt --freeze_nuisances=r_higgs
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_2016noHIPM_v9_${VAR}_incl                             --output_name=Combination/FitResults_${VAR}_incl.txt --freeze_nuisances=r_higgs
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_2016noHIPM_v9_${VAR}_allFinalStates_incl              --output_name=Combination/FitResults_${VAR}_allFinalStates_incl.txt --freeze_nuisances=r_higgs
	
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_2016noHIPM_v9_${VAR}_noZveto                          --output_name=Combination/FitResults_${VAR}_noZveto.txt --freeze_nuisances=r_higgs
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_2016noHIPM_v9_${VAR}_allFinalStates_noZveto	        --output_name=Combination/FitResults_${VAR}_allFinalStates_noZveto.txt --freeze_nuisances=r_higgs
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_2016noHIPM_v9_${VAR}_alsoLowPt_noZveto	            --output_name=Combination/FitResults_${VAR}_alsoLowPt_noZveto.txt --freeze_nuisances=r_higgs
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_2016noHIPM_v9_${VAR}_allFinalStates_alsoLowPt_noZveto --output_name=Combination/FitResults_${VAR}_allFinalStates_alsoLowPt_noZveto.txt --freeze_nuisances=r_higgs
	
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_2016noHIPM_v9_${VAR}_ee                               --output_name=Combination/FitResults_${VAR}_ee.txt --freeze_nuisances=r_higgs
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_2016noHIPM_v9_${VAR}_mm                               --output_name=Combination/FitResults_${VAR}_mm.txt --freeze_nuisances=r_higgs
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_2016noHIPM_v9_${VAR}                                  --output_name=Combination/FitResults_${VAR}.txt --freeze_nuisances=r_higgs

	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_2016noHIPM_v9_${VAR}_mm_alsoLowPt                     --output_name=Combination/FitResults_${VAR}_mm_alsoLowPt.txt --freeze_nuisances=r_higgs
	python script_workspace_and_fit.py --datacard_name=Combination/WH_chargeAsymmetry_WH_SS_2016noHIPM_v9_${VAR}_ee_alsoLowPt                     --output_name=Combination/FitResults_${VAR}_ee_alsoLowPt.txt --freeze_nuisances=r_higgs
fi

