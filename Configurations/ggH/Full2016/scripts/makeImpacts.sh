#!/bin/bash

## FIXME this is where the Combine framework is installed
cd ~/Combine/CMSSW_7_4_7/src/

eval `scramv1 runtime -sh`
cd -

## work directory
workdir=`pwd`/combine_16Oct

## output directory for storing the combined datacards
outputdir=${workdir}/impacts

if [ ! -d "$outputdir" ]; then
  mkdir $outputdir
fi
cd $outputdir

## input datacards directory
workspace=Full2016_VH2j_mll_more.root
jsonFile=${workspace/root/json}

if [ ! -f  ${workdir}/${workspace} ]; then
  echo "Workspace ${workspace} does not exist in ${workdir}. Exit!"
  exit
fi

cp ${workdir}/${workspace} .

## Do the initial fit
combineTool.py -M Impacts -d ${workspace} -m 125 --doInitialFit --robustFit 1 -t -1 --expectSignal=1

## Do the single fits
combineTool.py -M Impacts -d ${workspace} -m 125 --doFits --robustFit 1 -t -1 --expectSignal=1

### Submit the fits to lxbatch (default 8nh queue) 
###FIXME with this method the following commands have to be run by hand when all the jobs are finished
# combineTool.py -M Impacts -d ${workspace} -m 125 --robustFit 1 --doFits --job-mode lxbatch --task-name ${workspace/.root/} --sub-opts='-q 8nh'

## Make the .json file
combineTool.py -M Impacts -d ${workspace} -m 125 --robustFit 1 -o ${jsonFile} -t -1 --expectSignal=1

## Make the pdf file
plotImpacts.py -i  ${jsonFile} -o  ${jsonFile/.json/}

## Repeat the same procedure for rateParams, that have to be treated separately
## You have to specify the rateParam names by hand in the following string
rateparams=WWnormvh2j,Topnormvh2j,DYttnormvh2j
ranges=-2,4

jsonFile=${jsonFile/./_rateParams.}

## Do the initial fit
combineTool.py -M Impacts -d ${workspace} -m 125 --doInitialFit --robustFit 1 --named $rateparams --setPhysicsModelParameterRanges ${rateparams//,/=$ranges:} -t -1 --expectSignal=1 -n "${jsonFile/.json/}"

## Do the single fits
combineTool.py -M Impacts -d ${workspace} -m 125 --doFits --robustFit 1 --named $rateparams --setPhysicsModelParameterRanges ${rateparams//,/=$ranges:} -t -1 --expectSignal=1 -n "${jsonFile/.json/}"

### Submit the fits to lxbatch (default 8nh queue)
###FIXME with this method the following commands have to be run by hand when all the jobs are finished
#combineTool.py -M Impacts -d ${workspace} -m 125 --robustFit 1 --doFits --named $rateparams --setPhysicsModelParameterRanges ${rateparams//,/=$ranges:} --job-mode lxbatch --task-name ${workspace/.root/} --sub-opts='-q 8nh'

## Make the .json file
combineTool.py -M Impacts -d ${workspace} -m 125 --robustFit 1 --named $rateparams --setPhysicsModelParameterRanges ${rateparams//,/=$ranges:} -o ${jsonFile} -t -1 --expectSignal=1 -n "${jsonFile/.json/}"

## Make the pdf file
plotImpacts.py -i  ${jsonFile} -o  ${jsonFile/.json/}

