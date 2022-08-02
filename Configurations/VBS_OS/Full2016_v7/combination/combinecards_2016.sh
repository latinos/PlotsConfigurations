#!/bin/bash
## FIXME this is where the Combine framework is installed
cd /afs/cern.ch/user/m/mlizzo/work/CMSSW_10_2_13
eval `scramv1 runtime -sh`
cd -

## work directory
workDir=$PWD       # Full2016_v7
workDirDF=$PWD/DF
workDirSF=$PWD/SF

datacardDir=datacards/AN_config

cd $workDir

combineCards.py   vbs_lowZ=${workDirDF}/${datacardDir}/VBS_2j_em_me_lowZ/mjj/datacard.txt \
                  vbs_highZ=${workDirDF}/${datacardDir}/VBS_2j_em_me_highZ/mjj/datacard.txt \
                  top=${workDirDF}/${datacardDir}/top_2j_em_me/events/datacard.txt \
                  dy=${workDirDF}/${datacardDir}/DY_2j_em_me/events/datacard.txt \
                  vbs_ee_lowZ=${workDirSF}/${datacardDir}/VBS_2j_ee_lowZ/mjj/datacard.txt \
                  vbs_ee_highZ=${workDirSF}/${datacardDir}/VBS_2j_ee_highZ/mjj/datacard.txt \
                  top_ee=${workDirSF}/${datacardDir}/top_2j_ee/events/datacard.txt \
                  dy_ee_lowZ=${workDirSF}/${datacardDir}/DY_2j_ee_lowZ/events/datacard.txt \
                  dy_ee_highZ=${workDirSF}/${datacardDir}/DY_2j_ee_highZ/events/datacard.txt \
                  vbs_mm_lowZ=${workDirSF}/${datacardDir}/VBS_2j_mm_lowZ/mjj/datacard.txt \
                  vbs_mm_highZ=${workDirSF}/${datacardDir}/VBS_2j_mm_highZ/mjj/datacard.txt \
                  top_mm=${workDirSF}/${datacardDir}/top_2j_mm/events/datacard.txt \
                  dy_mm_lowZ=${workDirSF}/${datacardDir}/DY_2j_mm_lowZ/events/datacard.txt \
                  dy_mm_highZ=${workDirSF}/${datacardDir}/DY_2j_mm_highZ/events/datacard.txt \
> ${workDir}/combination/mjj.txt

# DF

echo "nuisance edit drop DY vbs_highZ CMS_PUID_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY vbs_highZ CMS_btag_cferr1" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY vbs_highZ CMS_btag_cferr2" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY vbs_highZ CMS_btag_hfstats1_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY vbs_highZ CMS_btag_hfstats2_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY vbs_highZ CMS_btag_jes" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY vbs_highZ CMS_btag_lf" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY vbs_highZ CMS_btag_lfstats1_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY vbs_highZ CMS_btag_lfstats2_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY vbs_highZ CMS_eff_e_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY vbs_highZ CMS_eff_hwwtrigger_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY vbs_highZ CMS_eff_m_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY vbs_highZ CMS_eff_prefiring_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY vbs_highZ PS_FSR" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY vbs_highZ PS_ISR" >> ${workDir}/combination/mjj.txt

echo "nuisance edit drop DY top CMS_PUID_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY top CMS_btag_cferr1" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY top CMS_btag_cferr2" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY top CMS_btag_hfstats1_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY top CMS_btag_hfstats2_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY top CMS_btag_jes" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY top CMS_btag_lf" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY top CMS_btag_lfstats1_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY top CMS_btag_lfstats2_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY top CMS_eff_e_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY top CMS_eff_hwwtrigger_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY top CMS_eff_m_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY top CMS_eff_prefiring_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY top PS_FSR" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY top PS_ISR" >> ${workDir}/combination/mjj.txt

echo "nuisance edit drop Vg top CMS_btag_cferr1" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop Vg top CMS_btag_cferr2" >> ${workDir}/combination/mjj.txt


# SF ee

echo "nuisance edit drop Vg vbs_ee_lowZ CMS_PUID_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop Vg vbs_ee_lowZ CMS_btag_cferr1" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop Vg vbs_ee_lowZ CMS_btag_cferr2" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop Vg vbs_ee_lowZ CMS_btag_hf" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop Vg vbs_ee_lowZ CMS_btag_hfstats1_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop Vg vbs_ee_lowZ CMS_btag_hfstats2_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop Vg vbs_ee_lowZ CMS_btag_jes" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop Vg vbs_ee_lowZ CMS_btag_lf" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop Vg vbs_ee_lowZ CMS_btag_lfstats1_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop Vg vbs_ee_lowZ CMS_btag_lfstats2_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop Vg vbs_ee_lowZ CMS_eff_e_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop Vg vbs_ee_lowZ CMS_eff_hwwtrigger_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop Vg vbs_ee_lowZ CMS_eff_m_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop Vg vbs_ee_lowZ QCDscale_VV" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop Vg vbs_ee_lowZ CMS_eff_prefiring_2016 Up" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop Vg vbs_ee_lowZ PS_FSR" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop Vg vbs_ee_lowZ PS_ISR" >> ${workDir}/combination/mjj.txt

