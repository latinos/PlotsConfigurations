#!/bin/bash

## FIXME this is where the Combine framework is installed
cd /afs/cern.ch/user/m/mlizzo/work/CMSSW_10_2_13
eval `scramv1 runtime -sh`
cd -

## FIXME this is your work directory
workDir=/afs/cern.ch/user/m/mlizzo/work/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/VBS_OS/Full2018_v6/FitDir

workspaceDir=workspaces

cd $workdir

echo "events:" "" > ${workspaceDir}/diagnostics_mjj.txt
combine -M FitDiagnostics ${workspaceDir}/mjj.root -t -1 --setParameters r_vbs=1 --redefineSignalPOIs=r_vbs --saveNormalizations --saveWithUncertainties >> ${workspaceDir}/diagnostics_mjj.txt
