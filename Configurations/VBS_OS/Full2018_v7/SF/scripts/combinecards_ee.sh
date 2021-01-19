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

combineCards.py   vbs_ee_lowZ=${workDir}/${datacardDir}/VBS_2j_ee_lowZ/mjj/datacard.txt \
                  vbs_ee_highZ=${workDir}/${datacardDir}/VBS_2j_ee_highZ/mjj/datacard.txt \
                  top_ee=${workDir}/${datacardDir}/top_2j_ee/events/datacard.txt \
                  dy_ee_lowZ=${workDir}/${datacardDir}/DY_2j_ee_lowZ/events/datacard.txt \
                  dy_ee_highZ=${workDir}/${datacardDir}/DY_2j_ee_highZ/events/datacard.txt \
> ${workDir}/${combinedcardsDir}/mjj_ee.txt

#echo "nuisance edit drop Fake_e vbs_ee_lowZ CMS_fake_e_2018 Up" >> ${combinedcardsDir}/mjj_ee.txt
#echo "nuisance edit drop Fake_e vbs_ee_lowZ CMS_fake_m_2018 Up" >> ${combinedcardsDir}/mjj_ee.txt
#echo "nuisance edit drop Fake_e vbs_ee_lowZ CMS_fake_stat_e_2018 Up" >> ${combinedcardsDir}/mjj_ee.txt
#echo "nuisance edit drop Fake_e vbs_ee_lowZ CMS_fake_stat_m_2018 Up" >> ${combinedcardsDir}/mjj_ee.txt

echo "nuisance edit drop Vg top_ee CMS_btag_cferr1" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg top_ee CMS_btag_cferr2" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg top_ee CMS_btag_hf" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg top_ee CMS_btag_hfstats1_2018" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg top_ee CMS_btag_hfstats2_2018" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg top_ee CMS_btag_jes" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg top_ee CMS_btag_lf" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg top_ee CMS_btag_lfstats1_2018" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg top_ee CMS_btag_lfstats2_2018" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg top_ee CMS_eff_e_2018" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg top_ee CMS_eff_hwwtrigger_2018" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg top_ee CMS_eff_m_2018" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg top_ee QCDscale_VV" >> ${combinedcardsDir}/mjj_ee.txt

echo "nuisance edit drop VgS_L top_ee CMS_btag_cferr1" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop VgS_L top_ee CMS_btag_cferr2" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop VgS_L top_ee CMS_btag_hf" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop VgS_L top_ee CMS_btag_hfstats1_2018" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop VgS_L top_ee CMS_btag_hfstats2_2018" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop VgS_L top_ee CMS_btag_jes" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop VgS_L top_ee CMS_btag_lf" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop VgS_L top_ee CMS_btag_lfstats1_2018" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop VgS_L top_ee CMS_btag_lfstats2_2018" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop VgS_L top_ee CMS_eff_e_2018" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop VgS_L top_ee CMS_eff_hwwtrigger_2018" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop VgS_L top_ee CMS_eff_m_2018" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop VgS_L top_ee PS_FSR" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop VgS_L top_ee PS_ISR" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop VgS_L top_ee QCDscale_VV" >> ${combinedcardsDir}/mjj_ee.txt

text2workspace.py ${combinedcardsDir}/mjj_ee.txt -o ${workspaceDir}/mjj_ee.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO 'map=.*/WWewk:r_vbs[1,-10,10]'

