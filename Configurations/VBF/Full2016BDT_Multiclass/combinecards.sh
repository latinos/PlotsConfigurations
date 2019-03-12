#!/bin/bash

## FIXME this is where the Combine framework is installed
cd /afs/cern.ch/user/m/mlizzo/work/CMSSW_8_1_0/src
eval `scramv1 runtime -sh`
cd -

## work directory
workdir=/afs/cern.ch/user/m/mlizzo/work/new_framework_2017/CMSSW_9_4_9/src/PlotsConfigurations/Configurations/VBF/Full2016BDT_equal_training_events/

datacardDir=datacards14Feb_eq_training_noEmptyBins_lnN

cd $workdir

## combine the datacards

combineCards.py   vbf_lowmjj=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j_vbf_lowmjj/class013_6bin/datacard.txt \
		  vbf_highmjj=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j_vbf_highmjj/class013_6bin/datacard.txt \
                  DY=${workdir}/${datacardDir}/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt \
                  top=${workdir}/${datacardDir}/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt \
> of2j_vbf_class013_6bin_combined_14Feb.txt

text2workspace.py of2j_vbf_class013_6bin_combined_14Feb.txt -o vbf_class013_6bin_14Feb.root  -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO 'map=.*/qqH_hww:r_vbf[1,-10,10]' --PO 'map=.*/ggH_hww:r_ggH[1,-10,10]'
