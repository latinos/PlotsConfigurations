#!/bin/bash

## FIXME this is where the Combine framework is installed
cd /afs/cern.ch/work/r/rceccare/VBF/CMSSW_10_2_13
eval `scramv1 runtime -sh`
cd -

## work directory
outputDir=/afs/cern.ch/work/r/rceccare/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/ggH/Full2016_v6/HTXS_Stage1p2_ggHVBFVH/Combination_20_11_quad

if [ ! -d $outputDir ]; then
  mkdir $outputDir
fi

datacardDir=/afs/cern.ch/work/r/rceccare/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/ggH/Full2016_v6/HTXS_Stage1p2_ggHVBFVH/datacards_ggH_vbf_VH_2016v6_STXS_20_11_quad

## variable used for the signal regions fit
# combine the datacards

combineCards.py   of2j_vbflike_mjj350_700_pthLT200=${datacardDir}/hww2l2v_13TeV_of2j_vbflike_mjj350_700_pthLT200/classvbf_1/datacard.txt \
                  of2j_gghlike_mjj350_700_pthLT200=${datacardDir}/hww2l2v_13TeV_of2j_gghlike_mjj350_700_pthLT200/classggh/datacard.txt \
                  of2j_toplike_mjj350_700_pthLT200=${datacardDir}/hww2l2v_13TeV_of2j_toplike_mjj350_700_pthLT200/classtop_1/datacard.txt \
                  of2j_wwlike_mjj350_700_pthLT200=${datacardDir}/hww2l2v_13TeV_of2j_wwlike_mjj350_700_pthLT200/classww/datacard.txt \
                  of2j_vbflike_mjjGT700_pthLT200=${datacardDir}/hww2l2v_13TeV_of2j_vbflike_mjjGT700_pthLT200/classvbf_2/datacard.txt \
                  of2j_gghlike_mjjGT700_pthLT200=${datacardDir}/hww2l2v_13TeV_of2j_gghlike_mjjGT700_pthLT200/classggh/datacard.txt \
                  of2j_toplike_mjjGT700_pthLT200=${datacardDir}/hww2l2v_13TeV_of2j_toplike_mjjGT700_pthLT200/classtop_2/datacard.txt \
                  of2j_wwlike_mjjGT700_pthLT200=${datacardDir}/hww2l2v_13TeV_of2j_wwlike_mjjGT700_pthLT200/classww/datacard.txt \
                  of2j_vbflike_mjjGT350_pthGT200=${datacardDir}/hww2l2v_13TeV_of2j_vbflike_mjjGT350_pthGT200/classvbf_3/datacard.txt \
                  of2j_gghlike_mjjGT350_pthGT200=${datacardDir}/hww2l2v_13TeV_of2j_gghlike_mjjGT350_pthGT200/classggh/datacard.txt \
                  of2j_toplike_mjjGT350_pthGT200=${datacardDir}/hww2l2v_13TeV_of2j_toplike_mjjGT350_pthGT200/classtop_1/datacard.txt \
                  of2j_wwlike_mjjGT350_pthGT200=${datacardDir}/hww2l2v_13TeV_of2j_wwlike_mjjGT350_pthGT200/classww/datacard.txt \
                  of_pth200_300=${datacardDir}/hww2l2v_13TeV_of_pth200_300/mllVSmth_pt2lt20/datacard.txt \
                  of_pth300_450=${datacardDir}/hww2l2v_13TeV_of_pth300_450/mllVSmth_4x3bins/datacard.txt \
                  of_pth450_650=${datacardDir}/hww2l2v_13TeV_of_pth450_650/mllVSmth_3x3bins/datacard.txt \
                  of_pthGT650=${datacardDir}/hww2l2v_13TeV_of_pthGT650/mllVSmth_2x2bins/datacard.txt \
                  of2j_pth0_60=${datacardDir}/hww2l2v_13TeV_of2j_pth0_60/mllVSmth_pt2lt20/datacard.txt \
                  of2j_pth60_120=${datacardDir}/hww2l2v_13TeV_of2j_pth60_120/mllVSmth_pt2lt20/datacard.txt \
                  of2j_pth120_200=${datacardDir}/hww2l2v_13TeV_of2j_pth120_200/mllVSmth_pt2lt20/datacard.txt \
                  of2j_mjj65_105=${datacardDir}/hww2l2v_13TeV_of2j_mjj65_105/mllVSmjj/datacard.txt \
                  of2j_top=${datacardDir}/hww2l2v_13TeV_top_2j/events/datacard.txt \
                  of2j_vbf_top=${datacardDir}/hww2l2v_13TeV_top_2j_vbf/events/datacard.txt \
                  of2j_vh_top=${datacardDir}/hww2l2v_13TeV_top_2j_vh/events/datacard.txt \
                  of2j_dytt=${datacardDir}/hww2l2v_13TeV_dytt_2j/events/datacard.txt \
                  of2j_vbf_dytt=${datacardDir}/hww2l2v_13TeV_dytt_2j_vbf/events/datacard.txt \
                  of2j_vh_dytt=${datacardDir}/hww2l2v_13TeV_dytt_2j_vh/events/datacard.txt \
                  >   ${outputDir}/Full2016_ggH_HTXS_Stage1p2_2j.txt
                  
                  #cp  ${outputDir}/Full2016_ggH_HTXS_Stage1p2_2j.txt ${outputDir}/Full2016_ggH_HTXS_Stage1p2_2j_orig.txt   
                  #python RemoveSample.py  ${outputDir}/Full2016_ggH_HTXS_Stage1p2_2j.txt  -o  ${outputDir}/Full2016_ggH_HTXS_Stage1p2_2j.txt -i inputRemoveAllSamplesBelowThreshold.py --threshold 0.0001

                  
                  #of0j_top=${datacardDir}/hww2l2v_13TeV_top_0j/events/datacard.txt \
                  #of1j_top=${datacardDir}/hww2l2v_13TeV_top_1j/events/datacard.txt \
                  #of0j_dytt=${datacardDir}/hww2l2v_13TeV_dytt_0j/events/datacard.txt \
                  #of1j_dytt=${datacardDir}/hww2l2v_13TeV_dytt_1j/events/datacard.txt \
                  #of0j_pth0_10=${datacardDir}/hww2l2v_13TeV_of0j_pth0_10/mllVSmth_pt2lt20/datacard.txt \
                  #of0j_pth10_200=${datacardDir}/hww2l2v_13TeV_of0j_pth10_200/mllVSmth_pt2lt20/datacard.txt \
                  #of1j_pth0_60=${datacardDir}/hww2l2v_13TeV_of1j_pth0_60/mllVSmth_pt2lt20/datacard.txt \
                  #of1j_pth60_120=${datacardDir}/hww2l2v_13TeV_of1j_pth60_120/mllVSmth_pt2lt20/datacard.txt \
                  #of1j_pth120_200=${datacardDir}/hww2l2v_13TeV_of1j_pth120_200/mllVSmth_pt2lt20/datacard.txt \



                  #of2j_vbflike_mjj200_350=${datacardDir}/hww2l2v_13TeV_of2j_vbflike_mjj200_350/classvbf_mjjlow/datacard.txt \
                  #of2j_gghlike_mjj200_350=${datacardDir}/hww2l2v_13TeV_of2j_gghlike_mjj200_350/classggh_mjjlow/datacard.txt \
                  #of2j_toplike_mjj200_350=${datacardDir}/hww2l2v_13TeV_of2j_toplike_mjj200_350/classtop_mjjlow/datacard.txt \
                  #of2j_wwlike_mjj200_350=${datacardDir}/hww2l2v_13TeV_of2j_wwlike_mjj200_350/classww_mjjlow/datacard.txt \
