#!/bin/bash
## FIXME this is where the Combine framework is installed
cd /afs/cern.ch/user/m/mlizzo/work/CMSSW_10_2_13
eval `scramv1 runtime -sh`
cd -

## work directory
workDir=/afs/cern.ch/user/m/mlizzo/work/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/VBS_OS/Full2017_v6/FitDir 

datacardDir=datacards
combinedcardsDir=combinedcards
workspaceDir=workspaces

cd $workDir

combineCards.py   vbs_lowZ=${workDir}/${datacardDir}/VBS_2j_em_me_lowZ/mjj/datacard.txt \
                  vbs_highZ=${workDir}/${datacardDir}/VBS_2j_em_me_highZ/mjj/datacard.txt \
                  vbs_SF_lowZ=${workDir}/${datacardDir}/VBS_2j_ee_mm_lowZ/mjj/datacard.txt \
                  vbs_SF_highZ=${workDir}/${datacardDir}/VBS_2j_ee_mm_highZ/mjj/datacard.txt \
                  top=${workDir}/${datacardDir}/top_2j_em_me/events/datacard.txt \
                  top_SF=${workDir}/${datacardDir}/top_2j_ee_mm/events/datacard.txt \
                  dy=${workDir}/${datacardDir}/DY_2j/events/datacard.txt \
> ${workDir}/${combinedcardsDir}/mjj.txt

echo "nuisance edit drop Fake_em vbs_SF_lowZ CMS_fake_e_2017 Up" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Fake_em vbs_SF_lowZ CMS_fake_m_2017 Down" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Fake_em vbs_SF_lowZ CMS_fake_stat_e_2017 Up" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Fake_em vbs_SF_lowZ CMS_fake_stat_m_2017 Up" >> ${combinedcardsDir}/mjj.txt

echo "nuisance edit drop Fake_em vbs_SF_highZ CMS_fake_e_2017 Up" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Fake_em vbs_SF_highZ CMS_fake_m_2017 Down" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Fake_em vbs_SF_highZ CMS_fake_stat_e_2017 Up" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Fake_em vbs_SF_highZ CMS_fake_stat_m_2017 Up" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop DY vbs_SF_highZ CMS_btag_cferr1" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop DY vbs_SF_highZ CMS_btag_cferr2" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop DY vbs_SF_highZ CMS_btag_hf" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop DY vbs_SF_highZ CMS_btag_hfstats1_2017" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop DY vbs_SF_highZ CMS_btag_hfstats2_2017" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop DY vbs_SF_highZ CMS_btag_jes" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop DY vbs_SF_highZ CMS_btag_lf" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop DY vbs_SF_highZ CMS_btag_lfstats1_2017" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop DY vbs_SF_highZ CMS_btag_lfstats2_2017" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop DY vbs_SF_highZ CMS_eff_e_2017" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop DY vbs_SF_highZ CMS_eff_hwwtrigger_2017" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop DY vbs_SF_highZ CMS_eff_m_2017" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop DY vbs_SF_highZ QCDscale_VV" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop DY vbs_SF_highZ CMS_eff_prefiring_2017 Up" >> ${combinedcardsDir}/mjj.txt

echo "nuisance edit drop Vg top CMS_btag_cferr1" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top CMS_btag_cferr2" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top CMS_btag_hf" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top CMS_btag_hfstats1_2017" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top CMS_btag_hfstats2_2017" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top CMS_btag_jes" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top CMS_btag_lf" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top CMS_btag_lfstats1_2017" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top CMS_btag_lfstats2_2017" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top CMS_eff_e_2017" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top CMS_eff_hwwtrigger_2017" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top CMS_eff_m_2017" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top QCDscale_VV" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top CMS_eff_prefiring_2017 Up" >> ${combinedcardsDir}/mjj.txt

echo "nuisance edit drop Fake_em dy CMS_fake_e_2017 Up" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Fake_em dy CMS_fake_m_2017 Down" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Fake_em dy CMS_fake_stat_e_2017 Up" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Fake_em dy CMS_fake_stat_m_2017 Up" >> ${combinedcardsDir}/mjj.txt

text2workspace.py ${workDir}/${combinedcardsDir}/mjj.txt -o ${workDir}/${workspaceDir}/mjj.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO 'map=.*/WWewk:r_vbs[1,-10,10]'
