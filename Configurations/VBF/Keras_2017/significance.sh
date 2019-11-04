#!/bin/bash

## FIXME this is where the Combine framework is installed
cd /afs/cern.ch/work/r/rceccare/VBF/CMSSW_10_2_13
eval `scramv1 runtime -sh`
cd -

## work directory
workdir=/afs/cern.ch/work/r/rceccare/VBF/CMSSW_10_2_15_patch2/src/PlotsConfigurations/Configurations/VBF/Keras_2017

cd $workdir


echo "class0:" "">> significance_class0_11_10_multicut.txt
combine -M Significance class0_11_10_multicut.root -t -1 --setParameters r_vbf=1 --redefineSignalPOIs=r_vbf >> significance_class0_11_10_multicut.txt


#echo "class0:" "">> significance_class0_01_10_cuts.txt
#combine -M Significance class0_01_10_cuts.root -t -1 --setParameters r_vbf=1 --redefineSignalPOIs=r_vbf >> significance_class0_01_10_cuts.txt

