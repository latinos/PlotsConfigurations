#!/bin/bash

## FIXME this is where the Combine framework is installed
cd /afs/cern.ch/work/r/rceccare/VBF/CMSSW_10_2_13
eval `scramv1 runtime -sh`
cd -

## work directory
workdir=/afs/cern.ch/work/r/rceccare/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/VBF/Keras_2018_v6

cd $workdir

echo "class0:" "">> significance_class0_05_10_ext_try_multicut.txt
combine -M Significance class0_05_10_ext_try_multicut.root -t -1 --setParameters r_vbf=1 --redefineSignalPOIs=r_vbf >> significance_class0_05_10_ext_try_multicut.txt

