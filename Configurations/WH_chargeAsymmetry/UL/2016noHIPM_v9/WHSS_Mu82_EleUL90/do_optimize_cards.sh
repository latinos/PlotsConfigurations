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
  echo "Arg #1: Variable    : $1"
  echo "==========================="
  VAR=$1
fi

# Example:
# python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2ge20 BDTG6_TT_more datacard_opt 0.25

### Datacards with enhanced signal scaling
##########################################

### mm

# minus
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2ge20 ${VAR} datacards_opt 0.25
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2ge20 ${VAR} datacards_opt 0.25
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2lt20 ${VAR} datacards_opt 0.25
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2lt20 ${VAR} datacards_opt 0.25

# plus
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2ge20 ${VAR} datacards_opt 0.25
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2ge20 ${VAR} datacards_opt 0.25
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2lt20 ${VAR} datacards_opt 0.25
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2lt20 ${VAR} datacards_opt 0.25


### em

# minus
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20 ${VAR} datacards_opt 0.25
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20 ${VAR} datacards_opt 0.25
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_em_1j_minus_pt2lt20 ${VAR} datacards_opt 0.25
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_em_2j_minus_pt2lt20 ${VAR} datacards_opt 0.25

# plus
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20 ${VAR} datacards_opt 0.25
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20 ${VAR} datacards_opt 0.25
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2lt20 ${VAR} datacards_opt 0.25
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2lt20 ${VAR} datacards_opt 0.25


### ee

# minus
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20 ${VAR} datacards_opt 0.25
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20 ${VAR} datacards_opt 0.25
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_em_1j_plus_pt2lt20 ${VAR} datacards_opt 0.25
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_em_2j_plus_pt2lt20 ${VAR} datacards_opt 0.25

# plus
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20 ${VAR} datacards_opt 0.25
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20 ${VAR} datacards_opt 0.25
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2lt20 ${VAR} datacards_opt 0.25
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2lt20 ${VAR} datacards_opt 0.25


### Datacards with original signal scaling
##########################################

### mm

# minus
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2ge20 ${VAR} datacards_DYflip_original_signal_scale_opt 0.25
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2ge20 ${VAR} datacards_DYflip_original_signal_scale_opt 0.25
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2lt20 ${VAR} datacards_DYflip_original_signal_scale_opt 0.25
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2lt20 ${VAR} datacards_DYflip_original_signal_scale_opt 0.25

# plus
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2ge20 ${VAR} datacards_DYflip_original_signal_scale_opt 0.25
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2ge20 ${VAR} datacards_DYflip_original_signal_scale_opt 0.25
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2lt20 ${VAR} datacards_DYflip_original_signal_scale_opt 0.25
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2lt20 ${VAR} datacards_DYflip_original_signal_scale_opt 0.25


### em

# minus
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20 ${VAR} datacards_DYflip_original_signal_scale_opt 0.25
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20 ${VAR} datacards_DYflip_original_signal_scale_opt 0.25
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_em_1j_minus_pt2lt20 ${VAR} datacards_DYflip_original_signal_scale_opt 0.25
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_em_2j_minus_pt2lt20 ${VAR} datacards_DYflip_original_signal_scale_opt 0.25

# plus
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20 ${VAR} datacards_DYflip_original_signal_scale_opt 0.25
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20 ${VAR} datacards_DYflip_original_signal_scale_opt 0.25
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2lt20 ${VAR} datacards_DYflip_original_signal_scale_opt 0.25
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2lt20 ${VAR} datacards_DYflip_original_signal_scale_opt 0.25


### ee

# minus
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20 ${VAR} datacards_DYflip_original_signal_scale_opt 0.25
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20 ${VAR} datacards_DYflip_original_signal_scale_opt 0.25
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_em_1j_plus_pt2lt20 ${VAR} datacards_DYflip_original_signal_scale_opt 0.25
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_em_2j_plus_pt2lt20 ${VAR} datacards_DYflip_original_signal_scale_opt 0.25

# plus
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20 ${VAR} datacards_DYflip_original_signal_scale_opt 0.25
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20 ${VAR} datacards_DYflip_original_signal_scale_opt 0.25
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2lt20 ${VAR} datacards_DYflip_original_signal_scale_opt 0.25
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2lt20 ${VAR} datacards_DYflip_original_signal_scale_opt 0.25
