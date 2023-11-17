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
  echo "Arg #1: Cut          : $2"
  echo "Arg #2: Per-bin error: $3"
  echo "==========================="
  VAR=$1
  CUT=$2
  ERR=$3
fi

# Example:
# python Rebin.py datacards wh3l_13TeV_sssf_minus_pt2ge20 BDT_WH3l_OSSF_v9_more datacard_opt 0.10


### Datacards with enhanced signal scaling
##########################################

# minus
python Rebin.py datacards wh3l_13TeV_${CUT}_minus_pt2ge20 ${VAR} datacards_opt ${ERR}
python Rebin.py datacards wh3l_13TeV_${CUT}_minus_pt2lt20 ${VAR} datacards_opt ${ERR}

# plus
python Rebin.py datacards wh3l_13TeV_${CUT}_plus_pt2ge20 ${VAR} datacards_opt ${ERR}
python Rebin.py datacards wh3l_13TeV_${CUT}_plus_pt2lt20 ${VAR} datacards_opt ${ERR}


### Datacards with original signal scaling
##########################################

### SSSF

# minus
python Rebin.py datacards_original_signal_scale wh3l_13TeV_${CUT}_minus_pt2ge20 ${VAR} datacards_original_signal_scale_opt ${ERR}
python Rebin.py datacards_original_signal_scale wh3l_13TeV_${CUT}_minus_pt2lt20 ${VAR} datacards_original_signal_scale_opt ${ERR}

# plus
python Rebin.py datacards_original_signal_scale wh3l_13TeV_${CUT}_plus_pt2ge20 ${VAR} datacards_original_signal_scale_opt ${ERR}
python Rebin.py datacards_original_signal_scale wh3l_13TeV_${CUT}_plus_pt2lt20 ${VAR} datacards_original_signal_scale_opt ${ERR}
