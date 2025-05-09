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

#: <<'COMMENT'

combineCards.py   ww2l2v_13TeV_sr_0j_B0_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B1_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B1/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B2_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B2/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B3_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B3/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B4_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B4/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B5_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B5/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B6_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B6/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B7_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B7/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_top_0j_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                  > Full2016_HIPM_leadinglepPT_0j.txt

combineCards.py   ww2l2v_13TeV_sr_1j_B0_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B1_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B1/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B2_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B2/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B3_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B3/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B4_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B4/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B5_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B5/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B6_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B6/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B7_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B7/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_top_1j_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                  > Full2016_HIPM_leadinglepPT_1j.txt

combineCards.py   ww2l2v_13TeV_sr_2j_B0_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B1_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B1/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B2_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B2/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B3_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B3/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B4_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B4/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B5_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B5/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B6_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B6/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B7_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B7/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_top_2j_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  > Full2016_HIPM_leadinglepPT_2j.txt

combineCards.py   ww2l2v_13TeV_sr_0j_B0_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B1_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B1/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B2_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B2/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B3_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B3/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B4_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B4/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B5_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B5/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B6_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B6/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B7_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B7/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B0_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B1_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B1/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B2_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B2/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B3_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B3/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B4_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B4/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B5_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B5/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B6_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B6/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B7_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B7/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B0_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B1_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B1/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B2_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B2/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B3_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B3/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B4_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B4/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B5_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B5/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B6_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B6/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B7_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B7/BDTOutput_2j/datacard.txt  \
				  ww2l2v_13TeV_top_0j_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_top_0j/events/datacard.txt \
				  ww2l2v_13TeV_top_1j_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                  ww2l2v_13TeV_top_2j_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  > Full2016_HIPM_leadinglepPT.txt

combineCards.py   ww2l2v_13TeV_sr_0j_B0_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B1_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B1/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B2_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B2/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B3_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B3/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B4_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B4/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B5_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B5/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B6_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B6/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B7_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B7/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_top_0j_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                  > Full2016_noHIPM_leadinglepPT_0j.txt

combineCards.py   ww2l2v_13TeV_sr_1j_B0_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B1_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B1/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B2_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B2/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B3_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B3/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B4_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B4/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B5_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B5/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B6_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B6/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B7_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B7/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_top_1j_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                  > Full2016_noHIPM_leadinglepPT_1j.txt

combineCards.py   ww2l2v_13TeV_sr_2j_B0_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B1_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B1/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B2_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B2/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B3_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B3/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B4_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B4/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B5_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B5/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B6_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B6/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B7_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B7/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_top_2j_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  > Full2016_noHIPM_leadinglepPT_2j.txt

combineCards.py   ww2l2v_13TeV_sr_0j_B0_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B1_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B1/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B2_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B2/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B3_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B3/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B4_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B4/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B5_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B5/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B6_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B6/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B7_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B7/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B0_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B1_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B1/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B2_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B2/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B3_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B3/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B4_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B4/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B5_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B5/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B6_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B6/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B7_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B7/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B0_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B1_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B1/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B2_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B2/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B3_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B3/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B4_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B4/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B5_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B5/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B6_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B6/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B7_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B7/BDTOutput_2j/datacard.txt  \
				  ww2l2v_13TeV_top_0j_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_top_0j/events/datacard.txt \
				  ww2l2v_13TeV_top_1j_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                  ww2l2v_13TeV_top_2j_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  > Full2016_noHIPM_leadinglepPT.txt

combineCards.py   ww2l2v_13TeV_sr_0j_B0_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B1_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B1/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B2_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B2/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B3_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B3/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B4_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B4/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B5_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B5/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B6_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B6/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B7_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B7/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_top_0j_2017=${datacardDir_2017}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                  > Full2017_leadinglepPT_0j.txt

combineCards.py   ww2l2v_13TeV_sr_1j_B0_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B1_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B1/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B2_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B2/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B3_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B3/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B4_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B4/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B5_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B5/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B6_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B6/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B7_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B7/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_top_1j_2017=${datacardDir_2017}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                  > Full2017_leadinglepPT_1j.txt

