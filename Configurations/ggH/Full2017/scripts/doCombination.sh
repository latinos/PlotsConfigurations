#!/bin/bash

## FIXME this is where the Combine framework is installed
cd ~/Combine/CMSSW_8_1_0/src/
eval `scramv1 runtime -sh`
cd -

## work directory
outputDir=/afs/cern.ch/work/l/lviliani/LatinosFramework13TeV_FullRun2/CMSSW_9_4_12/src/PlotsConfigurations/Configurations/ggH/Full2017/Combination/

datacardDir=/afs/cern.ch/work/l/lviliani/LatinosFramework13TeV_FullRun2/CMSSW_9_4_12/src/PlotsConfigurations/Configurations/ggH/Full2017/datacardsggH_11Apr/

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
                  of0j_Top=${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt \
                  of0j_DYtt=${datacardDir}/hww2l2v_13TeV_dytt_of0j/events/datacard.txt \
                  >   ${outputDir}/Full2017_0jet_ggH.txt

combineCards.py   em_mp_1j_pt2lt20=${datacardDir}/hww2l2v_13TeV_em_mp_1j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  me_mp_1j_pt2lt20=${datacardDir}/hww2l2v_13TeV_me_mp_1j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  em_pm_1j_pt2lt20=${datacardDir}/hww2l2v_13TeV_em_pm_1j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  me_pm_1j_pt2lt20=${datacardDir}/hww2l2v_13TeV_me_pm_1j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  em_mp_1j_pt2ge20=${datacardDir}/hww2l2v_13TeV_em_mp_1j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  me_mp_1j_pt2ge20=${datacardDir}/hww2l2v_13TeV_me_mp_1j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  em_pm_1j_pt2ge20=${datacardDir}/hww2l2v_13TeV_em_pm_1j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  me_pm_1j_pt2ge20=${datacardDir}/hww2l2v_13TeV_me_pm_1j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  of1j_Top=${datacardDir}/hww2l2v_13TeV_top_of1j/events/datacard.txt \
                  of1j_DYtt=${datacardDir}/hww2l2v_13TeV_dytt_of1j/events/datacard.txt \
                  >   ${outputDir}/Full2017_1jet_ggH.txt

combineCards.py   of2j_2017=${datacardDir}/hww2l2v_13TeV_of2j/${variable_ggh2j}/datacard.txt \
                  of2j_Top_2017=${datacardDir}/hww2l2v_13TeV_top_of2j/events/datacard.txt \
                  of2j_DYtt_2017=${datacardDir}/hww2l2v_13TeV_dytt_of2j/events/datacard.txt \
                  >   ${outputDir}/Full2017_2jet_ggH.txt

cd ${outputDir}

combineCards.py   ggHtag_of0j_2017=Full2017_0jet_ggH.txt \
                  ggHtag_of1j_2017=Full2017_1jet_ggH.txt \
                  ggHtag_of2j_2017=Full2017_2jet_ggH.txt \
                  >   Full2017_ggH.txt

#text2workspace.py Full2017_ggH.txt -o Full2017_ggH.root

text2workspace.py Full2017_ggH.txt -o Full2017_ggH.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose --PO 'map=.*/.*H_.*:r[1,-10,10]'

text2workspace.py Full2017_ggH.txt -o Full2017_ggH.categories.root  -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                   --PO 'map=.*ggHtag_of0j_2017.*/.*H_.*:r_of0jet_2017[1,-5,5]' \
                   --PO 'map=.*ggHtag_of1j_2017.*/.*H_.*:r_of1jet_2017[1,-5,5]' \
                   --PO 'map=.*ggHtag_of2j_2017.*/.*H_.*:r_of2jet_2017[1,-5,5]' 

text2workspace.py Full2017_ggH.txt -o Full2016.muVmuF.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
                   --PO 'map=.*/ggH_hww:muGGH[1,-1,3]' \
                   --PO 'map=.*/ggZH_hww:muGGH' \
                   --PO 'map=.*/ggH_htt:muGGH' \
                   --PO 'map=.*/bbH_hww:muGGH' \
                   --PO 'map=.*/ttH_hww:muGGH' \
                   --PO 'map=.*/qqH_hww:muVBF[1,-3,6]'  \
                   --PO 'map=.*/qqH_htt:muVBF'  \
                   --PO 'map=.*/WH_hww:muVBF'  \
                   --PO 'map=.*/WH_htt:muVBF' \
                   --PO 'map=.*/ZH_hww:muVBF' \
                   --PO 'map=.*/ZH_htt:muVBF'
                    

