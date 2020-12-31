#!/bin/bash

## FIXME this is where the Combine framework is installed
cd /afs/cern.ch/user/m/mlizzo/work/CMSSW_10_2_13
eval `scramv1 runtime -sh`
cd -

## work directory
workDir=$PWD 

cd $workDir

echo "mjj (combination)" >> ${workDir}/combination/significance_mjj.txt
combine -M Significance ${workDir}/combination/mjj.root -t -1 --setParameters r_vbs=1 --redefineSignalPOIs=r_vbs >> ${workDir}/combination/significance_mjj.txt

