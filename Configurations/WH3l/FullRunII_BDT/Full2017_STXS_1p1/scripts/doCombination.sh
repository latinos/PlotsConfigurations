#!/bin/bash

if [ -e $PWD/Combination/Full2017_WH_3l_HTXS_Stage1.txt ]
    then
    echo "deleting $PWD/Combination/Full2017_WH_3l_HTXS_Stage1.txt"
    rm $PWD/Combination/Full2017_WH_3l_HTXS_Stage1.txt
fi

#if [ -z $1 ]
#    then
#    echo "please specify relative path to datacard folder"
#    exit 1
#fi

analysis="Full2017_WH_3l"

## FIXME this is where the Combine framework is installed
cd $CMSSW_BASE/src/
eval `scramv1 runtime -sh`
cd -

## work directory
outputDir=$PWD/Combination/

if [ ! -d $outputDir ]; then
  mkdir $outputDir
fi

DC_OS_Dir=$PWD/datacards2017_WH_3l_OSSF_STXS_1p1/
DC_SS_Dir=$PWD/datacards2017_WH_3l_SSSF_STXS_1p1/

## variable used for the signal regions fit
varOS="BDTG_OSSF_bin2"
varSS="BDTG_SSSF_10bins"

# no contribution
#sssf_PTV_150_250_GE1J=$datacardDir/wh3l_13TeV_sssf_PTV_150_250_GE1J/$vars/datacard.txt \
#ossf_PTV_150_250_GE1J=$datacardDir/wh3l_13TeV_ossf_PTV_150_250_GE1J/$vars/datacard.txt \

#sssf_FWDH=$datacardDir/wh3l_13TeV_sssf_FWDH/$vars/datacard.txt \
#ossf_FWDH=$datacardDir/wh3l_13TeV_ossf_FWDH/$vars/datacard.txt \

# combine the datacards

#combineCards.py \
#    sssf_PTV_LE150=$DC_SS_Dir/wh3l_13TeV_sssf_PTV_LE150/$varSS/datacard.txt \
#    sssf_PTV_GT150=$DC_SS_Dir/wh3l_13TeV_sssf_PTV_GT150/$varSS/datacard.txt \
 #   ossf_PTV_LE150=$DC_OS_Dir/wh3l_13TeV_ossf_PTV_LE150/$varOS/datacard.txt \
#    ossf_PTV_GT150=$DC_OS_Dir/wh3l_13TeV_ossf_PTV_GT150/$varOS/datacard.txt \
#    wh3l_zg=$DC_OS_Dir/wh3l_zg_13TeV/events/datacard.txt \
#    wh3l_wz=$DC_OS_Dir/wh3l_wz_13TeV/events/datacard.txt \
#    > ${outputDir}/${analysis}_HTXS_Stage1.txt

combineCards.py \
    sssf_PTV_LE150=$DC_SS_Dir/wh3l_13TeV_sssf_PTV_LE150/$varSS/datacard.txt \
    ossf_PTV_LE150=$DC_OS_Dir/wh3l_13TeV_ossf_PTV_LE150/$varOS/datacard.txt \
    ossf_PTV_GT150=$DC_OS_Dir/wh3l_13TeV_ossf_PTV_GT150/$varOS/datacard.txt \
    wh3l_zg=$DC_OS_Dir/wh3l_zg_13TeV/events/datacard.txt \
    wh3l_wz=$DC_OS_Dir/wh3l_wz_13TeV/events/datacard.txt \
    > ${outputDir}/${analysis}_HTXS_Stage1.txt

#combineCards.py \
#    hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_0_75=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_0_75/$vars/datacard.txt \
#    hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_75_150=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_75_150/$vars/datacard.txt \
#    > ${outputDir}/Full2016_WH_SS_HTXS_Stage1.txt

echo "Combination folder is created"

#Bogus norm -0.04636308632246214 for channel sssf_PTV_75_150, process Vg, systematic CMS_btag_cferr1 Up
#btag
for nu in cferr1 cferr2 hf hfstats1_2017 hfstats2_2017 jes lf lfstats1_2017 lfstats2_2017
do
    echo "nuisance edit drop Vg sssf_PTV_LE150 CMS_btag_$nu" >> ${outputDir}/${analysis}_HTXS_Stage1.txt
done

#Eff
for nu in e_2017 m_2017 hwwtrigger_2017 prefiring_2017
do
    echo "nuisance edit drop Vg sssf_PTV_LE150 CMS_eff_$nu" >> ${outputDir}/${analysis}_HTXS_Stage1.txt
done
