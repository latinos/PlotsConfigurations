#!/bin/bash
## FIXME this is where the Combine framework is installed
cd /afs/cern.ch/user/m/mlizzo/work/CMSSW_10_2_13
eval `scramv1 runtime -sh`
cd -

## work directory
workDir=/afs/cern.ch/user/m/mlizzo/work/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/VBS_OS/Full2016_v6/FitDir 

datacardDir=datacards
combinedcardsDir=combinedcards
workspaceDir=workspaces

cd $workDir

combineCards.py   vbs_lowZ=${workDir}/${datacardDir}/VBS_low_Zeppll_2j/mjj_vs_mTi/datacard.txt \
                  vbs_highZ=${workDir}/${datacardDir}/VBS_high_Zeppll_2j/mjj_vs_mTi/datacard.txt \
                  top=${workDir}/${datacardDir}/top_2j/events/datacard.txt \
                  dytt=${workDir}/${datacardDir}/DYtt_2j/events/datacard.txt \
> ${workDir}/${combinedcardsDir}/mjj_vs_mTi.txt

text2workspace.py ${workDir}/${combinedcardsDir}/mjj_vs_mTi.txt -o ${workDir}/${workspaceDir}/Z_mjj_vs_mTi.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO 'map=.*/WWewk:r_vbs[1,-10,10]'

