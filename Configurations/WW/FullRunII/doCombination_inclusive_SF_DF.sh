#!/bin/bash

ulimit -s unlimited

datacardDir_SF_2016_HIPM=../../inclusive_SF/datacards_2016_HIPM
datacardDir_SF_2016_noHIPM=../../inclusive_SF/datacards_2016_noHIPM
datacardDir_SF_2017=../../inclusive_SF/datacards_2017
datacardDir_SF_2018=../../inclusive_SF/datacards_2018
datacardDir_DF_2016_HIPM=../../inclusive_DF/ptWW_Reweighting/datacards_2016_HIPM
datacardDir_DF_2016_noHIPM=../../inclusive_DF/ptWW_Reweighting/datacards_2016_noHIPM
datacardDir_DF_2017=../../inclusive_DF/ptWW_Reweighting/datacards_2017
datacardDir_DF_2018=../../inclusive_DF/ptWW_Reweighting/datacards_2018

combineCards.py ww2l2v_13TeV_SF_sr_0j_B0_2016_HIPM=${datacardDir_SF_2016_HIPM}/ww2l2v_13TeV_sr_0j_B0/events/datacard.txt  \
                ww2l2v_13TeV_SF_top_0j_2016_HIPM=${datacardDir_SF_2016_HIPM}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                ww2l2v_13TeV_DF_sr_0j_B0_2016_HIPM=${datacardDir_DF_2016_HIPM}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt  \
                ww2l2v_13TeV_DF_top_0j_2016_HIPM=${datacardDir_DF_2016_HIPM}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                > Full2016_HIPM_incl_SF_DF_0j.txt

combineCards.py ww2l2v_13TeV_SF_sr_1j_B0_2016_HIPM=${datacardDir_SF_2016_HIPM}/ww2l2v_13TeV_sr_1j_B0/events/datacard.txt  \
                ww2l2v_13TeV_SF_top_1j_2016_HIPM=${datacardDir_SF_2016_HIPM}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                ww2l2v_13TeV_DF_sr_1j_B0_2016_HIPM=${datacardDir_DF_2016_HIPM}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt  \
                ww2l2v_13TeV_DF_top_1j_2016_HIPM=${datacardDir_DF_2016_HIPM}/ww2l2v_13TeV_top_1j/events/datacard.txt \
				> Full2016_HIPM_incl_SF_DF_1j.txt
				
combineCards.py ww2l2v_13TeV_SF_sr_2j_B0_2016_HIPM=${datacardDir_SF_2016_HIPM}/ww2l2v_13TeV_sr_2j_B0/events/datacard.txt  \
                ww2l2v_13TeV_SF_top_2j_2016_HIPM=${datacardDir_SF_2016_HIPM}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                ww2l2v_13TeV_DF_sr_2j_B0_2016_HIPM=${datacardDir_DF_2016_HIPM}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                ww2l2v_13TeV_DF_top_2j_2016_HIPM=${datacardDir_DF_2016_HIPM}/ww2l2v_13TeV_top_2j/events/datacard.txt \
				> Full2016_HIPM_incl_SF_DF_2j.txt
				
combineCards.py ww2l2v_13TeV_SF_sr_0j_B0_2016_HIPM=${datacardDir_SF_2016_HIPM}/ww2l2v_13TeV_sr_0j_B0/events/datacard.txt  \
                ww2l2v_13TeV_SF_sr_1j_B0_2016_HIPM=${datacardDir_SF_2016_HIPM}/ww2l2v_13TeV_sr_1j_B0/events/datacard.txt  \
                ww2l2v_13TeV_SF_sr_2j_B0_2016_HIPM=${datacardDir_SF_2016_HIPM}/ww2l2v_13TeV_sr_2j_B0/events/datacard.txt  \
                ww2l2v_13TeV_SF_top_0j_2016_HIPM=${datacardDir_SF_2016_HIPM}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                ww2l2v_13TeV_SF_top_1j_2016_HIPM=${datacardDir_SF_2016_HIPM}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                ww2l2v_13TeV_SF_top_2j_2016_HIPM=${datacardDir_SF_2016_HIPM}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                ww2l2v_13TeV_DF_sr_0j_B0_2016_HIPM=${datacardDir_DF_2016_HIPM}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt  \
                ww2l2v_13TeV_DF_sr_1j_B0_2016_HIPM=${datacardDir_DF_2016_HIPM}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt  \
                ww2l2v_13TeV_DF_sr_2j_B0_2016_HIPM=${datacardDir_DF_2016_HIPM}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                ww2l2v_13TeV_DF_top_0j_2016_HIPM=${datacardDir_DF_2016_HIPM}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                ww2l2v_13TeV_DF_top_1j_2016_HIPM=${datacardDir_DF_2016_HIPM}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                ww2l2v_13TeV_DF_top_2j_2016_HIPM=${datacardDir_DF_2016_HIPM}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                > Full2016_HIPM_incl_SF_DF.txt				
				
