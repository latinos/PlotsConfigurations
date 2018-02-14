#!/bin/sh                                                                                                                                  

VARIABLES=$1
CHANNEL=$2
MZP=$3
MA0=$4

cd -

cd /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_1_0/src/HiggsAnalysis/CombinedLimit/

eval `scramv1 runtime -sh`

cd -


cp -r /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/ .

python /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/scriptSplitDatacards.py $VARIABLES $CHANNEL $MZP $MA0

cp datacards/monoH_MVA_DYtt_"$CHANNEL"/"$VARIABLES"/datacard_"$MZP"_"$MA0".txt.pruned.txt /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_MVA_DYtt_"$CHANNEL"/"$VARIABLES"/

cp datacards/monoH_MVA_WW_"$CHANNEL"/"$VARIABLES"/datacard_"$MZP"_"$MA0".txt.pruned.txt /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_MVA_WW_"$CHANNEL"/"$VARIABLES"/

cp datacards/monoH_MVA_Top_"$CHANNEL"/"$VARIABLES"/datacard_"$MZP"_"$MA0".txt.pruned.txt /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_MVA_Top_"$CHANNEL"/"$VARIABLES"/

cp datacards/monoH_MVA_"$CHANNEL"/"$VARIABLES"/datacard_"$MZP"_"$MA0".txt.pruned.txt /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/monoH_MVA_"$CHANNEL"/"$VARIABLES"/

rm -rf datacards

##cd /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017







