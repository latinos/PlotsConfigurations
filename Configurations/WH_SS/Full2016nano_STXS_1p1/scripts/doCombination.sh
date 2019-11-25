#!/bin/bash

if [ -e $PWD/Combination/Full2016_WH_SS_HTXS_Stage1.txt ]
    then
    echo "deleting $PWD/Combination/Full2016_WH_SS_HTXS_Stage1.txt"
    rm $PWD/Combination/Full2016_WH_SS_HTXS_Stage1.txt
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
outputDir=$CMSSW_BASE/src/PlotsConfigurations_STXS_1p1/Configurations/WH_SS/Full2016nano_STXS_1p1/Combination/

if [ ! -d $outputDir ]; then
  mkdir $outputDir
fi

datacardDir=$PWD/$1

## variable used for the signal regions fit
#mlljj20_whss_bin5
vars="mlljj20_whss_bin4"

# combine the datacards
combineCards.py \
    hww2l2v_13TeV_of2j_WH_SS_ee_2j_FWDH=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_ee_2j_FWDH/$vars/datacard.txt \
    hww2l2v_13TeV_of2j_WH_SS_uu_2j_FWDH=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_uu_2j_FWDH/$vars/datacard.txt \
    hww2l2v_13TeV_of2j_WH_SS_eu_2j_FWDH=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_eu_2j_FWDH/$vars/datacard.txt \
    hww2l2v_13TeV_of2j_WH_SS_ee_1j_FWDH=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_ee_1j_FWDH/$vars/datacard.txt \
    hww2l2v_13TeV_of2j_WH_SS_uu_1j_FWDH=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_uu_1j_FWDH/$vars/datacard.txt \
    hww2l2v_13TeV_of2j_WH_SS_eu_1j_FWDH=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_eu_1j_FWDH/$vars/datacard.txt \
    \
    hww2l2v_13TeV_of2j_WH_SS_uu_2j_PTV_0_75=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_uu_2j_PTV_0_75/$vars/datacard.txt \
    hww2l2v_13TeV_of2j_WH_SS_uu_2j_PTV_75_150=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_uu_2j_PTV_75_150/$vars/datacard.txt \
    hww2l2v_13TeV_of2j_WH_SS_uu_2j_PTV_150_250_0J=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_uu_2j_PTV_150_250_0J/$vars/datacard.txt \
    hww2l2v_13TeV_of2j_WH_SS_uu_2j_PTV_150_250_GE1J=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_uu_2j_PTV_150_250_GE1J/$vars/datacard.txt \
    hww2l2v_13TeV_of2j_WH_SS_uu_2j_PTV_GT250=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_uu_2j_PTV_GT250/$vars/datacard.txt \
    \
    hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_0_75=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_0_75/$vars/datacard.txt \
    hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_75_150=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_75_150/$vars/datacard.txt \
    hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_150_250_0J=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_150_250_0J/$vars/datacard.txt \
    hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_150_250_GE1J=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_150_250_GE1J/$vars/datacard.txt \
    hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_GT250=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_GT250/$vars/datacard.txt \
    \
    hww2l2v_13TeV_of2j_WH_SS_eu_2j_PTV_0_75=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_eu_2j_PTV_0_75/$vars/datacard.txt \
    hww2l2v_13TeV_of2j_WH_SS_eu_2j_PTV_75_150=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_eu_2j_PTV_75_150/$vars/datacard.txt \
    hww2l2v_13TeV_of2j_WH_SS_eu_2j_PTV_150_250_0J=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_eu_2j_PTV_150_250_0J/$vars/datacard.txt \
    hww2l2v_13TeV_of2j_WH_SS_eu_2j_PTV_150_250_GE1J=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_eu_2j_PTV_150_250_GE1J/$vars/datacard.txt \
    hww2l2v_13TeV_of2j_WH_SS_eu_2j_PTV_GT250=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_eu_2j_PTV_GT250/$vars/datacard.txt \
    \
    hww2l2v_13TeV_of2j_WH_SS_eu_1j_PTV_0_75=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_eu_1j_PTV_0_75/$vars/datacard.txt \
    hww2l2v_13TeV_of2j_WH_SS_eu_1j_PTV_75_150=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_eu_1j_PTV_75_150/$vars/datacard.txt \
    hww2l2v_13TeV_of2j_WH_SS_eu_1j_PTV_150_250_0J=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_eu_1j_PTV_150_250_0J/$vars/datacard.txt \
    hww2l2v_13TeV_of2j_WH_SS_eu_1j_PTV_150_250_GE1J=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_eu_1j_PTV_150_250_GE1J/$vars/datacard.txt \
    hww2l2v_13TeV_of2j_WH_SS_eu_1j_PTV_GT250=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_eu_1j_PTV_GT250/$vars/datacard.txt \
    \
    hww2l2v_13TeV_of2j_WH_SS_ee_1j_PTV_0_75=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_ee_1j_PTV_0_75/$vars/datacard.txt \
    hww2l2v_13TeV_of2j_WH_SS_ee_1j_PTV_75_150=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_ee_1j_PTV_75_150/$vars/datacard.txt \
    hww2l2v_13TeV_of2j_WH_SS_ee_1j_PTV_150_250_0J=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_ee_1j_PTV_150_250_0J/$vars/datacard.txt \
    hww2l2v_13TeV_of2j_WH_SS_ee_1j_PTV_150_250_GE1J=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_ee_1j_PTV_150_250_GE1J/$vars/datacard.txt \
    hww2l2v_13TeV_of2j_WH_SS_ee_1j_PTV_GT250=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_ee_1j_PTV_GT250/$vars/datacard.txt \
    \
    hww2l2v_13TeV_of2j_WH_SS_ee_2j_PTV_0_75=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_ee_2j_PTV_0_75/$vars/datacard.txt \
    hww2l2v_13TeV_of2j_WH_SS_ee_2j_PTV_75_150=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_ee_2j_PTV_75_150/$vars/datacard.txt \
    hww2l2v_13TeV_of2j_WH_SS_ee_2j_PTV_150_250_0J=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_ee_2j_PTV_150_250_0J/$vars/datacard.txt \
    hww2l2v_13TeV_of2j_WH_SS_ee_2j_PTV_150_250_GE1J=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_ee_2j_PTV_150_250_GE1J/$vars/datacard.txt \
    hww2l2v_13TeV_of2j_WH_SS_ee_2j_PTV_GT250=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_ee_2j_PTV_GT250/$vars/datacard.txt \
    > ${outputDir}/Full2016_WH_SS_HTXS_Stage1.txt


