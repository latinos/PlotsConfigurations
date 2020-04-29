#!/bin/bash

DIR=$PWD

set -e

ANALYSIS="ZH3l"

for year in Full2016nano_STXS_1p1 Full2017nano_STXS_1p1 Full2018nano_STXS_1p1
do
    cd $DIR; cd $year
    echo "--> $year"

    # confusion matrix
    echo " --> confusion matrix"
    python ${CMSSW_BASE}/src/PlotsConfigurations/Configurations/Template/STXS_VHlep/confusionMatrix.py Combination/${ANALYSIS}_${year}.txt -a ${ANALYSIS}

    # signal fraction
    echo " --> signal fraction"
    python ${CMSSW_BASE}/src/PlotsConfigurations/Configurations/Template/STXS_VHlep/signalFraction.py Combination/${ANALYSIS}_${year}.txt -a ${ANALYSIS}

    # doFit
    echo " --> fitting"
    python ${CMSSW_BASE}/src/PlotsConfigurations/Configurations/Template/STXS_VHlep/doFit.py    

done
