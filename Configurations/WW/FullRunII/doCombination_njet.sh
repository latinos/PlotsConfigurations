#!/bin/bash

cd $COMBINE_DIR
eval `scramv1 runtime -sh`
cd -

ulimit -s unlimited

datacardDir_2016=Full2016_v7/njets/datacards
datacardDir_2017=Full2017_v7/njets/datacards
datacardDir_2018=Full2018_v7/njets/datacards

combineCards.py   ww2l2v_13TeV_sr_0j_B0=${datacardDir_2016}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B0=${datacardDir_2016}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B0=${datacardDir_2016}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_3j_B0=${datacardDir_2016}/ww2l2v_13TeV_sr_3j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_top_0j=${datacardDir_2016}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                  ww2l2v_13TeV_top_1j=${datacardDir_2016}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                  ww2l2v_13TeV_top_2j=${datacardDir_2016}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  ww2l2v_13TeV_top_3j=${datacardDir_2016}/ww2l2v_13TeV_top_3j/events/datacard.txt \
                  > Full2016_njet.txt

echo "nuisance edit drop WW_B0 ww2l2v_13TeV_sr_3j_B0 CMS_scale_met_2016"               >> Full2016_njet.txt
echo "nuisance edit drop Vg ww2l2v_13TeV_top_2j CMS_scale_JESFlavorQCD"                >> Full2016_njet.txt
echo "nuisance edit drop ggWW_B0 ww2l2v_13TeV_top_2j CMS_scale_JESAbsolute_2016"       >> Full2016_njet.txt
echo "nuisance edit drop ggWW_B0 ww2l2v_13TeV_top_2j CMS_scale_JESAbsolute"            >> Full2016_njet.txt
echo "nuisance edit drop ggWW_B0 ww2l2v_13TeV_top_2j CMS_scale_JESBBEC1_2016"          >> Full2016_njet.txt
echo "nuisance edit drop ggWW_B0 ww2l2v_13TeV_top_2j CMS_scale_JESFlavorQCD"           >> Full2016_njet.txt
echo "nuisance edit drop ggWW_B0 ww2l2v_13TeV_top_2j CMS_scale_JESRelativeBal"         >> Full2016_njet.txt
echo "nuisance edit drop ggWW_B0 ww2l2v_13TeV_top_2j CMS_scale_JESRelativeSample_2016" >> Full2016_njet.txt

combineCards.py   ww2l2v_13TeV_sr_0j_B0=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B0=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B0=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_3j_B0=${datacardDir_2017}/ww2l2v_13TeV_sr_3j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_top_0j=${datacardDir_2017}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                  ww2l2v_13TeV_top_1j=${datacardDir_2017}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                  ww2l2v_13TeV_top_2j=${datacardDir_2017}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  ww2l2v_13TeV_top_3j=${datacardDir_2017}/ww2l2v_13TeV_top_3j/events/datacard.txt \
                  > Full2017_njet.txt

combineCards.py   ww2l2v_13TeV_sr_0j_B0=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B0=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B0=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_3j_B0=${datacardDir_2018}/ww2l2v_13TeV_sr_3j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_top_0j=${datacardDir_2018}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                  ww2l2v_13TeV_top_1j=${datacardDir_2018}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                  ww2l2v_13TeV_top_2j=${datacardDir_2018}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  ww2l2v_13TeV_top_3j=${datacardDir_2018}/ww2l2v_13TeV_top_3j/events/datacard.txt \
                  > Full2018_njet.txt

echo "nuisance edit drop Vg ww2l2v_13TeV_top_0j CMS_scale_JESFlavorQCD" >> Full2018_njet.txt
echo "nuisance edit drop Vg ww2l2v_13TeV_top_0j CMS_scale_JESAbsolute"  >> Full2018_njet.txt
echo "nuisance edit drop Vg ww2l2v_13TeV_top_0j CMS_scale_met_2018"     >> Full2018_njet.txt
echo "nuisance edit drop Vg ww2l2v_13TeV_top_3j CMS_scale_met_2018"     >> Full2018_njet.txt
echo "nuisance edit drop Vg ww2l2v_13TeV_top_3j PS_FSR"                 >> Full2018_njet.txt

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
                > FullRunII_njet.txt

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  FullRunII_njet.txt -o FullRunII_njet.root

