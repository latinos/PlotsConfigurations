#!/bin/bash
## FIXME this is where the Combine framework is installed
cd /afs/cern.ch/user/m/mlizzo/work/CMSSW_10_2_13
eval `scramv1 runtime -sh`
cd -

## FIXME this is your work directory
#workDir=/afs/cern.ch/user/m/mlizzo/work/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/VBS_OS/Full2018_v7/SF 
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

echo "nuisance edit drop Vg vbs_mm_lowZ CMS_btag_cferr1" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop Vg vbs_mm_lowZ CMS_btag_cferr2" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop Vg vbs_mm_lowZ CMS_btag_hf" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop Vg vbs_mm_lowZ CMS_btag_hfstats1_2018" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop Vg vbs_mm_lowZ CMS_btag_hfstats2_2018" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop Vg vbs_mm_lowZ CMS_btag_jes" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop Vg vbs_mm_lowZ CMS_btag_lf" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop Vg vbs_mm_lowZ CMS_btag_lfstats1_2018" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop Vg vbs_mm_lowZ CMS_btag_lfstats2_2018" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop Vg vbs_mm_lowZ CMS_eff_e_2018" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop Vg vbs_mm_lowZ CMS_eff_hwwtrigger_2018" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop Vg vbs_mm_lowZ CMS_eff_m_2018" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop Vg vbs_mm_lowZ PS_FSR" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop Vg vbs_mm_lowZ PS_ISR" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop Vg vbs_mm_lowZ QCDscale_VV" >> ${combinedcardsDir}/mjj_mm.txt

echo "nuisance edit drop VgS_H vbs_mm_lowZ QCDscale_VV" >> ${combinedcardsDir}/mjj_mm.txt

echo "nuisance edit drop Vg vbs_mm_lowZ QCDscale_VV" >> ${combinedcardsDir}/mjj_mm.txt

echo "nuisance edit drop Vg top_mm CMS_btag_cferr1" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop Vg top_mm CMS_btag_cferr2" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop Vg top_mm CMS_btag_hf" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop Vg top_mm CMS_btag_hfstats1_2018" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop Vg top_mm CMS_btag_hfstats2_2018" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop Vg top_mm CMS_btag_jes" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop Vg top_mm CMS_btag_lf" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop Vg top_mm CMS_btag_lfstats1_2018" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop Vg top_mm CMS_btag_lfstats2_2018" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop Vg top_mm CMS_eff_e_2018" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop Vg top_mm CMS_eff_hwwtrigger_2018" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop Vg top_mm CMS_eff_m_2018" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop Vg top_mm QCDscale_VV" >> ${combinedcardsDir}/mjj_mm.txt

echo "nuisance edit drop VgS_L top_mm CMS_btag_cferr1" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop VgS_L top_mm CMS_btag_cferr2" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop VgS_L top_mm CMS_btag_hf" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop VgS_L top_mm CMS_btag_hfstats1_2018" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop VgS_L top_mm CMS_btag_hfstats2_2018" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop VgS_L top_mm CMS_btag_jes" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop VgS_L top_mm CMS_btag_lf" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop VgS_L top_mm CMS_btag_lfstats1_2018" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop VgS_L top_mm CMS_btag_lfstats2_2018" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop VgS_L top_mm CMS_eff_e_2018" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop VgS_L top_mm CMS_eff_hwwtrigger_2018" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop VgS_L top_mm CMS_eff_m_2018" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop VgS_L top_mm QCDscale_VV" >> ${combinedcardsDir}/mjj_mm.txt

echo "nuisance edit drop VgS_L dy_mm_lowZ CMS_btag_cferr1" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop VgS_L dy_mm_lowZ CMS_btag_cferr2" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop VgS_L dy_mm_lowZ CMS_btag_hf" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop VgS_L dy_mm_lowZ CMS_btag_hfstats1_2018" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop VgS_L dy_mm_lowZ CMS_btag_hfstats2_2018" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop VgS_L dy_mm_lowZ CMS_btag_jes" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop VgS_L dy_mm_lowZ CMS_btag_lf" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop VgS_L dy_mm_lowZ CMS_btag_lfstats1_2018" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop VgS_L dy_mm_lowZ CMS_btag_lfstats2_2018" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop VgS_L dy_mm_lowZ CMS_eff_e_2018" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop VgS_L dy_mm_lowZ CMS_eff_hwwtrigger_2018" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop VgS_L dy_mm_lowZ CMS_eff_m_2018" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop VgS_L dy_mm_lowZ PS_FSR" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop VgS_L dy_mm_lowZ PS_ISR" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop VgS_L dy_mm_lowZ QCDscale_VV" >> ${combinedcardsDir}/mjj_mm.txt

echo "nuisance edit drop Fake_m dy_mm_highZ CMS_fake_e_2018 Up" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop Fake_m dy_mm_highZ CMS_fake_m_2018 Up" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop Fake_m dy_mm_highZ CMS_fake_stat_e_2018 Up" >> ${combinedcardsDir}/mjj_mm.txt
echo "nuisance edit drop Fake_m dy_mm_highZ CMS_fake_stat_m_2018 Up" >> ${combinedcardsDir}/mjj_mm.txt

text2workspace.py ${combinedcardsDir}/mjj_mm.txt -o ${workspaceDir}/mjj_mm.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO 'map=.*/WWewk:r_vbs[1,-10,10]'

