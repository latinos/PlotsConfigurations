#!/bin/bash

export COMBINE_DIR=/afs/cern.ch/work/s/ssaumya/private/Projects/HiggsCombine/CMSSW_10_2_13/src/HiggsAnalysis/CombinedLimit/

cd $COMBINE_DIR
eval `scramv1 runtime -sh`
cd -

ulimit -s unlimited

datacardDir_2016_HIPM=datacards_2016_HIPM
datacardDir_2016_noHIPM=datacards_2016_noHIPM
datacardDir_2017=datacards_2017
datacardDir_2018=datacards_2018

combineCards.py   ww2l2v_13TeV_sr_1j_B0_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B1_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B1/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B2_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B2/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B3_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B3/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B4_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B4/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B5_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B5/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B6_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B6/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B7_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B7/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B8_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B8/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B9_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B9/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B10_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B10/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B0_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B1_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B1/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B2_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B2/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B3_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B3/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B4_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B4/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B5_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B5/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B6_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B6/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B7_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B7/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B8_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B8/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B9_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B9/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B10_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B10/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_top_1j_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                  ww2l2v_13TeV_top_2j_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  > Full2016_HIPM_jetpt0.txt

combineCards.py   ww2l2v_13TeV_sr_1j_B0_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B1_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B1/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B2_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B2/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B3_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B3/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B4_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B4/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B5_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B5/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B6_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B6/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B7_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B7/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B8_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B8/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B9_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B9/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B10_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B10/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B0_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B1_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B1/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B2_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B2/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B3_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B3/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B4_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B4/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B5_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B5/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B6_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B6/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B7_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B7/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B8_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B8/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B9_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B9/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B10_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B10/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_top_1j_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                  ww2l2v_13TeV_top_2j_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  > Full2016_noHIPM_jetpt0.txt

combineCards.py   ww2l2v_13TeV_sr_1j_B0_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B1_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B1/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B2_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B2/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B3_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B3/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B4_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B4/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B5_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B5/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B6_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B6/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B7_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B7/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B8_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B8/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B9_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B9/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B10_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B10/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B0_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B1_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B1/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B2_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B2/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B3_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B3/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B4_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B4/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B5_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B5/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B6_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B6/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B7_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B7/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B8_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B8/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B9_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B9/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B10_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B10/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_top_1j_2017=${datacardDir_2017}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                  ww2l2v_13TeV_top_2j_2017=${datacardDir_2017}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  > Full2017_jetpt0.txt

combineCards.py   ww2l2v_13TeV_sr_1j_B0_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B1_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B1/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B2_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B2/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B3_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B3/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B4_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B4/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B5_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B5/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B6_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B6/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B7_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B7/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B8_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B8/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B9_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B9/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B10_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B10/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B0_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B1_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B1/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B2_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B2/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B3_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B3/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B4_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B4/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B5_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B5/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B6_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B6/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B7_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B7/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B8_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B8/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B9_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B9/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B10_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B10/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_top_1j_2018=${datacardDir_2018}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                  ww2l2v_13TeV_top_2j_2018=${datacardDir_2018}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  > Full2018_jetpt0.txt

