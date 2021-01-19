#!/bin/bash
## FIXME this is where the Combine framework is installed
cd /afs/cern.ch/user/m/mlizzo/work/CMSSW_10_2_13
eval `scramv1 runtime -sh`
cd -

## work directory
workDir=$PWD

datacardDir=datacards/AN_config
combinedcardsDir=combinedcards/AN_config
workspaceDir=workspaces/AN_config

cd $workDir

combineCards.py   vbs_mm_lowZ=${workDir}/${datacardDir}/VBS_2j_mm_lowZ/mjj/datacard.txt \
                  vbs_mm_highZ=${workDir}/${datacardDir}/VBS_2j_mm_highZ/mjj/datacard.txt \
                  top_mm=${workDir}/${datacardDir}/top_2j_mm/events/datacard.txt \
                  dy_mm_lowZ=${workDir}/${datacardDir}/DY_2j_mm_lowZ/events/datacard.txt \
                  dy_mm_highZ=${workDir}/${datacardDir}/DY_2j_mm_highZ/events/datacard.txt \
> ${workDir}/${combinedcardsDir}/mjj_mm.txt

echo "nuisance edit drop Fake_m vbs_mm_highZ CMS_fake_e_2017 Up" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop Fake_m vbs_mm_highZ CMS_fake_m_2017 Down" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop Fake_m vbs_mm_highZ CMS_fake_stat_e_2017 Up" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop Fake_m vbs_mm_highZ CMS_fake_stat_m_2017 Up" >> ${combinedcardsDir}/mjj_mm.txt

text2workspace.py ${workDir}/${combinedcardsDir}/mjj_mm.txt -o ${workDir}/${workspaceDir}/mjj_mm.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO 'map=.*/WWewk:r_vbs[1,-10,10]'

