#!/bin/bash

## FIXME this is where the Combine framework is installed
cd ~/Combine/CMSSW_8_1_0/src/
eval `scramv1 runtime -sh`
cd -

## work directory
outputDir=/afs/cern.ch/work/l/lviliani/LatinosFramework13TeV_FullRun2/CMSSW_9_4_12/src/PlotsConfigurations/Configurations/ggH/Full2017/HTXS_Stage1/Combination/

if [ ! -d $outputDir ]; then
  mkdir $outputDir
fi

datacardDir=/afs/cern.ch/work/l/lviliani/LatinosFramework13TeV_FullRun2/CMSSW_9_4_12/src/PlotsConfigurations/Configurations/ggH/Full2017/HTXS_Stage1/datacardsggH_Full2017_HTXS_Stage1/

## variable used for the signal regions fit
variable_pt2lt20=mllVSmth_pt2lt20
variable_pt2ge20=mllVSmth_pt2ge20

variable_ggh2j=mllVSmth_pt2lt20

# combine the datacards
combineCards.py   of_0j_pth0_10=${datacardDir}/hww2l2v_13TeV_of0j_pth0-10/${variable_pt2ge20}/datacard.txt \
                  of_0j_pth10_200=${datacardDir}/hww2l2v_13TeV_of0j_pth10-200/${variable_pt2ge20}/datacard.txt \
                  of_1j_pth0_60=${datacardDir}/hww2l2v_13TeV_of1j_pth0-60/${variable_pt2ge20}/datacard.txt \
                  of_1j_pth60_120=${datacardDir}/hww2l2v_13TeV_of1j_pth60-120/${variable_pt2ge20}/datacard.txt \
                  of_1j_pth120_200=${datacardDir}/hww2l2v_13TeV_of1j_pth120-200/${variable_pt2ge20}/datacard.txt \
                  of_2j_lowmjj_pth0_60=${datacardDir}/hww2l2v_13TeV_of2j_lowmjj_pth0-60/${variable_pt2lt20}/datacard.txt \
                  of_2j_lowmjj_pth60_120=${datacardDir}/hww2l2v_13TeV_of2j_lowmjj_pth60-120/${variable_pt2lt20}/datacard.txt \
                  of_2j_lowmjj_pth120_200=${datacardDir}/hww2l2v_13TeV_of2j_lowmjj_pth120-200/${variable_pt2lt20}/datacard.txt \
                  of_2j_mjj350_750=${datacardDir}/hww2l2v_13TeV_of2j_mjj350-750/${variable_pt2lt20}/datacard.txt \
                  of0j_Top=${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt \
                  of1j_Top=${datacardDir}/hww2l2v_13TeV_top_of1j/events/datacard.txt \
                  of2j_Top=${datacardDir}/hww2l2v_13TeV_top_of2j/events/datacard.txt \
                  of0j_DYtt=${datacardDir}/hww2l2v_13TeV_dytt_of0j/events/datacard.txt \
                  of1j_DYtt=${datacardDir}/hww2l2v_13TeV_dytt_of0j/events/datacard.txt \
                  of2j_DYtt=${datacardDir}/hww2l2v_13TeV_dytt_of0j/events/datacard.txt \
                  >   ${outputDir}/Full2017_ggH_HTXS_Stage1.txt

#RuntimeError: Bogus norm 0.0 for channel of0j_DYtt, process ttH_hww, systematic CMS_scale_met_2017 Down
echo "nuisance edit drop ttH_hww of0j_DYtt CMS_scale_met_2017" >> ${outputDir}/Full2017_ggH_HTXS_Stage1.txt
echo "nuisance edit drop ttH_hww of1j_DYtt CMS_scale_met_2017" >> ${outputDir}/Full2017_ggH_HTXS_Stage1.txt
echo "nuisance edit drop ttH_hww of2j_DYtt CMS_scale_met_2017" >> ${outputDir}/Full2017_ggH_HTXS_Stage1.txt

