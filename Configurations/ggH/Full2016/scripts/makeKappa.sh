#!/bin/bash

#combineVersion=7_4_7
combineVersion=8_1_0
## FIXME this is where the Combine framework is installed
cd ~/Combine/CMSSW_${combineVersion}/src/

eval `scramv1 runtime -sh`
cd -

## work directory
workdir=/afs/cern.ch/work/l/lviliani/LatinosFramework13TeV_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/ggH/Full2016/GrandCombination_final_fixBR/kappaFramework

if [ ! -d "$workdir" ]; then
  mkdir $workdir
fi
cd ${workdir}

workspace=Full2016.13TeV.kappaFramework.root
cp ${workdir}/../${workspace} .

#combineTool.py -M MultiDimFit ${workspace} -m 125 -t -1 --setParameters CV=1,CF=1 --points 1000 --algo grid -n Full2016kappa --redefineSignalPOIs CF,CV  --setParameterRanges CF=0,4:CV=0,2 --job-mode lxbatch --split-points 10 --sub-opts='-q 1nd' --task-name Full2016kappa --robustFit=1 --cminDefaultMinimizerStrategy 0
combineTool.py -M MultiDimFit ${workspace} -m 125.09 --points 1000 --algo grid -n Full2016kappa --redefineSignalPOIs CF,CV  --setParameterRanges CF=0,4:CV=0,2:CMS_hww_WWnormvh2j=0,10 --job-mode lxbatch --split-points 10 --sub-opts='-q 8nh' --task-name Full2016kappa --cminDefaultMinimizerStrategy 0
