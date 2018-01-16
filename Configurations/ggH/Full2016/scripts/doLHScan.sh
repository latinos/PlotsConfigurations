#!/bin/bash

#
## for ch in r_of0jet r_of1jet r_of2jet r_sf0jet r_sf1jet r_of2jetvbf r_of2jetvh r_wh3l r_zh4l; do bsub -q 1nd "doLHScan.sh ${ch}"; done
#


#combineVersion=7_4_7
combineVersion=8_1_0

## FIXME this is where the Combine framework is installed
cd ~/Combine/CMSSW_${combineVersion}/src/

eval `scramv1 runtime -sh`
cd -

channel=${1}
allChannels=r_of0jet,r_of1jet,r_of2jet,r_sf0jet,r_sf1jet,r_of2jetvbf,r_of2jetvh,r_wh3l,r_zh4l,
allChannels=${allChannels//,/=1,}

## work directory
workdir=/afs/cern.ch/work/l/lviliani/LatinosFramework13TeV_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/ggH/Full2016/GrandCombination_3Dec/LHscans/

cd ${workdir}

outputdir=${channel}_LHscan

if [ ! -d "$outputdir" ]; then
  mkdir $outputdir
fi
cd $outputdir

workspace=${workdir}/../Full2016.categories.root

if [ ! -f  ${workspace} ]; then
  echo "Workspace ${workspace} does not exist. Exit!"
  exit
fi

if [ ${combineVersion} = '7_4_7' ]
then
  combineTool.py -d ${workspace} -M MultiDimFit    \
                 --algo=grid  -n "${channel}_LHscan"   --redefineSignalPOIs  ${channel} --setPhysicsModelParameterRanges ${channel}=-4,5     \
                 -t -1 --setPhysicsModelParameters ${allChannels%?} \
                 --X-rtd MINIMIZER_analytic \
                 --points 400  --job-mode lxbatch --task-name lxbatch-${channel} --sub-opts='-q 1nd' --split-points 10
elif [ ${combineVersion} = '8_1_0' ]
then
  combineTool.py -d ${workspace} -M MultiDimFit    \
                 --algo=grid  -n "${channel}_LHscan"   --redefineSignalPOIs  ${channel} --setParameterRanges ${channel}=-4,5     \
                 -t -1 --setParameters ${allChannels%?} \
                 --X-rtd MINIMIZER_analytic \
                 --points 400  --job-mode lxbatch --task-name lxbatch-${channel} --sub-opts='-q 1nd' --split-points 10
fi
