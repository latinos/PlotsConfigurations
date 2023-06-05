#!/bin/bash

cd $COMBINE_DIR
eval `scramv1 runtime -sh`
cd -

ulimit -s unlimited

datacardDir_2016_HIPM=Full2016_HIPM_v9/dphijj/datacards
datacardDir_2016_noHIPM=Full2016_noHIPM_v9/dphijj/datacards
datacardDir_2017=Full2017_v9/dphijj/datacards
datacardDir_2018=Full2018_v9/dphijj/datacards

combineCards.py   ww2l2v_13TeV_sr_2j_B0=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B1=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B1/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B2=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B2/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B3=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B3/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B4=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B4/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B5=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B5/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B6=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B6/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B7=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B7/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B8=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B8/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B9=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B9/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B10=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B10/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B11=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B11/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B12=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B12/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B13=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B13/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_top_2j=${datacardDir_2016_HIPM}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  > Full2016_HIPM_v9_dphijj.txt

echo "nuisance edit drop DY ww2l2v_13TeV_sr_2j_B11 QCDscale_V" >> Full2016_HIPM_v9_dphijj.txt
echo "nuisance edit drop Vg ww2l2v_13TeV_sr_2j_B2 PS_FSR" >> Full2016_HIPM_v9_dphijj.txt
echo "nuisance edit drop WW_B11 ww2l2v_13TeV_sr_2j_B0 CMS_scale_met_2016" >> Full2016_HIPM_v9_dphijj.txt
echo "nuisance edit drop WW_B12 ww2l2v_13TeV_sr_2j_B7 CMS_scale_met_2016" >> Full2016_HIPM_v9_dphijj.txt
echo "nuisance edit drop WW_B3 ww2l2v_13TeV_sr_2j_B11 CMS_scale_met_2016" >> Full2016_HIPM_v9_dphijj.txt
echo "nuisance edit drop WW_B6 ww2l2v_13TeV_sr_2j_B2 CMS_scale_met_2016" >> Full2016_HIPM_v9_dphijj.txt
echo "nuisance edit drop WW_B9 ww2l2v_13TeV_sr_2j_B11 CMS_PU_2016" >> Full2016_HIPM_v9_dphijj.txt
echo "nuisance edit drop WW_B9 ww2l2v_13TeV_sr_2j_B11 CMS_btag_cferr1" >> Full2016_HIPM_v9_dphijj.txt
echo "nuisance edit drop WW_B9 ww2l2v_13TeV_sr_2j_B11 CMS_btag_cferr2" >> Full2016_HIPM_v9_dphijj.txt
echo "nuisance edit drop WW_B9 ww2l2v_13TeV_sr_2j_B11 CMS_hww_pdf_WW" >> Full2016_HIPM_v9_dphijj.txt
echo "nuisance edit drop WW_B9 ww2l2v_13TeV_sr_2j_B11 PS_FSR" >> Full2016_HIPM_v9_dphijj.txt
echo "nuisance edit drop WW_B9 ww2l2v_13TeV_sr_2j_B11 PS_ISR" >> Full2016_HIPM_v9_dphijj.txt
echo "nuisance edit drop WW_B9 ww2l2v_13TeV_sr_2j_B11 QCDscale_WW" >> Full2016_HIPM_v9_dphijj.txt

combineCards.py   ww2l2v_13TeV_sr_2j_B0=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B1=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B1/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B2=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B2/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B3=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B3/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B4=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B4/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B5=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B5/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B6=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B6/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B7=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B7/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B8=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B8/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B9=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B9/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B10=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B10/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B11=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B11/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B12=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B12/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B13=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B13/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_top_2j=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  > Full2016_noHIPM_v9_dphijj.txt

