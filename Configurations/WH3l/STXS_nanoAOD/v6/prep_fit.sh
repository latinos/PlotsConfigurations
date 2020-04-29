#!/bin/bash

set -e

DIR=$PWD
ANALYSIS="WH3l"
FITVAR="BDTG_OSSF_bin2"

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
    # merged_PTV_GT150=$DC_OS_Dir/wh3l_13TeV_merged_ptv_gt150/$varOS/datacard.txt \
    combineCards.py \
	wh3l_13TeV_sssf_ptv_lt150=${datacardDir}_SSSF/wh3l_13TeV_sssf_ptv_lt150/BDTG_SSSF_bin2/datacard.txt.pruned.txt \
	wh3l_13TeV_ossf_ptv_lt150=${datacardDir}_OSSF/wh3l_13TeV_ossf_ptv_lt150/BDTG_OSSF_bin2/datacard.txt.pruned.txt \
	wh3l_13TeV_sssf_ptv_gt150=${datacardDir}_SSSF/wh3l_13TeV_sssf_ptv_gt150/BDTG_SSSF_bin2/datacard.txt.pruned.txt \
        wh3l_13TeV_ossf_ptv_gt150=${datacardDir}_OSSF/wh3l_13TeV_ossf_ptv_gt150/BDTG_OSSF_bin2/datacard.txt.pruned.txt \
	wh3l_zg=${datacardDir}_OSSF/wh3l_zg_13TeV/events/datacard.txt.pruned.txt \
	wh3l_wz=${datacardDir}_OSSF/wh3l_wz_13TeV/events/datacard.txt.pruned.txt \
	> ${outputDir}/${ANALYSIS}_${year}.txt
   
    echo "  --> Combination folder is created"
    ls $outputDir
    echo "  >>> please cd into analysis directory to perform workspace conversion : python wksp_convert.py <<< "
done

# Convert datacards to workspaces
#text2workspace.py Zh3l_2016_v6.txt -o Zh3l_2016_v6.root
