#!/bin/bash

## FIXME this is where the Combine framework is installed
cd ~/Combine/CMSSW_7_4_7/src/

eval `scramv1 runtime -sh`
cd -

workdir=`pwd`

outputdir=`pwd`/combine
cd $outputdir

datacardDir=datacards

variable=mllVSmth

# Fix ggH
#cat datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt &> datacards/hww2l2v_13TeV_top_of0j/events/datacard.test.txt
#mv datacards/hww2l2v_13TeV_top_of0j/events/datacard.test.txt datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt

# combine
combineCards.py   em_mp_1j=${workdir}/${datacardDir}/hww2l2v_13TeV_em_mp_1j/${variable}/datacard.txt \
                  me_mp_1j=${workdir}/${datacardDir}/hww2l2v_13TeV_me_mp_1j/${variable}/datacard.txt \
                  em_mp_0j=${workdir}/${datacardDir}/hww2l2v_13TeV_em_mp_0j/${variable}/datacard.txt \
                  me_mp_0j=${workdir}/${datacardDir}/hww2l2v_13TeV_me_mp_0j/${variable}/datacard.txt \
                  em_pm_1j=${workdir}/${datacardDir}/hww2l2v_13TeV_em_pm_1j/${variable}/datacard.txt \
                  me_pm_1j=${workdir}/${datacardDir}/hww2l2v_13TeV_me_pm_1j/${variable}/datacard.txt \
                  em_pm_0j=${workdir}/${datacardDir}/hww2l2v_13TeV_em_pm_0j/${variable}/datacard.txt \
                  me_pm_0j=${workdir}/${datacardDir}/hww2l2v_13TeV_me_pm_0j/${variable}/datacard.txt \
                  of0j_Top=${workdir}/${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt \
                  of1j_Top=${workdir}/${datacardDir}/hww2l2v_13TeV_top_of1j/events/datacard.txt \
                  of0j_DYtt=${workdir}/${datacardDir}/hww2l2v_13TeV_dytt_of0j/events/datacard.txt \
                  of1j_DYtt=${workdir}/${datacardDir}/hww2l2v_13TeV_dytt_of1j/events/datacard.txt \
                  >   Full2016_${variable}.txt
#echo "* autoMCStats 10 1" >> Full2016_${variable}.txt

combineCards.py   em_mp_0j=${workdir}/${datacardDir}/hww2l2v_13TeV_em_mp_0j/${variable}/datacard.txt \
                  me_mp_0j=${workdir}/${datacardDir}/hww2l2v_13TeV_me_mp_0j/${variable}/datacard.txt \
                  em_pm_0j=${workdir}/${datacardDir}/hww2l2v_13TeV_em_pm_0j/${variable}/datacard.txt \
                  me_pm_0j=${workdir}/${datacardDir}/hww2l2v_13TeV_me_pm_0j/${variable}/datacard.txt \
                  of0j_Top=${workdir}/${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt \
                  of0j_DYtt=${workdir}/${datacardDir}/hww2l2v_13TeV_dytt_of0j/events/datacard.txt \
                  >   Full2016_0jet_${variable}.txt
#echo "* autoMCStats 10 1" >> Full2016_0jet_${variable}.txt

combineCards.py   em_mp_1j=${workdir}/${datacardDir}/hww2l2v_13TeV_em_mp_1j/${variable}/datacard.txt \
                  me_mp_1j=${workdir}/${datacardDir}/hww2l2v_13TeV_me_mp_1j/${variable}/datacard.txt \
                  em_pm_1j=${workdir}/${datacardDir}/hww2l2v_13TeV_em_pm_1j/${variable}/datacard.txt \
                  me_pm_1j=${workdir}/${datacardDir}/hww2l2v_13TeV_me_pm_1j/${variable}/datacard.txt \
                  of1j_Top=${workdir}/${datacardDir}/hww2l2v_13TeV_top_of1j/events/datacard.txt \
                  of1j_DYtt=${workdir}/${datacardDir}/hww2l2v_13TeV_dytt_of1j/events/datacard.txt \
                  >   Full2016_1jet_${variable}.txt
#echo "* autoMCStats 10 1" >> Full2016_1jet_${variable}.txt

