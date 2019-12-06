#!/bin/bash

## FIXME this is where the Combine framework is installed
cd /afs/cern.ch/work/a/alvareza/public/CMSSW_10_2_13/src/
eval `scramv1 runtime -sh`
cd -

## work directory
outputDir=/afs/cern.ch/work/a/alvareza/public/CMSSW_9_4_9/src/PlotsConfigurations/Configurations/ggH/Full2016_nanoAOD/HTXS_Stage1/Combination/

if [ ! -d $outputDir ]; then
  mkdir $outputDir
fi

datacardDir=/afs/cern.ch/work/a/alvareza/public/CMSSW_9_4_9/src/PlotsConfigurations/Configurations/ggH/Full2016_nanoAOD/HTXS_Stage1/datacards_ggH2016_STXS_thunorm


## variable used for the signal regions fit
variable_bin=mllVSmth_pt2lt20
variable_bin2=mllVSmth_4x3bins
variable_bin3=mllVSmth_3x3bins
variable_bin4=mllVSmth_2x2bins

# combine the datacards
combineCards.py   of_0j_pth0_10=${datacardDir}/hww2l2v_13TeV_of0j_pth0_10/${variable_bin}/datacard.txt \
                  of_0j_pth10_200=${datacardDir}/hww2l2v_13TeV_of0j_pth10_200/${variable_bin}/datacard.txt \
                  of_1j_pth0_60=${datacardDir}/hww2l2v_13TeV_of1j_pth0_60/${variable_bin}/datacard.txt \
                  of_1j_pth60_120=${datacardDir}/hww2l2v_13TeV_of1j_pth60_120/${variable_bin}/datacard.txt \
                  of_1j_pth120_200=${datacardDir}/hww2l2v_13TeV_of1j_pth120_200/${variable_bin}/datacard.txt \
                  of_2j_lowmjj_pth0_60=${datacardDir}/hww2l2v_13TeV_of2j_lowmjj_pth0_60/${variable_bin}/datacard.txt \
                  of_2j_lowmjj_pth60_120=${datacardDir}/hww2l2v_13TeV_of2j_lowmjj_pth60_120/${variable_bin}/datacard.txt \
                  of_2j_lowmjj_pth120_200=${datacardDir}/hww2l2v_13TeV_of2j_lowmjj_pth120_200/${variable_bin}/datacard.txt \
                  of_2j_mjj350_700_pthjj0_25=${datacardDir}/hww2l2v_13TeV_of2j_mjj350_700_pthjj0_25/${variable_bin}/datacard.txt \
                  of_2j_mjj350_700_pthjjGT25=${datacardDir}/hww2l2v_13TeV_of2j_mjj350_700_pthjjGT25/${variable_bin4}/datacard.txt \
                  of_2j_mjjGT700_pthjj0_25=${datacardDir}/hww2l2v_13TeV_of2j_mjjGT700_pthjj0_25/${variable_bin4}/datacard.txt \
                  of_2j_mjjGT700_pthjjGT25=${datacardDir}/hww2l2v_13TeV_of2j_mjjGT700_pthjjGT25/${variable_bin4}/datacard.txt \
                  of_pth200_300=${datacardDir}/hww2l2v_13TeV_of_pth200_300/${variable_bin}/datacard.txt \
                  of_pth300_450=${datacardDir}/hww2l2v_13TeV_of_pth300_450/${variable_bin2}/datacard.txt \
                  of_pth450_650=${datacardDir}/hww2l2v_13TeV_of_pth450_650/${variable_bin3}/datacard.txt \
                  of_pthGT650=${datacardDir}/hww2l2v_13TeV_of_pthGT650/${variable_bin4}/datacard.txt \
                  of0j_Top=${datacardDir}/hww2l2v_13TeV_top_0j/events/datacard.txt \
                  of1j_Top=${datacardDir}/hww2l2v_13TeV_top_1j/events/datacard.txt \
                  of2j_Top=${datacardDir}/hww2l2v_13TeV_top_2j/events/datacard.txt \
                  of0j_DYtt=${datacardDir}/hww2l2v_13TeV_dytt_0j/events/datacard.txt \
                  of1j_DYtt=${datacardDir}/hww2l2v_13TeV_dytt_0j/events/datacard.txt \
                  of2j_DYtt=${datacardDir}/hww2l2v_13TeV_dytt_0j/events/datacard.txt \
                  >   ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt


echo "nuisance edit drop DY of_2j_mjjGT700_pthjj0_25 CMS_eff_e_2016" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
echo "nuisance edit drop DY of_2j_mjjGT700_pthjj0_25 CMS_eff_m_2016" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
echo "nuisance edit drop DY of_2j_mjjGT700_pthjj0_25 CMS_eff_hwwtrigger_2016" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
echo "nuisance edit drop DY of_2j_mjjGT700_pthjj0_25 CMS_eff_prefiring_2016" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
echo "nuisance edit drop DY of_2j_mjjGT700_pthjj0_25 CMS_btag_cferr1" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
echo "nuisance edit drop DY of_2j_mjjGT700_pthjj0_25 CMS_btag_cferr2" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
echo "nuisance edit drop DY of_2j_mjjGT700_pthjj0_25 CMS_btag_hf" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
echo "nuisance edit drop DY of_2j_mjjGT700_pthjj0_25 CMS_btag_hfstats1_2016" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
echo "nuisance edit drop DY of_2j_mjjGT700_pthjj0_25 CMS_btag_hfstats2_2016" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
echo "nuisance edit drop DY of_2j_mjjGT700_pthjj0_25 CMS_btag_jes" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
echo "nuisance edit drop DY of_2j_mjjGT700_pthjj0_25 CMS_btag_lf" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
echo "nuisance edit drop DY of_2j_mjjGT700_pthjj0_25 CMS_btag_lfstats1_2016" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
echo "nuisance edit drop DY of_2j_mjjGT700_pthjj0_25 CMS_btag_lfstats2_2016" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt

echo "nuisance edit drop Fake_me of_pthGT650 CMS_fake_e_2016" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
echo "nuisance edit drop Fake_em of_pthGT650 CMS_fake_e_2016" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
echo "nuisance edit drop Fake_me of_pthGT650 CMS_fake_m_2016" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
echo "nuisance edit drop Fake_em of_pthGT650 CMS_fake_m_2016" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
echo "nuisance edit drop Fake_me of_pthGT650 CMS_fake_stat_e_2016" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
echo "nuisance edit drop Fake_em of_pthGT650 CMS_fake_stat_e_2016" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
echo "nuisance edit drop Fake_me of_pthGT650 CMS_fake_stat_m_2016" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
echo "nuisance edit drop Fake_em of_pthGT650 CMS_fake_stat_m_2016" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt

#echo "nuisance edit freeze UE_CUETP" >> ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
