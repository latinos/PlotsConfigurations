#!/bin/sh                                                                                                                                      

CHANNEL=$1
VARIABLES=$2
CUT=$3
MZP=$4
MA0=$5

cd /afs/cern.ch/user/n/ntrevisa/work/CMSSW_7_4_7/src/HiggsAnalysis/CombinedLimit/

eval `scramv1 runtime -sh`

cd /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017

python scriptMonoH.py $CHANNEL $VARIABLES $CUT $MZP $MA0






