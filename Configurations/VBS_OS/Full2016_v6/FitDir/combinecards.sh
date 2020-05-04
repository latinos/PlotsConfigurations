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

combineCards.py     vbs_lowZ=${workDir}/${datacardDir}/VBS_2j_em_me_lowZ/mjj/datacard.txt \
                    vbs_highZ=${workDir}/${datacardDir}/VBS_2j_em_me_highZ/mjj/datacard.txt \
                    vbs_SF_lowZ=${workDir}/${datacardDir}/VBS_2j_ee_mm_lowZ/mjj/datacard.txt \
                    vbs_SF_highZ=${workDir}/${datacardDir}/VBS_2j_ee_mm_highZ/mjj/datacard.txt \
                    top=${workDir}/${datacardDir}/top_2j_em_me/events/datacard.txt \
                    top_SF=${workDir}/${datacardDir}/top_2j_ee_mm/events/datacard.txt \
                    DY=${workDir}/${datacardDir}/DY_2j/events/datacard.txt \
> ${workDir}/${combinedcardsDir}/mjj.txt

echo "nuisance edit drop Vg vbs_highZ CMS_btag_cferr1" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg vbs_highZ CMS_btag_cferr2" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg vbs_highZ CMS_btag_hf" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg vbs_highZ CMS_btag_hfstats1_2016" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg vbs_highZ CMS_btag_hfstats2_2016" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg vbs_highZ CMS_btag_jes" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg vbs_highZ CMS_btag_lf" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg vbs_highZ CMS_btag_lfstats1_2016" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg vbs_highZ CMS_btag_lfstats2_2016" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg vbs_highZ CMS_eff_e_2016" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg vbs_highZ CMS_eff_hwwtrigger_2016" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg vbs_highZ CMS_eff_m_2016" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg vbs_highZ QCDscale_VV" >> ${combinedcardsDir}/mjj.txt
echo "nuisance edit drop Vg vbs_highZ CMS_eff_prefiring_2016 Up" >> ${combinedcardsDir}/mjj.txt

text2workspace.py ${workDir}/${combinedcardsDir}/mjj.txt -o ${workDir}/${workspaceDir}/mjj.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO 'map=.*/WWewk:r_vbs[1,-10,10]'
