#!/bin/bash

export COMBINE_DIR=/afs/cern.ch/work/s/ssaumya/private/Projects/HiggsCombine/CMSSW_10_2_13/src/HiggsAnalysis/CombinedLimit/

cd $COMBINE_DIR
eval `scramv1 runtime -sh`
cd -

ulimit -s unlimited
: <<'COMMENT'
datacardDir_2016_HIPM=datacards_2016_HIPM
datacardDir_2016_noHIPM=datacards_2016_noHIPM
datacardDir_2017=datacards_2017
datacardDir_2018=datacards_2018

combineCards.py   ww2l2v_13TeV_sr_0j_B0_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B1_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B1/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B2_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B2/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B3_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B3/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B4_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B4/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B5_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B5/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B6_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B6/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_top_0j_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                  > Full2016_HIPM_subleadinglepPT_0j.txt

combineCards.py   ww2l2v_13TeV_sr_1j_B0_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B1_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B1/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B2_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B2/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B3_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B3/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B4_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B4/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B5_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B5/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B6_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B6/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_top_1j_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                  > Full2016_HIPM_subleadinglepPT_1j.txt

combineCards.py   ww2l2v_13TeV_sr_2j_B0_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B1_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B1/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B2_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B2/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B3_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B3/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B4_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B4/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B5_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B5/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B6_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B6/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_top_2j_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  > Full2016_HIPM_subleadinglepPT_2j.txt

combineCards.py   ww2l2v_13TeV_sr_0j_B0_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B1_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B1/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B2_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B2/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B3_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B3/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B4_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B4/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B5_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B5/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B6_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B6/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B0_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B1_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B1/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B2_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B2/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B3_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B3/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B4_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B4/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B5_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B5/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B6_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B6/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B0_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B1_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B1/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B2_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B2/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B3_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B3/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B4_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B4/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B5_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B5/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B6_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B6/BDTOutput_2j/datacard.txt  \
				  ww2l2v_13TeV_top_0j_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_top_0j/events/datacard.txt \
				  ww2l2v_13TeV_top_1j_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                  ww2l2v_13TeV_top_2j_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  > Full2016_HIPM_subleadinglepPT.txt

combineCards.py   ww2l2v_13TeV_sr_0j_B0_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B1_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B1/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B2_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B2/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B3_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B3/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B4_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B4/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B5_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B5/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B6_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B6/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_top_0j_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                  > Full2016_noHIPM_subleadinglepPT_0j.txt

combineCards.py   ww2l2v_13TeV_sr_1j_B0_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B1_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B1/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B2_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B2/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B3_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B3/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B4_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B4/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B5_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B5/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B6_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B6/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_top_1j_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                  > Full2016_noHIPM_subleadinglepPT_1j.txt

combineCards.py   ww2l2v_13TeV_sr_2j_B0_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B1_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B1/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B2_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B2/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B3_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B3/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B4_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B4/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B5_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B5/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B6_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B6/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_top_2j_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  > Full2016_noHIPM_subleadinglepPT_2j.txt

combineCards.py   ww2l2v_13TeV_sr_0j_B0_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B1_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B1/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B2_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B2/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B3_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B3/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B4_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B4/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B5_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B5/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B6_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B6/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B0_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B1_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B1/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B2_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B2/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B3_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B3/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B4_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B4/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B5_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B5/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B6_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B6/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B0_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B1_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B1/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B2_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B2/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B3_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B3/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B4_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B4/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B5_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B5/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B6_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B6/BDTOutput_2j/datacard.txt  \
				  ww2l2v_13TeV_top_0j_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_top_0j/events/datacard.txt \
				  ww2l2v_13TeV_top_1j_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                  ww2l2v_13TeV_top_2j_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  > Full2016_noHIPM_subleadinglepPT.txt

combineCards.py   ww2l2v_13TeV_sr_0j_B0_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B1_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B1/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B2_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B2/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B3_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B3/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B4_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B4/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B5_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B5/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B6_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B6/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_top_0j_2017=${datacardDir_2017}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                  > Full2017_subleadinglepPT_0j.txt

combineCards.py   ww2l2v_13TeV_sr_1j_B0_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B1_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B1/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B2_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B2/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B3_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B3/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B4_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B4/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B5_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B5/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B6_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B6/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_top_1j_2017=${datacardDir_2017}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                  > Full2017_subleadinglepPT_1j.txt