echo "Combination folder is created"

#remove ee
#combineCards.py \
#    hww2l2v_13TeV_of2j_WH_SS_ee_2j_FWDH=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_ee_2j_FWDH/$vars/datacard.txt \
#    hww2l2v_13TeV_of2j_WH_SS_uu_2j_FWDH=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_uu_2j_FWDH/$vars/datacard.txt \
#    hww2l2v_13TeV_of2j_WH_SS_eu_2j_FWDH=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_eu_2j_FWDH/$vars/datacard.txt \
#    hww2l2v_13TeV_of2j_WH_SS_uu_1j_FWDH=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_uu_1j_FWDH/$vars/datacard.txt \
#    hww2l2v_13TeV_of2j_WH_SS_eu_1j_FWDH=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_eu_1j_FWDH/$vars/datacard.txt \
#    \
#    hww2l2v_13TeV_of2j_WH_SS_uu_2j_PTV_0_75=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_uu_2j_PTV_0_75/$vars/datacard.txt \
#    hww2l2v_13TeV_of2j_WH_SS_uu_2j_PTV_75_150=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_uu_2j_PTV_75_150/$vars/datacard.txt \
#    hww2l2v_13TeV_of2j_WH_SS_uu_2j_PTV_150_250_0J=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_uu_2j_PTV_150_250_0J/$vars/datacard.txt \
#    hww2l2v_13TeV_of2j_WH_SS_uu_2j_PTV_150_250_GE1J=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_uu_2j_PTV_150_250_GE1J/$vars/datacard.txt \
#    hww2l2v_13TeV_of2j_WH_SS_uu_2j_PTV_GT250=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_uu_2j_PTV_GT250/$vars/datacard.txt \
#    \
#    hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_0_75=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_0_75/$vars/datacard.txt \
#    hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_75_150=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_75_150/$vars/datacard.txt \
#    hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_150_250_0J=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_150_250_0J/$vars/datacard.txt \
#    hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_150_250_GE1J=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_150_250_GE1J/$vars/datacard.txt \
#    hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_GT250=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_GT250/$vars/datacard.txt \
#    hww2l2v_13TeV_of2j_WH_SS_eu_2j_PTV_0_75=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_eu_2j_PTV_0_75/$vars/datacard.txt \
#    \
#    hww2l2v_13TeV_of2j_WH_SS_eu_2j_PTV_75_150=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_eu_2j_PTV_75_150/$vars/datacard.txt \
#    hww2l2v_13TeV_of2j_WH_SS_eu_2j_PTV_150_250_0J=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_eu_2j_PTV_150_250_0J/$vars/datacard.txt \
#    hww2l2v_13TeV_of2j_WH_SS_eu_2j_PTV_150_250_GE1J=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_eu_2j_PTV_150_250_GE1J/$vars/datacard.txt \
#    hww2l2v_13TeV_of2j_WH_SS_eu_2j_PTV_GT250=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_eu_2j_PTV_GT250/$vars/datacard.txt \
#    \
#    hww2l2v_13TeV_of2j_WH_SS_eu_1j_PTV_0_75=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_eu_1j_PTV_0_75/$vars/datacard.txt \
#    hww2l2v_13TeV_of2j_WH_SS_eu_1j_PTV_75_150=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_eu_1j_PTV_75_150/$vars/datacard.txt \
#    hww2l2v_13TeV_of2j_WH_SS_eu_1j_PTV_150_250_0J=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_eu_1j_PTV_150_250_0J/$vars/datacard.txt \
#    hww2l2v_13TeV_of2j_WH_SS_eu_1j_PTV_150_250_GE1J=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_eu_1j_PTV_150_250_GE1J/$vars/datacard.txt \
#    hww2l2v_13TeV_of2j_WH_SS_eu_1j_PTV_GT250=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_eu_1j_PTV_GT250/$vars/datacard.txt \
#    \
#    hww2l2v_13TeV_of2j_WH_SS_ee_1j_PTV_0_75=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_ee_1j_PTV_0_75/$vars/datacard.txt \
#    hww2l2v_13TeV_of2j_WH_SS_ee_1j_PTV_150_250_0J=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_ee_1j_PTV_150_250_0J/$vars/datacard.txt \
#    hww2l2v_13TeV_of2j_WH_SS_ee_1j_PTV_150_250_GE1J=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_ee_1j_PTV_150_250_GE1J/$vars/datacard.txt \
#    hww2l2v_13TeV_of2j_WH_SS_ee_1j_PTV_GT250=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_ee_1j_PTV_GT250/$vars/datacard.txt \
#    \
#    hww2l2v_13TeV_of2j_WH_SS_ee_2j_PTV_0_75=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_ee_2j_PTV_0_75/$vars/datacard.txt \
#    hww2l2v_13TeV_of2j_WH_SS_ee_2j_PTV_75_150=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_ee_2j_PTV_75_150/$vars/datacard.txt \
#    hww2l2v_13TeV_of2j_WH_SS_ee_2j_PTV_150_250_0J=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_ee_2j_PTV_150_250_0J/$vars/datacard.txt \
#    hww2l2v_13TeV_of2j_WH_SS_ee_2j_PTV_150_250_GE1J=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_ee_2j_PTV_150_250_GE1J/$vars/datacard.txt \
#    hww2l2v_13TeV_of2j_WH_SS_ee_2j_PTV_GT250=$datacardDir/hww2l2v_13TeV_of2j_WH_SS_ee_2j_PTV_GT250/$vars/datacard.txt \
#    > ${outputDir}/Full2016_WH_SS_HTXS_Stage1.txt


