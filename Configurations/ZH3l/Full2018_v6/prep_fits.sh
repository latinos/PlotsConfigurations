#!/bin/bash

pushd /afs/cern.ch/user/d/dittmer/private/Combine/CMSSW_10_2_13/src/
eval `scramv1 runtime -sh`
popd

# Make combined datacards
combineCards.py   SR1j=datacards_ZH3l_2018_v6/zh3l_SR_1j/mtw_fit/datacard.txt.pruned.txt \
                WZCR1j=datacards_ZH3l_2018_v6/zh3l_WZ_CR_1j/events/datacard.txt.pruned.txt \
                  SR2j=datacards_ZH3l_2018_v6/zh3l_SR_2j/mtw_fit/datacard.txt.pruned.txt \
                WZCR2j=datacards_ZH3l_2018_v6/zh3l_WZ_CR_2j/events/datacard.txt.pruned.txt > Zh3l_2018_v6.txt

# Convert datacards to workspaces
text2workspace.py Zh3l_2018_v6.txt         -o Zh3l_2018_v6.root

combineCards.py   SR1j=datacards_ZH3l_2018_v6/zh3l_SR_1j/mTlmetj/datacard.txt.pruned.txt \
                WZCR1j=datacards_ZH3l_2018_v6/zh3l_WZ_CR_1j/events/datacard.txt.pruned.txt \
                  SR2j=datacards_ZH3l_2018_v6/zh3l_SR_2j/mTlmetjj/datacard.txt.pruned.txt \
                WZCR2j=datacards_ZH3l_2018_v6/zh3l_WZ_CR_2j/events/datacard.txt.pruned.txt > Zh3l_2018_v6_mTlmetjj.txt

text2workspace.py Zh3l_2018_v6_mTlmetjj.txt         -o Zh3l_2018_v6_mTlmetjj.root

