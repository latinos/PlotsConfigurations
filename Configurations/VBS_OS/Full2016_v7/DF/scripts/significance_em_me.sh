#!/bin/bash

## FIXME this is where the Combine framework is installed
cd /afs/cern.ch/user/m/mlizzo/work/CMSSW_10_2_13
eval `scramv1 runtime -sh`
cd -

## work directory
workDir=$PWD
workspaceDir=workspaces/AN_config

cd $workDir

echo "mjj (DF)" >> ${workspaceDir}/significance_mjj.txt
combine -M Significance ${workspaceDir}/mjj_em_me.root -t -1 --setParameters r_vbs=1 --redefineSignalPOIs=r_vbs >> ${workspaceDir}/significance_mjj.txt

