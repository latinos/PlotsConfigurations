#!/bin/bash

if [ -e $PWD/Combination/Full2016_WH_SS_HTXS_Stage1.txt ]
    then
    echo "deleting $PWD/Combination/Full2016_WH_SS_HTXS_Stage1.txt"
    rm $PWD/Combination/Full2016_WH_SS_HTXS_Stage1.txt
fi

#if [ -z $1 ]
#    then
#    echo "please specify relative path to datacard folder"
#    exit 1
#fi

## FIXME this is where the Combine framework is installed
cd $CMSSW_BASE/src/
eval `scramv1 runtime -sh`
cd -

## work directory
outputDir=$PWD/Combination/

if [ ! -d $outputDir ]; then
  mkdir $outputDir
fi

DC_OS_Dir=$PWD/datacards2016_WH_3l_OSSF_STXS_1p1/
DC_SS_Dir=$PWD/datacards2016_WH_3l_SSSF_STXS_1p1/

## variable used for the signal regions fit
varOS="BDTG_OSSF_bin2"
varSS="BDTG_SSSF_bin4"

# no contribution
#sssf_PTV_150_250_GE1J=$datacardDir/wh3l_13TeV_sssf_PTV_150_250_GE1J/$vars/datacard.txt \
#ossf_PTV_150_250_GE1J=$datacardDir/wh3l_13TeV_ossf_PTV_150_250_GE1J/$vars/datacard.txt \

#sssf_FWDH=$datacardDir/wh3l_13TeV_sssf_FWDH/$vars/datacard.txt \
#ossf_FWDH=$datacardDir/wh3l_13TeV_ossf_FWDH/$vars/datacard.txt \

# combine the datacards
combineCards.py \
    sssf_FWDH=$DC_SS_Dir/wh3l_13TeV_sssf_FWDH/$varSS/datacard.txt \
    sssf_PTV_0_75=$DC_SS_Dir/wh3l_13TeV_sssf_PTV_0_75/$varSS/datacard.txt \
    sssf_PTV_75_150=$DC_SS_Dir/wh3l_13TeV_sssf_PTV_75_150/$varSS/datacard.txt \
    sssf_PTV_150_250_0J=$DC_SS_Dir/wh3l_13TeV_sssf_PTV_150_250_0J/$varSS/datacard.txt \
    sssf_PTV_GT250=$DC_SS_Dir/wh3l_13TeV_sssf_PTV_GT250/$varSS/datacard.txt \
    ossf_FWDH=$DC_OS_Dir/wh3l_13TeV_ossf_FWDH/$varOS/datacard.txt \
    ossf_PTV_0_75=$DC_OS_Dir/wh3l_13TeV_ossf_PTV_0_75/$varOS/datacard.txt \
    ossf_PTV_75_150=$DC_OS_Dir/wh3l_13TeV_ossf_PTV_75_150/$varOS/datacard.txt \
    ossf_PTV_150_250_0J=$DC_OS_Dir/wh3l_13TeV_ossf_PTV_150_250_0J/$varOS/datacard.txt \
    ossf_PTV_GT250=$DC_OS_Dir/wh3l_13TeV_ossf_PTV_GT250/$varOS/datacard.txt \
    wh3l_zg=$DC_OS_Dir/wh3l_zg_13TeV/events/datacard.txt \
    wh3l_wz=$DC_OS_Dir/wh3l_wz_13TeV/events/datacard.txt \
    > ${outputDir}/Full2016_WH3l_HTXS_Stage1.txt

#combineCards.py \
#    hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_0_75=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_0_75/$vars/datacard.txt \
#    hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_75_150=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_75_150/$vars/datacard.txt \
#    > ${outputDir}/Full2016_WH_SS_HTXS_Stage1.txt

echo "Combination folder is created"

#of2j_WH_SS_ee_2j_PTV_150_250_0J
#RuntimeError: Bogus norm -0.08831159305282821 for channel of2j_WH_SS_ee_2j_PTV_150_250_0J, process Fakes_ee, systematic CMS_CMS_fake_e_2016 Up
#echo "nuisance edit drop Fakes_ee of2j_WH_SS_ee_2j_PTV_150_250_0J CMS_CMS_fake_e_2016" >> ${outputDir}/Full2016_WH_SS_HTXS_Stage1.txt
#echo "nuisance edit drop Fakes_ee of2j_WH_SS_ee_2j_PTV_150_250_0J CMS_CMS_fake_stat_e_2016" >> ${outputDir}/Full2016_WH_SS_HTXS_Stage1.txt

#Btag
#RuntimeError: Bogus norm -0.4695537986470998 for channel of2j_WH_SS_eu_2j_PTV_150_250_0J, process Vg, systematic CMS_CMS_btag_cferr1 Up
#RuntimeError: Bogus norm -0.4695537986470998 for channel hww2l2v_13TeV_of2j_WH_SS_eu_2j_PTV_150_250_0J, process Vg, systematic CMS_CMS_btag_cferr1 Up
#for nu in cferr1 cferr2 hf hfstats1_2016 hfstats2_2016 jes lf lfstats1_2016 lfstats2_2016
#do
#    for bin in hww2l2v_13TeV_of2j_WH_SS_eu_2j_PTV_150_250_0J
#    do
#	echo "nuisance edit drop Vg $bin CMS_CMS_btag_$nu" >> ${outputDir}/Full2016_WH_SS_HTXS_Stage1.txt
#    done

#    for bin in hww2l2v_13TeV_of2j_WH_SS_eu_2j_PTV_150_250_GE1J
#    do
#        echo "nuisance edit drop VVV $bin CMS_CMS_btag_$nu" >> ${outputDir}/Full2016_WH_SS_HTXS_Stage1.txt
#    done
#done

#Eff
#for nu in e_2016 m_2016 hwwtrigger_2016 prefiring_2016
#do
#    for bin in hww2l2v_13TeV_of2j_WH_SS_eu_2j_PTV_150_250_0J
#    do
#	echo "nuisance edit drop Vg $bin CMS_CMS_eff_$nu" >> ${outputDir}/Full2016_WH_SS_HTXS_Stage1.txt
#    done

#    for bin in hww2l2v_13TeV_of2j_WH_SS_eu_2j_PTV_150_250_GE1J
#    do
#        echo "nuisance edit drop VVV $bin CMS_CMS_eff_$nu" >> ${outputDir}/Full2016_WH_SS_HTXS_Stage1.txt
#    done

#done
