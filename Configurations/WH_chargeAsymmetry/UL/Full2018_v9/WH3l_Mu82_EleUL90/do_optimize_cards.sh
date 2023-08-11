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
# python Rebin.py datacards wh3l_13TeV_sssf_minus_pt2ge20 BDT_WH3l_OSSF_v9_more datacard_opt 0.25

### Datacards with enhanced signal scaling
##########################################

### SSSF

# minus
python Rebin.py datacards wh3l_13TeV_sssf_minus_pt2ge20 ${VAR/OSSF/SSSF} datacards_opt 0.25
python Rebin.py datacards wh3l_13TeV_sssf_minus_pt2lt20 ${VAR/OSSF/SSSF} datacards_opt 0.25

# plus
python Rebin.py datacards wh3l_13TeV_sssf_plus_pt2ge20 ${VAR/OSSF/SSSF} datacards_opt 0.25
python Rebin.py datacards wh3l_13TeV_sssf_plus_pt2lt20 ${VAR/OSSF/SSSF} datacards_opt 0.25


### OSSF

# minus
python Rebin.py datacards wh3l_13TeV_ossf_minus_pt2ge20 ${VAR} datacards_opt 0.25
python Rebin.py datacards wh3l_13TeV_ossf_minus_pt2lt20 ${VAR} datacards_opt 0.25

# plus
python Rebin.py datacards wh3l_13TeV_ossf_plus_pt2ge20 ${VAR} datacards_opt 0.25
python Rebin.py datacards wh3l_13TeV_ossf_plus_pt2lt20 ${VAR} datacards_opt 0.25


### Datacards with original signal scaling
##########################################

### SSSF

# minus
python Rebin.py datacards_original_signal_scale wh3l_13TeV_sssf_minus_pt2ge20 ${VAR/OSSF/SSSF} datacards_original_signal_scale_opt 0.25
python Rebin.py datacards_original_signal_scale wh3l_13TeV_sssf_minus_pt2lt20 ${VAR/OSSF/SSSF} datacards_original_signal_scale_opt 0.25

# plus
python Rebin.py datacards_original_signal_scale wh3l_13TeV_sssf_plus_pt2ge20 ${VAR/OSSF/SSSF} datacards_original_signal_scale_opt 0.25
python Rebin.py datacards_original_signal_scale wh3l_13TeV_sssf_plus_pt2lt20 ${VAR/OSSF/SSSF} datacards_original_signal_scale_opt 0.25


### OSSF

# minus
python Rebin.py datacards_original_signal_scale wh3l_13TeV_ossf_minus_pt2ge20 ${VAR} datacards_original_signal_scale_opt 0.25
python Rebin.py datacards_original_signal_scale wh3l_13TeV_ossf_minus_pt2lt20 ${VAR} datacards_original_signal_scale_opt 0.25

# plus
python Rebin.py datacards_original_signal_scale wh3l_13TeV_ossf_plus_pt2ge20 ${VAR} datacards_original_signal_scale_opt 0.25
python Rebin.py datacards_original_signal_scale wh3l_13TeV_ossf_plus_pt2lt20 ${VAR} datacards_original_signal_scale_opt 0.25
