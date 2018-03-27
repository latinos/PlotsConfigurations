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

# mkdir -p datacards_combination/monoH_MVA_em/"$VARIABLES"/
# mkdir -p datacards_combination/monoH_MVA_DYtt_em/"$VARIABLES"/
# mkdir -p datacards_combination/monoH_MVA_Top_em/"$VARIABLES"/
# mkdir -p datacards_combination/monoH_MVA_WW_em/"$VARIABLES"/

echo "Copying datacards ..."

mkdir -p datacards_combination/monoH_MVA_em/
cp -r /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards_combination/monoH_MVA_em/$VARIABLES/ datacards_combination/monoH_MVA_em/

mkdir -p datacards_combination/monoH_MVA_DYtt_em/
cp -r /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards_combination/monoH_MVA_DYtt_em/$VARIABLES/ datacards_combination/monoH_MVA_DYtt_em/

mkdir -p datacards_combination/monoH_MVA_Top_em/
cp -r /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards_combination/monoH_MVA_Top_em/$VARIABLES/ datacards_combination/monoH_MVA_Top_em/

mkdir -p datacards_combination/monoH_MVA_WW_em/
cp -r /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards_combination/monoH_MVA_WW_em/$VARIABLES/ datacards_combination/monoH_MVA_WW_em/

##cp -r /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards_combination/ .

echo "Copied!"

echo "Splitting ..."

python /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/scriptSplitDatacardsCombination.py $VARIABLES $CHANNEL $CUT $MZP $MA0
python /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/scriptSplitDatacardsCombination.py $VARIABLES $CHANNEL MVA_DYtt $MZP $MA0
python /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/scriptSplitDatacardsCombination.py $VARIABLES $CHANNEL MVA_Top $MZP $MA0
python /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/scriptSplitDatacardsCombination.py $VARIABLES $CHANNEL MVA_WW $MZP $MA0

echo "Splitted!"

echo "Removing useless nuisances lines ..."

python /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/scriptRemoveNuisances.py $VARIABLES $CHANNEL $CUT $MZP $MA0
python /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/scriptRemoveNuisances.py $VARIABLES $CHANNEL MVA_DYtt $MZP $MA0
python /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/scriptRemoveNuisances.py $VARIABLES $CHANNEL MVA_Top $MZP $MA0
python /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/scriptRemoveNuisances.py $VARIABLES $CHANNEL MVA_WW $MZP $MA0

echo "Removed!"

echo "Copying splitted datacards ..."

cp datacards_combination/monoH_MVA_em/$VARIABLES/datacard_"$MZP"_"$MA0".txt.pruned.txt /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards_combination/monoH_MVA_em/$VARIABLES/
cp datacards_combination/monoH_MVA_DYtt_em/$VARIABLES/datacard_"$MZP"_"$MA0".txt.pruned.txt /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards_combination/monoH_MVA_DYtt_em/$VARIABLES/
cp datacards_combination/monoH_MVA_Top_em/$VARIABLES/datacard_"$MZP"_"$MA0".txt.pruned.txt /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards_combination/monoH_MVA_Top_em/$VARIABLES/
cp datacards_combination/monoH_MVA_WW_em/$VARIABLES/datacard_"$MZP"_"$MA0".txt.pruned.txt /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards_combination/monoH_MVA_WW_em/$VARIABLES/

echo "All done, bye!"



