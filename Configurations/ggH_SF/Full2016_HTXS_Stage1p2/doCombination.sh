#!/bin/bash

# this is where the Combine framework is installed
cd /afs/cern.ch/user/d/ddicroce/work/Latinos/CMSSW_10_2_13/src/
eval `scramv1 runtime -sh`
cd -

## work directory
outputDir=/afs/cern.ch/user/d/ddicroce/work/Latinos/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/ggH_SF/Full2016_HTXS_Stage1p2/Combination

if [ ! -d $outputDir ]; then
  mkdir $outputDir
fi

datacardDir=/afs/cern.ch/user/d/ddicroce/work/Latinos/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/ggH_SF/Full2016_HTXS_Stage1p2/datacards


# combine the datacards
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
                  sf_2j_ee_mjj350_700_pthjj0_25=${datacardDir}/hww2l2v_13TeV_2j_ee_mjj350_700_pthjj0_25/events/datacard.txt \
                  sf_2j_mm_mjj350_700_pthjj0_25=${datacardDir}/hww2l2v_13TeV_2j_mm_mjj350_700_pthjj0_25/events/datacard.txt \
                  sf_2j_ee_mjj350_700_pthjj25=${datacardDir}/hww2l2v_13TeV_2j_ee_mjj350_700_pthjj25/events/datacard.txt \
                  sf_2j_mm_mjj350_700_pthjj25=${datacardDir}/hww2l2v_13TeV_2j_mm_mjj350_700_pthjj25/events/datacard.txt \
                  sf_2j_ee_mjj700_pthjj0_25=${datacardDir}/hww2l2v_13TeV_2j_ee_mjj700_pthjj0_25/events/datacard.txt \
                  sf_2j_mm_mjj700_pthjj0_25=${datacardDir}/hww2l2v_13TeV_2j_mm_mjj700_pthjj0_25/events/datacard.txt \
                  sf_2j_ee_mjj700_pthjj25=${datacardDir}/hww2l2v_13TeV_2j_ee_mjj700_pthjj25/events/datacard.txt \
                  sf_2j_mm_mjj700_pthjj25=${datacardDir}/hww2l2v_13TeV_2j_mm_mjj700_pthjj25/events/datacard.txt \
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
                  sf_1j_mm_WW=${datacardDir}/hww2l2v_13TeV_WW_1j_mm/events/datacard.txt
                  sf_2j_ee_WW=${datacardDir}/hww2l2v_13TeV_WW_2j_ee/events/datacard.txt \
                  sf_2j_mm_WW=${datacardDir}/hww2l2v_13TeV_WW_2j_mm/events/datacard.txt
                  sf_hpt_mm_WW=${datacardDir}/hww2l2v_13TeV_WW_hpt_mm/events/datacard.txt
                  sf_hpt_ee_WW=${datacardDir}/hww2l2v_13TeV_WW_hpt_ee/events/datacard.txt \
                  #> ${outputDir}/Full2016_SF_ggH_HTXS_Stage1p2.txt


#echo "nuisance edit drop DY of_2j_mjjGT700_pthjj0_25 CMS_eff_e_2016" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
#echo "nuisance edit drop DY of_2j_mjjGT700_pthjj0_25 CMS_eff_m_2016" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
#echo "nuisance edit drop DY of_2j_mjjGT700_pthjj0_25 CMS_eff_hwwtrigger_2016" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
#echo "nuisance edit drop DY of_2j_mjjGT700_pthjj0_25 CMS_eff_prefiring_2016" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
#echo "nuisance edit drop DY of_2j_mjjGT700_pthjj0_25 CMS_btag_cferr1" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
#echo "nuisance edit drop DY of_2j_mjjGT700_pthjj0_25 CMS_btag_cferr2" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
#echo "nuisance edit drop DY of_2j_mjjGT700_pthjj0_25 CMS_btag_hf" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
#echo "nuisance edit drop DY of_2j_mjjGT700_pthjj0_25 CMS_btag_hfstats1_2016" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
#echo "nuisance edit drop DY of_2j_mjjGT700_pthjj0_25 CMS_btag_hfstats2_2016" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
#echo "nuisance edit drop DY of_2j_mjjGT700_pthjj0_25 CMS_btag_jes" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
#echo "nuisance edit drop DY of_2j_mjjGT700_pthjj0_25 CMS_btag_lf" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
#echo "nuisance edit drop DY of_2j_mjjGT700_pthjj0_25 CMS_btag_lfstats1_2016" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
#echo "nuisance edit drop DY of_2j_mjjGT700_pthjj0_25 CMS_btag_lfstats2_2016" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
#
#echo "nuisance edit drop Fake_ee of_pthGT650 CMS_fake_e_2016" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
#echo "nuisance edit drop Fake_mm of_pthGT650 CMS_fake_m_2016" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
#echo "nuisance edit drop Fake_ee of_pthGT650 CMS_fake_stat_e_2016" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
#echo "nuisance edit drop Fake_mm of_pthGT650 CMS_fake_stat_m_2016" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt

#echo "nuisance edit freeze UE_CUETP" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