combineCards.py   ww2l2v_13TeV_sr_2j_B0_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B1_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B1/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B2_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B2/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B3_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B3/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B4_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B4/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B5_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B5/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B6_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B6/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B7_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B7/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_top_2j_2017=${datacardDir_2017}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  > Full2017_leadinglepPT_2j.txt

combineCards.py   ww2l2v_13TeV_sr_0j_B0_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B1_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B1/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B2_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B2/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B3_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B3/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B4_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B4/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B5_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B5/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B6_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B6/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B7_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B7/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B0_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B1_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B1/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B2_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B2/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B3_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B3/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B4_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B4/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B5_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B5/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B6_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B6/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B7_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B7/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B0_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B1_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B1/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B2_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B2/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B3_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B3/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B4_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B4/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B5_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B5/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B6_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B6/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B7_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B7/BDTOutput_2j/datacard.txt  \
				  ww2l2v_13TeV_top_0j_2017=${datacardDir_2017}/ww2l2v_13TeV_top_0j/events/datacard.txt \
				  ww2l2v_13TeV_top_1j_2017=${datacardDir_2017}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                  ww2l2v_13TeV_top_2j_2017=${datacardDir_2017}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  > Full2017_leadinglepPT.txt

combineCards.py   ww2l2v_13TeV_sr_0j_B0_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B1_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B1/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B2_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B2/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B3_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B3/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B4_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B4/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B5_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B5/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B6_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B6/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B7_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B7/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_top_0j_2018=${datacardDir_2018}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                  > Full2018_leadinglepPT_0j.txt

combineCards.py   ww2l2v_13TeV_sr_1j_B0_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B1_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B1/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B2_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B2/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B3_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B3/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B4_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B4/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B5_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B5/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B6_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B6/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B7_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B7/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_top_1j_2018=${datacardDir_2018}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                  > Full2018_leadinglepPT_1j.txt

combineCards.py   ww2l2v_13TeV_sr_2j_B0_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B1_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B1/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B2_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B2/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B3_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B3/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B4_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B4/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B5_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B5/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B6_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B6/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B7_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B7/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_top_2j_2018=${datacardDir_2018}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  > Full2018_leadinglepPT_2j.txt

combineCards.py   ww2l2v_13TeV_sr_0j_B0_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B1_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B1/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B2_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B2/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B3_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B3/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B4_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B4/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B5_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B5/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B6_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B6/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B7_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B7/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B0_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B1_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B1/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B2_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B2/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B3_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B3/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B4_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B4/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B5_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B5/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B6_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B6/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B7_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B7/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B0_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B1_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B1/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B2_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B2/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B3_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B3/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B4_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B4/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B5_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B5/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B6_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B6/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B7_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B7/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_top_0j_2018=${datacardDir_2018}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                  ww2l2v_13TeV_top_1j_2018=${datacardDir_2018}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                  ww2l2v_13TeV_top_2j_2018=${datacardDir_2018}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  > Full2018_leadinglepPT.txt

combineCards.py   ww2l2v_13TeV_sr_0j_B0_FullRunII=${datacardDir_FullRunII}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B1_FullRunII=${datacardDir_FullRunII}/ww2l2v_13TeV_sr_0j_B1/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B2_FullRunII=${datacardDir_FullRunII}/ww2l2v_13TeV_sr_0j_B2/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B3_FullRunII=${datacardDir_FullRunII}/ww2l2v_13TeV_sr_0j_B3/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B4_FullRunII=${datacardDir_FullRunII}/ww2l2v_13TeV_sr_0j_B4/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B5_FullRunII=${datacardDir_FullRunII}/ww2l2v_13TeV_sr_0j_B5/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B6_FullRunII=${datacardDir_FullRunII}/ww2l2v_13TeV_sr_0j_B6/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B7_FullRunII=${datacardDir_FullRunII}/ww2l2v_13TeV_sr_0j_B7/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_top_0j_FullRunII=${datacardDir_FullRunII}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                  > FullRunII_leadinglepPT_0j.txt