combineCards.py   ww2l2v_13TeV_sr_2j_B0_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B1_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B1/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B2_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B2/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B3_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B3/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B4_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B4/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B5_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B5/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B6_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B6/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_top_2j_2017=${datacardDir_2017}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  > Full2017_subleadinglepPT_2j.txt

combineCards.py   ww2l2v_13TeV_sr_0j_B0_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B1_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B1/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B2_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B2/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B3_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B3/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B4_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B4/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B5_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B5/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B6_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B6/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B0_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B1_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B1/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B2_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B2/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B3_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B3/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B4_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B4/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B5_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B5/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B6_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B6/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B0_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B1_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B1/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B2_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B2/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B3_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B3/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B4_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B4/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B5_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B5/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B6_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B6/BDTOutput_2j/datacard.txt  \
				  ww2l2v_13TeV_top_0j_2017=${datacardDir_2017}/ww2l2v_13TeV_top_0j/events/datacard.txt \
				  ww2l2v_13TeV_top_1j_2017=${datacardDir_2017}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                  ww2l2v_13TeV_top_2j_2017=${datacardDir_2017}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  > Full2017_subleadinglepPT.txt

combineCards.py   ww2l2v_13TeV_sr_0j_B0_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B1_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B1/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B2_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B2/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B3_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B3/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B4_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B4/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B5_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B5/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B6_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B6/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_top_0j_2018=${datacardDir_2018}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                  > Full2018_subleadinglepPT_0j.txt
				  
combineCards.py   ww2l2v_13TeV_sr_1j_B0_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B1_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B1/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B2_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B2/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B3_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B3/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B4_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B4/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B5_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B5/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B6_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B6/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_top_1j_2018=${datacardDir_2018}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                  > Full2018_subleadinglepPT_1j.txt

combineCards.py   ww2l2v_13TeV_sr_2j_B0_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B1_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B1/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B2_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B2/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B3_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B3/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B4_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B4/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B5_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B5/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B6_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B6/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_top_2j_2018=${datacardDir_2018}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  > Full2018_subleadinglepPT_2j.txt

combineCards.py   ww2l2v_13TeV_sr_0j_B0_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B1_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B1/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B2_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B2/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B3_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B3/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B4_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B4/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B5_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B5/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_0j_B6_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B6/BDTOutput_0j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B0_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B1_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B1/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B2_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B2/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B3_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B3/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B4_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B4/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B5_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B5/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B6_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B6/BDTOutput_1j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B0_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B1_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B1/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B2_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B2/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B3_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B3/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B4_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B4/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B5_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B5/BDTOutput_2j/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B6_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B6/BDTOutput_2j/datacard.txt  \
				  ww2l2v_13TeV_top_0j_2018=${datacardDir_2018}/ww2l2v_13TeV_top_0j/events/datacard.txt \
				  ww2l2v_13TeV_top_1j_2018=${datacardDir_2018}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                  ww2l2v_13TeV_top_2j_2018=${datacardDir_2018}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  > Full2018_subleadinglepPT.txt

combineCards.py WW2l2nu_2016_HIPM_0j=Full2016_HIPM_subleadinglepPT_0j.txt \
                WW2l2nu_2016_noHIPM_0j=Full2016_noHIPM_subleadinglepPT_0j.txt \
                WW2l2nu_2017_0j=Full2017_subleadinglepPT_0j.txt \
                WW2l2nu_2018_0j=Full2018_subleadinglepPT_0j.txt \
                > FullRunII_subleadinglepPT_0j.txt

combineCards.py WW2l2nu_2016_noHIPM_1j=Full2016_HIPM_subleadinglepPT_1j.txt \
                WW2l2nu_2016_noHIPM_1j=Full2016_noHIPM_subleadinglepPT_1j.txt \
                WW2l2nu_2017_1j=Full2017_subleadinglepPT_1j.txt \
                WW2l2nu_2018_1j=Full2018_subleadinglepPT_1j.txt \
                > FullRunII_subleadinglepPT_1j.txt

combineCards.py WW2l2nu_2016_noHIPM_2j=Full2016_HIPM_subleadinglepPT_2j.txt \
                WW2l2nu_2016_noHIPM_2j=Full2016_noHIPM_subleadinglepPT_2j.txt \
                WW2l2nu_2017_2j=Full2017_subleadinglepPT_2j.txt \
                WW2l2nu_2018_2j=Full2018_subleadinglepPT_2j.txt \
                > FullRunII_subleadinglepPT_2j.txt

