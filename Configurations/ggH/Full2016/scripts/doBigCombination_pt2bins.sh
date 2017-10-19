#!/bin/bash

## FIXME this is where the Combine framework is installed
cd ~/Combine/CMSSW_7_4_7/src/

eval `scramv1 runtime -sh`
cd -

## work directory
workdir=`pwd`

## output directory for storing the combined datacards
outputdir=`pwd`/combine

if [ ! -d "$outputdir" ]; then
  mkdir $outputdir
fi
cd $outputdir

## input datacards directory
datacardDir=datacards

## variable used for the signal regions fit
variable_pt2lt20=mllVSmth_pt2lt20_optim
variable_pt2ge20=mllVSmth_pt2ge20_optim

## combine the datacards

combineCards.py   em_mp_1j_pt2lt20=${workdir}/${datacardDir}/hww2l2v_13TeV_em_mp_1j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  me_mp_1j_pt2lt20=${workdir}/${datacardDir}/hww2l2v_13TeV_me_mp_1j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  em_mp_0j_pt2lt20=${workdir}/${datacardDir}/hww2l2v_13TeV_em_mp_0j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  me_mp_0j_pt2lt20=${workdir}/${datacardDir}/hww2l2v_13TeV_me_mp_0j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  em_pm_1j_pt2lt20=${workdir}/${datacardDir}/hww2l2v_13TeV_em_pm_1j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  me_pm_1j_pt2lt20=${workdir}/${datacardDir}/hww2l2v_13TeV_me_pm_1j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  em_pm_0j_pt2lt20=${workdir}/${datacardDir}/hww2l2v_13TeV_em_pm_0j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  me_pm_0j_pt2lt20=${workdir}/${datacardDir}/hww2l2v_13TeV_me_pm_0j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  em_mp_1j_pt2ge20=${workdir}/${datacardDir}/hww2l2v_13TeV_em_mp_1j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  me_mp_1j_pt2ge20=${workdir}/${datacardDir}/hww2l2v_13TeV_me_mp_1j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  em_mp_0j_pt2ge20=${workdir}/${datacardDir}/hww2l2v_13TeV_em_mp_0j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  me_mp_0j_pt2ge20=${workdir}/${datacardDir}/hww2l2v_13TeV_me_mp_0j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  em_pm_1j_pt2ge20=${workdir}/${datacardDir}/hww2l2v_13TeV_em_pm_1j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  me_pm_1j_pt2ge20=${workdir}/${datacardDir}/hww2l2v_13TeV_me_pm_1j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  em_pm_0j_pt2ge20=${workdir}/${datacardDir}/hww2l2v_13TeV_em_pm_0j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  me_pm_0j_pt2ge20=${workdir}/${datacardDir}/hww2l2v_13TeV_me_pm_0j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  of0j_Top=${workdir}/${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt \
                  of1j_Top=${workdir}/${datacardDir}/hww2l2v_13TeV_top_of1j/events/datacard.txt \
                  of0j_DYtt=${workdir}/${datacardDir}/hww2l2v_13TeV_dytt_of0j/events/datacard.txt \
                  of1j_DYtt=${workdir}/${datacardDir}/hww2l2v_13TeV_dytt_of1j/events/datacard.txt \
                  >   Full2016.txt
echo "* autoMCStats 10 1" >> Full2016.txt

combineCards.py   em_mp_0j_pt2lt20=${workdir}/${datacardDir}/hww2l2v_13TeV_em_mp_0j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  me_mp_0j_pt2lt20=${workdir}/${datacardDir}/hww2l2v_13TeV_me_mp_0j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  em_pm_0j_pt2lt20=${workdir}/${datacardDir}/hww2l2v_13TeV_em_pm_0j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  me_pm_0j_pt2lt20=${workdir}/${datacardDir}/hww2l2v_13TeV_me_pm_0j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  em_mp_0j_pt2ge20=${workdir}/${datacardDir}/hww2l2v_13TeV_em_mp_0j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  me_mp_0j_pt2ge20=${workdir}/${datacardDir}/hww2l2v_13TeV_me_mp_0j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  em_pm_0j_pt2ge20=${workdir}/${datacardDir}/hww2l2v_13TeV_em_pm_0j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  me_pm_0j_pt2ge20=${workdir}/${datacardDir}/hww2l2v_13TeV_me_pm_0j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  of0j_Top=${workdir}/${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt \
                  of0j_DYtt=${workdir}/${datacardDir}/hww2l2v_13TeV_dytt_of0j/events/datacard.txt \
                  >   Full2016_0jet.txt
echo "* autoMCStats 10 1" >> Full2016_0jet.txt

combineCards.py   em_mp_1j_pt2lt20=${workdir}/${datacardDir}/hww2l2v_13TeV_em_mp_1j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  me_mp_1j_pt2lt20=${workdir}/${datacardDir}/hww2l2v_13TeV_me_mp_1j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  em_pm_1j_pt2lt20=${workdir}/${datacardDir}/hww2l2v_13TeV_em_pm_1j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  me_pm_1j_pt2lt20=${workdir}/${datacardDir}/hww2l2v_13TeV_me_pm_1j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  em_mp_1j_pt2ge20=${workdir}/${datacardDir}/hww2l2v_13TeV_em_mp_1j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  me_mp_1j_pt2ge20=${workdir}/${datacardDir}/hww2l2v_13TeV_me_mp_1j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  em_pm_1j_pt2ge20=${workdir}/${datacardDir}/hww2l2v_13TeV_em_pm_1j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  me_pm_1j_pt2ge20=${workdir}/${datacardDir}/hww2l2v_13TeV_me_pm_1j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  of1j_Top=${workdir}/${datacardDir}/hww2l2v_13TeV_top_of1j/events/datacard.txt \
                  of1j_DYtt=${workdir}/${datacardDir}/hww2l2v_13TeV_dytt_of1j/events/datacard.txt \
                  >   Full2016_1jet.txt
echo "* autoMCStats 10 1" >> Full2016_1jet.txt

