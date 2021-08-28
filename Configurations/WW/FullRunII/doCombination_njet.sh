#!/bin/bash

## FIXME this is where the Combine framework is installed
cd /afs/cern.ch/user/d/dittmer/private/Combine/CMSSW_10_2_13/src/
eval `scramv1 runtime -sh`
cd -

## work directory

datacardDir_2016=Full2016_v7/njets/datacards
datacardDir_2017=Full2017_v7/njets/datacards
datacardDir_2018=Full2018_v7/njets/datacards

#combineCards.py   ww2l2v_13TeV_ww_sr_eu_0j=${datacardDir_2016}/ww2l2v_13TeV_sr_0j/mth/datacard.txt  \
#                  ww2l2v_13TeV_ww_sr_eu_1j=${datacardDir_2016}/ww2l2v_13TeV_sr_1j/mth/datacard.txt  \
#                  ww2l2v_13TeV_ww_sr_eu_2j=${datacardDir_2016}/ww2l2v_13TeV_sr_2j/mth/datacard.txt  \
#                  ww2l2v_13TeV_ww_sr_eu_3j=${datacardDir_2016}/ww2l2v_13TeV_sr_3j/mth/datacard.txt  \
#                  ww2l2v_13TeV_top_0j=${datacardDir_2016}/ww2l2v_13TeV_top_0j/events/datacard.txt \
#                  ww2l2v_13TeV_top_1j=${datacardDir_2016}/ww2l2v_13TeV_top_1j/events/datacard.txt \
#                  ww2l2v_13TeV_top_2j=${datacardDir_2016}/ww2l2v_13TeV_top_2j/events/datacard.txt \
#                  ww2l2v_13TeV_top_3j=${datacardDir_2016}/ww2l2v_13TeV_top_3j/events/datacard.txt \
#                  > Full2016_njet.txt

#text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
#                  --PO 'map=.*/.*WW_fid_NJ_0:r_0[1, -10, 10]' \
#                  --PO 'map=.*/.*WW_fid_NJ_1:r_1[1, -10, 10]' \
#                  --PO 'map=.*/.*WW_fid_NJ_2:r_2[1, -10, 10]' \
#                  --PO 'map=.*/.*WW_fid_NJ_GE3:r_3[1, -10, 10]' \
#                  Full2016_njet.txt -o Full2016_njet.root

#combineCards.py   ww2l2v_13TeV_ww_sr_eu_0j=${datacardDir_2017}/ww2l2v_13TeV_sr_0j/mth/datacard.txt  \
#                  ww2l2v_13TeV_ww_sr_eu_1j=${datacardDir_2017}/ww2l2v_13TeV_sr_1j/mth/datacard.txt  \
#                  ww2l2v_13TeV_ww_sr_eu_2j=${datacardDir_2017}/ww2l2v_13TeV_sr_2j/mth/datacard.txt  \
#                  ww2l2v_13TeV_ww_sr_eu_3j=${datacardDir_2017}/ww2l2v_13TeV_sr_3j/mth/datacard.txt  \
#                  ww2l2v_13TeV_top_0j=${datacardDir_2017}/ww2l2v_13TeV_top_0j/events/datacard.txt \
#                  ww2l2v_13TeV_top_1j=${datacardDir_2017}/ww2l2v_13TeV_top_1j/events/datacard.txt \
#                  ww2l2v_13TeV_top_2j=${datacardDir_2017}/ww2l2v_13TeV_top_2j/events/datacard.txt \
#                  ww2l2v_13TeV_top_3j=${datacardDir_2017}/ww2l2v_13TeV_top_3j/events/datacard.txt \
#                  > Full2017_njet.txt


#text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
#                  --PO 'map=.*/.*WW_fid_NJ_0:r_0[1, -10, 10]' \
#                  --PO 'map=.*/.*WW_fid_NJ_1:r_1[1, -10, 10]' \
#                  --PO 'map=.*/.*WW_fid_NJ_2:r_2[1, -10, 10]' \
#                  --PO 'map=.*/.*WW_fid_NJ_GE3:r_3[1, -10, 10]' \
#                  Full2017_njet.txt -o Full2017_njet.root

#combineCards.py   ww2l2v_13TeV_ww_sr_eu_0j=${datacardDir_2018}/ww2l2v_13TeV_sr_0j/mth/datacard.txt  \
#                  ww2l2v_13TeV_ww_sr_eu_1j=${datacardDir_2018}/ww2l2v_13TeV_sr_1j/mth/datacard.txt  \
#                  ww2l2v_13TeV_ww_sr_eu_2j=${datacardDir_2018}/ww2l2v_13TeV_sr_2j/mth/datacard.txt  \
#                  ww2l2v_13TeV_ww_sr_eu_3j=${datacardDir_2018}/ww2l2v_13TeV_sr_3j/mth/datacard.txt  \
#                  ww2l2v_13TeV_top_0j=${datacardDir_2018}/ww2l2v_13TeV_top_0j/events/datacard.txt \
#                  ww2l2v_13TeV_top_1j=${datacardDir_2018}/ww2l2v_13TeV_top_1j/events/datacard.txt \
#                  ww2l2v_13TeV_top_2j=${datacardDir_2018}/ww2l2v_13TeV_top_2j/events/datacard.txt \
#                  ww2l2v_13TeV_top_3j=${datacardDir_2018}/ww2l2v_13TeV_top_3j/events/datacard.txt \
#                  > Full2018_njet.txt

#text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
#                  --PO 'map=.*/.*WW_fid_NJ_0:r_0[1, -10, 10]' \
#                  --PO 'map=.*/.*WW_fid_NJ_1:r_1[1, -10, 10]' \
#                  --PO 'map=.*/.*WW_fid_NJ_2:r_2[1, -10, 10]' \
#                  --PO 'map=.*/.*WW_fid_NJ_GE3:r_3[1, -10, 10]' \
#                  Full2018_njet.txt -o Full2018_njet.root

combineCards.py WW2l2nu_2016=Full2016_njet.txt \
                WW2l2nu_2017=Full2017_njet.txt \
                WW2l2nu_2018=Full2018_njet.txt \
                > FullRunII_WW_njet.txt

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_fid_NJ_0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_fid_NJ_1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_fid_NJ_2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_fid_NJ_GE3:r_3[1, -10, 10]' \
                  FullRunII_WW_njet.txt -o FullRunII_njet.root
