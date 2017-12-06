#!/bin/bash

####
# for i in r_of0jet r_of1jet r_of2jet r_sf0jet r_sf1jet r_of2jetvbf r_of2jetvh r_wh3l r_zh4l; do bsub -q 2nd "makeImpactsV2.sh ${i}"; done
####

#combineVersion=7_4_7
combineVersion=8_1_0

## FIXME this is where the Combine framework is installed
cd ~/Combine/CMSSW_${combineVersion}/src/

eval `scramv1 runtime -sh`
cd -

## work directory
workdir=/afs/cern.ch/work/l/lviliani/LatinosFramework13TeV_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/ggH/Full2016/GrandCombination_3Dec/impacts

if [ ! -d "$workdir" ]; then
  mkdir ${workdir}
fi

cd $workdir

channel=${1}
allChannels=r_of0jet,r_of1jet,r_of2jet,r_sf0jet,r_sf1jet,r_of2jetvbf,r_of2jetvh,r_wh3l,r_zh4l,
allChannels=${allChannels//,/=1,}

outputdir=${workdir}/${channel}

if [ ! -d "$outputdir" ]; then
  mkdir $outputdir
fi
cd $outputdir

## input datacards directory
workspace=Full2016.categories.root
jsonFile=${workspace/root/json}

if [ ! -f  ${workdir}/../${workspace} ]; then
  echo "Workspace ${workspace} does not exist in ${workdir}/../. Exit!"
  exit
fi

#cp ../${workspace} .

## Do the initial fit
if [ ${combineVersion} = '7_4_7' ]
then
  combineTool.py -M Impacts -d ${workdir}/../${workspace} -m 125 --doInitialFit -t -1 --redefineSignalPOIs ${channel} --setPhysicsModelParameters ${allChannels%?}
elif [ ${combineVersion} = '8_1_0' ]
then
  combineTool.py -M Impacts -d ${workdir}/../${workspace} -m 125 --doInitialFit -t -1 --redefineSignalPOIs ${channel} --setParameters ${allChannels%?} --X-rtd MINIMIZER_analytic --robustFit=1
fi

### Submit the fits to lxbatch (default 8nh queue) 
if [ ${combineVersion} = '7_4_7' ]
then
  combineTool.py -M Impacts -d ${workdir}/../${workspace} -m 125 --doFits -t -1 --redefineSignalPOIs ${channel} --setPhysicsModelParameters ${allChannels%?} --job-mode lxbatch --task-name ${workspace/.root/} --sub-opts='-q 8nh'
elif [ ${combineVersion} = '8_1_0' ]
then
  combineTool.py -M Impacts -d ${workdir}/../${workspace} -m 125 --doFits -t -1 --redefineSignalPOIs ${channel} --setParameters ${allChannels%?} --job-mode lxbatch --task-name ${workspace/.root/} --sub-opts='-q 8nh' --X-rtd MINIMIZER_analytic --robustFit=1
fi

## Repeat the same procedure for rateParams, that have to be treated separately
## You have to specify the rateParam names by hand in the following string
rateparams=WWnorm0j,Topnorm0j,DYttnorm0j,WWnorm1j,Topnorm1j,DYttnorm1j,WWnorm2j,Topnorm2j,DYttnorm2j,WWnormvbf,Topnormvbf,DYttnormvbf,WWnormvh2j,Topnormvh2j,DYttnormvh2j,WWnorm1jsf,Topnorm0jsf,WWnorm0jsf,Topnorm1jsf,WZ3lnorm,Zg3lnorm,ZZ4lnorm,
ranges=-2,4
rateparamsrange=${rateparams//,/=$ranges:}

jsonFile=${jsonFile/./_rateParams.}

## Do the initial fit
if [ ${combineVersion} = '7_4_7' ]
then
  combineTool.py -M Impacts -d ${workdir}/../${workspace} -m 125 --doInitialFit -t -1 --redefineSignalPOIs ${channel} --setPhysicsModelParameters ${allChannels%?} --named ${rateparams%?} --setPhysicsModelParameterRanges ${rateparamsrange%?} -n "${jsonFile/.json/}" 
  #--X-rtd MINIMIZER_analytic
elif [ ${combineVersion} = '8_1_0' ]
then
  combineTool.py -M Impacts -d ${workdir}/../${workspace} -m 125 --doInitialFit -t -1 --redefineSignalPOIs ${channel} --setParameters ${allChannels%?} --named ${rateparams%?} --setParameterRanges ${rateparamsrange%?} -n "${jsonFile/.json/}"
fi

### Submit the fits to lxbatch (default 8nh queue)
if [ ${combineVersion} = '7_4_7' ]
then
  combineTool.py -M Impacts -d ${workdir}/../${workspace} -m 125 --doFits -t -1 --redefineSignalPOIs ${channel} --setPhysicsModelParameters ${allChannels%?} --named ${rateparams%?} --setPhysicsModelParameterRanges ${rateparamsrange%?} --job-mode lxbatch --task-name ${workspace/.root/} --sub-opts='-q 8nh' -n "${jsonFile/.json/}" 
  #--X-rtd MINIMIZER_analytic
elif [ ${combineVersion} = '8_1_0' ]
then
  combineTool.py -M Impacts -d ${workdir}/../${workspace} -m 125 --doFits -t -1 --redefineSignalPOIs ${channel} --setParameters ${allChannels%?} --named ${rateparams%?} --setParameterRanges ${rateparamsrange%?} --job-mode lxbatch --task-name ${workspace/.root/} --sub-opts='-q 8nh' -n "${jsonFile/.json/}"
fi
