#!/bin/bash

set -e

DIR=$PWD
ANALYSIS="ZH3l"
FITVAR="mtw_fit"

for year in Full2016nano_STXS_1p1 Full2017nano_STXS_1p1 Full2018nano_STXS_1p1
do
    echo " --> $year"
    cd $DIR; cd $year ; YEAR=`echo $year | awk -F "Full" '{print $2}' | awk -F "nano" '{print $1}'`

    if [ -e Combination/${ANALYSIS}_${year}.txt ]
    then
        echo "deleting Combination/${ANALYSIS}_${year}.txt"
        rm Combination/${ANALYSIS}_${year}.txt
    fi

    ## work directory
    outputDir=Combination

    if [ ! -d $outputDir ]; then
	mkdir $outputDir
    fi

    datacardDir=${PWD}/datacards_${ANALYSIS}_${YEAR}_v6_STXS

    # combine the datacards                    
    combineCards.py \
	zh3l_SR_1j_ptv_gt150=$datacardDir/zh3l_SR_1j_ptv_gt150/$FITVAR/datacard.txt.pruned.txt \
	zh3l_SR_1j_ptv_lt150=$datacardDir/zh3l_SR_1j_ptv_lt150/$FITVAR/datacard.txt.pruned.txt \
	zh3l_SR_2j_ptv_gt150=$datacardDir/zh3l_SR_2j_ptv_gt150/$FITVAR/datacard.txt.pruned.txt \
	zh3l_SR_2j_ptv_lt150=$datacardDir/zh3l_SR_2j_ptv_lt150/$FITVAR/datacard.txt.pruned.txt \
	zh3l_WZ_CR_1j=$datacardDir/zh3l_WZ_CR_1j/events/datacard.txt.pruned.txt \
	zh3l_WZ_CR_2j=$datacardDir/zh3l_WZ_CR_2j/events/datacard.txt.pruned.txt \
	> ${outputDir}/${ANALYSIS}_${year}.txt
	#zh3l_Zg_CR_1j=$datacardDir/zh3l_Zg_CR_1j/events/datacard.txt.pruned.txt \
	#zh3l_Zg_CR_2j=$datacardDir/zh3l_Zg_CR_2j/events/datacard.txt.pruned.txt \
	#> ${outputDir}/${ANALYSIS}_${year}.txt
    
    echo "  --> Combination folder is created"
    ls $outputDir
done

# Convert datacards to workspaces
#text2workspace.py Zh3l_2016_v6.txt -o Zh3l_2016_v6.root
