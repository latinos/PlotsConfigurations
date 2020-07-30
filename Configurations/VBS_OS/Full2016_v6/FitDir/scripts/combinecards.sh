#!/bin/bash
## FIXME this is where the Combine framework is installed
cd /afs/cern.ch/user/m/mlizzo/work/CMSSW_10_2_13
eval `scramv1 runtime -sh`
cd -

## FIXME this is your work directory
workDir=/afs/cern.ch/user/m/mlizzo/work/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/VBS_OS/Full2016_v6/FitDir 

datacardDir=datacards
combinedcardsDir=combinedcards
workspaceDir=workspaces

cd $workDir

combineCards.py   vbs_lowZ=${workDir}/${datacardDir}/VBS_2j_em_me_lowZ/mjj/datacard.txt \
                  vbs_highZ=${workDir}/${datacardDir}/VBS_2j_em_me_highZ/mjj/datacard.txt \
                  top=${workDir}/${datacardDir}/top_2j_em_me/events/datacard.txt \
                  dy=${workDir}/${datacardDir}/DY_2j_em_me/events/datacard.txt \
                  vbs_ee_lowZ=${workDir}/${datacardDir}/VBS_2j_ee_lowZ/mjj_merged/datacard.txt \
                  vbs_ee_highZ=${workDir}/${datacardDir}/VBS_2j_ee_highZ/mjj_merged/datacard.txt \
                  vbs_mm_lowZ=${workDir}/${datacardDir}/VBS_2j_mm_lowZ/mjj_merged/datacard.txt \
                  vbs_mm_highZ=${workDir}/${datacardDir}/VBS_2j_mm_highZ/mjj_merged/datacard.txt \
                  top_ee=${workDir}/${datacardDir}/top_2j_ee/events/datacard.txt \
                  top_mm=${workDir}/${datacardDir}/top_2j_mm/events/datacard.txt \
                  dy_ee=${workDir}/${datacardDir}/DY_2j_ee/events/datacard.txt \
                  dy_mm=${workDir}/${datacardDir}/DY_2j_mm/events/datacard.txt \
> ${workDir}/${combinedcardsDir}/mjj.txt

echo "nuisance edit drop Vg top CMS_btag_cferr1" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top CMS_btag_cferr2" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top CMS_btag_hf" >> ${combinedcardsDir}/mjj.txt

echo "nuisance edit drop Vg top_ee CMS_btag_cferr1" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_ee CMS_btag_cferr2" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_ee CMS_btag_hf" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_ee CMS_btag_hfstats1_2016" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_ee CMS_btag_hfstats2_2016" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_ee CMS_btag_jes" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_ee CMS_btag_lf" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_ee CMS_btag_lfstats1_2016" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_ee CMS_btag_lfstats2_2016" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_ee CMS_eff_e_2016" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_ee CMS_eff_hwwtrigger_2016" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_ee CMS_eff_m_2016" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_ee QCDscale_VV" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg top_ee CMS_eff_prefiring_2016 Up" >> ${combinedcardsDir}/mjj.txt

text2workspace.py ${combinedcardsDir}/mjj.txt -o ${workspaceDir}/mjj.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO 'map=.*/WWewk:r_vbs[1,-10,10]'

