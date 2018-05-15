#!/bin/bash

#
## When all jobs are finished, run the following commands to prduce the json files:
#
# combineTool.py -M Impacts -d Full2016.root -m 125 -o impacts.json
# combineTool.py -M Impacts -d Full2016.root -m 125 -n "Full2016_rateParams" --named CMS_hww_WWnorm0j,CMS_hww_Topnorm0j,CMS_hww_DYttnorm0j,CMS_hww_WWnorm1j,CMS_hww_Topnorm1j,CMS_hww_DYttnorm1j,CMS_hww_WWnorm2j,CMS_hww_Topnorm2j,CMS_hww_DYttnorm2j,CMS_hww_WWnormvbf,CMS_hww_Topnormvbf,CMS_hww_DYttnormvbf,CMS_hww_WWnormvh2j,CMS_hww_Topnormvh2j,CMS_hww_DYttnormvh2j,CMS_hww_WWnorm1jsf,CMS_hww_Topnorm0jsf,CMS_hww_WWnorm0jsf,CMS_hww_Topnorm1jsf,CMS_hww_WZ3lnorm,CMS_hww_Zg3lnorm,CMS_hww_ZZ4lnorm -o impacts.rateParams.json
#
#

#combineVersion=7_4_7
combineVersion=8_1_0

## FIXME this is where the Combine framework is installed
cd ~/Combine/CMSSW_${combineVersion}/src/

eval `scramv1 runtime -sh`
cd -

parametersToFreeze=""
doexpected=""
dataAsimov=""
#dataAsimov="--toysFrequentist"
#doexpected="-t -1 --expectSignal=1"
#parametersToFreeze="--freezeParameters CMS_hww_Topnormvh2j --setParameters CMS_hww_Topnormvh2j=1.0275"

## work directory
workdir=/afs/cern.ch/work/l/lviliani/LatinosFramework13TeV_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/ggH/Full2016/GrandCombination_3Dec/Unblind/Impacts/

if [ ! -d "$workdir" ]; then
  mkdir ${workdir}
fi
cd ${workdir}

## input datacards directory
workspace=Full2016.root
jsonFile=${workspace/root/json}

cp ${workdir}/../../${workspace} .

if [ ! -f  ${workdir}/${workspace} ]; then
  echo "Workspace ${workspace} does not exist in ${workdir}. Exit!"
  exit
fi


if [ ${combineVersion} = '7_4_7' ]
then
  ## Do the initial fit
  combineTool.py -M Impacts -d ${workspace} -m 125 --doInitialFit ${doexpected} --robustFit=1 --X-rtd MINIMIZER_analytic # --freezeNuisances ${nuisanceToFreeze}
  ## Submit the fits to lxbatch (default 8nh queue) 
  combineTool.py -M Impacts -d ${workspace} -m 125 --doFits ${doexpected} --job-mode lxbatch --task-name ${workspace/.root/} --sub-opts='-q 1nd' --robustFit=1 --X-rtd MINIMIZER_analytic  #--freezeNuisances ${nuisanceToFreeze}
elif [ ${combineVersion} = '8_1_0' ]
then
  ## Do the initial fit
  combineTool.py -M Impacts -d ${workspace} -m 125 --doInitialFit ${doexpected} --X-rtd MINIMIZER_analytic ${parametersToFreeze} ${dataAsimov} #--freezeParameters ${nuisanceToFreeze}
  ## Submit the fits to lxbatch (default 8nh queue) 
  combineTool.py -M Impacts -d ${workspace} -m 125 --doFits ${doexpected} --job-mode lxbatch --task-name ${workspace/.root/} --sub-opts='-q 1nd' --X-rtd MINIMIZER_analytic ${parametersToFreeze} ${dataAsimov} #--freezeParameters ${nuisanceToFreeze}
fi

## Repeat the same procedure for rateParams, that have to be treated separately
## You have to specify the rateParam names by hand in the following string
rateparams=CMS_hww_WWnorm0j,CMS_hww_Topnorm0j,CMS_hww_DYttnorm0j,CMS_hww_WWnorm1j,CMS_hww_Topnorm1j,CMS_hww_DYttnorm1j,CMS_hww_WWnorm2j,CMS_hww_Topnorm2j,CMS_hww_DYttnorm2j,CMS_hww_WWnormvbf,CMS_hww_Topnormvbf,CMS_hww_DYttnormvbf,CMS_hww_WWnormvh2j,CMS_hww_Topnormvh2j,CMS_hww_DYttnormvh2j,CMS_hww_WWnorm1jsf,CMS_hww_Topnorm0jsf,CMS_hww_WWnorm0jsf,CMS_hww_Topnorm1jsf,CMS_hww_WZ3lnorm,CMS_hww_Zg3lnorm,CMS_hww_ZZ4lnorm,
ranges=-2,4
rateparamsrange=${rateparams//,/=$ranges:}

jsonFile=${jsonFile/./_rateParams.}

if [ ${combineVersion} = '7_4_7' ]
then
  ### Do the initial fit
  combineTool.py -M Impacts -d ${workspace} -m 125 --doInitialFit ${doexpected} --named ${rateparams%?} --setPhysicsModelParameterRanges ${rateparamsrange%?} -n "${jsonFile/.json/}" --X-rtd MINIMIZER_analytic  #--freezeNuisances ${nuisanceToFreeze}

 ### Submit the fits to lxbatch (default 8nh queue)
 combineTool.py -M Impacts -d ${workspace} -m 125 --doFits ${doexpected} --named ${rateparams%?} --setPhysicsModelParameterRanges ${rateparamsrange%?} --job-mode lxbatch --task-name ${workspace/.root/} --sub-opts='-q 1nd' -n "${jsonFile/.json/}" --X-rtd MINIMIZER_analytic #--freezeNuisances ${nuisanceToFreeze}

elif [ ${combineVersion} = '8_1_0' ]
then
  ### Do the initial fit
  combineTool.py -M Impacts -d ${workspace} -m 125 --doInitialFit ${doexpected} --named ${rateparams%?} --setParameterRanges ${rateparamsrange%?} -n "${jsonFile/.json/}" --X-rtd MINIMIZER_analytic ${parametersToFreeze} ${dataAsimov} #--freezeParameters ${nuisanceToFreeze}

 ### Submit the fits to lxbatch (default 8nh queue)
 combineTool.py -M Impacts -d ${workspace} -m 125 --doFits ${doexpected} --named ${rateparams%?} --setParameterRanges ${rateparamsrange%?} --job-mode lxbatch --task-name ${workspace/.root/} --sub-opts='-q 1nd' -n "${jsonFile/.json/}" --X-rtd MINIMIZER_analytic ${parametersToFreeze} ${dataAsimov} #--freezeParameters ${nuisanceToFreeze}
fi

