#!/bin/bash

BASEDIR=`pwd`
cd $CMSSW_BASE/src/LatinoAnalysis/Tools/scripts

#/eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/
#/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/

#test
# python submitSkimWithSystematics.py \
#         --tag test \
#         --basedir /eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv7_Full2018v7  \
#         --targetdir /eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/Autumn18_102X_nAODv7_Full2018v7_skim  \
#         --step MCl1loose2018v7__MCCorr2018v7__MCCombJJLNu2018 \
#         --samples-file  $BASEDIR/samples_to_skim_smallMC.cfg \
#         --variations ElepT \
#         --cut "VBS_category>=0 && mjj_vbs >=500 && deltaeta_vbs >= 2.5 && Lepton_pt > 30 && PuppiMET_pt > 30 " \
#         --branches-remove "HM*" "me_*" "MH*" \
#         --save-entrylists \
#         -q longlunch    \
#         --files-per-job 1  --dry-run



# Small MC files
python submitSkimWithSystematics.py \
        --tag 2018 \
        --basedir /eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv7_Full2018v7  \
        --targetdir /eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/Autumn18_102X_nAODv7_Full2018v7_skim  \
        --step MCl1loose2018v7__MCCorr2018v7__MCCombJJLNu2018 \
        --samples-file  $BASEDIR/samples_to_skim_smallMC_2018.cfg \
        --variations ElepT MupT MET JES JER fatjetJES fatjetJER fatjetJMR fatjetJMS   \
        --cut "VBS_category>=0 && mjj_vbs >=500 && deltaeta_vbs >= 2.5 && Lepton_pt > 30 && PuppiMET_pt > 30 " \
        --branches-remove "HM*" "me_*" "MH*" \
        --save-entrylists \
        -q microcentury    \
        --files-per-job 5 


# Wjets and top    
# python submitSkimWithSystematics.py \
#         --tag 2018 \
#         --basedir /eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv7_Full2018v7  \
#         --targetdir /eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/Autumn18_102X_nAODv7_Full2018v7_skim  \
#         --step MCl1loose2018v7__MCCorr2018v7__MCCombJJLNu2018 \
#         --samples-file  $BASEDIR/samples_to_skim_largeMC.cfg \
#         --variations ElepT MupT MET JES JER fatjetJES fatjetJER fatjetJMR fatjetJMS   \
#         --cut "VBS_category>=0 && mjj_vbs >=500 && deltaeta_vbs >= 2.5 && Lepton_pt > 30 && PuppiMET_pt > 30 " \
#         --branches-remove "HM*" "me_*" "MH*" \
#         --save-entrylists \
#         -q longlunch    \
#         --files-per-job 4
        

# # Signal and QCD-VV
# python submitSkimWithSystematics.py \
#         --tag 2018 \
#         --basedir   /eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/Autumn18_102X_nAODv7_Full2018v7  \
#         --targetdir /eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/Autumn18_102X_nAODv7_Full2018v7_skim  \
#         --step MCl1loose2018v7__MCCorr2018v7__MCCombJJLNu2018 \
#         --samples-file  $BASEDIR/samples_to_skim_smp.cfg \
#         --variations ElepT MupT MET JES JER fatjetJES fatjetJER fatjetJMR fatjetJMS   \
#         --cut "VBS_category>=0 && mjj_vbs >=500 && deltaeta_vbs >= 2.5 && Lepton_pt > 30 && PuppiMET_pt > 30 " \
#         --branches-remove "HM*" "me_*" "MH*" \
#         --save-entrylists \
#         -q espresso    \
#         --files-per-job 4 


# Data
# python submitSkimWithSystematics.py \
        # --tag 2018_data \
        # --basedir   /eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Run2018_102X_nAODv7_Full2018v7  \
        # --targetdir /eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/Run2018_102X_nAODv7_Full2018v7_skim  \
        # --step DATAl1loose2018v7__DATACombJJLNu2018 \
        # --samples-file  $BASEDIR/samples_to_skim_data.cfg \
        # --cut "VBS_category>=0 && mjj_vbs >=500 && deltaeta_vbs >= 2.5 && Lepton_pt > 30 && PuppiMET_pt > 30 " \
        # --branches-remove "HM*" "me_*" "MH*" \
        # --save-entrylists \
        # -q microcentury    \
        # --files-per-job 20