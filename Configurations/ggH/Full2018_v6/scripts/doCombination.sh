#!/bin/bash

## FIXME this is where the Combine framework is installed
cd ~/Combine/CMSSW_10_2_13/src/
eval `scramv1 runtime -sh`
cd -

## work directory
outputDir=/afs/cern.ch/work/l/lviliani/LatinosFramework13TeV_FullRun2_branchmaps/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/ggH/Full2018_v6/Combination/

if [[ ! -e $outputDir ]]; then
    mkdir $outputDir
fi

datacardDir=/afs/cern.ch/work/l/lviliani/LatinosFramework13TeV_FullRun2_branchmaps/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/ggH/Full2018_v6/datacards/

## git clone git@github.com:amassiro/ModificationDatacards.git
modDatacardDir=/afs/cern.ch/work/l/lviliani/LatinosFramework13TeV_FullRun2_branchmaps/CMSSW_10_6_4/src/ModificationDatacards/

## variable used for the signal regions fit
variable_pt2lt20=mllVSmth_pt2lt20
variable_pt2ge20=mllVSmth_pt2ge20

variable_ggh2j=mllVSmth_pt2lt20

# combine the datacards
combineCards.py   em_mp_0j_pt2lt20=${datacardDir}/hww2l2v_13TeV_em_mp_0j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  me_mp_0j_pt2lt20=${datacardDir}/hww2l2v_13TeV_me_mp_0j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  em_pm_0j_pt2lt20=${datacardDir}/hww2l2v_13TeV_em_pm_0j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  me_pm_0j_pt2lt20=${datacardDir}/hww2l2v_13TeV_me_pm_0j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  em_mp_0j_pt2ge20=${datacardDir}/hww2l2v_13TeV_em_mp_0j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  me_mp_0j_pt2ge20=${datacardDir}/hww2l2v_13TeV_me_mp_0j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  em_pm_0j_pt2ge20=${datacardDir}/hww2l2v_13TeV_em_pm_0j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  me_pm_0j_pt2ge20=${datacardDir}/hww2l2v_13TeV_me_pm_0j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  of0j_Top=${datacardDir}/hww2l2v_13TeV_top_0j/events/datacard.txt \
                  of0j_DYtt=${datacardDir}/hww2l2v_13TeV_dytt_0j/events/datacard.txt \
                  >   ${outputDir}/Full2018_0jet_ggH.txt

cp ${outputDir}/Full2018_0jet_ggH.txt ${outputDir}/Full2018_0jet_ggH_orig.txt
python ${modDatacardDir}/RemoveSample.py ${outputDir}/Full2018_0jet_ggH_orig.txt -o ${outputDir}/Full2018_0jet_ggH.txt -i ${modDatacardDir}/inputRemoveAllSamplesBelowThreshold.py --threshold 0.01

combineCards.py   em_mp_1j_pt2lt20=${datacardDir}/hww2l2v_13TeV_em_mp_1j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  me_mp_1j_pt2lt20=${datacardDir}/hww2l2v_13TeV_me_mp_1j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  em_pm_1j_pt2lt20=${datacardDir}/hww2l2v_13TeV_em_pm_1j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  me_pm_1j_pt2lt20=${datacardDir}/hww2l2v_13TeV_me_pm_1j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  em_mp_1j_pt2ge20=${datacardDir}/hww2l2v_13TeV_em_mp_1j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  me_mp_1j_pt2ge20=${datacardDir}/hww2l2v_13TeV_me_mp_1j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  em_pm_1j_pt2ge20=${datacardDir}/hww2l2v_13TeV_em_pm_1j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  me_pm_1j_pt2ge20=${datacardDir}/hww2l2v_13TeV_me_pm_1j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  of1j_Top=${datacardDir}/hww2l2v_13TeV_top_1j/events/datacard.txt \
                  of1j_DYtt=${datacardDir}/hww2l2v_13TeV_dytt_1j/events/datacard.txt \
                  >   ${outputDir}/Full2018_1jet_ggH.txt

cp ${outputDir}/Full2018_1jet_ggH.txt ${outputDir}/Full2018_1jet_ggH_orig.txt
python ${modDatacardDir}/RemoveSample.py ${outputDir}/Full2018_1jet_ggH_orig.txt -o ${outputDir}/Full2018_1jet_ggH.txt -i ${modDatacardDir}/inputRemoveAllSamplesBelowThreshold.py --threshold 0.01

combineCards.py   of2j_2018=${datacardDir}/hww2l2v_13TeV_2j/${variable_ggh2j}/datacard.txt \
                  of2j_Top_2018=${datacardDir}/hww2l2v_13TeV_top_2j/events/datacard.txt \
                  of2j_DYtt_2018=${datacardDir}/hww2l2v_13TeV_dytt_2j/events/datacard.txt \
                  >   ${outputDir}/Full2018_2jet_ggH.txt

cp ${outputDir}/Full2018_2jet_ggH.txt ${outputDir}/Full2018_2jet_ggH_orig.txt
python ${modDatacardDir}/RemoveSample.py ${outputDir}/Full2018_2jet_ggH_orig.txt -o ${outputDir}/Full2018_2jet_ggH.txt -i ${modDatacardDir}/inputRemoveAllSamplesBelowThreshold.py --threshold 0.01

cd ${outputDir}

combineCards.py   ggHtag_of0j_2018=Full2018_0jet_ggH.txt \
                  ggHtag_of1j_2018=Full2018_1jet_ggH.txt \
                  ggHtag_of2j_2018=Full2018_2jet_ggH.txt \
                  >   Full2018_ggH.txt

#text2workspace.py Full2018_ggH.txt -o Full2018_ggH.root

text2workspace.py Full2018_ggH.txt -o Full2018_ggH.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose --PO 'map=.*/.*H_.*:r[1,-10,10]'

text2workspace.py Full2018_ggH.txt -o Full2018_ggH.categories.root  -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                   --PO 'map=.*ggHtag_of0j_2018.*/.*H_.*:r_of0jet_2018[1,-5,5]' \
                   --PO 'map=.*ggHtag_of1j_2018.*/.*H_.*:r_of1jet_2018[1,-5,5]' \
                   --PO 'map=.*ggHtag_of2j_2018.*/.*H_.*:r_of2jet_2018[1,-5,5]' 

#text2workspace.py Full2018_ggH.txt -o Full2018.muVmuF.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
#                   --PO 'map=.*/ggH_hww:muGGH[1,-1,3]' \
#                   --PO 'map=.*/ggZH_hww:muGGH' \
#                   --PO 'map=.*/ggH_htt:muGGH' \
#                   --PO 'map=.*/bbH_hww:muGGH' \
#                   --PO 'map=.*/ttH_hww:muGGH' \
#                   --PO 'map=.*/qqH_hww:muVBF[1,-3,6]'  \
#                   --PO 'map=.*/qqH_htt:muVBF'  \
#                   --PO 'map=.*/WH_hww:muVBF'  \
#                   --PO 'map=.*/WH_htt:muVBF' \
#                   --PO 'map=.*/ZH_hww:muVBF' \
#                   --PO 'map=.*/ZH_htt:muVBF'
#                    

