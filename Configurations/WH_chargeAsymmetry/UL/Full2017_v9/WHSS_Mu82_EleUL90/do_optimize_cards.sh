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
  echo "Arg #2: Per-bin error: $2"
  echo "==========================="
  VAR=$1
  ERR=$2
fi

# Example:
# python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2ge20 BDTG6_TT_more datacard_opt 0.10

### Datacards with enhanced signal scaling
##########################################

### mm

# minus
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2ge20 ${VAR} datacards_opt ${ERR}
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2ge20 ${VAR} datacards_opt ${ERR}
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2lt20 ${VAR} datacards_opt ${ERR}
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2lt20 ${VAR} datacards_opt ${ERR}

# plus
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2ge20 ${VAR} datacards_opt ${ERR}
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2ge20 ${VAR} datacards_opt ${ERR}
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2lt20 ${VAR} datacards_opt ${ERR}
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2lt20 ${VAR} datacards_opt ${ERR}


### em

# minus
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20 ${VAR} datacards_opt ${ERR}
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20 ${VAR} datacards_opt ${ERR}
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_em_1j_minus_pt2lt20 ${VAR} datacards_opt ${ERR}
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_em_2j_minus_pt2lt20 ${VAR} datacards_opt ${ERR}

# plus
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20 ${VAR} datacards_opt ${ERR}
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20 ${VAR} datacards_opt ${ERR}
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2lt20 ${VAR} datacards_opt ${ERR}
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2lt20 ${VAR} datacards_opt ${ERR}


### ee

# minus
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20 ${VAR} datacards_opt ${ERR}
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20 ${VAR} datacards_opt ${ERR}
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_em_1j_plus_pt2lt20 ${VAR} datacards_opt ${ERR}
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_em_2j_plus_pt2lt20 ${VAR} datacards_opt ${ERR}

# plus
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20 ${VAR} datacards_opt ${ERR}
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20 ${VAR} datacards_opt ${ERR}
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2lt20 ${VAR} datacards_opt ${ERR}
python Rebin.py datacards_DYflip hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2lt20 ${VAR} datacards_opt ${ERR}


### Datacards with original signal scaling
##########################################

### mm

# minus
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2ge20 ${VAR} datacards_DYflip_original_signal_scale_opt ${ERR}
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2ge20 ${VAR} datacards_DYflip_original_signal_scale_opt ${ERR}
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_noZveto_mm_1j_minus_pt2lt20 ${VAR} datacards_DYflip_original_signal_scale_opt ${ERR}
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_noZveto_mm_2j_minus_pt2lt20 ${VAR} datacards_DYflip_original_signal_scale_opt ${ERR}

# plus
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2ge20 ${VAR} datacards_DYflip_original_signal_scale_opt ${ERR}
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2ge20 ${VAR} datacards_DYflip_original_signal_scale_opt ${ERR}
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_noZveto_mm_1j_plus_pt2lt20 ${VAR} datacards_DYflip_original_signal_scale_opt ${ERR}
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_noZveto_mm_2j_plus_pt2lt20 ${VAR} datacards_DYflip_original_signal_scale_opt ${ERR}


### em

# minus
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_em_1j_minus_pt2ge20 ${VAR} datacards_DYflip_original_signal_scale_opt ${ERR}
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_em_2j_minus_pt2ge20 ${VAR} datacards_DYflip_original_signal_scale_opt ${ERR}
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_em_1j_minus_pt2lt20 ${VAR} datacards_DYflip_original_signal_scale_opt ${ERR}
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_em_2j_minus_pt2lt20 ${VAR} datacards_DYflip_original_signal_scale_opt ${ERR}

# plus
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2ge20 ${VAR} datacards_DYflip_original_signal_scale_opt ${ERR}
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2ge20 ${VAR} datacards_DYflip_original_signal_scale_opt ${ERR}
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_ee_1j_minus_pt2lt20 ${VAR} datacards_DYflip_original_signal_scale_opt ${ERR}
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_ee_2j_minus_pt2lt20 ${VAR} datacards_DYflip_original_signal_scale_opt ${ERR}


### ee

# minus
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_em_1j_plus_pt2ge20 ${VAR} datacards_DYflip_original_signal_scale_opt ${ERR}
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_em_2j_plus_pt2ge20 ${VAR} datacards_DYflip_original_signal_scale_opt ${ERR}
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_em_1j_plus_pt2lt20 ${VAR} datacards_DYflip_original_signal_scale_opt ${ERR}
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_em_2j_plus_pt2lt20 ${VAR} datacards_DYflip_original_signal_scale_opt ${ERR}

# plus
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2ge20 ${VAR} datacards_DYflip_original_signal_scale_opt ${ERR}
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2ge20 ${VAR} datacards_DYflip_original_signal_scale_opt ${ERR}
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_ee_1j_plus_pt2lt20 ${VAR} datacards_DYflip_original_signal_scale_opt ${ERR}
python Rebin.py datacards_DYflip_original_signal_scale hww2l2v_13TeV_WH_SS_ee_2j_plus_pt2lt20 ${VAR} datacards_DYflip_original_signal_scale_opt ${ERR}
