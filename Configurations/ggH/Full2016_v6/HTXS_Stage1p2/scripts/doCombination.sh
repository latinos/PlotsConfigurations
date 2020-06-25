#!/bin/bash

## FIXME this is where the Combine framework is installed
cd ~/Combine/CMSSW_10_2_13/src/
eval `scramv1 runtime -sh`
cd -

## work directory
outputDir=/afs/cern.ch/work/l/lviliani/LatinosFramework13TeV_FullRun2/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/ggH/Full2016_v6/HTXS_Stage1p2/Combination/

datacardDir=/afs/cern.ch/work/l/lviliani/LatinosFramework13TeV_FullRun2/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/ggH/Full2016_v6/HTXS_Stage1p2/datacards_ggH2016v6_STXS/

modDatacardDir=/afs/cern.ch/work/l/lviliani/LatinosFramework13TeV_FullRun2/CMSSW_10_6_4/src/ModificationDatacards/

## variable used for the signal regions fit
variable_pt2lt20=mllVSmth_pt2lt20
variable_pt2ge20=mllVSmth_pt2ge20

# combine the datacards
combineCards.py   of_0j_pth0_10=${datacardDir}/hww2l2v_13TeV_of0j_pth0_10/${variable_pt2lt20}/datacard.txt \
                  of_0j_pth10_200=${datacardDir}/hww2l2v_13TeV_of0j_pth10_200/${variable_pt2lt20}/datacard.txt \
                  of_1j_pth0_60=${datacardDir}/hww2l2v_13TeV_of1j_pth0_60/${variable_pt2lt20}/datacard.txt \
                  of_1j_pth60_120=${datacardDir}/hww2l2v_13TeV_of1j_pth60_120/${variable_pt2lt20}/datacard.txt \
                  of_1j_pth120_200=${datacardDir}/hww2l2v_13TeV_of1j_pth120_200/${variable_pt2lt20}/datacard.txt \
                  of0j_Top=${datacardDir}/hww2l2v_13TeV_top_0j/events/datacard.txt \
                  of1j_Top=${datacardDir}/hww2l2v_13TeV_top_1j/events/datacard.txt \
                  of0j_DYtt=${datacardDir}/hww2l2v_13TeV_dytt_0j/events/datacard.txt \
                  of1j_DYtt=${datacardDir}/hww2l2v_13TeV_dytt_0j/events/datacard.txt \
                  >   ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt

cp ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt ${outputDir}/Full2016_ggH_HTXS_Stage1p2_orig.txt
python ${modDatacardDir}/RemoveSample.py ${outputDir}/Full2016_ggH_HTXS_Stage1p2_orig.txt -o ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt -i ${modDatacardDir}/inputRemoveAllSamplesBelowThreshold.py --threshold 0.01

sed -i "s/0.000\//0.001\//g" ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt
sed -i "s/\/0.000/\/0.001/g" ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt


#python ${modDatacardDir}/PruneDatacard.py -d ${outputDir}/Full2016_ggH_HTXS_Stage1p2.txt -o ${outputDir}/Full2016_ggH_HTXS_Stage1p2.pruned.txt -i inputNuisancesToPrune.py --suppressFluctuationError=1 --suppressNegative=1 -t 0.00001
