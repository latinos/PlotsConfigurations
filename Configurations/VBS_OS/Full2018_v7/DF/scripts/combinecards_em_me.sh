#!/bin/bash
## FIXME this is where the Combine framework is installed
cd /afs/cern.ch/user/m/mlizzo/work/CMSSW_10_2_13
eval `scramv1 runtime -sh`
cd -

## FIXME this is your work directory
#workDir=/afs/cern.ch/user/m/mlizzo/work/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/VBS_OS/Full2018_v6/nAODv6_v6 
workDir=$PWD

datacardDir=datacards/AN_config
combinedcardsDir=combinedcards/AN_config
workspaceDir=workspaces/AN_config

cd $workDir

combineCards.py   vbs_lowZ=${workDir}/${datacardDir}/VBS_2j_em_me_lowZ/mjj/datacard.txt \
                  vbs_highZ=${workDir}/${datacardDir}/VBS_2j_em_me_highZ/mjj/datacard.txt \
                  top=${workDir}/${datacardDir}/top_2j_em_me/events/datacard.txt \
                  dy=${workDir}/${datacardDir}/DY_2j_em_me/events/datacard.txt \
> ${workDir}/${combinedcardsDir}/mjj_em_me.txt

echo "nuisance edit drop DY_lowZ top CMS_PUID_2018" >> ${combinedcardsDir}/mjj_em_me.txt
echo "nuisance edit drop DY_lowZ top CMS_btag_cferr1" >> ${combinedcardsDir}/mjj_em_me.txt
echo "nuisance edit drop DY_lowZ top CMS_btag_cferr2" >> ${combinedcardsDir}/mjj_em_me.txt
echo "nuisance edit drop DY_lowZ top CMS_btag_hf" >> ${combinedcardsDir}/mjj_em_me.txt
echo "nuisance edit drop DY_lowZ top CMS_btag_hfstats1_2018" >> ${combinedcardsDir}/mjj_em_me.txt
echo "nuisance edit drop DY_lowZ top CMS_btag_hfstats2_2018" >> ${combinedcardsDir}/mjj_em_me.txt
echo "nuisance edit drop DY_lowZ top CMS_btag_jes" >> ${combinedcardsDir}/mjj_em_me.txt
echo "nuisance edit drop DY_lowZ top CMS_btag_lf" >> ${combinedcardsDir}/mjj_em_me.txt
echo "nuisance edit drop DY_lowZ top CMS_btag_lfstats1_2018" >> ${combinedcardsDir}/mjj_em_me.txt
echo "nuisance edit drop DY_lowZ top CMS_btag_lfstats2_2018" >> ${combinedcardsDir}/mjj_em_me.txt
echo "nuisance edit drop DY_lowZ top CMS_eff_e_2018" >> ${combinedcardsDir}/mjj_em_me.txt
echo "nuisance edit drop DY_lowZ top CMS_eff_hwwtrigger_2018" >> ${combinedcardsDir}/mjj_em_me.txt
echo "nuisance edit drop DY_lowZ top CMS_eff_m_2018" >> ${combinedcardsDir}/mjj_em_me.txt

echo "nuisance edit drop Vg top CMS_btag_cferr1" >> ${combinedcardsDir}/mjj_em_me.txt
echo "nuisance edit drop Vg top CMS_btag_cferr2" >> ${combinedcardsDir}/mjj_em_me.txt
echo "nuisance edit drop Vg top CMS_btag_hf" >> ${combinedcardsDir}/mjj_em_me.txt
echo "nuisance edit drop Vg top CMS_btag_hfstats1_2018" >> ${combinedcardsDir}/mjj_em_me.txt
echo "nuisance edit drop Vg top CMS_btag_hfstats2_2018" >> ${combinedcardsDir}/mjj_em_me.txt
echo "nuisance edit drop Vg top CMS_btag_jes" >> ${combinedcardsDir}/mjj_em_me.txt
echo "nuisance edit drop Vg top CMS_btag_lf" >> ${combinedcardsDir}/mjj_em_me.txt
echo "nuisance edit drop Vg top CMS_btag_lfstats1_2018" >> ${combinedcardsDir}/mjj_em_me.txt
echo "nuisance edit drop Vg top CMS_btag_lfstats2_2018" >> ${combinedcardsDir}/mjj_em_me.txt
echo "nuisance edit drop Vg top CMS_eff_e_2018" >> ${combinedcardsDir}/mjj_em_me.txt
echo "nuisance edit drop Vg top CMS_eff_hwwtrigger_2018" >> ${combinedcardsDir}/mjj_em_me.txt
echo "nuisance edit drop Vg top CMS_eff_m_2018" >> ${combinedcardsDir}/mjj_em_me.txt

echo "nuisance edit drop VgS_H dy QCDscale_VV" >> ${combinedcardsDir}/mjj_em_me.txt

echo "nuisance edit drop Vg dy CMS_btag_cferr1" >> ${combinedcardsDir}/mjj_em_me.txt
echo "nuisance edit drop Vg dy CMS_btag_cferr2" >> ${combinedcardsDir}/mjj_em_me.txt
echo "nuisance edit drop Vg dy CMS_btag_hf" >> ${combinedcardsDir}/mjj_em_me.txt
echo "nuisance edit drop Vg dy CMS_btag_hfstats1_2018" >> ${combinedcardsDir}/mjj_em_me.txt
echo "nuisance edit drop Vg dy CMS_btag_hfstats2_2018" >> ${combinedcardsDir}/mjj_em_me.txt
echo "nuisance edit drop Vg dy CMS_btag_jes" >> ${combinedcardsDir}/mjj_em_me.txt
echo "nuisance edit drop Vg dy CMS_btag_lf" >> ${combinedcardsDir}/mjj_em_me.txt
echo "nuisance edit drop Vg dy CMS_btag_lfstats1_2018" >> ${combinedcardsDir}/mjj_em_me.txt
echo "nuisance edit drop Vg dy CMS_btag_lfstats2_2018" >> ${combinedcardsDir}/mjj_em_me.txt
echo "nuisance edit drop Vg dy CMS_eff_e_2018" >> ${combinedcardsDir}/mjj_em_me.txt
echo "nuisance edit drop Vg dy CMS_eff_hwwtrigger_2018" >> ${combinedcardsDir}/mjj_em_me.txt
echo "nuisance edit drop Vg dy CMS_eff_m_2018" >> ${combinedcardsDir}/mjj_em_me.txt
echo "nuisance edit drop Vg dy QCDscale_VV" >> ${combinedcardsDir}/mjj_em_me.txt

text2workspace.py ${combinedcardsDir}/mjj_em_me.txt -o ${workspaceDir}/mjj_em_me.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO 'map=.*/WWewk:r_vbs[1,-10,10]'

