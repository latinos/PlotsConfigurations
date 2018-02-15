#!/bin/sh                                                                                                                                  

VARIABLES=$1
CHANNEL=$2
MZP=$3
MA0=$4

cd -

cd /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_1_0/src/HiggsAnalysis/CombinedLimit/

eval `scramv1 runtime -sh`

cd -

mkdir -p datacards/monoH_MVA_em/"$VARIABLES"/
mkdir -p datacards/monoH_MVA_DYtt_em/"$VARIABLES"/
mkdir -p datacards/monoH_MVA_Top_em/"$VARIABLES"/
mkdir -p datacards/monoH_MVA_WW_em/"$VARIABLES"/

echo "Copying datacards ..."

cp -r /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_MVA_em/"$VARIABLES"/datacard.txt.pruned.txt datacards/monoH_MVA_em/"$VARIABLES"/
cp -r /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_MVA_DYtt_em/"$VARIABLES"/datacard.txt.pruned.txt datacards/monoH_MVA_DYtt_em/"$VARIABLES"/
cp -r /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_MVA_Top_em/"$VARIABLES"/datacard.txt.pruned.txt datacards/monoH_MVA_Top_em/"$VARIABLES"/
cp -r /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_MVA_WW_em/"$VARIABLES"/datacard.txt.pruned.txt datacards/monoH_MVA_WW_em/"$VARIABLES"/

echo "Datacards are copied!"
echo "Splitting ..."

python /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/scriptSplitDatacards.py $VARIABLES $CHANNEL $MZP $MA0

echo "Splitted!"
echo "Copying ..."

cp datacards/monoH_MVA_DYtt_em/"$VARIABLES"/* /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_MVA_DYtt_"$CHANNEL"/"$VARIABLES"/

cp datacards/monoH_MVA_WW_"$CHANNEL"/"$VARIABLES"/* /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_MVA_WW_"$CHANNEL"/"$VARIABLES"/

cp datacards/monoH_MVA_Top_"$CHANNEL"/"$VARIABLES"/* /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_MVA_Top_"$CHANNEL"/"$VARIABLES"/

cp datacards/monoH_MVA_"$CHANNEL"/"$VARIABLES"/* /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_MVA_"$CHANNEL"/"$VARIABLES"/

rm -rf datacards

echo "All done, bye!"
##cd /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017







