#!/bin/bash

## FIXME this is where the Combine framework is installed
cd /afs/cern.ch/work/r/rceccare/VBF/CMSSW_10_2_13
eval `scramv1 runtime -sh`
cd -

## work directory
workdir=/afs/cern.ch/work/r/rceccare/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/VBF/Keras_2016_v6

cd $workdir


echo "events:" "">> diagnostics_class0_25_05_multicut.txt
combine -M FitDiagnostics class0_25_05_multicut.root -t -1 --setParameters r_vbf=1,r_ggH=1 --redefineSignalPOIs=r_vbf --saveNormalizations --saveWithUncertainties >> diagnostics_class0_25_05_multicut.txt

#--freezeParameters THU_ggH_Mu,THU_ggH_Res,THU_ggH_Mig01,THU_ggH_Mig12,THU_ggH_VBF2j,THU_ggH_VBF3j,THU_ggH_PT60,THU_ggH_PT120,THU_ggH_qmtop
