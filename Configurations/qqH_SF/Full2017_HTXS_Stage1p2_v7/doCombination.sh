#!/bin/bash

# cmsenv in Latinos environment
cd $HOME/work/latinos/unblinding/CMSSW_10_6_4/src/
eval `scramv1 runtime -sh`
cd -

# Datacard directory
datacardDir=$CMSSW_BASE/src/PlotsConfigurations/Configurations/qqH_SF/Full2017_HTXS_Stage1p2_v7/datacards
echo "Datacard directory:"
echo ${datacardDir}

# Output directory
outputDir=$CMSSW_BASE/src/PlotsConfigurations/Configurations/qqH_SF/Full2017_HTXS_Stage1p2_v7/Combination
mkdir -p ${outputDir}
echo "Output directory:"
echo ${outputDir}

# Source combine
cd $HOME/work/combine/CMSSW_10_2_13/src/
eval `scramv1 runtime -sh`
cd -

# combine the datacards
echo "Combining cards..."

combineCards.py sf_2j_ee_mjj65_105=${datacardDir}/hww2l2v_13TeV_2j_mjj65_105_ee/events/datacard.txt \
                sf_2j_mm_mjj65_105=${datacardDir}/hww2l2v_13TeV_2j_mjj65_105_mm/events/datacard.txt \
                sf_2j_ee_mjj350_700_pthLT200=${datacardDir}/hww2l2v_13TeV_2j_mjj350_700_pthLT200_ee/events/datacard.txt \
                sf_2j_mm_mjj350_700_pthLT200=${datacardDir}/hww2l2v_13TeV_2j_mjj350_700_pthLT200_mm/events/datacard.txt \
                sf_2j_ee_mjjGT700_pthLT200=${datacardDir}/hww2l2v_13TeV_2j_mjjGT700_pthLT200_ee/events/datacard.txt \
                sf_2j_mm_mjjGT700_pthLT200=${datacardDir}/hww2l2v_13TeV_2j_mjjGT700_pthLT200_mm/events/datacard.txt \
                sf_2j_ee_mjjGT350_pthGT200=${datacardDir}/hww2l2v_13TeV_2j_mjjGT350_pthGT200_ee/events/datacard.txt \
                sf_2j_mm_mjjGT350_pthGT200=${datacardDir}/hww2l2v_13TeV_2j_mjjGT350_pthGT200_mm/events/datacard.txt \
                sf_2j_ee_top_2j_vh=${datacardDir}/hww2l2v_13TeV_top_2j_vh_ee/events/datacard.txt \
                sf_2j_mm_top_2j_vh=${datacardDir}/hww2l2v_13TeV_top_2j_vh_mm/events/datacard.txt \
                sf_2j_ee_top_2j_vbf=${datacardDir}/hww2l2v_13TeV_top_2j_vbf_ee/events/datacard.txt \
                sf_2j_mm_top_2j_vbf=${datacardDir}/hww2l2v_13TeV_top_2j_vbf_mm/events/datacard.txt \
                sf_2j_ee_top_2j_hpt=${datacardDir}/hww2l2v_13TeV_top_2j_hpt_ee/events/datacard.txt \
                sf_2j_mm_top_2j_hpt=${datacardDir}/hww2l2v_13TeV_top_2j_hpt_mm/events/datacard.txt \
                sf_2j_ee_WW_2j_vh=${datacardDir}/hww2l2v_13TeV_WW_2j_vh_ee/events/datacard.txt \
                sf_2j_mm_WW_2j_vh=${datacardDir}/hww2l2v_13TeV_WW_2j_vh_mm/events/datacard.txt \
                sf_2j_ee_WW_2j_vbf=${datacardDir}/hww2l2v_13TeV_WW_2j_vbf_ee/events/datacard.txt \
                sf_2j_mm_WW_2j_vbf=${datacardDir}/hww2l2v_13TeV_WW_2j_vbf_mm/events/datacard.txt \
                sf_2j_ee_WW_2j_hpt=${datacardDir}/hww2l2v_13TeV_WW_2j_hpt_ee/events/datacard.txt \
                sf_2j_mm_WW_2j_hpt=${datacardDir}/hww2l2v_13TeV_WW_2j_hpt_mm/events/datacard.txt
