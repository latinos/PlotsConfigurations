#!/bin/bash

BASEDIR=`pwd`
cd $CMSSW_BASE/src/LatinoAnalysis/Tools/scripts

#/eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/
#/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/



#Small MC files
# python submitSkimWithSystematics.py \
#         --tag 2016 \
#         --basedir /eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv7_Full2016v7  \
#         --targetdir /eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/Summer16_102X_nAODv7_Full2016v7_skim  \
#         --step MCl1loose2016v7__MCCorr2016v7__MCCombJJLNu2016 \
#         --samples-file  $BASEDIR/samples_to_skim_smallMC_2016.cfg \
#         --variations ElepT MupT MET JES fatjetJES fatjetJMR fatjetJMS  \
#         --cut "VBS_category>=0 && mjj_vbs >=500 && deltaeta_vbs >= 2.5 && Lepton_pt > 30 && PuppiMET_pt > 30 " \
#         --branches-remove "HM*" "me_*" "MH*" \
#         --save-entrylists \
#          -q longlunch  \
#          --files-per-job 5 --dry-run


# # Wjets and top    
# python submitSkimWithSystematics.py \
#         --tag 2016 \
#         --basedir /eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv7_Full2016v7  \
#         --targetdir /eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/Summer16_102X_nAODv7_Full2016v7_skim  \
#         --step MCl1loose2016v7__MCCorr2016v7__MCCombJJLNu2016 \
#         --samples-file  $BASEDIR/samples_to_skim_largeMC_2016.cfg \
#         --variations ElepT MupT MET JES fatjetJES fatjetJMR fatjetJMS   \
#         --cut "VBS_category>=0 && mjj_vbs >=500 && deltaeta_vbs >= 2.5 && Lepton_pt > 30 && PuppiMET_pt > 30 " \
#         --branches-remove "HM*" "me_*" "MH*" \
#         --save-entrylists \
#         -q longlunch    \
#         --files-per-job 5 --dry-run
        

# # # Signal and QCD-VV
python submitSkimWithSystematics.py \
        --tag 2016 \
        --basedir   /eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/Summer16_102X_nAODv7_Full2016v7  \
        --targetdir /eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/Summer16_102X_nAODv7_Full2016v7_skim  \
        --step MCl1loose2016v7__MCCorr2016v7__MCCombJJLNu2016 \
        --samples-file  $BASEDIR/samples_to_skim_smp.cfg \
        --variations ElepT MupT MET JES fatjetJES fatjetJMR fatjetJMS   \
        --cut "VBS_category>=0 && mjj_vbs >=500 && deltaeta_vbs >= 2.5 && Lepton_pt > 30 && PuppiMET_pt > 30 " \
        --branches-remove "HM*" "me_*" "MH*" \
        --save-entrylists \
        -q longlunch    \
        --files-per-job 6


# # Data
# python submitSkimWithSystematics.py \
#         --tag 2016_data \
#         --basedir   /eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Run2016_102X_nAODv7_Full2016v7  \
#         --targetdir /eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/Run2016_102X_nAODv7_Full2016v7_skim  \
#         --step DATAl1loose2016v7__DATACombJJLNu2016 \
#         --samples-file  $BASEDIR/samples_to_skim_data_2016.cfg \
#         --cut "VBS_category>=0 && mjj_vbs >=500 && deltaeta_vbs >= 2.5 && Lepton_pt > 30 && PuppiMET_pt > 30 " \
#         --branches-remove "HM*" "me_*" "MH*" \
#         --save-entrylists \
#         -q microcentury    \
#         --files-per-job 20