echo "nuisance edit drop DY ww2l2v_13TeV_sr_2j_B2 QCDscale_V" >> Full2016_noHIPM_v9_dphijj.txt
echo "nuisance edit drop Fake_me ww2l2v_13TeV_sr_2j_B12 CMS_fake_stat_e_2016" >> Full2016_noHIPM_v9_dphijj.txt
echo "nuisance edit drop Fake_me ww2l2v_13TeV_sr_2j_B12 CMS_fake_stat_m_2016" >> Full2016_noHIPM_v9_dphijj.txt
echo "nuisance edit drop Vg ww2l2v_13TeV_sr_2j_B11 CMS_scale_met_2016" >> Full2016_noHIPM_v9_dphijj.txt
echo "nuisance edit drop Vg ww2l2v_13TeV_sr_2j_B11 QCDscale_VV" >> Full2016_noHIPM_v9_dphijj.txt
echo "nuisance edit drop Vg ww2l2v_13TeV_sr_2j_B2 PS_ISR" >> Full2016_noHIPM_v9_dphijj.txt
echo "nuisance edit drop Vg ww2l2v_13TeV_sr_2j_B2 QCDscale_VV" >> Full2016_noHIPM_v9_dphijj.txt
echo "nuisance edit drop Vg ww2l2v_13TeV_sr_2j_B9 CMS_PU_2016" >> Full2016_noHIPM_v9_dphijj.txt
echo "nuisance edit drop Vg ww2l2v_13TeV_sr_2j_B9 CMS_btag_cferr1" >> Full2016_noHIPM_v9_dphijj.txt
echo "nuisance edit drop Vg ww2l2v_13TeV_sr_2j_B9 CMS_scale_e_2016" >> Full2016_noHIPM_v9_dphijj.txt
echo "nuisance edit drop Vg ww2l2v_13TeV_sr_2j_B9 CMS_scale_m_2016" >> Full2016_noHIPM_v9_dphijj.txt
echo "nuisance edit drop Vg ww2l2v_13TeV_sr_2j_B9 PS_FSR" >> Full2016_noHIPM_v9_dphijj.txt
echo "nuisance edit drop Vg ww2l2v_13TeV_sr_2j_B9 PS_ISR" >> Full2016_noHIPM_v9_dphijj.txt
echo "nuisance edit drop Vg ww2l2v_13TeV_sr_2j_B9 QCDscale_VV" >> Full2016_noHIPM_v9_dphijj.txt
echo "nuisance edit drop WW_B0 ww2l2v_13TeV_sr_2j_B5 CMS_scale_met_2016" >> Full2016_noHIPM_v9_dphijj.txt
echo "nuisance edit drop WW_B2 ww2l2v_13TeV_sr_2j_B10 CMS_scale_met_2016" >> Full2016_noHIPM_v9_dphijj.txt
echo "nuisance edit drop WW_B2 ww2l2v_13TeV_sr_2j_B13 CMS_scale_met_2016" >> Full2016_noHIPM_v9_dphijj.txt

combineCards.py   ww2l2v_13TeV_sr_2j_B0=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B1=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B1/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B2=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B2/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B3=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B3/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B4=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B4/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B5=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B5/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B6=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B6/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B7=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B7/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B8=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B8/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B9=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B9/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B10=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B10/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B11=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B11/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B12=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B12/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B13=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B13/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_top_2j=${datacardDir_2017}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  > Full2017_v9_dphijj.txt

echo "nuisance edit drop Vg ww2l2v_13TeV_sr_2j_B13 PS_FSR" >> Full2017_v9_dphijj.txt

combineCards.py   ww2l2v_13TeV_sr_2j_B0=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B1=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B1/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B2=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B2/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B3=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B3/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B4=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B4/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B5=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B5/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B6=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B6/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B7=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B7/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B8=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B8/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B9=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B9/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B10=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B10/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B11=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B11/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B12=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B12/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B13=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B13/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_top_2j=${datacardDir_2018}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  > Full2018_v9_dphijj.txt

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
                  --PO 'map=.*/.*WW_B11:r_11[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B12:r_12[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B13:r_13[1, -10, 10]' \
                  Full2016_HIPM_v9_dphijj.txt -o Full2016_HIPM_v9_dphijj.root

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
                  --PO 'map=.*/.*WW_B11:r_11[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B12:r_12[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B13:r_13[1, -10, 10]' \
                  Full2016_noHIPM_v9_dphijj.txt -o Full2016_noHIPM_v9_dphijj.root

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
                  --PO 'map=.*/.*WW_B11:r_11[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B12:r_12[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B13:r_13[1, -10, 10]' \
                  Full2017_v9_dphijj.txt -o Full2017_v9_dphijj.root

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
                  --PO 'map=.*/.*WW_B11:r_11[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B12:r_12[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B13:r_13[1, -10, 10]' \
                  Full2018_v9_dphijj.txt -o Full2018_v9_dphijj.root

combineCards.py WW2l2nu_2016_HIPM=Full2016_HIPM_v9_dphijj.txt \
                WW2l2nu_2016_noHIPM=Full2016_noHIPM_v9_dphijj.txt \
                WW2l2nu_2017=Full2017_v9_dphijj.txt \
                WW2l2nu_2018=Full2018_v9_dphijj.txt \
                > FullRunII_v9_dphijj.txt

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
                  --PO 'map=.*/.*WW_B11:r_11[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B12:r_12[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B13:r_13[1, -10, 10]' \
                  FullRunII_v9_dphijj.txt -o FullRunII_v9_dphijj.root