combineCards.py   ww2l2v_13TeV_sr_1j_B0_FullRunII=${datacardDir_FullRunII}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B1_FullRunII=${datacardDir_FullRunII}/ww2l2v_13TeV_sr_1j_B1/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B2_FullRunII=${datacardDir_FullRunII}/ww2l2v_13TeV_sr_1j_B2/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B3_FullRunII=${datacardDir_FullRunII}/ww2l2v_13TeV_sr_1j_B3/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B4_FullRunII=${datacardDir_FullRunII}/ww2l2v_13TeV_sr_1j_B4/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B5_FullRunII=${datacardDir_FullRunII}/ww2l2v_13TeV_sr_1j_B5/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B6_FullRunII=${datacardDir_FullRunII}/ww2l2v_13TeV_sr_1j_B6/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B7_FullRunII=${datacardDir_FullRunII}/ww2l2v_13TeV_sr_1j_B7/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_top_1j_FullRunII=${datacardDir_FullRunII}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                  > FullRunII_leadinglepPT_1j.txt

combineCards.py   ww2l2v_13TeV_sr_2j_B0_FullRunII=${datacardDir_FullRunII}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B1_FullRunII=${datacardDir_FullRunII}/ww2l2v_13TeV_sr_2j_B1/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B2_FullRunII=${datacardDir_FullRunII}/ww2l2v_13TeV_sr_2j_B2/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B3_FullRunII=${datacardDir_FullRunII}/ww2l2v_13TeV_sr_2j_B3/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B4_FullRunII=${datacardDir_FullRunII}/ww2l2v_13TeV_sr_2j_B4/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B5_FullRunII=${datacardDir_FullRunII}/ww2l2v_13TeV_sr_2j_B5/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B6_FullRunII=${datacardDir_FullRunII}/ww2l2v_13TeV_sr_2j_B6/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B7_FullRunII=${datacardDir_FullRunII}/ww2l2v_13TeV_sr_2j_B7/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_top_2j_FullRunII=${datacardDir_FullRunII}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  > FullRunII_leadinglepPT_2j.txt

combineCards.py WW2l2nu_2016_HIPM=Full2016_HIPM_leadinglepPT_0j.txt \
                WW2l2nu_2016_noHIPM=Full2016_noHIPM_leadinglepPT_0j.txt \
                WW2l2nu_2017=Full2017_leadinglepPT_0j.txt \
                WW2l2nu_2018=Full2018_leadinglepPT_0j.txt \
                > FullRunII_leadinglepPT_0j.txt

combineCards.py WW2l2nu_2016_HIPM=Full2016_HIPM_leadinglepPT_1j.txt \
                WW2l2nu_2016_noHIPM=Full2016_noHIPM_leadinglepPT_1j.txt \
                WW2l2nu_2017=Full2017_leadinglepPT_1j.txt \
                WW2l2nu_2018=Full2018_leadinglepPT_1j.txt \
                > FullRunII_leadinglepPT_1j.txt

combineCards.py WW2l2nu_2016_HIPM=Full2016_HIPM_leadinglepPT_2j.txt \
                WW2l2nu_2016_noHIPM=Full2016_noHIPM_leadinglepPT_2j.txt \
                WW2l2nu_2017=Full2017_leadinglepPT_2j.txt \
                WW2l2nu_2018=Full2018_leadinglepPT_2j.txt \
                > FullRunII_leadinglepPT_2j.txt

