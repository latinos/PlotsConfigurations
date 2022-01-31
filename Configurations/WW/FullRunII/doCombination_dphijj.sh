#!/bin/bash

cd $COMBINE_DIR
eval `scramv1 runtime -sh`
cd -

ulimit -s unlimited

datacardDir_2016=Full2016_v7/dphijj/datacards
datacardDir_2017=Full2017_v7/dphijj/datacards
datacardDir_2018=Full2018_v7/dphijj/datacards

combineCards.py   ww2l2v_13TeV_ww_sr_eu_B0=${datacardDir_2016}/ww2l2v_13TeV_sr_B0/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B1=${datacardDir_2016}/ww2l2v_13TeV_sr_B1/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B2=${datacardDir_2016}/ww2l2v_13TeV_sr_B2/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B3=${datacardDir_2016}/ww2l2v_13TeV_sr_B3/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B4=${datacardDir_2016}/ww2l2v_13TeV_sr_B4/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B5=${datacardDir_2016}/ww2l2v_13TeV_sr_B5/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B6=${datacardDir_2016}/ww2l2v_13TeV_sr_B6/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B7=${datacardDir_2016}/ww2l2v_13TeV_sr_B7/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B8=${datacardDir_2016}/ww2l2v_13TeV_sr_B8/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B9=${datacardDir_2016}/ww2l2v_13TeV_sr_B9/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B10=${datacardDir_2016}/ww2l2v_13TeV_sr_B10/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B11=${datacardDir_2016}/ww2l2v_13TeV_sr_B11/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B12=${datacardDir_2016}/ww2l2v_13TeV_sr_B12/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B13=${datacardDir_2016}/ww2l2v_13TeV_sr_B13/mth/datacard.txt  \
                  ww2l2v_13TeV_top=${datacardDir_2016}/ww2l2v_13TeV_top/events/datacard.txt \
                  > Full2016_dphijj.txt

combineCards.py   ww2l2v_13TeV_ww_sr_eu_B0=${datacardDir_2017}/ww2l2v_13TeV_sr_B0/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B1=${datacardDir_2017}/ww2l2v_13TeV_sr_B1/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B2=${datacardDir_2017}/ww2l2v_13TeV_sr_B2/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B3=${datacardDir_2017}/ww2l2v_13TeV_sr_B3/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B4=${datacardDir_2017}/ww2l2v_13TeV_sr_B4/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B5=${datacardDir_2017}/ww2l2v_13TeV_sr_B5/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B6=${datacardDir_2017}/ww2l2v_13TeV_sr_B6/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B7=${datacardDir_2017}/ww2l2v_13TeV_sr_B7/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B8=${datacardDir_2017}/ww2l2v_13TeV_sr_B8/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B9=${datacardDir_2017}/ww2l2v_13TeV_sr_B9/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B10=${datacardDir_2017}/ww2l2v_13TeV_sr_B10/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B11=${datacardDir_2017}/ww2l2v_13TeV_sr_B11/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B12=${datacardDir_2017}/ww2l2v_13TeV_sr_B12/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B13=${datacardDir_2017}/ww2l2v_13TeV_sr_B13/mth/datacard.txt  \
                  ww2l2v_13TeV_top=${datacardDir_2017}/ww2l2v_13TeV_top/events/datacard.txt \
                  > Full2017_dphijj.txt

echo "nuisance edit drop Zg ww2l2v_13TeV_ww_sr_eu_B3 QCDscale_VV" >> Full2017_dphijj.txt

combineCards.py   ww2l2v_13TeV_ww_sr_eu_B0=${datacardDir_2018}/ww2l2v_13TeV_sr_B0/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B1=${datacardDir_2018}/ww2l2v_13TeV_sr_B1/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B2=${datacardDir_2018}/ww2l2v_13TeV_sr_B2/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B3=${datacardDir_2018}/ww2l2v_13TeV_sr_B3/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B4=${datacardDir_2018}/ww2l2v_13TeV_sr_B4/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B5=${datacardDir_2018}/ww2l2v_13TeV_sr_B5/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B6=${datacardDir_2018}/ww2l2v_13TeV_sr_B6/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B7=${datacardDir_2018}/ww2l2v_13TeV_sr_B7/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B8=${datacardDir_2018}/ww2l2v_13TeV_sr_B8/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B9=${datacardDir_2018}/ww2l2v_13TeV_sr_B9/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B10=${datacardDir_2018}/ww2l2v_13TeV_sr_B10/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B11=${datacardDir_2018}/ww2l2v_13TeV_sr_B11/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B12=${datacardDir_2018}/ww2l2v_13TeV_sr_B12/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_B13=${datacardDir_2018}/ww2l2v_13TeV_sr_B13/mth/datacard.txt  \
                  ww2l2v_13TeV_top=${datacardDir_2018}/ww2l2v_13TeV_top/events/datacard.txt \
                  > Full2018_dphijj.txt

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
                  Full2016_dphijj.txt -o Full2016_dphijj.root

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
                  Full2017_dphijj.txt -o Full2017_dphijj.root

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
                  Full2018_dphijj.txt -o Full2018_dphijj.root

combineCards.py WW2l2nu_2016=Full2016_dphijj.txt \
                WW2l2nu_2017=Full2017_dphijj.txt \
                WW2l2nu_2018=Full2018_dphijj.txt \
                > FullRunII_WW_dphijj.txt

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
                  FullRunII_WW_dphijj.txt -o FullRunII_WW_dphijj.root

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B*:r[1, -10, 10]' \
                  FullRunII_WW_dphijj.txt -o FullRunII_WW_dphijj_incl.root
