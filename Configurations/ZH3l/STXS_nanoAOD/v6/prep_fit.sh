#!/bin/bash

pushd $COMBINE_SOURCE_DIR
eval `scramv1 runtime -sh`
popd

set -e

DIR=$PWD

for year in Full2016nano_STXS_1p1 Full2017nano_STXS_1p1 Full2018nano_STXS_1p1
do
    echo " --> $year"
    cd $DIR; cd $year ; YEAR=`echo $year | awk -F "Full" '{print $2}' | awk -F "nano" '{print $1}'`

    if [ -e Combination/ZH3l_${year}.txt ]
    then
        echo "deleting Combination/ZH3l_${year}.txt"
        rm Combination/ZH3l_${year}.txt
    fi

    ## work directory
    outputDir=Combination

    if [ ! -d $outputDir ]; then
	mkdir $outputDir
    fi

    datacardDir=${PWD}/datacards_ZH3l_${YEAR}_v6_STXS

    # combine the datacards                    
    combineCards.py \
	zh3l_SR_1j_ptv_gt150=$datacardDir/zh3l_SR_1j_ptv_gt150/mTlmetj/datacard.txt.pruned.txt \
	zh3l_SR_1j_ptv_lt150=$datacardDir/zh3l_SR_1j_ptv_lt150/mTlmetj/datacard.txt.pruned.txt \
	zh3l_SR_2j_ptv_gt150=$datacardDir/zh3l_SR_2j_ptv_gt150/mTlmetjj/datacard.txt.pruned.txt \
	zh3l_SR_2j_ptv_lt150=$datacardDir/zh3l_SR_2j_ptv_lt150/mTlmetjj/datacard.txt.pruned.txt \
	zh3l_WZ_CR_1j=$datacardDir/zh3l_WZ_CR_1j/events/datacard.txt.pruned.txt \
	zh3l_WZ_CR_2j=$datacardDir/zh3l_WZ_CR_2j/events/datacard.txt.pruned.txt \
	> ${outputDir}/ZH3l_${year}.txt
    
    echo "  --> Combination folder is created"
    ls $outputDir
done

# Convert datacards to workspaces
#text2workspace.py Zh3l_2016_v6.txt -o Zh3l_2016_v6.root