combineCards.py WW2l2nu_2016_HIPM=Full2016_HIPM_leadinglepPT.txt \
                WW2l2nu_2016_noHIPM=Full2016_noHIPM_leadinglepPT.txt \
                WW2l2nu_2017=Full2017_leadinglepPT.txt \
                WW2l2nu_2018=Full2018_leadinglepPT.txt \
                > FullRunII_leadinglepPT.txt

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B7:r_7[1, -10, 10]' \
                  Full2016_HIPM_leadinglepPT_0j.txt -o Full2016_HIPM_leadinglepPT_0j.root
				  
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B7:r_7[1, -10, 10]' \
                  Full2016_HIPM_leadinglepPT_1j.txt -o Full2016_HIPM_leadinglepPT_1j.root
				  
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B7:r_7[1, -10, 10]' \
                  Full2016_HIPM_leadinglepPT_2j.txt -o Full2016_HIPM_leadinglepPT_2j.root				  				  

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B7:r_7[1, -10, 10]' \
                  Full2016_HIPM_leadinglepPT.txt -o Full2016_HIPM_leadinglepPT.root

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B7:r_7[1, -10, 10]' \
                  Full2016_noHIPM_leadinglepPT_0j.txt -o Full2016_noHIPM_leadinglepPT_0j.root
				  
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B7:r_7[1, -10, 10]' \
                  Full2016_noHIPM_leadinglepPT_1j.txt -o Full2016_noHIPM_leadinglepPT_1j.root
				  
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B7:r_7[1, -10, 10]' \
                  Full2016_noHIPM_leadinglepPT_2j.txt -o Full2016_noHIPM_leadinglepPT_2j.root				  				  

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B7:r_7[1, -10, 10]' \
                  Full2016_noHIPM_leadinglepPT.txt -o Full2016_noHIPM_leadinglepPT.root

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B7:r_7[1, -10, 10]' \
                  Full2017_leadinglepPT_0j.txt -o Full2017_leadinglepPT_0j.root
				  
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B7:r_7[1, -10, 10]' \
                  Full2017_leadinglepPT_1j.txt -o Full2017_leadinglepPT_1j.root
				  
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B7:r_7[1, -10, 10]' \
                  Full2017_leadinglepPT_2j.txt -o Full2017_leadinglepPT_2j.root				  				  

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B7:r_7[1, -10, 10]' \
                  Full2017_leadinglepPT.txt -o Full2017_leadinglepPT.root

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B7:r_7[1, -10, 10]' \
                  Full2018_leadinglepPT_0j.txt -o Full2018_leadinglepPT_0j.root
				  
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B7:r_7[1, -10, 10]' \
                  Full2018_leadinglepPT_1j.txt -o Full2018_leadinglepPT_1j.root
				  
text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B7:r_7[1, -10, 10]' \
                  Full2018_leadinglepPT_2j.txt -o Full2018_leadinglepPT_2j.root				  				  

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B7:r_7[1, -10, 10]' \
                  Full2018_leadinglepPT.txt -o Full2018_leadinglepPT.root

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B7:r_7[1, -10, 10]' \
                  FullFullRunII_leadinglepPT_0j.txt -o FullFullRunII_leadinglepPT_0j.root

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B7:r_7[1, -10, 10]' \
                  FullFullRunII_leadinglepPT_1j.txt -o FullFullRunII_leadinglepPT_1j.root

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B7:r_7[1, -10, 10]' \
                  FullFullRunII_leadinglepPT_2j.txt -o FullFullRunII_leadinglepPT_2j.root

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B7:r_7[1, -10, 10]' \
                  FullRunII_leadinglepPT.txt -o FullRunII_leadinglepPT.root
#COMMENT
combine -M MultiDimFit --algo singles --setParameters r_0=1,r_1=1,r_2=1,r_3=1,r_4=1,r_5=1,r_6=1,r_7=1 -d FullRunII_leadinglepPT.root --saveFitResult --X-rtd MINIMIZER_analytic -n WW_FullRunII_leadinglepPT | tee log_Fit_WW_FullRunII_leadinglepPT.out

combine -M MultiDimFit --algo singles --setParameters r_0=1,r_1=1,r_2=1,r_3=1,r_4=1,r_5=1,r_6=1,r_7=1 -d FullRunII_leadinglepPT_0j.root --saveFitResult --X-rtd MINIMIZER_analytic -n WW_FullRunII_leadinglepPT_0j | tee log_Fit_WW_FullRunII_leadinglepPT_0j.out

combine -M MultiDimFit --algo singles --setParameters r_0=1,r_1=1,r_2=1,r_3=1,r_4=1,r_5=1,r_6=1,r_7=1 -d FullRunII_leadinglepPT_1j.root --saveFitResult --X-rtd MINIMIZER_analytic -n WW_FullRunII_leadinglepPT_1j | tee log_Fit_WW_FullRunII_leadinglepPT_1j.out

combine -M MultiDimFit --algo singles --setParameters r_0=1,r_1=1,r_2=1,r_3=1,r_4=1,r_5=1,r_6=1,r_7=1 -d FullRunII_leadinglepPT_2j.root --saveFitResult --X-rtd MINIMIZER_analytic -n WW_FullRunII_leadinglepPT_2j | tee log_Fit_WW_FullRunII_leadinglepPT_1j.out
