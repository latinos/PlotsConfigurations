#!/bin/bash

#combineVersion=7_4_7
combineVersion=8_1_0
## FIXME this is where the Combine framework is installed
cd ~/Combine/CMSSW_${combineVersion}/src/

eval `scramv1 runtime -sh`
cd -

## work directory
workdir=/afs/cern.ch/work/l/lviliani/LatinosFramework13TeV_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/ggH/Full2016/GrandCombination_3Dec/kVkF_810

if [ ! -d "$workdir" ]; then
  mkdir $workdir
fi
cd ${workdir}

workspace=${workdir}/../Full2016.kVkF.root

ls $workspace

if [ ${combineVersion} = '7_4_7' ]
then
  combineTool.py -M MultiDimFit ${workspace} -t -1 --setPhysicsModelParameters muGGH=1,muVBF=1 --points 1000  --algo grid -n Full2016kVkF --redefineSignalPOIs muGGH,muVBF  --setPhysicsModelParameterRanges muGGH=0,2:muVBF=-2,4 --job-mode lxbatch --split-points 10 --sub-opts='-q 8nh' --task-name Full2016kVkF -n Full2016kVkF --robustFit=1
elif [ ${combineVersion} = '8_1_0' ]
then
  combineTool.py -M MultiDimFit ${workspace} -t -1 --setParameters muGGH=1,muVBF=1 --points 1000 --algo grid -n Full2016kVkF --redefineSignalPOIs muGGH,muVBF  --setParameterRanges muGGH=0,2:muVBF=-2,4 --job-mode lxbatch --split-points 10 --sub-opts='-q 1nd' --task-name Full2016kVkF -n Full2016kVkF --robustFit=1  --cminDefaultMinimizerStrategy 0
fi
