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

echo "Copying datacards ..."

cp /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_MVA_em/"$VARIABLES"/datacard.txt.pruned.txt datacards/monoH_MVA_em/"$VARIABLES"/
ls -lrt datacards/monoH_MVA_em/"$VARIABLES"/

cp /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_MVA_DYtt_em/"$VARIABLES"/datacard.txt.pruned.txt datacards/monoH_MVA_DYtt_em/"$VARIABLES"/
ls -lrt datacards/monoH_MVA_DYtt_em/"$VARIABLES"/

cp /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_MVA_Top_em/"$VARIABLES"/datacard.txt.pruned.txt datacards/monoH_MVA_Top_em/"$VARIABLES"/
ls -lrt datacards/monoH_MVA_Top_em/"$VARIABLES"/

cp /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_MVA_WW_em/"$VARIABLES"/datacard.txt.pruned.txt datacards/monoH_MVA_WW_em/"$VARIABLES"/
ls -lrt datacards/monoH_MVA_WW_em/"$VARIABLES"/

echo "Datacards are copied!"
echo "Splitting ..."

python /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/scriptSplitDatacards.py $VARIABLES $CHANNEL $CUT $MZP $MA0

echo "Splitted!"
# echo "Copying ..."

# cp datacards/monoH_MVA_DYtt_em/"$VARIABLES"/datacard_* /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_MVA_DYtt_"$CHANNEL"/"$VARIABLES"/
# ls -lrt datacards/monoH_MVA_DYtt_em/"$VARIABLES"/

# cp datacards/monoH_MVA_WW_"$CHANNEL"/"$VARIABLES"/datacard_* /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_MVA_WW_"$CHANNEL"/"$VARIABLES"/
# ls -lrt datacards/monoH_MVA_WW_em/"$VARIABLES"/

# cp datacards/monoH_MVA_Top_"$CHANNEL"/"$VARIABLES"/datacard_* /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_MVA_Top_"$CHANNEL"/"$VARIABLES"/
# ls -lrt datacards/monoH_MVA_Top_em/"$VARIABLES"/

# cp datacards/monoH_MVA_"$CHANNEL"/"$VARIABLES"/datacard_* /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_MVA_"$CHANNEL"/"$VARIABLES"/
# ls -lrt datacards/monoH_MVA_em/"$VARIABLES"/

rm -rf datacards

echo "All done, bye!"
##cd /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017







