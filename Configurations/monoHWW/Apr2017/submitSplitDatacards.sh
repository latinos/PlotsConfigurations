#!/bin/sh                                                                                                                                  

VARIABLES=$1
CHANNEL=$2
CUT=$3
MZP=$4
MA0=$5

cd -

cd /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_1_0/src/HiggsAnalysis/CombinedLimit/

eval `scramv1 runtime -sh`

cd -

mkdir -p datacards/monoH_MVA_em/"$VARIABLES"/
mkdir -p datacards/monoH_MVA_DYtt_em/"$VARIABLES"/
mkdir -p datacards/monoH_MVA_Top_em/"$VARIABLES"/
mkdir -p datacards/monoH_MVA_WW_em/"$VARIABLES"/

echo "Splitting ..."

python /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/scriptSplitDatacards.py $VARIABLES $CHANNEL $CUT $MZP $MA0

echo "Splitted!"

echo "Removing useless nuisances lines ..."

python /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/scriptRemoveNuisances.py $VARIABLES $CHANNEL $CUT $MZP $MA0

echo "All done, bye!"



