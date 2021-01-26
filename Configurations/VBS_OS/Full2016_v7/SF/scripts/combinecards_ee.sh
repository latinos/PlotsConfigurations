#!/bin/bash
## FIXME this is where the Combine framework is installed
cd /afs/cern.ch/user/m/mlizzo/work/CMSSW_10_2_13
eval `scramv1 runtime -sh`
cd -

## FIXME this is your work directory
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

echo "nuisance edit drop Vg vbs_ee_lowZ CMS_PUID_2016" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg vbs_ee_lowZ CMS_btag_cferr1" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg vbs_ee_lowZ CMS_btag_cferr2" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg vbs_ee_lowZ CMS_btag_hf" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg vbs_ee_lowZ CMS_btag_hfstats1_2016" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg vbs_ee_lowZ CMS_btag_hfstats2_2016" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg vbs_ee_lowZ CMS_btag_jes" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg vbs_ee_lowZ CMS_btag_lf" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg vbs_ee_lowZ CMS_btag_lfstats1_2016" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg vbs_ee_lowZ CMS_btag_lfstats2_2016" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg vbs_ee_lowZ CMS_eff_e_2016" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg vbs_ee_lowZ CMS_eff_hwwtrigger_2016" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg vbs_ee_lowZ CMS_eff_m_2016" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg vbs_ee_lowZ QCDscale_VV" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg vbs_ee_lowZ CMS_eff_prefiring_2016 Up" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg vbs_ee_lowZ PS_FSR" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg vbs_ee_lowZ PS_ISR" >> ${combinedcardsDir}/mjj_ee.txt

echo "nuisance edit drop DY_lowZ top_ee CMS_btag_cferr1" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop DY_lowZ top_ee CMS_btag_cferr2" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop DY_lowZ top_ee CMS_btag_hf" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop DY_lowZ top_ee CMS_btag_hfstats1_2016" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop DY_lowZ top_ee CMS_btag_hfstats2_2016" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop DY_lowZ top_ee CMS_btag_jes" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop DY_lowZ top_ee CMS_btag_lf" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop DY_lowZ top_ee CMS_btag_lfstats1_2016" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop DY_lowZ top_ee CMS_btag_lfstats2_2016" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop DY_lowZ top_ee CMS_eff_e_2016" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop DY_lowZ top_ee CMS_eff_hwwtrigger_2016" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop DY_lowZ top_ee CMS_eff_m_2016" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop DY_lowZ top_ee QCDscale_VV" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop DY_lowZ top_ee CMS_eff_prefiring_2016 Up" >> ${combinedcardsDir}/mjj_ee.txt

echo "nuisance edit drop DY_highZ top_ee CMS_btag_cferr1" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop DY_highZ top_ee CMS_btag_cferr2" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop DY_highZ top_ee CMS_btag_hf" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop DY_highZ top_ee CMS_btag_hfstats1_2016" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop DY_highZ top_ee CMS_btag_hfstats2_2016" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop DY_highZ top_ee CMS_btag_jes" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop DY_highZ top_ee CMS_btag_lf" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop DY_highZ top_ee CMS_btag_lfstats1_2016" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop DY_highZ top_ee CMS_btag_lfstats2_2016" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop DY_highZ top_ee CMS_eff_e_2016" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop DY_highZ top_ee CMS_eff_hwwtrigger_2016" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop DY_highZ top_ee CMS_eff_m_2016" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop DY_highZ top_ee QCDscale_VV" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop DY_highZ top_ee CMS_eff_prefiring_2016 Up" >> ${combinedcardsDir}/mjj_ee.txt

echo "nuisance edit drop Vg top_ee CMS_btag_cferr1" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg top_ee CMS_btag_cferr2" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg top_ee CMS_btag_hf" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg top_ee CMS_btag_hfstats1_2016" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg top_ee CMS_btag_hfstats2_2016" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg top_ee CMS_btag_jes" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg top_ee CMS_btag_lf" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg top_ee CMS_btag_lfstats1_2016" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg top_ee CMS_btag_lfstats2_2016" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg top_ee CMS_eff_e_2016" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg top_ee CMS_eff_hwwtrigger_2016" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg top_ee CMS_eff_m_2016" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg top_ee QCDscale_VV" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop Vg top_ee CMS_eff_prefiring_2016 Up" >> ${combinedcardsDir}/mjj_ee.txt

echo "nuisance edit drop VgS_L dy_ee_highZ CMS_btag_cferr1" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop VgS_L dy_ee_highZ CMS_btag_cferr2" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop VgS_L dy_ee_highZ CMS_btag_hfstats1_2016" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop VgS_L dy_ee_highZ CMS_btag_hfstats2_2016" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop VgS_L dy_ee_highZ CMS_btag_jes" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop VgS_L dy_ee_highZ CMS_btag_lf" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop VgS_L dy_ee_highZ CMS_btag_lfstats1_2016" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop VgS_L dy_ee_highZ CMS_btag_lfstats2_2016" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop VgS_L dy_ee_highZ CMS_eff_e_2016" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop VgS_L dy_ee_highZ CMS_eff_hwwtrigger_2016" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop VgS_L dy_ee_highZ CMS_eff_m_2016" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop VgS_L dy_ee_highZ QCDscale_VV" >> ${combinedcardsDir}/mjj_ee.txt
echo "nuisance edit drop VgS_L dy_ee_highZ CMS_eff_prefiring_2016 Up" >> ${combinedcardsDir}/mjj_ee.txt

echo "nuisance edit drop top top_ee CMS_btag_hf" >> ${combinedcardsDir}/mjj_ee.txt

text2workspace.py ${combinedcardsDir}/mjj_ee.txt -o ${workspaceDir}/mjj_ee.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO 'map=.*/WWewk:r_vbs[1,-10,10]'