#Btag
#RuntimeError: Bogus norm -0.4695537986470998 for channel of2j_WH_SS_eu_2j_PTV_150_250_0J, process Vg, systematic CMS_CMS_btag_cferr1 Up
#RuntimeError: Bogus norm -0.4695537986470998 for channel hww2l2v_13TeV_of2j_WH_SS_eu_2j_PTV_150_250_0J, process Vg, systematic CMS_CMS_btag_cferr1 Up
for nu in cferr1 cferr2 hf hfstats1_2016 hfstats2_2016 jes lf lfstats1_2016 lfstats2_2016
do
    for bin in hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_0_75
    do
	echo "nuisance edit drop Vg $bin CMS_CMS_btag_$nu" >> ${outputDir}/Full2016_WH_SS_HTXS_Stage1.txt
    done

    #for bin in hww2l2v_13TeV_of2j_WH_SS_eu_2j_PTV_150_250_GE1J
    #do
    #    echo "nuisance edit drop VVV $bin CMS_CMS_btag_$nu" >> ${outputDir}/Full2016_WH_SS_HTXS_Stage1.txt
    #done
done

#Eff
for nu in e_2016 m_2016 hwwtrigger_2016 prefiring_2016
do
    for bin in hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_0_75
    do
	echo "nuisance edit drop Vg $bin CMS_CMS_eff_$nu" >> ${outputDir}/Full2016_WH_SS_HTXS_Stage1.txt
    done

    #for bin in hww2l2v_13TeV_of2j_WH_SS_eu_2j_PTV_150_250_GE1J
    #do
    #    echo "nuisance edit drop VVV $bin CMS_CMS_eff_$nu" >> ${outputDir}/Full2016_WH_SS_HTXS_Stage1.txt
    #done
done
