#!/bin/bash

set -e

DIR=$PWD
ANALYSIS="WHSS"
FITVAR="mlljj20_whss"

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
    #datacardsWHSS_2016_v6_STXS
    datacardDir=${PWD}/datacards_${ANALYSIS}_${YEAR}_v6_STXS

    # combine the datacards
    combineCards.py \
	hww2l2v_13TeV_of2j_WH_SS_uu_1j_ptv_lt150=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_uu_1j_ptv_lt150/$FITVAR/datacard.txt.pruned.txt \
	hww2l2v_13TeV_of2j_WH_SS_eu_1j_ptv_lt150=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_eu_1j_ptv_lt150/$FITVAR/datacard.txt.pruned.txt \
	hww2l2v_13TeV_of2j_WH_SS_uu_2j_ptv_lt150=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_uu_2j_ptv_lt150/$FITVAR/datacard.txt.pruned.txt \
	hww2l2v_13TeV_of2j_WH_SS_eu_2j_ptv_lt150=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_eu_2j_ptv_lt150/$FITVAR/datacard.txt.pruned.txt \
	\
	hww2l2v_13TeV_of2j_WH_SS_uu_1j_ptv_gt150=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_uu_1j_ptv_gt150/$FITVAR/datacard.txt.pruned.txt \
	hww2l2v_13TeV_of2j_WH_SS_eu_1j_ptv_gt150=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_eu_1j_ptv_gt150/$FITVAR/datacard.txt.pruned.txt \
	hww2l2v_13TeV_of2j_WH_SS_uu_2j_ptv_gt150=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_uu_2j_ptv_gt150/$FITVAR/datacard.txt.pruned.txt \
	hww2l2v_13TeV_of2j_WH_SS_eu_2j_ptv_gt150=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_eu_2j_ptv_gt150/$FITVAR/datacard.txt.pruned.txt \
	> ${outputDir}/${ANALYSIS}_${year}.txt
    
    echo "  --> Combination folder is created"
    ls $outputDir
done

# Convert datacards to workspaces
#text2workspace.py Zh3l_2016_v6.txt -o Zh3l_2016_v6.root
