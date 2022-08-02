#!/bin/bash

# SMPEOS='/eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/Fall2017_102X_nAODv7_Full2017v7/MCl1loose2017v7__MCCorr2017v7__MCCombJJLNu2017'

# #cp ${SMPEOS}_fatjetJESup/nanoLatino_DY* ${LATEOS}_fatjetJESup/
# #cp ${SMPEOS}_fatjetJESdo/nanoLatino_DY* ${LATEOS}_fatjetJESdo/
# # cp ${SMPEOS}_fatjetJMRup/nanoLatino_DY* ${LATEOS}_fatjetJMRup/
# # cp ${SMPEOS}_fatjetJMRdo/nanoLatino_DY* ${LATEOS}_fatjetJMRdo/
# # cp ${SMPEOS}_fatjetJMSdo/nanoLatino_DY* ${LATEOS}_fatjetJMSdo/
# # cp ${SMPEOS}_fatjetJMSup/nanoLatino_DY* ${LATEOS}_fatjetJMSup/
# # cp ${SMPEOS}_fatjetJMRdo/nanoLatino_DY* ${LATEOS}_fatjetJMRdo/
# # cp ${SMPEOS}_fatjetJMSdo/nanoLatino_DY* ${LATEOS}_fatjetJMSdo/
# # cp ${SMPEOS}_fatjetJERdo/nanoLatino_DY* ${LATEOS}_fatjetJERdo/
# # cp ${SMPEOS}_fatjetJERup/nanoLatino_DY* ${LATEOS}_fatjetJERup/

# cp -f ${SMPEOS}_JESup/nanoLatino_DY* ${LATEOS}_JESup/
# cp -f ${SMPEOS}_JESdo/nanoLatino_DY* ${LATEOS}_JESdo/
# # cp ${SMPEOS}_MupTdo/nanoLatino_DY* ${LATEOS}_MupTdo/
# # cp ${SMPEOS}_MupTup/nanoLatino_DY* ${LATEOS}_MupTup/
# # cp ${SMPEOS}_METdo/nanoLatino_DY* ${LATEOS}_METdo/
# # cp ${SMPEOS}_METup/nanoLatino_DY* ${LATEOS}_METup/
# # cp ${SMPEOS}_JERdo/nanoLatino_DY* ${LATEOS}_JERdo/
# # cp ${SMPEOS}_JERup/nanoLatino_DY* ${LATEOS}_JERup/

LATEOS='/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_102X_nAODv7_Full2017v7/MCl1loose2017v7__MCCorr2017v7__MCCombJJLNu2017'



for folder in 'JES' 'fatjetJES' 'JER' 'fatjetJER' 'fatjetJMS' 'fatjetJMR'; do
   for var in 'up' 'do'; do 
        cd ${LATEOS}_${folder}${var};
        echo `pwd`;
        mkdir old_DY;
        mv nanoLatino_DYJetsToLL_M-50_HT-100to200_newpmx__part* old_DY;
        cd ..;
   done;
   done; 
