#!/bin/sh                                                                                                                                  

CHANNEL=$1
VARIABLES=$2
CUT=$3
MZP=$4
MA0=$5

cd -

cd /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_1_0/src/HiggsAnalysis/CombinedLimit/

eval `scramv1 runtime -sh`

cd -


mkdir -p /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/goodnessOfFit_"$CHANNEL"_MVA_combination

mkdir -p /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/combine_"$CHANNEL"_MVA_combination

mkdir -p /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/limits_"$CHANNEL"_MVA_combination

mkdir -p /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/pulls_"$CHANNEL"_MVA_combination


mkdir -p goodnessOfFit_"$CHANNEL"_MVA_combination

mkdir -p combine_"$CHANNEL"_MVA_combination

mkdir -p limits_"$CHANNEL"_MVA_combination

mkdir -p pulls_"$CHANNEL"_MVA_combination


cp -r /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards_combination/ .
# cp -r /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards_blindData/ .

python /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/scriptMonoHSplit80Combination.py $CHANNEL $VARIABLES $CUT $MZP $MA0

cp goodnessOfFit_"$CHANNEL"_MVA_combination/* /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/goodnessOfFit_"$CHANNEL"_MVA_combination/

cp combine_"$CHANNEL"_MVA_combination/* /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/combine_"$CHANNEL"_MVA_combination/

cp limits_"$CHANNEL"_MVA_combination/* /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/limits_"$CHANNEL"_MVA_combination/

cp pulls_"$CHANNEL"_MVA_combination/* /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/pulls_"$CHANNEL"_MVA_combination/

cp datacards_combination/monoH_MVA_em/$VARIABLES/datacard_"$MZP"_"$MA0"_combined.txt  /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards_combination/monoH_MVA_em/$VARIABLES/
### cp datacards_combination/monoH_MVA_em/$VARIABLES/datacard_"$MZP"_"$MA0"_combined.root /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards_combination/monoH_MVA_em/$VARIABLES/

rm -rf datacards_combination
# rm -rf datacards_blindData

##cd /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017







