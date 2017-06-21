#!/bin/bash

#cd ~/Framework/Combine/CMSSW_7_4_7/src/
cd ~/Combine/CMSSW_7_4_7/src/

eval `scramv1 runtime -sh`
cd -

# combine
combineCards.py   em_mp_1j=datacards/hww2l2v_13TeV_em_mp_1j/mllVSmth/datacard.txt \
                  me_mp_1j=datacards/hww2l2v_13TeV_me_mp_1j/mllVSmth/datacard.txt \
                  em_mp_0j=datacards/hww2l2v_13TeV_em_mp_0j/mllVSmth/datacard.txt \
                  me_mp_0j=datacards/hww2l2v_13TeV_me_mp_0j/mllVSmth/datacard.txt \
                  em_pm_1j=datacards/hww2l2v_13TeV_em_pm_1j/mllVSmth/datacard.txt \
                  me_pm_1j=datacards/hww2l2v_13TeV_me_pm_1j/mllVSmth/datacard.txt \
                  em_pm_0j=datacards/hww2l2v_13TeV_em_pm_0j/mllVSmth/datacard.txt \
                  me_pm_0j=datacards/hww2l2v_13TeV_me_pm_0j/mllVSmth/datacard.txt \
                  of0j_Top=datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt \
                  of1j_Top=datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt \
                  of0j_DYtt=datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt \
                  of1j_DYtt=datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt \
                  >   Full2016.txt
