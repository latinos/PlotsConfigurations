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


mkdir -p /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/goodnessOfFit_"$CHANNEL"_MVA

mkdir -p /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/combine_"$CHANNEL"_MVA

mkdir -p /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/limits_"$CHANNEL"_MVA

mkdir -p /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/pulls_"$CHANNEL"_MVA

mkdir -p goodnessOfFit_"$CHANNEL"_MVA

mkdir -p combine_"$CHANNEL"_MVA

mkdir -p limits_"$CHANNEL"_MVA

mkdir -p pulls_"$CHANNEL"_MVA


cp -r /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/ .
cp -r /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards_blindData/ .

python /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/scriptMonoHSplit80.py $CHANNEL $VARIABLES $CUT $MZP $MA0

cp goodnessOfFit_"$CHANNEL"_MVA/* /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/goodnessOfFit_"$CHANNEL"_MVA/

cp combine_"$CHANNEL"_MVA/* /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/combine_"$CHANNEL"_MVA/

cp limits_"$CHANNEL"_MVA/* /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/limits_"$CHANNEL"_MVA/

cp pulls_"$CHANNEL"_MVA/* /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/pulls_"$CHANNEL"_MVA/

rm -rf datacards
rm -rf datacards_blindData

##cd /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017