echo "nuisance edit drop DY_lowZ top_ee CMS_btag_cferr1" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY_lowZ top_ee CMS_btag_cferr2" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY_lowZ top_ee CMS_btag_hf" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY_lowZ top_ee CMS_btag_hfstats1_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY_lowZ top_ee CMS_btag_hfstats2_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY_lowZ top_ee CMS_btag_jes" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY_lowZ top_ee CMS_btag_lf" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY_lowZ top_ee CMS_btag_lfstats1_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY_lowZ top_ee CMS_btag_lfstats2_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY_lowZ top_ee CMS_eff_e_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY_lowZ top_ee CMS_eff_hwwtrigger_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY_lowZ top_ee CMS_eff_m_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY_lowZ top_ee QCDscale_VV" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY_lowZ top_ee CMS_eff_prefiring_2016 Up" >> ${workDir}/combination/mjj.txt

echo "nuisance edit drop DY_highZ top_ee CMS_btag_cferr1" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY_highZ top_ee CMS_btag_cferr2" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY_highZ top_ee CMS_btag_hf" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY_highZ top_ee CMS_btag_hfstats1_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY_highZ top_ee CMS_btag_hfstats2_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY_highZ top_ee CMS_btag_jes" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY_highZ top_ee CMS_btag_lf" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY_highZ top_ee CMS_btag_lfstats1_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY_highZ top_ee CMS_btag_lfstats2_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY_highZ top_ee CMS_eff_e_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY_highZ top_ee CMS_eff_hwwtrigger_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY_highZ top_ee CMS_eff_m_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY_highZ top_ee QCDscale_VV" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY_highZ top_ee CMS_eff_prefiring_2016 Up" >> ${workDir}/combination/mjj.txt

echo "nuisance edit drop Vg top_ee CMS_btag_cferr1" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop Vg top_ee CMS_btag_cferr2" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop Vg top_ee CMS_btag_hf" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop Vg top_ee CMS_btag_hfstats1_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop Vg top_ee CMS_btag_hfstats2_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop Vg top_ee CMS_btag_jes" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop Vg top_ee CMS_btag_lf" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop Vg top_ee CMS_btag_lfstats1_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop Vg top_ee CMS_btag_lfstats2_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop Vg top_ee CMS_eff_e_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop Vg top_ee CMS_eff_hwwtrigger_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop Vg top_ee CMS_eff_m_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop Vg top_ee QCDscale_VV" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop Vg top_ee CMS_eff_prefiring_2016 Up" >> ${workDir}/combination/mjj.txt

echo "nuisance edit drop VgS_L dy_ee_highZ CMS_btag_cferr1" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop VgS_L dy_ee_highZ CMS_btag_cferr2" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop VgS_L dy_ee_highZ CMS_btag_hfstats1_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop VgS_L dy_ee_highZ CMS_btag_hfstats2_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop VgS_L dy_ee_highZ CMS_btag_jes" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop VgS_L dy_ee_highZ CMS_btag_lf" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop VgS_L dy_ee_highZ CMS_btag_lfstats1_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop VgS_L dy_ee_highZ CMS_btag_lfstats2_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop VgS_L dy_ee_highZ CMS_eff_e_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop VgS_L dy_ee_highZ CMS_eff_hwwtrigger_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop VgS_L dy_ee_highZ CMS_eff_m_2016" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop VgS_L dy_ee_highZ QCDscale_VV" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop VgS_L dy_ee_highZ CMS_eff_prefiring_2016 Up" >> ${workDir}/combination/mjj.txt

echo "nuisance edit drop top top_ee CMS_btag_hf" >> ${workDir}/combination/mjj.txt


# SF mm

echo "nuisance edit drop Vg vbs_mm_lowZ QCDscale_VV" >> ${workDir}/combination/mjj.txt

echo "nuisance edit drop WH_htt top_mm CMS_btag_hf" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop ttH_hww top_mm CMS_btag_hf" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop top top_mm CMS_btag_hf" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY_lowZ top_mm CMS_btag_hf" >> ${workDir}/combination/mjj.txt
echo "nuisance edit drop DY_highZ top_mm CMS_btag_hf" >> ${workDir}/combination/mjj.txt


text2workspace.py ${workDir}/combination/mjj.txt -o ${workDir}/combination/mjj.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO 'map=.*/WWewk:r_vbs[1,-10,10]'


