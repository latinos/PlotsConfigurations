#!/bin/bash

## FIXME this is where the Combine framework is installed
cd /afs/cern.ch/work/r/rceccare/VBF/CMSSW_10_2_13
eval `scramv1 runtime -sh`
cd -

## work directory
workdir=/afs/cern.ch/work/r/rceccare/VBF/CMSSW_10_2_15_patch2/src/PlotsConfigurations/Configurations/VBF/Keras_2016

cd $workdir


echo "events:" "">> diagnostics_class0_06_09.txt
combine -M FitDiagnostics class0_06_09.root -t -1 --setParameters r_vbf=1,r_ggH=1 --redefineSignalPOIs=r_vbf --saveNormalizations --saveWithUncertainties >> diagnostics_class0_06_09.txt
