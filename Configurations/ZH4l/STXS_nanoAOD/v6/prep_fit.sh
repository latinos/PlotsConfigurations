#!/bin/bash

set -e

DIR=$PWD
ANALYSIS="ZH4l"
#FITVAR="mtw_fit"

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
    # zh4l_ZZ_MET_13TeV=$datacardDir/zh4l_ZZ_MET_13TeV/events/datacard.txt.pruned.txt
    # combine the datacards                    
    combineCards.py \
	zh4l_XSF_13TeV_ptv_lt150=$datacardDir/zh4l_XSF_13TeV_ptv_lt150/class0_XSF/datacard.txt.pruned.txt \
	zh4l_XSF_13TeV_ptv_gt150=$datacardDir/zh4l_XSF_13TeV_ptv_gt150/class0_XSF/datacard.txt.pruned.txt \
	zh4l_XDF_13TeV_ptv_lt150=$datacardDir/zh4l_XDF_13TeV_ptv_lt150/class1_XDF/datacard.txt.pruned.txt \
	zh4l_XDF_13TeV_ptv_gt150=$datacardDir/zh4l_XDF_13TeV_ptv_gt150/class1_XDF/datacard.txt.pruned.txt \
	zh4l_ZZ_13TeV=$datacardDir/zh4l_ZZ_13TeV/events/datacard.txt.pruned.txt \
	> ${outputDir}/${ANALYSIS}_${year}.txt
    
    echo "  --> Combination folder is created"
    ls $outputDir
done

# Convert datacards to workspaces
#text2workspace.py Zh3l_2016_v6.txt -o Zh3l_2016_v6.root
