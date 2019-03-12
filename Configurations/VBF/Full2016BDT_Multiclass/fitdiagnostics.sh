#!/bin/bash

## FIXME this is where the Combine framework is installed
cd /afs/cern.ch/user/m/mlizzo/work/CMSSW_8_1_0/src
eval `scramv1 runtime -sh`
cd -

## work directory
workdir=/afs/cern.ch/user/m/mlizzo/work/new_framework_2017/CMSSW_9_4_9/src/PlotsConfigurations/Configurations/VBF/Full2016BDT_equal_training_events/workspace_14Feb/

cd $workdir

echo "class013_6bin:" "">> FitDiagnostics.txt
combine -M FitDiagnostics vbf_class013_6bin_14Feb.root -t -1 --setParameters r_vbf=1 --redefineSignalPOIs=r_vbf >> FitDiagnostics.txt