combineCards.py WW2l2nu_2016_HIPM=Full2016_HIPM_subleadinglepPT.txt \
                WW2l2nu_2016_noHIPM=Full2016_noHIPM_subleadinglepPT.txt \
                WW2l2nu_2017=Full2017_subleadinglepPT.txt \
                WW2l2nu_2018=Full2018_subleadinglepPT.txt \
                > FullRunII_subleadinglepPT.txt

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  Full2016_HIPM_subleadinglepPT_0j.txt -o Full2016_HIPM_subleadinglepPT_0j.root

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  Full2016_HIPM_subleadinglepPT_1j.txt -o Full2016_HIPM_subleadinglepPT_1j.root

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  Full2016_HIPM_subleadinglepPT_2j.txt -o Full2016_HIPM_subleadinglepPT_2j.root

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  Full2016_HIPM_subleadinglepPT.txt -o Full2016_HIPM_subleadinglepPT.root


text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  Full2016_noHIPM_subleadinglepPT_0j.txt -o Full2016_noHIPM_subleadinglepPT_0j.root

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  Full2016_noHIPM_subleadinglepPT_1j.txt -o Full2016_noHIPM_subleadinglepPT_1j.root

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  Full2016_noHIPM_subleadinglepPT_2j.txt -o Full2016_noHIPM_subleadinglepPT_2j.root

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  Full2016_noHIPM_subleadinglepPT.txt -o Full2016_noHIPM_subleadinglepPT.root


text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  Full2017_subleadinglepPT_0j.txt -o Full2017_subleadinglepPT_0j.root

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  Full2017_subleadinglepPT_1j.txt -o Full2017_subleadinglepPT_1j.root

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  Full2017_subleadinglepPT_2j.txt -o Full2017_subleadinglepPT_2j.root

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  Full2017_subleadinglepPT.txt -o Full2017_subleadinglepPT.root


text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  Full2018_subleadinglepPT_0j.txt -o Full2018_subleadinglepPT_0j.root

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  Full2018_subleadinglepPT_1j.txt -o Full2018_subleadinglepPT_1j.root

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  Full2018_subleadinglepPT_2j.txt -o Full2018_subleadinglepPT_2j.root

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  Full2018_subleadinglepPT.txt -o Full2018_subleadinglepPT.root


text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  FullRunII_subleadinglepPT_0j.txt -o FullRunII_subleadinglepPT_0j.root

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  FullRunII_subleadinglepPT_1j.txt -o FullRunII_subleadinglepPT_1j.root

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  FullRunII_subleadinglepPT_2j.txt -o FullRunII_subleadinglepPT_2j.root

text2workspace.py -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                  --PO 'map=.*/.*WW_B0:r_0[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B1:r_1[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B2:r_2[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B3:r_3[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B4:r_4[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B5:r_5[1, -10, 10]' \
                  --PO 'map=.*/.*WW_B6:r_6[1, -10, 10]' \
                  FullRunII_subleadinglepPT.txt -o FullRunII_subleadinglepPT.root
COMMENT
combine -M MultiDimFit --algo singles --setParameters r_0=1,r_1=1,r_2=1,r_3=1,r_4=1,r_5=1,r_6=1 -d FullRunII_subleadinglepPT.root --saveFitResult --X-rtd MINIMIZER_analytic -n WW_FullRunII_subleadinglepPT | tee log_Fit_WW_FullRunII_subleadinglepPT.out

combine -M MultiDimFit --algo singles --setParameters r_0=1,r_1=1,r_2=1,r_3=1,r_4=1,r_5=1,r_6=1 -d FullRunII_subleadinglepPT_0j.root --saveFitResult --X-rtd MINIMIZER_analytic -n WW_FullRunII_subleadinglepPT_0j | tee log_Fit_WW_FullRunII_subleadinglepPT_0j.out

combine -M MultiDimFit --algo singles --setParameters r_0=1,r_1=1,r_2=1,r_3=1,r_4=1,r_5=1,r_6=1 -d FullRunII_subleadinglepPT_1j.root --saveFitResult --X-rtd MINIMIZER_analytic -n WW_FullRunII_subleadinglepPT_1j | tee log_Fit_WW_FullRunII_subleadinglepPT_1j.out

combine -M MultiDimFit --algo singles --setParameters r_0=1,r_1=1,r_2=1,r_3=1,r_4=1,r_5=1,r_6=1 -d FullRunII_subleadinglepPT_2j.root --saveFitResult --X-rtd MINIMIZER_analytic -n WW_FullRunII_subleadinglepPT_2j | tee log_Fit_WW_FullRunII_subleadinglepPT_2j.out