cat <<EOF >> Full2018_jetpt0.txt
nuisance edit drop Fake_me ww2l2v_13TeV_top_1j_2018 CMS_fake_e_2018
nuisance edit drop Fake_me ww2l2v_13TeV_top_1j_2018 CMS_fake_e_2018
nuisance edit drop Fake_me ww2l2v_13TeV_top_1j_2018 CMS_fake_stat_e_2018
nuisance edit drop Fake_me ww2l2v_13TeV_sr_2j_B10_2018 CMS_fake_e_2018
nuisance edit drop Vg ww2l2v_13TeV_sr_1j_B6_2018 CMS_scale_j_Absolute
nuisance edit drop Vg ww2l2v_13TeV_sr_1j_B6_2018 CMS_scale_j_RelativeBal
nuisance edit drop Vg ww2l2v_13TeV_sr_1j_B6_2018 CMS_eff_j_PUJET_id_2018
nuisance edit drop Vg ww2l2v_13TeV_sr_1j_B6_2018 CMS_pileup_2018
nuisance edit drop Vg ww2l2v_13TeV_sr_1j_B6_2018 ps_fsr
nuisance edit drop Vg ww2l2v_13TeV_sr_1j_B6_2018 CMS_scale_j_RelativeSample_2018
nuisance edit drop Vg ww2l2v_13TeV_sr_1j_B6_2018 CMS_scale_met_2018
nuisance edit drop Vg ww2l2v_13TeV_sr_1j_B6_2018 ps_isr
nuisance edit drop Vg ww2l2v_13TeV_sr_1j_B6_2018 CMS_res_j_2018
nuisance edit drop Vg ww2l2v_13TeV_sr_1j_B6_2018 CMS_scale_j_FlavorQCD
nuisance edit drop Vg ww2l2v_13TeV_sr_1j_B6_2018 CMS_btag_hf
nuisance edit drop Vg ww2l2v_13TeV_sr_1j_B6_2018 QCDscale_VV
nuisance edit drop WW_B4 ww2l2v_13TeV_sr_1j_B7_2018 CMS_scale_j_FlavorQCD
nuisance edit drop WW_B4 ww2l2v_13TeV_sr_1j_B7_2018 CMS_res_j_2018
nuisance edit drop WW_B4 ww2l2v_13TeV_sr_1j_B7_2018 CMS_scale_j_Absolute_2018
nuisance edit drop WW_B4 ww2l2v_13TeV_sr_1j_B7_2018 CMS_scale_j_RelativeSample_2018
nuisance edit drop WW_B4 ww2l2v_13TeV_sr_1j_B7_2018 CMS_scale_j_Absolute
nuisance edit drop Vg ww2l2v_13TeV_sr_2j_B6_2018 ps_fsr
nuisance edit drop ggWW_B7 ww2l2v_13TeV_sr_2j_B1_2018 CMS_scale_met_2018
nuisance edit drop Fake_me ww2l2v_13TeV_top_2j_2018 CMS_fake_stat_e_2018
nuisance edit drop WW_B6 ww2l2v_13TeV_sr_2j_B3_2018 CMS_scale_j_RelativeSample_2018
nuisance edit drop WW_B6 ww2l2v_13TeV_sr_2j_B3_2018 CMS_res_j_2018
nuisance edit drop WW_B8 ww2l2v_13TeV_sr_1j_B1_2018 CMS_scale_j_Absolute_2018
nuisance edit drop WW_B8 ww2l2v_13TeV_sr_1j_B1_2018 CMS_scale_m_2018
nuisance edit drop WW_B8 ww2l2v_13TeV_sr_1j_B1_2018 CMS_scale_j_FlavorQCD
nuisance edit drop WW_B8 ww2l2v_13TeV_sr_1j_B1_2018 CMS_scale_j_RelativeBal
nuisance edit drop WW_B8 ww2l2v_13TeV_sr_1j_B1_2018 CMS_scale_j_HF_2018
nuisance edit drop WW_B8 ww2l2v_13TeV_sr_1j_B1_2018 CMS_scale_j_Absolute
nuisance edit drop WW_B8 ww2l2v_13TeV_sr_1j_B1_2018 CMS_scale_met_2018
nuisance edit drop WW_B8 ww2l2v_13TeV_sr_1j_B1_2018 CMS_scale_j_RelativeSample_2018
nuisance edit drop WW_B8 ww2l2v_13TeV_sr_1j_B1_2018 CMS_scale_j_HF
nuisance edit drop ggWW_B2 ww2l2v_13TeV_sr_2j_B7_2018 CMS_scale_j_RelativeSample_2018
nuisance edit drop ggWW_B1 ww2l2v_13TeV_sr_2j_B7_2018 CMS_res_j_2018
nuisance edit drop WW_B6 ww2l2v_13TeV_sr_1j_B0_2018 CMS_scale_j_RelativeSample_2018
nuisance edit drop WW_B6 ww2l2v_13TeV_sr_1j_B0_2018 CMS_scale_j_EC2_2018
nuisance edit drop WW_B6 ww2l2v_13TeV_sr_1j_B0_2018 CMS_scale_j_FlavorQCD
nuisance edit drop WW_B6 ww2l2v_13TeV_sr_1j_B0_2018 CMS_scale_j_Absolute
nuisance edit drop WW_B6 ww2l2v_13TeV_sr_1j_B0_2018 CMS_res_j_2018
nuisance edit drop WW_B6 ww2l2v_13TeV_sr_1j_B0_2018 CMS_scale_j_Absolute_2018
nuisance edit drop WW_B6 ww2l2v_13TeV_sr_1j_B0_2018 CMS_scale_j_RelativeBal
nuisance edit drop WW_B9 ww2l2v_13TeV_sr_2j_B2_2018 CMS_scale_j_RelativeBal
nuisance edit drop WW_B9 ww2l2v_13TeV_sr_2j_B2_2018 CMS_scale_j_Absolute_2018
nuisance edit drop WW_B9 ww2l2v_13TeV_sr_2j_B2_2018 CMS_scale_j_RelativeSample_2018
nuisance edit drop WW_B9 ww2l2v_13TeV_sr_2j_B2_2018 CMS_scale_j_FlavorQCD
nuisance edit drop WW_B9 ww2l2v_13TeV_sr_2j_B2_2018 CMS_res_j_2018
nuisance edit drop WW_B9 ww2l2v_13TeV_sr_2j_B2_2018 CMS_scale_j_Absolute
EOF

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B7:r_7[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B8:r_8[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B9:r_9[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B10:r_10[1, -10, 10]' \
                  Full2016_HIPM_jetpt0.txt -o Full2016_HIPM_jetpt0.root

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B7:r_7[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B8:r_8[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B9:r_9[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B10:r_10[1, -10, 10]' \
                  Full2016_noHIPM_jetpt0.txt -o Full2016_noHIPM_jetpt0.root

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B7:r_7[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B8:r_8[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B9:r_9[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B10:r_10[1, -10, 10]' \
                  Full2017_jetpt0.txt -o Full2017_jetpt0.root
COMMENT
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B7:r_7[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B8:r_8[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B9:r_9[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B10:r_10[1, -10, 10]' \
                  Full2018_jetpt0.txt -o Full2018_jetpt0.root

combineCards.py WW2l2nu_2016_HIPM=Full2016_HIPM_jetpt0.txt \
                WW2l2nu_2016_noHIPM=Full2016_noHIPM_jetpt0.txt \
                WW2l2nu_2017=Full2017_jetpt0.txt \
                WW2l2nu_2018=Full2018_jetpt0.txt \
                > FullRunII_jetpt0.txt

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B7:r_7[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B8:r_8[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B9:r_9[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B10:r_10[1, -10, 10]' \
                  FullRunII_jetpt0.txt -o FullRunII_jetpt0.root

combine -M MultiDimFit --algo singles --setParameters r_0=1,r_1=1,r_2=1,r_3=1,r_4=1,r_5=1,r_6=1,r_7=1,r_8=1,r_9=1,r_10=1 -d FullRunII_jetpt0.root --saveFitResult --X-rtd MINIMIZER_analytic -n WW_FullRunII_jetpt0 | tee log_Fit_WW_FullRunII_jetpt0.out
