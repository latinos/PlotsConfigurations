#!/bin/bash

## FIXME this is where the Combine framework is installed
cd /afs/cern.ch/user/m/mlizzo/work/CMSSW_10_2_13
eval `scramv1 runtime -sh`
cd -

## work directory
workdir=$PWD
workspaceDir=workspaces/AN_config

cd $workdir

echo "mjj (SF: ee)" >> ${workspaceDir}/significance_ee_mjj.txt
combine -M Significance ${workspaceDir}/mjj_ee.root -t -1 --setParameters r_vbs=1 --redefineSignalPOIs=r_vbs >> ${workspaceDir}/significance_ee_mjj.txt

