#!/bin/bash

if [ -e $PWD/Combination ]
    then
    echo "deleting $PWD/Combination"
    rm -r $PWD/Combination
fi

if [ -z $1 ]
    then
    echo "please specify relative path to datacard folder"
    exit 1
fi

## FIXME this is where the Combine framework is installed
cd $CMSSW_BASE/src/
eval `scramv1 runtime -sh`
cd -

## work directory
outputDir=$PWD/Combination/

if [ ! -d $outputDir ]; then
  mkdir $outputDir
fi

datacardDir=$PWD/$1

## variable used for the signal regions fit
vars="WH3l_drOSll_min"

# no contribution
#sssf_PTV_150_250_GE1J=$datacardDir/wh3l_13TeV_sssf_PTV_150_250_GE1J/$vars/datacard.txt \
#ossf_PTV_150_250_GE1J=$datacardDir/wh3l_13TeV_ossf_PTV_150_250_GE1J/$vars/datacard.txt \

#sssf_FWDH=$datacardDir/wh3l_13TeV_sssf_FWDH/$vars/datacard.txt \
#ossf_FWDH=$datacardDir/wh3l_13TeV_ossf_FWDH/$vars/datacard.txt \

# combine the datacards
combineCards.py \
    sssf_FWDH=$datacardDir/wh3l_13TeV_sssf_FWDH/$vars/datacard.txt \
    sssf_PTV_0_75=$datacardDir/wh3l_13TeV_sssf_PTV_0_75/$vars/datacard.txt \
    sssf_PTV_75_150=$datacardDir/wh3l_13TeV_sssf_PTV_75_150/$vars/datacard.txt \
    sssf_PTV_150_250_0J=$datacardDir/wh3l_13TeV_sssf_PTV_150_250_0J/$vars/datacard.txt \
    sssf_PTV_GT250=$datacardDir/wh3l_13TeV_sssf_PTV_GT250/$vars/datacard.txt \
    ossf_FWDH=$datacardDir/wh3l_13TeV_ossf_FWDH/$vars/datacard.txt \
    ossf_PTV_0_75=$datacardDir/wh3l_13TeV_ossf_PTV_0_75/$vars/datacard.txt \
    ossf_PTV_75_150=$datacardDir/wh3l_13TeV_ossf_PTV_75_150/$vars/datacard.txt \
    ossf_PTV_150_250_0J=$datacardDir/wh3l_13TeV_ossf_PTV_150_250_0J/$vars/datacard.txt \
    ossf_PTV_GT250=$datacardDir/wh3l_13TeV_ossf_PTV_GT250/$vars/datacard.txt \
    wh3l_zg=$datacardDir/wh3l_zg_13TeV/events/datacard.txt \
    wh3l_wz=$datacardDir/wh3l_wz_13TeV/events/datacard.txt \
    > ${outputDir}/Full2018_WH3l_HTXS_Stage1.txt

#combineCards.py \
#    hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_0_75=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_0_75/$vars/datacard.txt \
#    hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_75_150=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_75_150/$vars/datacard.txt \
#    > ${outputDir}/Full2016_WH_SS_HTXS_Stage1.txt

echo "Combination folder is created"

#RuntimeError: Bogus norm -0.8446064097016196 for channel ossf_PTV_150_250_0J, process Vg, systematic CMS_btag_cferr1 Up
#RuntimeError: Bogus norm -0.029697551990340187 for channel ossf_PTV_GT250, process VVV, systematic CMS_btag_cferr1 Up

#Btag
for nu in cferr1 cferr2 hf hfstats1_2017 hfstats2_2017 jes lf lfstats1_2017 lfstats2_2017
do
    for bin in ossf_PTV_150_250_0J
    do
	echo "nuisance edit drop Vg $bin CMS_btag_$nu" >> ${outputDir}/Full2018_WH3l_HTXS_Stage1.txt
    done

    for bin in ossf_PTV_GT250
    do
        echo "nuisance edit drop VVV $bin CMS_btag_$nu" >> ${outputDir}/Full2018_WH3l_HTXS_Stage1.txt
	echo "nuisance edit drop Fake $bin CMS_btag_$nu" >> ${outputDir}/Full2018_WH3l_HTXS_Stage1.txt
    done
done

#Eff
for nu in e_2017 m_2017 hwwtrigger_2017
do
    for bin in ossf_PTV_150_250_0J
    do
	echo "nuisance edit drop Vg $bin CMS_eff_$nu" >> ${outputDir}/Full2018_WH3l_HTXS_Stage1.txt
    done

    for bin in ossf_PTV_GT250
    do
        echo "nuisance edit drop VVV $bin CMS_eff_$nu" >> ${outputDir}/Full2018_WH3l_HTXS_Stage1.txt
	echo "nuisance edit drop Fake $bin CMS_eff_$nu" >> ${outputDir}/Full2018_WH3l_HTXS_Stage1.txt
    done

done

#Fake
echo "nuisance edit drop Fake ossf_PTV_GT250 fake_ele_2017" >> ${outputDir}/Full2018_WH3l_HTXS_Stage1.txt
echo "nuisance edit drop Fake ossf_PTV_GT250 fake_ele_stat_2017" >> ${outputDir}/Full2018_WH3l_HTXS_Stage1.txt
echo "nuisance edit drop Fake ossf_PTV_GT250 fake_mu_2017" >> ${outputDir}/Full2018_WH3l_HTXS_Stage1.txt
echo "nuisance edit drop Fake ossf_PTV_GT250 fake_mu_stat_2017" >> ${outputDir}/Full2018_WH3l_HTXS_Stage1.txt
