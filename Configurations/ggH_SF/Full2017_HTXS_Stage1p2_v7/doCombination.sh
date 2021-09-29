#!/bin/bash

# cmsenv in Latinos environment
cd $HOME/work/latinos/unblinding/CMSSW_10_6_4/src/
eval `scramv1 runtime -sh`
cd -

# Datacard directory
datacardDir=$CMSSW_BASE/src/PlotsConfigurations/Configurations/ggH_SF/Full2017_HTXS_Stage1p2_v7/datacards
echo "Datacard directory:"
echo ${datacardDir}

# Output directory
outputDir=$CMSSW_BASE/src/PlotsConfigurations/Configurations/ggH_SF/Full2017_HTXS_Stage1p2_v7/Combination
mkdir -p ${outputDir}
echo "Output directory:"
echo ${outputDir}

# Source combine
cd $HOME/work/combine/CMSSW_10_2_13/src/
eval `scramv1 runtime -sh`
cd -

# combine the datacards
echo "Combining cards..."

combineCards.py   sf_0j_ee_pth0_10=${datacardDir}/hww2l2v_13TeV_0j_ee_pth0_10/events/datacard.txt \
                  sf_0j_ee_pth10_200=${datacardDir}/hww2l2v_13TeV_0j_ee_pth10_200/events/datacard.txt \
                  sf_0j_mm_pth0_10=${datacardDir}/hww2l2v_13TeV_0j_mm_pth0_10/events/datacard.txt \
                  sf_0j_mm_pth10_200=${datacardDir}/hww2l2v_13TeV_0j_mm_pth10_200/events/datacard.txt \
                  sf_1j_ee_pth0_60=${datacardDir}/hww2l2v_13TeV_1j_ee_pth0_60/events/datacard.txt \
                  sf_1j_ee_pth60_120=${datacardDir}/hww2l2v_13TeV_1j_ee_pth60_120/events/datacard.txt \
                  sf_1j_ee_pth120_200=${datacardDir}/hww2l2v_13TeV_1j_ee_pth120_200/events/datacard.txt \
                  sf_1j_mm_pth0_60=${datacardDir}/hww2l2v_13TeV_1j_mm_pth0_60/events/datacard.txt \
                  sf_1j_mm_pth60_120=${datacardDir}/hww2l2v_13TeV_1j_mm_pth60_120/events/datacard.txt \
                  sf_1j_mm_pth120_200=${datacardDir}/hww2l2v_13TeV_1j_mm_pth120_200/events/datacard.txt \
                  sf_2j_ee_mjj0_350_pth0_60=${datacardDir}/hww2l2v_13TeV_2j_ee_mjj0_350_pth0_60/events/datacard.txt \
                  sf_2j_mm_mjj0_350_pth0_60=${datacardDir}/hww2l2v_13TeV_2j_mm_mjj0_350_pth0_60/events/datacard.txt \
                  sf_2j_ee_mjj0_350_pth60_120=${datacardDir}/hww2l2v_13TeV_2j_ee_mjj0_350_pth60_120/events/datacard.txt \
                  sf_2j_mm_mjj0_350_pth60_120=${datacardDir}/hww2l2v_13TeV_2j_mm_mjj0_350_pth60_120/events/datacard.txt \
                  sf_2j_ee_mjj0_350_pth120_200=${datacardDir}/hww2l2v_13TeV_2j_ee_mjj0_350_pth120_200/events/datacard.txt \
                  sf_2j_mm_mjj0_350_pth120_200=${datacardDir}/hww2l2v_13TeV_2j_mm_mjj0_350_pth120_200/events/datacard.txt \
                  sf_hpt_ee_pth200_300=${datacardDir}/hww2l2v_13TeV_hpt_ee_pth200_300/events/datacard.txt \
                  sf_hpt_ee_pth300_450=${datacardDir}/hww2l2v_13TeV_hpt_ee_pth300_450/events/datacard.txt \
                  sf_hpt_ee_pth450_650=${datacardDir}/hww2l2v_13TeV_hpt_ee_pth450_650/events/datacard.txt \
                  sf_hpt_ee_pth650=${datacardDir}/hww2l2v_13TeV_hpt_ee_pth650/events/datacard.txt \
                  sf_hpt_mm_pth200_300=${datacardDir}/hww2l2v_13TeV_hpt_mm_pth200_300/events/datacard.txt \
                  sf_hpt_mm_pth300_450=${datacardDir}/hww2l2v_13TeV_hpt_mm_pth300_450/events/datacard.txt \
                  sf_hpt_mm_pth450_650=${datacardDir}/hww2l2v_13TeV_hpt_mm_pth450_650/events/datacard.txt \
                  sf_hpt_mm_pth650=${datacardDir}/hww2l2v_13TeV_hpt_mm_pth650/events/datacard.txt \
                  sf_0j_ee_Top=${datacardDir}/hww2l2v_13TeV_top_0j_ee/events/datacard.txt \
                  sf_0j_mm_Top=${datacardDir}/hww2l2v_13TeV_top_0j_mm/events/datacard.txt \
                  sf_1j_ee_Top=${datacardDir}/hww2l2v_13TeV_top_1j_ee/events/datacard.txt \
                  sf_1j_mm_Top=${datacardDir}/hww2l2v_13TeV_top_1j_mm/events/datacard.txt \
                  sf_2j_ee_Top=${datacardDir}/hww2l2v_13TeV_top_2j_ee/events/datacard.txt \
                  sf_2j_mm_Top=${datacardDir}/hww2l2v_13TeV_top_2j_mm/events/datacard.txt \
                  sf_hpt_ee_Top=${datacardDir}/hww2l2v_13TeV_top_hpt_ee/events/datacard.txt \
                  sf_hpt_mm_Top=${datacardDir}/hww2l2v_13TeV_top_hpt_mm/events/datacard.txt \
                  sf_0j_ee_WW=${datacardDir}/hww2l2v_13TeV_WW_0j_ee/events/datacard.txt \
                  sf_0j_mm_WW=${datacardDir}/hww2l2v_13TeV_WW_0j_mm/events/datacard.txt \
                  sf_1j_ee_WW=${datacardDir}/hww2l2v_13TeV_WW_1j_ee/events/datacard.txt \
                  sf_1j_mm_WW=${datacardDir}/hww2l2v_13TeV_WW_1j_mm/events/datacard.txt \
                  sf_2j_ee_WW=${datacardDir}/hww2l2v_13TeV_WW_2j_ee/events/datacard.txt \
                  sf_2j_mm_WW=${datacardDir}/hww2l2v_13TeV_WW_2j_mm/events/datacard.txt \
                  sf_hpt_mm_WW=${datacardDir}/hww2l2v_13TeV_WW_hpt_mm/events/datacard.txt \
                  sf_hpt_ee_WW=${datacardDir}/hww2l2v_13TeV_WW_hpt_ee/events/datacard.txt



                  # sf_2j_ee_mjj350_700_pthjj0_25=${datacardDir}/hww2l2v_13TeV_2j_ee_mjj350_700_pthjj0_25/events/datacard.txt \
                  # sf_2j_mm_mjj350_700_pthjj0_25=${datacardDir}/hww2l2v_13TeV_2j_mm_mjj350_700_pthjj0_25/events/datacard.txt \
                  # sf_2j_ee_mjj350_700_pthjj25=${datacardDir}/hww2l2v_13TeV_2j_ee_mjj350_700_pthjj25/events/datacard.txt \
                  # sf_2j_mm_mjj350_700_pthjj25=${datacardDir}/hww2l2v_13TeV_2j_mm_mjj350_700_pthjj25/events/datacard.txt \
                  # sf_2j_ee_mjj700_pthjj0_25=${datacardDir}/hww2l2v_13TeV_2j_ee_mjj700_pthjj0_25/events/datacard.txt \
                  # sf_2j_mm_mjj700_pthjj0_25=${datacardDir}/hww2l2v_13TeV_2j_mm_mjj700_pthjj0_25/events/datacard.txt \
                  # sf_2j_ee_mjj700_pthjj25=${datacardDir}/hww2l2v_13TeV_2j_ee_mjj700_pthjj25/events/datacard.txt \
                  # sf_2j_mm_mjj700_pthjj25=${datacardDir}/hww2l2v_13TeV_2j_mm_mjj700_pthjj25/events/datacard.txt \
