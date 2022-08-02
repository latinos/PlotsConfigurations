#!/bin/bash

BASEDIR=`pwd`
cd $CMSSW_BASE/src/LatinoAnalysis/Tools/scripts

#/eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/
#/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/



# #Small MC files
python submitSkimWithSystematics.py \
        --tag 2017 \
        --basedir /eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv7_Full2017v7  \
        --targetdir /eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/Fall2017_102X_nAODv7_Full2017v7_skim  \
        --step MCl1loose2017v7__MCCorr2017v7__MCCombJJLNu2017 \
        --samples-file  $BASEDIR/samples_to_skim_smallMC_2017.cfg \
        --variations ElepT MupT MET JES JER fatjetJES fatjetJER fatjetJMR fatjetJMS  \
        --cut "VBS_category>=0 && mjj_vbs >=500 && deltaeta_vbs >= 2.5 && Lepton_pt > 30 && PuppiMET_pt > 30 " \
        --branches-remove "HM*" "me_*" "MH*" \
        --save-entrylists \
        -q microcentury  \
        --files-per-job 5 


# # Wjets and top    
# python submitSkimWithSystematics.py \
#         --tag 2017 \
#         --basedir /eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv7_Full2017v7  \
#         --targetdir /eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/Fall2017_102X_nAODv7_Full2017v7_skim  \
#         --step MCl1loose2017v7__MCCorr2017v7__MCCombJJLNu2017 \
#         --samples-file  $BASEDIR/samples_to_skim_largeMC_2017.cfg \
#         --variations ElepT MupT MET JES JER fatjetJES fatjetJER fatjetJMR fatjetJMS   \
#         --cut "VBS_category>=0 && mjj_vbs >=500 && deltaeta_vbs >= 2.5 && Lepton_pt > 30 && PuppiMET_pt > 30 " \
#         --branches-remove "HM*" "me_*" "MH*" \
#         --save-entrylists \
#         -q longlunch    \
#         --files-per-job 3
        

# # # Signal and QCD-VV
# python submitSkimWithSystematics.py \
#         --tag 2017 \
#         --basedir   /eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/Fall2017_102X_nAODv7_Full2017v7  \
#         --targetdir /eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/Fall2017_102X_nAODv7_Full2017v7_skim  \
#         --step MCl1loose2017v7__MCCorr2017v7__MCCombJJLNu2017 \
#         --samples-file  $BASEDIR/samples_to_skim_smp.cfg \
#         --variations ElepT MupT MET JES JER fatjetJES fatjetJER fatjetJMR fatjetJMS   \
#         --cut "VBS_category>=0 && mjj_vbs >=500 && deltaeta_vbs >= 2.5 && Lepton_pt > 30 && PuppiMET_pt > 30 " \
#         --branches-remove "HM*" "me_*" "MH*" \
#         --save-entrylists \
#         -q longlunch    \
#         --files-per-job 6


# Data
# python submitSkimWithSystematics.py \
#         --tag 2017_data \
#         --basedir   /eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Run2017_102X_nAODv7_Full2017v7  \
#         --targetdir /eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/Run2017_102X_nAODv7_Full2017v7_skim  \
#         --step DATAl1loose2017v7__DATACombJJLNu2017 \
#         --samples-file  $BASEDIR/samples_to_skim_data_2017.cfg \
#         --cut "VBS_category>=0 && mjj_vbs >=500 && deltaeta_vbs >= 2.5 && Lepton_pt > 30 && PuppiMET_pt > 30 " \
#         --branches-remove "HM*" "me_*" "MH*" \
#         --save-entrylists \
#         -q microcentury    \
#         --files-per-job 20