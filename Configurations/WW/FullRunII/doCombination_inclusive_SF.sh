#!/bin/bash

cd $COMBINE_DIR
eval `scramv1 runtime -sh`
cd -

ulimit -s unlimited

datacardDir_2016_HIPM=datacards_2016_HIPM
datacardDir_2016_noHIPM=datacards_2016_noHIPM
datacardDir_2017=datacards_2017
datacardDir_2018=datacards_2018

combineCards.py   ww2l2v_13TeV_sr_0j_B0_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B0/events/datacard.txt  \
                  ww2l2v_13TeV_top_0j_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                  > Full2016_HIPM_incl_SF_0j.txt

combineCards.py   ww2l2v_13TeV_sr_1j_B0_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B0/events/datacard.txt  \
                  ww2l2v_13TeV_top_1j_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                  > Full2016_HIPM_incl_SF_1j.txt

combineCards.py   ww2l2v_13TeV_sr_2j_B0_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B0/events/datacard.txt  \
                  ww2l2v_13TeV_top_2j_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  > Full2016_HIPM_incl_SF_2j.txt

combineCards.py   ww2l2v_13TeV_sr_0j_B0_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B0/events/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B0_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B0/events/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B0_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B0/events/datacard.txt  \
                  ww2l2v_13TeV_top_0j_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                  ww2l2v_13TeV_top_1j_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                  ww2l2v_13TeV_top_2j_2016_HIPM=${datacardDir_2016_HIPM}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  > Full2016_HIPM_incl_SF.txt

combineCards.py   ww2l2v_13TeV_sr_0j_B0_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B0/events/datacard.txt  \
                  ww2l2v_13TeV_top_0j_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                  > Full2016_noHIPM_incl_SF_0j.txt

combineCards.py   ww2l2v_13TeV_sr_1j_B0_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B0/events/datacard.txt  \
                  ww2l2v_13TeV_top_1j_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                  > Full2016_noHIPM_incl_SF_1j.txt

combineCards.py   ww2l2v_13TeV_sr_2j_B0_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B0/events/datacard.txt  \
                  ww2l2v_13TeV_top_2j_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  > Full2016_noHIPM_incl_SF_2j.txt

combineCards.py   ww2l2v_13TeV_sr_0j_B0_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B0/events/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B0_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B0/events/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B0_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B0/events/datacard.txt  \
                  ww2l2v_13TeV_top_0j_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                  ww2l2v_13TeV_top_1j_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                  ww2l2v_13TeV_top_2j_2016_noHIPM=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  > Full2016_noHIPM_incl_SF.txt
				  
combineCards.py   ww2l2v_13TeV_sr_0j_B0_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B0/events/datacard.txt  \
                  ww2l2v_13TeV_top_0j_2017=${datacardDir_2017}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                  > Full2017_incl_SF_0j.txt

echo "nuisance edit drop WW_nonfid ww2l2v_13TeV_top_0j_2017 ps_fsr Up" >> Full2017_incl_SF_0j.txt

combineCards.py   ww2l2v_13TeV_sr_1j_B0_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B0/events/datacard.txt  \
                  ww2l2v_13TeV_top_1j_2017=${datacardDir_2017}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                  > Full2017_incl_SF_1j.txt

combineCards.py   ww2l2v_13TeV_sr_2j_B0_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B0/events/datacard.txt  \
                  ww2l2v_13TeV_top_2j_2017=${datacardDir_2017}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  > Full2017_incl_SF_2j.txt

combineCards.py   ww2l2v_13TeV_sr_0j_B0_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B0/events/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B0_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B0/events/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B0_2017=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B0/events/datacard.txt  \
                  ww2l2v_13TeV_top_0j_2017=${datacardDir_2017}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                  ww2l2v_13TeV_top_1j_2017=${datacardDir_2017}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                  ww2l2v_13TeV_top_2j_2017=${datacardDir_2017}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  > Full2017_incl_SF.txt

echo "nuisance edit drop WW_nonfid ww2l2v_13TeV_top_0j_2017 ps_fsr Up" >> Full2017_incl_SF.txt

combineCards.py   ww2l2v_13TeV_sr_0j_B0_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B0/events/datacard.txt  \
                  ww2l2v_13TeV_top_0j_2018=${datacardDir_2018}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                  > Full2018_incl_SF_0j.txt

combineCards.py   ww2l2v_13TeV_sr_1j_B0_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B0/events/datacard.txt  \
                  ww2l2v_13TeV_top_1j_2018=${datacardDir_2018}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                  > Full2018_incl_SF_1j.txt

combineCards.py   ww2l2v_13TeV_sr_2j_B0_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B0/events/datacard.txt  \
                  ww2l2v_13TeV_top_2j_2018=${datacardDir_2018}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  > Full2018_incl_SF_2j.txt

