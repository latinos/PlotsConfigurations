#!/bin/bash

pushd $COMBINE_SOURCE_DIR #Set to your combine home directory, e.g. the CMSSW/src directory where combine lives
eval `scramv1 runtime -sh`
popd

# Make combined datacards
combineCards.py   SR1j=datacards_ZH3l_2016_v6_newWP/zh3l_SR_1j/mtw_fit/datacard.txt.pruned.txt \
                WZCR1j=datacards_ZH3l_2016_v6_newWP/zh3l_WZ_CR_1j/events/datacard.txt.pruned.txt \
                  SR2j=datacards_ZH3l_2016_v6_newWP/zh3l_SR_2j/mtw_fit/datacard.txt.pruned.txt \
                WZCR2j=datacards_ZH3l_2016_v6_newWP/zh3l_WZ_CR_2j/events/datacard.txt.pruned.txt > Zh3l_2016_v6_newWP.txt

# Convert datacards to workspaces
text2workspace.py Zh3l_2016_v6_newWP.txt -o Zh3l_2016_v6_newWP.root

combineCards.py   SR1j=datacards_ZH3l_2016_v6_newWP/zh3l_SR_1j/mTlmetj/datacard.txt.pruned.txt \
                WZCR1j=datacards_ZH3l_2016_v6_newWP/zh3l_WZ_CR_1j/events/datacard.txt.pruned.txt \
                  SR2j=datacards_ZH3l_2016_v6_newWP/zh3l_SR_2j/mTlmetjj/datacard.txt.pruned.txt \
                WZCR2j=datacards_ZH3l_2016_v6_newWP/zh3l_WZ_CR_2j/events/datacard.txt.pruned.txt > Zh3l_2016_v6_mTlmetjj.txt

# Convert datacards to workspaces
text2workspace.py Zh3l_2016_v6_mTlmetjj.txt -o Zh3l_2016_v6_mTlmetjj.root
