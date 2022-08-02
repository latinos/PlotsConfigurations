#!/bin/bash

cd $COMBINE_DIR
eval `scramv1 runtime -sh`
cd -

ulimit -s unlimited

datacardDir_2016=Full2016_v7/njets/datacards_BDT
datacardDir_2017=Full2017_v7/njets/datacards_BDT
datacardDir_2018=Full2018_v7/njets/datacards_BDT

combineCards.py   ww2l2v_13TeV_sr_0j_B0=${datacardDir_2016}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B0=${datacardDir_2016}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B0=${datacardDir_2016}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_3j_B0=${datacardDir_2016}/ww2l2v_13TeV_sr_3j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_top_0j=${datacardDir_2016}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                  ww2l2v_13TeV_top_1j=${datacardDir_2016}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                  ww2l2v_13TeV_top_2j=${datacardDir_2016}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  ww2l2v_13TeV_top_3j=${datacardDir_2016}/ww2l2v_13TeV_top_3j/events/datacard.txt \
                  > Full2016_njet_bdt.txt

combineCards.py   ww2l2v_13TeV_sr_0j_B0=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B0=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B0=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_3j_B0=${datacardDir_2017}/ww2l2v_13TeV_sr_3j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_top_0j=${datacardDir_2017}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                  ww2l2v_13TeV_top_1j=${datacardDir_2017}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                  ww2l2v_13TeV_top_2j=${datacardDir_2017}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  ww2l2v_13TeV_top_3j=${datacardDir_2017}/ww2l2v_13TeV_top_3j/events/datacard.txt \
                  > Full2017_njet_bdt.txt

echo "nuisance edit drop Zg ww2l2v_13TeV_top_0j CMS_scale_met_2017" >> Full2017_njet_bdt.txt

combineCards.py   ww2l2v_13TeV_sr_0j_B0=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B0=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B0=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_3j_B0=${datacardDir_2018}/ww2l2v_13TeV_sr_3j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_top_0j=${datacardDir_2018}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                  ww2l2v_13TeV_top_1j=${datacardDir_2018}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                  ww2l2v_13TeV_top_2j=${datacardDir_2018}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  ww2l2v_13TeV_top_3j=${datacardDir_2018}/ww2l2v_13TeV_top_3j/events/datacard.txt \
                  > Full2018_njet_bdt.txt

echo "nuisance edit drop Zg ww2l2v_13TeV_top_1j PS_FSR" >> Full2018_njet_bdt.txt
echo "nuisance edit drop Zg ww2l2v_13TeV_sr_3j_B0 CMS_scale_met_2018" >> Full2018_njet_bdt.txt
echo "nuisance edit drop Zg ww2l2v_13TeV_sr_3j_B0 PS_FSR" >> Full2018_njet_bdt.txt

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  Full2016_njet_bdt.txt -o Full2016_njet_bdt.root

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  Full2017_njet_bdt.txt -o Full2017_njet_bdt.root

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  Full2018_njet_bdt.txt -o Full2018_njet_bdt.root

combineCards.py WW2l2nu_2016=Full2016_njet_bdt.txt \
                WW2l2nu_2017=Full2017_njet_bdt.txt \
                WW2l2nu_2018=Full2018_njet_bdt.txt \
                > FullRunII_WW_njet_bdt.txt

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  FullRunII_WW_njet_bdt.txt -o FullRunII_njet_bdt.root


