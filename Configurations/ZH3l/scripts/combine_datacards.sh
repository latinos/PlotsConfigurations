#!/bin/bash
      
combineCards.py ZH3l_SR_1j_fit=/afs/cern.ch/work/s/srudrabh/ZH3l/CMSSW_10_2_0/src/PlotsConfigurations/Configurations/ZH3l/Full2018_v7_Full/datacards_ZH3l_2018_v7_patch/zh3l_SR_1j/mTlmetj/datacard.txt \
                ZH3l_SR_2j_fit=/afs/cern.ch/work/s/srudrabh/ZH3l/CMSSW_10_2_0/src/PlotsConfigurations/Configurations/ZH3l/Full2018_v7_Full/datacards_ZH3l_2018_v7_patch/zh3l_SR_2j/mTlmetjj/datacard.txt \
                ZH3l_CR_1j_fit_WZ=/afs/cern.ch/work/s/srudrabh/ZH3l/CMSSW_10_2_0/src/PlotsConfigurations/Configurations/ZH3l/Full2018_v7_Full/datacards_ZH3l_2018_v7_patch/zh3l_WZ_CR_1j/events/datacard.txt \
               ZH3l_CR_2j_fit_WZ=/afs/cern.ch/work/s/srudrabh/ZH3l/CMSSW_10_2_0/src/PlotsConfigurations/Configurations/ZH3l/Full2018_v7_Full/datacards_ZH3l_2018_v7_patch/zh3l_WZ_CR_2j/events/datacard.txt>12j_CR_SR_mTlmetj_v7.txt\




#text2workspace.py 12j_CR_SR_mTlmetj_v7.txt -o 12j_CR_SR_mTlmetj_v7.root \
