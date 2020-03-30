#!/bin/bash
## FIXME this is where the Combine framework is installed
cd /afs/cern.ch/user/m/mlizzo/work/CMSSW_10_2_13
eval `scramv1 runtime -sh`
cd -

## work directory
workDir=/afs/cern.ch/user/m/mlizzo/work/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/VBS_OS/Full2017_v6 

datacardDir=datacards
combinedcardsDir=combinedcards
workspaceDir=workspaces

cd $workDir


combineCards.py   vbs_low=${workDir}/${datacardDir}/VBS_low_Zeppll_2j/mjj_vs_mTi/datacard.txt \
                  vbs_high=${workDir}/${datacardDir}/VBS_high_Zeppll_2j/mjj_vs_mTi/datacard.txt \
                  top=${workDir}/${datacardDir}/top_2j/events/datacard.txt \
                  dytt=${workDir}/${datacardDir}/DYtt_2j/events/datacard.txt \
> ${workDir}/${combinedcardsDir}/mjj_vs_mTi.txt

echo "nuisance edit drop Vg top CMS_btag_cferr1" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg top CMS_btag_cferr2" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg top CMS_btag_hf" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg top CMS_btag_hfstats1_2017" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg top CMS_btag_hfstats2_2017" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg top CMS_btag_jes" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg top CMS_btag_lf" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg top CMS_btag_lfstats1_2017" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg top CMS_btag_lfstats2_2017" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg top CMS_eff_e_2017" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg top CMS_eff_hwwtrigger_2017" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg top CMS_eff_m_2017" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg top QCDscale_VV" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg top CMS_eff_prefiring_2017 Up" >> ${combinedcardsDir}/mjj_vs_mTi.txt

echo "nuisance edit drop Fake_em dytt CMS_fake_e_2017 Up" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Fake_em dytt CMS_fake_m_2017 Down" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Fake_em dytt CMS_fake_stat_e_2017 Up" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Fake_em dytt CMS_fake_stat_m_2017 Up" >> ${combinedcardsDir}/mjj_vs_mTi.txt

text2workspace.py ${workDir}/${combinedcardsDir}/mjj_vs_mTi.txt -o ${workDir}/${workspaceDir}/mjj_vs_mTi.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO 'map=.*/WWewk:r_vbs[1,-10,10]'

