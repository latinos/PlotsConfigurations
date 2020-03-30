#!/bin/bash
## FIXME this is where the Combine framework is installed
cd /afs/cern.ch/user/m/mlizzo/work/CMSSW_10_2_13
eval `scramv1 runtime -sh`
cd -

## work directory
workDir=/afs/cern.ch/user/m/mlizzo/work/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/VBS_OS/Full2018_v6 

datacardDir=datacards
combinedcardsDir=combinedcards
workspaceDir=workspaces

cd $workDir

combineCards.py   vbs_lowZ=${workDir}/${datacardDir}/VBS_low_Zeppll_2j/mjj_vs_mTi/datacard.txt \
                  vbs_highZ=${workDir}/${datacardDir}/VBS_high_Zeppll_2j/mjj_vs_mTi/datacard.txt \
                  top=${workDir}/${datacardDir}/top_2j/events/datacard.txt \
                  dytt=${workDir}/${datacardDir}/DYtt_2j/events/datacard.txt \
> ${workDir}/${combinedcardsDir}/mjj_vs_mTi.txt

#echo "nuisance edit drop Vg vbs CMS_btag_cferr1" >> ${combinedcardsDir}/mjj_vs_mTi.txt
#echo "nuisance edit drop Vg vbs CMS_btag_cferr2" >> ${combinedcardsDir}/mjj_vs_mTi.txt
#echo "nuisance edit drop Vg vbs CMS_btag_hf" >> ${combinedcardsDir}/mjj_vs_mTi.txt
#echo "nuisance edit drop Vg vbs CMS_btag_hfstats1_2018" >> ${combinedcardsDir}/mjj_vs_mTi.txt
#echo "nuisance edit drop Vg vbs CMS_btag_hfstats2_2018" >> ${combinedcardsDir}/mjj_vs_mTi.txt
#echo "nuisance edit drop Vg vbs CMS_btag_jes" >> ${combinedcardsDir}/mjj_vs_mTi.txt
#echo "nuisance edit drop Vg vbs CMS_btag_lf" >> ${combinedcardsDir}/mjj_vs_mTi.txt
#echo "nuisance edit drop Vg vbs CMS_btag_lfstats1_2018" >> ${combinedcardsDir}/mjj_vs_mTi.txt
#echo "nuisance edit drop Vg vbs CMS_btag_lfstats2_2018" >> ${combinedcardsDir}/mjj_vs_mTi.txt
#echo "nuisance edit drop Vg vbs CMS_eff_e_2018" >> ${combinedcardsDir}/mjj_vs_mTi.txt
#echo "nuisance edit drop Vg vbs CMS_eff_hwwtrigger_2018" >> ${combinedcardsDir}/mjj_vs_mTi.txt
#echo "nuisance edit drop Vg vbs CMS_eff_m_2018" >> ${combinedcardsDir}/mjj_vs_mTi.txt
#echo "nuisance edit drop Vg vbs QCDscale_VV" >> ${combinedcardsDir}/mjj_vs_mTi.txt


echo "nuisance edit drop Vg vbs_lowZ CMS_btag_cferr1" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg vbs_lowZ CMS_btag_cferr2" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg vbs_lowZ CMS_btag_hf" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg vbs_lowZ CMS_btag_hfstats1_2018" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg vbs_lowZ CMS_btag_hfstats2_2018" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg vbs_lowZ CMS_btag_jes" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg vbs_lowZ CMS_btag_lf" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg vbs_lowZ CMS_btag_lfstats1_2018" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg vbs_lowZ CMS_btag_lfstats2_2018" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg vbs_lowZ CMS_eff_e_2018" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg vbs_lowZ CMS_eff_hwwtrigger_2018" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg vbs_lowZ CMS_eff_m_2018" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg vbs_lowZ QCDscale_VV" >> ${combinedcardsDir}/mjj_vs_mTi.txt

echo "nuisance edit drop Vg vbs_highZ CMS_btag_cferr1" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg vbs_highZ CMS_btag_cferr2" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg vbs_highZ CMS_btag_hf" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg vbs_highZ CMS_btag_hfstats1_2018" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg vbs_highZ CMS_btag_hfstats2_2018" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg vbs_highZ CMS_btag_jes" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg vbs_highZ CMS_btag_lf" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg vbs_highZ CMS_btag_lfstats1_2018" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg vbs_highZ CMS_btag_lfstats2_2018" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg vbs_highZ CMS_eff_e_2018" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg vbs_highZ CMS_eff_hwwtrigger_2018" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg vbs_highZ CMS_eff_m_2018" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg vbs_highZ QCDscale_VV" >> ${combinedcardsDir}/mjj_vs_mTi.txt

echo "nuisance edit drop Vg top CMS_btag_cferr1" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg top CMS_btag_cferr2" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg top CMS_btag_hf" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg top CMS_btag_hfstats1_2018" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg top CMS_btag_hfstats2_2018" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg top CMS_btag_jes" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg top CMS_btag_lf" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg top CMS_btag_lfstats1_2018" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg top CMS_btag_lfstats2_2018" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg top CMS_eff_e_2018" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg top CMS_eff_hwwtrigger_2018" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg top CMS_eff_m_2018" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg top QCDscale_VV" >> ${combinedcardsDir}/mjj_vs_mTi.txt

echo "nuisance edit drop Vg dytt CMS_btag_cferr1" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg dytt CMS_btag_cferr2" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg dytt CMS_btag_hf" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg dytt CMS_btag_hfstats1_2018" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg dytt CMS_btag_hfstats2_2018" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg dytt CMS_btag_jes" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg dytt CMS_btag_lf" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg dytt CMS_btag_lfstats1_2018" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg dytt CMS_btag_lfstats2_2018" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg dytt CMS_eff_e_2018" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg dytt CMS_eff_hwwtrigger_2018" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg dytt CMS_eff_m_2018" >> ${combinedcardsDir}/mjj_vs_mTi.txt
echo "nuisance edit drop Vg dytt QCDscale_VV" >> ${combinedcardsDir}/mjj_vs_mTi.txt

text2workspace.py ${combinedcardsDir}/mjj_vs_mTi.txt -o ${workspaceDir}/Z_mjj_vs_mTi.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO 'map=.*/WWewk:r_vbs[1,-10,10]'

