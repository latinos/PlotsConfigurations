#!/bin/sh                                                                                                                                  

CHANNEL=$1
VARIABLES=$2
CUT=$3
MZP=$4
MA0=$5

cd -

cd /afs/cern.ch/user/n/ntrevisa/work/CMSSW_7_4_7/src/HiggsAnalysis/CombinedLimit/

eval `scramv1 runtime -sh`

cd -

mkdir -p goodnessOfFit_em_MVA

mkdir -p combine_em_MVA

mkdir -p limits_em_MVA

mkdir -p pulls_em_MVA

cp -r /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards/ .
cp -r /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/datacards_blindData/ .

python /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/scriptMonoH.py $CHANNEL $VARIABLES $CUT $MZP $MA0

cp goodnessOfFit_em_MVA/* /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/goodnessOfFit_em_MVA/

cp combine_em_MVA/* /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/combine_em_MVA/

cp limits_em_MVA/* /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/limits_em_MVA/

cp pulls_em_MVA/* /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/pulls_em_MVA/

rm -rf datacards
rm -rf datacards_blindData

##cd /afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017







