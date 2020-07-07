#!/bin/bash
## FIXME this is where the Combine framework is installed
cd /afs/cern.ch/user/m/mlizzo/work/CMSSW_10_2_13
eval `scramv1 runtime -sh`
cd -

## FIXME this is your work directory
workDir=/afs/cern.ch/user/m/mlizzo/work/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/VBS_OS/Full2018_v6/nAODv6_v6 

datacardDir=datacards/Jun_24_ptll50
combinedcardsDir=combinedcards/Jun_24_ptll50
workspaceDir=workspaces/Jun_24_ptll50

cd $workDir

combineCards.py   vbs_lowZ=${workDir}/${datacardDir}/VBS_2j_em_me_lowZ/mjj/datacard.txt \
                  vbs_highZ=${workDir}/${datacardDir}/VBS_2j_em_me_highZ/mjj/datacard.txt \
                  top=${workDir}/${datacardDir}/top_2j_em_me/events/datacard.txt \
                  dy=${workDir}/${datacardDir}/DY_2j_em_me/events/datacard.txt \
                  vbs_ee_lowZ=${workDir}/${datacardDir}/VBS_2j_ee_lowZ/mjj/datacard.txt \
                  vbs_ee_highZ=${workDir}/${datacardDir}/VBS_2j_ee_highZ/mjj/datacard.txt \
                  vbs_mm_lowZ=${workDir}/${datacardDir}/VBS_2j_mm_lowZ/mjj/datacard.txt \
                  vbs_mm_highZ=${workDir}/${datacardDir}/VBS_2j_mm_highZ/mjj/datacard.txt \
                  top_ee=${workDir}/${datacardDir}/top_2j_ee/events/datacard.txt \
                  top_mm=${workDir}/${datacardDir}/top_2j_mm/events/datacard.txt \
                  dy_ee=${workDir}/${datacardDir}/DY_2j_ee/events/datacard.txt \
                  dy_mm=${workDir}/${datacardDir}/DY_2j_mm/events/datacard.txt \
> ${workDir}/${combinedcardsDir}/mjj.txt


echo "nuisance edit drop Vg top CMS_btag_cferr1" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top CMS_btag_cferr2" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top CMS_btag_hf" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top CMS_btag_hfstats1_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top CMS_btag_hfstats2_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top CMS_btag_jes" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top CMS_btag_lf" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top CMS_btag_lfstats1_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top CMS_btag_lfstats2_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top CMS_eff_e_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top CMS_eff_hwwtrigger_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top CMS_eff_m_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top QCDscale_VV" >> ${combinedcardsDir}/mjj.txt

echo "nuisance edit drop Vg dy CMS_btag_cferr1" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg dy CMS_btag_cferr2" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg dy CMS_btag_hf" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg dy CMS_btag_hfstats1_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg dy CMS_btag_hfstats2_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg dy CMS_btag_jes" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg dy CMS_btag_lf" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg dy CMS_btag_lfstats1_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg dy CMS_btag_lfstats2_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg dy CMS_eff_e_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg dy CMS_eff_hwwtrigger_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg dy CMS_eff_m_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg dy QCDscale_VV" >> ${combinedcardsDir}/mjj.txt

echo "nuisance edit drop Vg top_ee CMS_btag_cferr1" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_ee CMS_btag_cferr2" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_ee CMS_btag_hf" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_ee CMS_btag_hfstats1_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_ee CMS_btag_hfstats2_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_ee CMS_btag_jes" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_ee CMS_btag_lf" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_ee CMS_btag_lfstats1_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_ee CMS_btag_lfstats2_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_ee CMS_eff_e_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_ee CMS_eff_hwwtrigger_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_ee CMS_eff_m_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_ee QCDscale_VV" >> ${combinedcardsDir}/mjj.txt

echo "nuisance edit drop VgS_L top_ee CMS_btag_cferr1" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop VgS_L top_ee CMS_btag_cferr2" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop VgS_L top_ee CMS_btag_hf" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop VgS_L top_ee CMS_btag_hfstats1_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop VgS_L top_ee CMS_btag_hfstats2_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop VgS_L top_ee CMS_btag_jes" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop VgS_L top_ee CMS_btag_lf" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop VgS_L top_ee CMS_btag_lfstats1_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop VgS_L top_ee CMS_btag_lfstats2_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop VgS_L top_ee CMS_eff_e_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop VgS_L top_ee CMS_eff_hwwtrigger_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop VgS_L top_ee CMS_eff_m_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop VgS_L top_ee QCDscale_VV" >> ${combinedcardsDir}/mjj.txt

echo "nuisance edit drop Vg top_mm CMS_btag_cferr1" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_mm CMS_btag_cferr2" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_mm CMS_btag_hf" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_mm CMS_btag_hfstats1_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_mm CMS_btag_hfstats2_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_mm CMS_btag_jes" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_mm CMS_btag_lf" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_mm CMS_btag_lfstats1_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_mm CMS_btag_lfstats2_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_mm CMS_eff_e_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_mm CMS_eff_hwwtrigger_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_mm CMS_eff_m_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_mm QCDscale_VV" >> ${combinedcardsDir}/mjj.txt

echo "nuisance edit drop VgS_L top_mm CMS_btag_cferr1" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop VgS_L top_mm CMS_btag_cferr2" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop VgS_L top_mm CMS_btag_hf" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop VgS_L top_mm CMS_btag_hfstats1_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop VgS_L top_mm CMS_btag_hfstats2_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop VgS_L top_mm CMS_btag_jes" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop VgS_L top_mm CMS_btag_lf" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop VgS_L top_mm CMS_btag_lfstats1_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop VgS_L top_mm CMS_btag_lfstats2_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop VgS_L top_mm CMS_eff_e_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop VgS_L top_mm CMS_eff_hwwtrigger_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop VgS_L top_mm CMS_eff_m_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop VgS_L top_mm QCDscale_VV" >> ${combinedcardsDir}/mjj.txt

echo "nuisance edit drop Vg vbs_mm_lowZ QCDscale_VV" >> ${combinedcardsDir}/mjj.txt

echo "nuisance edit drop VgS_L dy_mm CMS_btag_cferr1" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop VgS_L dy_mm CMS_btag_cferr2" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop VgS_L dy_mm CMS_btag_hf" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop VgS_L dy_mm CMS_btag_hfstats1_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop VgS_L dy_mm CMS_btag_hfstats2_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop VgS_L dy_mm CMS_btag_jes" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop VgS_L dy_mm CMS_btag_lf" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop VgS_L dy_mm CMS_btag_lfstats1_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop VgS_L dy_mm CMS_btag_lfstats2_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop VgS_L dy_mm CMS_eff_e_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop VgS_L dy_mm CMS_eff_hwwtrigger_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop VgS_L dy_mm CMS_eff_m_2018" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop VgS_L dy_mm QCDscale_VV" >> ${combinedcardsDir}/mjj.txt

echo "nuisance edit drop Fake_m dy_mm CMS_fake_e_2018 Up" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Fake_m dy_mm CMS_fake_m_2018 Up" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Fake_m dy_mm CMS_fake_stat_e_2018 Up" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Fake_m dy_mm CMS_fake_stat_m_2018 Up" >> ${combinedcardsDir}/mjj.txt

text2workspace.py ${combinedcardsDir}/mjj.txt -o ${workspaceDir}/mjj.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO 'map=.*/WWewk:r_vbs[1,-10,10]'