combineCards.py   ww2l2v_13TeV_sr_0j_B0_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B0/events/datacard.txt  \
                  ww2l2v_13TeV_sr_1j_B0_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B0/events/datacard.txt  \
                  ww2l2v_13TeV_sr_2j_B0_2018=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B0/events/datacard.txt  \
                  ww2l2v_13TeV_top_0j_2018=${datacardDir_2018}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                  ww2l2v_13TeV_top_1j_2018=${datacardDir_2018}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                  ww2l2v_13TeV_top_2j_2018=${datacardDir_2018}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                  > Full2018_incl_SF.txt
				  
combineCards.py WW2l2nu_2016_HIPM=Full2016_HIPM_incl_SF_0j.txt \
                WW2l2nu_2016_noHIPM=Full2016_noHIPM_incl_SF_0j.txt \
                WW2l2nu_2017=Full2017_incl_SF_0j.txt \
                WW2l2nu_2018=Full2018_incl_SF_0j.txt \
                > FullRunII_incl_SF_0j.txt	

combineCards.py WW2l2nu_2016_HIPM=Full2016_HIPM_incl_SF_1j.txt \
                WW2l2nu_2016_noHIPM=Full2016_noHIPM_incl_SF_1j.txt \
                WW2l2nu_2017=Full2017_incl_SF_1j.txt \
                WW2l2nu_2018=Full2018_incl_SF_1j.txt \
                > FullRunII_incl_SF_1j.txt	

combineCards.py WW2l2nu_2016_HIPM=Full2016_HIPM_incl_SF_2j.txt \
                WW2l2nu_2016_noHIPM=Full2016_noHIPM_incl_SF_2j.txt \
                WW2l2nu_2017=Full2017_incl_SF_2j.txt \
                WW2l2nu_2018=Full2018_incl_SF_2j.txt \
                > FullRunII_incl_SF_2j.txt					
				  
combineCards.py WW2l2nu_2016_HIPM=Full2016_HIPM_incl_SF.txt \
                WW2l2nu_2016_noHIPM=Full2016_noHIPM_incl_SF.txt \
                WW2l2nu_2017=Full2017_incl_SF.txt \
                WW2l2nu_2018=Full2018_incl_SF.txt \
                > FullRunII_incl_SF.txt

text2workspace.py Full2016_HIPM_incl_SF_0j.txt   -o Full2016_HIPM_incl_SF_0j.root   -m 125
text2workspace.py Full2016_noHIPM_incl_SF_0j.txt -o Full2016_noHIPM_incl_SF_0j.root -m 125
text2workspace.py Full2017_incl_SF_0j.txt        -o Full2017_incl_SF_0j.root        -m 125
text2workspace.py Full2018_incl_SF_0j.txt        -o Full2018_incl_SF_0j.root        -m 125
text2workspace.py FullRunII_incl_SF_0j.txt       -o FullRunII_incl_SF_0j.root       -m 125

text2workspace.py Full2016_HIPM_incl_SF_1j.txt   -o Full2016_HIPM_incl_SF_1j.root   -m 125
text2workspace.py Full2016_noHIPM_incl_SF_1j.txt -o Full2016_noHIPM_incl_SF_1j.root -m 125
text2workspace.py Full2017_incl_SF_1j.txt        -o Full2017_incl_SF_1j.root        -m 125
text2workspace.py Full2018_incl_SF_1j.txt        -o Full2018_incl_SF_1j.root        -m 125
text2workspace.py FullRunII_incl_SF_1j.txt       -o FullRunII_incl_SF_1j.root       -m 125

text2workspace.py Full2016_HIPM_incl_SF_2j.txt   -o Full2016_HIPM_incl_SF_2j.root   -m 125
text2workspace.py Full2016_noHIPM_incl_SF_2j.txt -o Full2016_noHIPM_incl_SF_2j.root -m 125
text2workspace.py Full2017_incl_SF_2j.txt        -o Full2017_incl_SF_2j.root        -m 125
text2workspace.py Full2018_incl_SF_2j.txt        -o Full2018_incl_SF_2j.root        -m 125
text2workspace.py FullRunII_incl_SF_2j.txt       -o FullRunII_incl_SF_2j.root       -m 125				
			  
text2workspace.py Full2016_HIPM_incl_SF.txt   -o Full2016_HIPM_incl_SF.root   -m 125
text2workspace.py Full2016_noHIPM_incl_SF.txt -o Full2016_noHIPM_incl_SF.root -m 125
text2workspace.py Full2017_incl_SF.txt        -o Full2017_incl_SF.root        -m 125
text2workspace.py Full2018_incl_SF.txt        -o Full2018_incl_SF.root        -m 125
text2workspace.py FullRunII_incl_SF.txt       -o FullRunII_incl_SF.root       -m 125
