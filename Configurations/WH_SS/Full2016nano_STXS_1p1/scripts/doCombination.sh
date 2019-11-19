#!/bin/bash

## FIXME this is where the Combine framework is installed
cd $CMSSW_BASE/src/
eval `scramv1 runtime -sh`
cd -

## work directory
outputDir=$CMSSW_BASE/src/PlotsConfigurations_STXS_1p1/Configurations/WH_SS/Full2016nano_STXS_1p1/Combination/

if [ ! -d $outputDir ]; then
  mkdir $outputDir
fi

datacardDir=$CMSSW_BASE/src/PlotsConfigurations_STXS_1p1/Configurations/WH_SS/Full2016nano_STXS_1p1/

## variable used for the signal regions fit
#mlljj20_whss_bin5
vars="mlljj20_whss_bin4"

# combine the datacards
combineCards.py \
    of2j_WH_SS_ee_2j_FWDH=$1/hww2l2v_13TeV_of2j_WH_SS_ee_2j_FWDH/$vars/datacard.txt \
    of2j_WH_SS_ee_2j_PTV_0_75=$1/hww2l2v_13TeV_of2j_WH_SS_ee_2j_PTV_0_75/$vars/datacard.txt \
    of2j_WH_SS_ee_2j_PTV_75_150=$1/hww2l2v_13TeV_of2j_WH_SS_ee_2j_PTV_75_150/$vars/datacard.txt \
    of2j_WH_SS_ee_2j_PTV_150_250_0J=$1/hww2l2v_13TeV_of2j_WH_SS_ee_2j_PTV_150_250_0J/$vars/datacard.txt \
    of2j_WH_SS_ee_2j_PTV_150_250_GE1J=$1/hww2l2v_13TeV_of2j_WH_SS_ee_2j_PTV_150_250_GE1J/$vars/datacard.txt \
    of2j_WH_SS_ee_2j_PTV_GT250=$1/hww2l2v_13TeV_of2j_WH_SS_ee_2j_PTV_GT250/$vars/datacard.txt \
    \
    of2j_WH_SS_uu_2j_FWDH=$1/hww2l2v_13TeV_of2j_WH_SS_uu_2j_FWDH/$vars/datacard.txt \
    of2j_WH_SS_uu_2j_PTV_0_75=$1/hww2l2v_13TeV_of2j_WH_SS_uu_2j_PTV_0_75/$vars/datacard.txt \
    of2j_WH_SS_uu_2j_PTV_75_150=$1/hww2l2v_13TeV_of2j_WH_SS_uu_2j_PTV_75_150/$vars/datacard.txt \
    of2j_WH_SS_uu_2j_PTV_150_250_0J=$1/hww2l2v_13TeV_of2j_WH_SS_uu_2j_PTV_150_250_0J/$vars/datacard.txt \
    of2j_WH_SS_uu_2j_PTV_150_250_GE1J=$1/hww2l2v_13TeV_of2j_WH_SS_uu_2j_PTV_150_250_GE1J/$vars/datacard.txt \
    of2j_WH_SS_uu_2j_PTV_GT250=$1/hww2l2v_13TeV_of2j_WH_SS_uu_2j_PTV_GT250/$vars/datacard.txt \
    \
    of2j_WH_SS_eu_2j_FWDH=$1/hww2l2v_13TeV_of2j_WH_SS_eu_2j_FWDH/$vars/datacard.txt \
    of2j_WH_SS_eu_2j_PTV_0_75=$1/hww2l2v_13TeV_of2j_WH_SS_eu_2j_PTV_0_75/$vars/datacard.txt \
    of2j_WH_SS_eu_2j_PTV_75_150=$1/hww2l2v_13TeV_of2j_WH_SS_eu_2j_PTV_75_150/$vars/datacard.txt \
    of2j_WH_SS_eu_2j_PTV_150_250_0J=$1/hww2l2v_13TeV_of2j_WH_SS_eu_2j_PTV_150_250_0J/$vars/datacard.txt \
    of2j_WH_SS_eu_2j_PTV_150_250_GE1J=$1/hww2l2v_13TeV_of2j_WH_SS_eu_2j_PTV_150_250_GE1J/$vars/datacard.txt \
    of2j_WH_SS_eu_2j_PTV_GT250=$1/hww2l2v_13TeV_of2j_WH_SS_eu_2j_PTV_GT250/$vars/datacard.txt \
    \
    of2j_WH_SS_ee_1j_FWDH=$1/hww2l2v_13TeV_of2j_WH_SS_ee_1j_FWDH/$vars/datacard.txt \
    of2j_WH_SS_ee_1j_PTV_0_75=$1/hww2l2v_13TeV_of2j_WH_SS_ee_1j_PTV_0_75/$vars/datacard.txt \
    of2j_WH_SS_ee_1j_PTV_75_150=$1/hww2l2v_13TeV_of2j_WH_SS_ee_1j_PTV_75_150/$vars/datacard.txt \
    of2j_WH_SS_ee_1j_PTV_150_250_0J=$1/hww2l2v_13TeV_of2j_WH_SS_ee_1j_PTV_150_250_0J/$vars/datacard.txt \
    of2j_WH_SS_ee_1j_PTV_150_250_GE1J=$1/hww2l2v_13TeV_of2j_WH_SS_ee_1j_PTV_150_250_GE1J/$vars/datacard.txt \
    of2j_WH_SS_ee_1j_PTV_GT250=$1/hww2l2v_13TeV_of2j_WH_SS_ee_1j_PTV_GT250/$vars/datacard.txt \
    \
    of2j_WH_SS_uu_1j_FWDH=$1/hww2l2v_13TeV_of2j_WH_SS_uu_1j_FWDH/$vars/datacard.txt \
    of2j_WH_SS_uu_1j_PTV_0_75=$1/hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_0_75/$vars/datacard.txt \
    of2j_WH_SS_uu_1j_PTV_75_150=$1/hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_75_150/$vars/datacard.txt \
    of2j_WH_SS_uu_1j_PTV_150_250_0J=$1/hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_150_250_0J/$vars/datacard.txt \
    of2j_WH_SS_uu_1j_PTV_150_250_GE1J=$1/hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_150_250_GE1J/$vars/datacard.txt \
    of2j_WH_SS_uu_1j_PTV_GT250=$1/hww2l2v_13TeV_of2j_WH_SS_uu_1j_PTV_GT250/$vars/datacard.txt \
    \
    of2j_WH_SS_eu_1j_FWDH=$1/hww2l2v_13TeV_of2j_WH_SS_eu_1j_FWDH/$vars/datacard.txt \
    of2j_WH_SS_eu_1j_PTV_0_75=$1/hww2l2v_13TeV_of2j_WH_SS_eu_1j_PTV_0_75/$vars/datacard.txt \
    of2j_WH_SS_eu_1j_PTV_75_150=$1/hww2l2v_13TeV_of2j_WH_SS_eu_1j_PTV_75_150/$vars/datacard.txt \
    of2j_WH_SS_eu_1j_PTV_150_250_0J=$1/hww2l2v_13TeV_of2j_WH_SS_eu_1j_PTV_150_250_0J/$vars/datacard.txt \
    of2j_WH_SS_eu_1j_PTV_150_250_GE1J=$1/hww2l2v_13TeV_of2j_WH_SS_eu_1j_PTV_150_250_GE1J/$vars/datacard.txt \
    of2j_WH_SS_eu_1j_PTV_GT250=$1/hww2l2v_13TeV_of2j_WH_SS_eu_1j_PTV_GT250/$vars/datacard.txt \
    > ${outputDir}/Full2016_WH_SS_HTXS_Stage1.txt


#RuntimeError: Bogus norm 0.0 for channel of0j_DYtt, process ttH_hww, systematic CMS_scale_met_2017 Down
#echo "nuisance edit drop ttH_hww of0j_DYtt CMS_scale_met_2017" >> ${outputDir}/Full2017_ggH_HTXS_Stage1.txt
#echo "nuisance edit drop ttH_hww of1j_DYtt CMS_scale_met_2017" >> ${outputDir}/Full2017_ggH_HTXS_Stage1.txt
#echo "nuisance edit drop ttH_hww of2j_DYtt CMS_scale_met_2017" >> ${outputDir}/Full2017_ggH_HTXS_Stage1.txt

