#!/bin/bash

## FIXME this is where the Combine framework is installed
cd /afs/cern.ch/work/r/rceccare/VBF/CMSSW_10_2_13
eval `scramv1 runtime -sh`
cd -

## work directory
workdir=/afs/cern.ch/work/r/rceccare/VBF/CMSSW_10_2_15_patch2/src/PlotsConfigurations/Configurations/VBF/Keras_2016

datacardDir=datacards

cd $workdir


combineCards.py   vbf_cut1=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j_DNN_vbf/class0/datacard.txt \
                  vbf_cut2=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j_DNN_top/class1/datacard.txt \
                  vbf_cut3=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j_DNN_ww/class2/datacard.txt \
                  vbf_cut4=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j_DNN_ggh/class3/datacard.txt \
                  DY=${workdir}/${datacardDir}/hww2l2v_13TeV_dytt_of2j/events/datacard.txt \
                  top=${workdir}/${datacardDir}/hww2l2v_13TeV_top_of2j/events/datacard.txt \
> class0_06_09_multicut.txt

text2workspace.py class0_06_09_multicut.txt -o class0_06_09_multicut.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO 'map=.*/qqH_hww:r_vbf[1,-10,10]' --PO 'map=.*/ggH_hww:r_ggH[1,-10,10]'


combineCards.py   vbf=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j_vbf/class0/datacard.txt \
                  DY=${workdir}/${datacardDir}/hww2l2v_13TeV_dytt_of2j/events/datacard.txt \
                  top=${workdir}/${datacardDir}/hww2l2v_13TeV_top_of2j/events/datacard.txt \
> class0_06_09.txt

text2workspace.py class0_06_09.txt -o class0_06_09.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO 'map=.*/qqH_hww:r_vbf[1,-10,10]' --PO 'map=.*/ggH_hww:r_ggH[1,-10,10]'

