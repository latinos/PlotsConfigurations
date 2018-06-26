#!/bin/bash


combineVersion=8_1_0
## FIXME this is where the Combine framework is installed
cd ~/Combine/CMSSW_${combineVersion}/src/

eval `scramv1 runtime -sh`
cd -

## work directory
workdir=/afs/cern.ch/work/l/lviliani/LatinosFramework13TeV_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/ggH/Full2016/GrandCombination_3Dec/impactsSingle

if [ ! -d "$workdir" ]; then
  mkdir ${workdir}
fi

cd $workdir

workspace=${1}


outputdir=${workdir}/impact_${workspace}

if [ ! -d "$outputdir" ]; then
  mkdir $outputdir
fi
cd $outputdir

cp ../../${workspace} .

## input datacards directory
jsonFile=${workspace/root/json}

if [ ! -f  ${workspace} ]; then
  echo "Workspace ${workspace} does not exist in ${outputdir}/../. Exit!"
  exit
fi

### Do the initial fit
#combineTool.py -M Impacts -d ${workspace} -m 125 --doInitialFit -t -1 --expectSignal=1 --robustFit=1 
#
#### Submit the fits to lxbatch (default 8nh queue) 
#combineTool.py -M Impacts -d ${workspace} -m 125 --doFits -t -1 --expectSignal=1 --robustFit=1 --job-mode lxbatch --task-name ${workspace/.root/} --sub-opts='-q 8nh'


## Repeat the same procedure for rateParams, that have to be treated separately
## You have to specify the rateParam names by hand in the following string
#rateparams=WWnorm0j,Topnorm0j,DYttnorm0j,WWnorm1j,Topnorm1j,DYttnorm1j,WWnorm2j,Topnorm2j,DYttnorm2j,WWnormvbf,Topnormvbf,DYttnormvbf,WWnormvh2j,Topnormvh2j,DYttnormvh2j,WWnorm1jsf,Topnorm0jsf,WWnorm0jsf,Topnorm1jsf,WZ3lnorm,Zg3lnorm,ZZ4lnorm,
rateparams=CMS_hww_WWnormvbf,CMS_hww_Topnormvbf,CMS_hww_DYttnormvbf,
ranges=-2,4
rateparamsrange=${rateparams//,/=$ranges:}

jsonFile=${jsonFile/./_rateParams.}

if [ ${combineVersion} = '7_4_6' ]
then
  ## Do the initial fit
  combineTool.py -M Impacts -d ${workspace} -m 125 --doInitialFit -t -1 --expectSignal=1 --robustFit=1 --named ${rateparams%?} --setPhysicsModelParameterRanges ${rateparamsrange%?} -n "${jsonFile/.json/}"

  ### Submit the fits to lxbatch (default 8nh queue)
  combineTool.py -M Impacts -d ${workspace} -m 125 --doFits -t -1 --expectSignal=1 --robustFit=1 --named ${rateparams%?} --setPhysicsModelParameterRanges ${rateparamsrange%?} --job-mode lxbatch --task-name ${workspace/.root/} --sub-opts='-q 8nh' -n "${jsonFile/.json/}" 

elif [ ${combineVersion} = '8_1_0' ]
then
  ## Do the initial fit
  combineTool.py -M Impacts -d ${workspace} -m 125 --doInitialFit -t -1 --expectSignal=1 --robustFit=1 --named ${rateparams%?} --setParameterRanges ${rateparamsrange%?} -n "${jsonFile/.json/}"

  ### Submit the fits to lxbatch (default 8nh queue)
  combineTool.py -M Impacts -d ${workspace} -m 125 --doFits -t -1 --expectSignal=1 --robustFit=1 --named ${rateparams%?} --setParameterRanges ${rateparamsrange%?} -n "${jsonFile/.json/}" #--job-mode lxbatch --task-name ${workspace/.root/} --sub-opts='-q 8nh' -n "${jsonFile/.json/}"
fi