combineCards.py ww2l2v_13TeV_SF_sr_0j_B0_2016_noHIPM=${datacardDir_SF_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B0/events/datacard.txt  \
                ww2l2v_13TeV_SF_top_0j_2016_noHIPM=${datacardDir_SF_2016_noHIPM}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                ww2l2v_13TeV_DF_sr_0j_B0_2016_noHIPM=${datacardDir_DF_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt  \
                ww2l2v_13TeV_DF_top_0j_2016_noHIPM=${datacardDir_DF_2016_noHIPM}/ww2l2v_13TeV_top_0j/events/datacard.txt \
				> Full2016_noHIPM_incl_SF_DF_0j.txt	
				
combineCards.py ww2l2v_13TeV_SF_sr_1j_B0_2016_noHIPM=${datacardDir_SF_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B0/events/datacard.txt  \
                ww2l2v_13TeV_SF_top_1j_2016_noHIPM=${datacardDir_SF_2016_noHIPM}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                ww2l2v_13TeV_DF_sr_1j_B0_2016_noHIPM=${datacardDir_DF_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt  \
                ww2l2v_13TeV_DF_top_1j_2016_noHIPM=${datacardDir_DF_2016_noHIPM}/ww2l2v_13TeV_top_1j/events/datacard.txt \
				> Full2016_noHIPM_incl_SF_DF_1j.txt
				
combineCards.py ww2l2v_13TeV_SF_sr_2j_B0_2016_noHIPM=${datacardDir_SF_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B0/events/datacard.txt  \
                ww2l2v_13TeV_SF_top_2j_2016_noHIPM=${datacardDir_SF_2016_noHIPM}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                ww2l2v_13TeV_DF_sr_2j_B0_2016_noHIPM=${datacardDir_DF_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                ww2l2v_13TeV_DF_top_2j_2016_noHIPM=${datacardDir_DF_2016_noHIPM}/ww2l2v_13TeV_top_2j/events/datacard.txt \
				> Full2016_noHIPM_incl_SF_DF_2j.txt
				
combineCards.py ww2l2v_13TeV_SF_sr_0j_B0_2016_noHIPM=${datacardDir_SF_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B0/events/datacard.txt  \
                ww2l2v_13TeV_SF_sr_1j_B0_2016_noHIPM=${datacardDir_SF_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B0/events/datacard.txt  \
                ww2l2v_13TeV_SF_sr_2j_B0_2016_noHIPM=${datacardDir_SF_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B0/events/datacard.txt  \
                ww2l2v_13TeV_SF_top_0j_2016_noHIPM=${datacardDir_SF_2016_noHIPM}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                ww2l2v_13TeV_SF_top_1j_2016_noHIPM=${datacardDir_SF_2016_noHIPM}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                ww2l2v_13TeV_SF_top_2j_2016_noHIPM=${datacardDir_SF_2016_noHIPM}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                ww2l2v_13TeV_DF_sr_0j_B0_2016_noHIPM=${datacardDir_DF_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt  \
                ww2l2v_13TeV_DF_sr_1j_B0_2016_noHIPM=${datacardDir_DF_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt  \
                ww2l2v_13TeV_DF_sr_2j_B0_2016_noHIPM=${datacardDir_DF_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                ww2l2v_13TeV_DF_top_0j_2016_noHIPM=${datacardDir_DF_2016_noHIPM}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                ww2l2v_13TeV_DF_top_1j_2016_noHIPM=${datacardDir_DF_2016_noHIPM}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                ww2l2v_13TeV_DF_top_2j_2016_noHIPM=${datacardDir_DF_2016_noHIPM}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                > Full2016_noHIPM_incl_SF_DF.txt				

combineCards.py ww2l2v_13TeV_SF_sr_0j_B0_2017=${datacardDir_SF_2017}/ww2l2v_13TeV_sr_0j_B0/events/datacard.txt  \
                ww2l2v_13TeV_SF_top_0j_2017=${datacardDir_SF_2017}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                ww2l2v_13TeV_DF_sr_0j_B0_2017=${datacardDir_DF_2017}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt  \
                ww2l2v_13TeV_DF_top_0j_2017=${datacardDir_DF_2017}/ww2l2v_13TeV_top_0j/events/datacard.txt \
				> Full2017_incl_SF_DF_0j.txt

echo "nuisance edit drop WW_nonfid ww2l2v_13TeV_SF_top_0j_2017 ps_fsr Up" >>  Full2017_incl_SF_DF_0j.txt
				
combineCards.py ww2l2v_13TeV_SF_sr_1j_B0_2017=${datacardDir_SF_2017}/ww2l2v_13TeV_sr_1j_B0/events/datacard.txt  \
                ww2l2v_13TeV_SF_top_1j_2017=${datacardDir_SF_2017}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                ww2l2v_13TeV_DF_sr_1j_B0_2017=${datacardDir_DF_2017}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt  \
                ww2l2v_13TeV_DF_top_1j_2017=${datacardDir_DF_2017}/ww2l2v_13TeV_top_1j/events/datacard.txt \
				> Full2017_incl_SF_DF_1j.txt
				
combineCards.py ww2l2v_13TeV_SF_sr_2j_B0_2017=${datacardDir_SF_2017}/ww2l2v_13TeV_sr_2j_B0/events/datacard.txt  \
                ww2l2v_13TeV_SF_top_2j_2017=${datacardDir_SF_2017}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                ww2l2v_13TeV_DF_sr_2j_B0_2017=${datacardDir_DF_2017}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                ww2l2v_13TeV_DF_top_2j_2017=${datacardDir_DF_2017}/ww2l2v_13TeV_top_2j/events/datacard.txt \
				> Full2017_incl_SF_DF_2j.txt
				
combineCards.py ww2l2v_13TeV_SF_sr_0j_B0_2017=${datacardDir_SF_2017}/ww2l2v_13TeV_sr_0j_B0/events/datacard.txt  \
                ww2l2v_13TeV_SF_sr_1j_B0_2017=${datacardDir_SF_2017}/ww2l2v_13TeV_sr_1j_B0/events/datacard.txt  \
                ww2l2v_13TeV_SF_sr_2j_B0_2017=${datacardDir_SF_2017}/ww2l2v_13TeV_sr_2j_B0/events/datacard.txt  \
                ww2l2v_13TeV_SF_top_0j_2017=${datacardDir_SF_2017}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                ww2l2v_13TeV_SF_top_1j_2017=${datacardDir_SF_2017}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                ww2l2v_13TeV_SF_top_2j_2017=${datacardDir_SF_2017}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                ww2l2v_13TeV_DF_sr_0j_B0_2017=${datacardDir_DF_2017}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt  \
                ww2l2v_13TeV_DF_sr_1j_B0_2017=${datacardDir_DF_2017}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt  \
                ww2l2v_13TeV_DF_sr_2j_B0_2017=${datacardDir_DF_2017}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                ww2l2v_13TeV_DF_top_0j_2017=${datacardDir_DF_2017}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                ww2l2v_13TeV_DF_top_1j_2017=${datacardDir_DF_2017}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                ww2l2v_13TeV_DF_top_2j_2017=${datacardDir_DF_2017}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                > Full2017_incl_SF_DF.txt

echo "nuisance edit drop WW_nonfid ww2l2v_13TeV_SF_top_0j_2017 ps_fsr Up" >>  Full2017_incl_SF_DF.txt

combineCards.py ww2l2v_13TeV_SF_sr_0j_B0_2018=${datacardDir_SF_2018}/ww2l2v_13TeV_sr_0j_B0/events/datacard.txt  \
                ww2l2v_13TeV_SF_top_0j_2018=${datacardDir_SF_2018}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                ww2l2v_13TeV_DF_sr_0j_B0_2018=${datacardDir_DF_2018}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt  \
                ww2l2v_13TeV_DF_top_0j_2018=${datacardDir_DF_2018}/ww2l2v_13TeV_top_0j/events/datacard.txt \
				> Full2018_incl_SF_DF_0j.txt
				
combineCards.py ww2l2v_13TeV_SF_sr_1j_B0_2018=${datacardDir_SF_2018}/ww2l2v_13TeV_sr_1j_B0/events/datacard.txt  \
                ww2l2v_13TeV_SF_top_1j_2018=${datacardDir_SF_2018}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                ww2l2v_13TeV_DF_sr_1j_B0_2018=${datacardDir_DF_2018}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt  \
                ww2l2v_13TeV_DF_top_1j_2018=${datacardDir_DF_2018}/ww2l2v_13TeV_top_1j/events/datacard.txt \
				> Full2018_incl_SF_DF_1j.txt
				
combineCards.py ww2l2v_13TeV_SF_sr_2j_B0_2018=${datacardDir_SF_2018}/ww2l2v_13TeV_sr_2j_B0/events/datacard.txt  \
                ww2l2v_13TeV_SF_top_2j_2018=${datacardDir_SF_2018}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                ww2l2v_13TeV_DF_sr_2j_B0_2018=${datacardDir_DF_2018}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                ww2l2v_13TeV_DF_top_2j_2018=${datacardDir_DF_2018}/ww2l2v_13TeV_top_2j/events/datacard.txt \
				> Full2018_incl_SF_DF_2j.txt
				
combineCards.py ww2l2v_13TeV_SF_sr_0j_B0_2018=${datacardDir_SF_2018}/ww2l2v_13TeV_sr_0j_B0/events/datacard.txt  \
                ww2l2v_13TeV_SF_sr_1j_B0_2018=${datacardDir_SF_2018}/ww2l2v_13TeV_sr_1j_B0/events/datacard.txt  \
                ww2l2v_13TeV_SF_sr_2j_B0_2018=${datacardDir_SF_2018}/ww2l2v_13TeV_sr_2j_B0/events/datacard.txt  \
                ww2l2v_13TeV_SF_top_0j_2018=${datacardDir_SF_2018}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                ww2l2v_13TeV_SF_top_1j_2018=${datacardDir_SF_2018}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                ww2l2v_13TeV_SF_top_2j_2018=${datacardDir_SF_2018}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                ww2l2v_13TeV_DF_sr_0j_B0_2018=${datacardDir_DF_2018}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt  \
                ww2l2v_13TeV_DF_sr_1j_B0_2018=${datacardDir_DF_2018}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt  \
                ww2l2v_13TeV_DF_sr_2j_B0_2018=${datacardDir_DF_2018}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt  \
                ww2l2v_13TeV_DF_top_0j_2018=${datacardDir_DF_2018}/ww2l2v_13TeV_top_0j/events/datacard.txt \
                ww2l2v_13TeV_DF_top_1j_2018=${datacardDir_DF_2018}/ww2l2v_13TeV_top_1j/events/datacard.txt \
                ww2l2v_13TeV_DF_top_2j_2018=${datacardDir_DF_2018}/ww2l2v_13TeV_top_2j/events/datacard.txt \
                > Full2018_incl_SF_DF.txt				

combineCards.py WW2l2nu_2016_HIPM=Full2016_HIPM_incl_SF_DF_0j.txt \
                WW2l2nu_2016_noHIPM=Full2016_noHIPM_incl_SF_DF_0j.txt \
                WW2l2nu_2017=Full2017_incl_SF_DF_0j.txt \
                WW2l2nu_2018=Full2018_incl_SF_DF_0j.txt \
                > FullRunII_incl_SF_DF_0j.txt

combineCards.py WW2l2nu_2016_HIPM=Full2016_HIPM_incl_SF_DF_1j.txt \
                WW2l2nu_2016_noHIPM=Full2016_noHIPM_incl_SF_DF_1j.txt \
                WW2l2nu_2017=Full2017_incl_SF_DF_1j.txt \
                WW2l2nu_2018=Full2018_incl_SF_DF_1j.txt \
                > FullRunII_incl_SF_DF_1j.txt

combineCards.py WW2l2nu_2016_HIPM=Full2016_HIPM_incl_SF_DF_2j.txt \
                WW2l2nu_2016_noHIPM=Full2016_noHIPM_incl_SF_DF_2j.txt \
                WW2l2nu_2017=Full2017_incl_SF_DF_2j.txt \
                WW2l2nu_2018=Full2018_incl_SF_DF_2j.txt \
                > FullRunII_incl_SF_DF_2j.txt

combineCards.py WW2l2nu_2016_HIPM=Full2016_HIPM_incl_SF_DF.txt \
                WW2l2nu_2016_noHIPM=Full2016_noHIPM_incl_SF_DF.txt \
                WW2l2nu_2017=Full2017_incl_SF_DF.txt \
                WW2l2nu_2018=Full2018_incl_SF_DF.txt \
                > FullRunII_incl_SF_DF.txt	

text2workspace.py Full2016_HIPM_incl_SF_DF_0j.txt   -o Full2016_HIPM_incl_SF_DF_0j.root   -m 125
text2workspace.py Full2016_noHIPM_incl_SF_DF_0j.txt -o Full2016_noHIPM_incl_SF_DF_0j.root -m 125
text2workspace.py Full2017_incl_SF_DF_0j.txt        -o Full2017_incl_SF_DF_0j.root        -m 125
text2workspace.py Full2018_incl_SF_DF_0j.txt        -o Full2018_incl_SF_DF_0j.root        -m 125
text2workspace.py FullRunII_incl_SF_DF_0j.txt       -o FullRunII_incl_SF_DF_0j.root       -m 125

text2workspace.py Full2016_HIPM_incl_SF_DF_1j.txt   -o Full2016_HIPM_incl_SF_DF_1j.root   -m 125
text2workspace.py Full2016_noHIPM_incl_SF_DF_1j.txt -o Full2016_noHIPM_incl_SF_DF_1j.root -m 125
text2workspace.py Full2017_incl_SF_DF_1j.txt        -o Full2017_incl_SF_DF_1j.root        -m 125
text2workspace.py Full2018_incl_SF_DF_1j.txt        -o Full2018_incl_SF_DF_1j.root        -m 125
text2workspace.py FullRunII_incl_SF_DF_1j.txt       -o FullRunII_incl_SF_DF_1j.root       -m 125

text2workspace.py Full2016_HIPM_incl_SF_DF_2j.txt   -o Full2016_HIPM_incl_SF_DF_2j.root   -m 125
text2workspace.py Full2016_noHIPM_incl_SF_DF_2j.txt -o Full2016_noHIPM_incl_SF_DF_2j.root -m 125
text2workspace.py Full2017_incl_SF_DF_2j.txt        -o Full2017_incl_SF_DF_2j.root        -m 125
text2workspace.py Full2018_incl_SF_DF_2j.txt        -o Full2018_incl_SF_DF_2j.root        -m 125
text2workspace.py FullRunII_incl_SF_DF_2j.txt       -o FullRunII_incl_SF_DF_2j.root       -m 125

text2workspace.py Full2016_HIPM_incl_SF_DF.txt   -o Full2016_HIPM_incl_SF_DF.root   -m 125
text2workspace.py Full2016_noHIPM_incl_SF_DF.txt -o Full2016_noHIPM_incl_SF_DF.root -m 125
text2workspace.py Full2017_incl_SF_DF.txt        -o Full2017_incl_SF_DF.root        -m 125
text2workspace.py Full2018_incl_SF_DF.txt        -o Full2018_incl_SF_DF.root        -m 125
text2workspace.py FullRunII_incl_SF_DF.txt       -o FullRunII_incl_SF_DF.root       -m 125	
