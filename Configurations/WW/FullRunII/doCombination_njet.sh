#!/bin/bash

cd $COMBINE_DIR
eval `scramv1 runtime -sh`
cd -

ulimit -s unlimited

datacardDir_2016=Full2016_v7/njets/datacards
datacardDir_2017=Full2017_v7/njets/datacards
datacardDir_2018=Full2018_v7/njets/datacards

combineCards.py   ww2l2v_13TeV_ww_sr_eu_0j=${datacardDir_2016}/ww2l2v_13TeV_sr_B0/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_1j=${datacardDir_2016}/ww2l2v_13TeV_sr_B1/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_2j=${datacardDir_2016}/ww2l2v_13TeV_sr_B2/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_3j=${datacardDir_2016}/ww2l2v_13TeV_sr_B3/mth/datacard.txt  \
                  ww2l2v_13TeV_top_0j=${datacardDir_2016}/ww2l2v_13TeV_top_B0/events/datacard.txt \
                  ww2l2v_13TeV_top_1j=${datacardDir_2016}/ww2l2v_13TeV_top_B1/events/datacard.txt \
                  ww2l2v_13TeV_top_2j=${datacardDir_2016}/ww2l2v_13TeV_top_B2/events/datacard.txt \
                  ww2l2v_13TeV_top_3j=${datacardDir_2016}/ww2l2v_13TeV_top_B3/events/datacard.txt \
                  > Full2016_njet.txt

combineCards.py   ww2l2v_13TeV_ww_sr_eu_0j=${datacardDir_2017}/ww2l2v_13TeV_sr_B0/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_1j=${datacardDir_2017}/ww2l2v_13TeV_sr_B1/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_2j=${datacardDir_2017}/ww2l2v_13TeV_sr_B2/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_3j=${datacardDir_2017}/ww2l2v_13TeV_sr_B3/mth/datacard.txt  \
                  ww2l2v_13TeV_top_0j=${datacardDir_2017}/ww2l2v_13TeV_top_B0/events/datacard.txt \
                  ww2l2v_13TeV_top_1j=${datacardDir_2017}/ww2l2v_13TeV_top_B1/events/datacard.txt \
                  ww2l2v_13TeV_top_2j=${datacardDir_2017}/ww2l2v_13TeV_top_B2/events/datacard.txt \
                  ww2l2v_13TeV_top_3j=${datacardDir_2017}/ww2l2v_13TeV_top_B3/events/datacard.txt \
                  > Full2017_njet.txt


combineCards.py   ww2l2v_13TeV_ww_sr_eu_0j=${datacardDir_2018}/ww2l2v_13TeV_sr_B0/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_1j=${datacardDir_2018}/ww2l2v_13TeV_sr_B1/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_2j=${datacardDir_2018}/ww2l2v_13TeV_sr_B2/mth/datacard.txt  \
                  ww2l2v_13TeV_ww_sr_eu_3j=${datacardDir_2018}/ww2l2v_13TeV_sr_B3/mth/datacard.txt  \
                  ww2l2v_13TeV_top_0j=${datacardDir_2018}/ww2l2v_13TeV_top_B0/events/datacard.txt \
                  ww2l2v_13TeV_top_1j=${datacardDir_2018}/ww2l2v_13TeV_top_B1/events/datacard.txt \
                  ww2l2v_13TeV_top_2j=${datacardDir_2018}/ww2l2v_13TeV_top_B2/events/datacard.txt \
                  ww2l2v_13TeV_top_3j=${datacardDir_2018}/ww2l2v_13TeV_top_B3/events/datacard.txt \
                  > Full2018_njet.txt

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  Full2016_njet.txt -o Full2016_njet.root

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  Full2017_njet.txt -o Full2017_njet.root

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  Full2018_njet.txt -o Full2018_njet.root

combineCards.py WW2l2nu_2016=Full2016_njet.txt \
                WW2l2nu_2017=Full2017_njet.txt \
                WW2l2nu_2018=Full2018_njet.txt \
                > FullRunII_WW_njet.txt

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  FullRunII_WW_njet.txt -o FullRunII_njet.root

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B*:r[1, -10, 10]' \
                  FullRunII_WW_njet.txt -o FullRunII_njet_incl.root

