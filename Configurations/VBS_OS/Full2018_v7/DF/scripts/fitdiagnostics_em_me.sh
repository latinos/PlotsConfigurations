#!/bin/bash

## FIXME this is where the Combine framework is installed
cd /afs/cern.ch/user/m/mlizzo/work/CMSSW_10_2_13
eval `scramv1 runtime -sh`
cd -

## work directory
#workDir=/afs/cern.ch/work/m/mlizzo/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/VBS_OS/Full2018_v6/nAODv6_v6
workDir=$PWD
workspaceDir=workspaces/AN_config

cd $workDir

echo "mjj (DF) " >> ${workspaceDir}/diagnostics_mjj.txt
combine -M FitDiagnostics ${workspaceDir}/mjj_em_me.root -t -1 --setParameters r_vbs=1 --cminDefaultMinimizerStrategy 0 --redefineSignalPOIs=r_vbs --saveNormalizations --saveWithUncertainties >> ${workspaceDir}/diagnostics_mjj.txt
