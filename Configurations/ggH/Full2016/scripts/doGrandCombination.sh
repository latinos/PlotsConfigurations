#!/bin/bash

## FIXME this is where the Combine framework is installed
cd ~/Combine/CMSSW_8_1_0/src/
eval `scramv1 runtime -sh`
cd -

## work directory
workdir=/afs/cern.ch/work/l/lviliani/LatinosFramework13TeV_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/ggH/Full2016/GrandCombination_3Dec

datacardDir=datacards

cd $workdir

## variable used for the signal regions fit
variable_pt2lt20=mllVSmth_pt2lt20
variable_pt2ge20=mllVSmth_pt2ge20

variable_ggh2j=mllVSmth

variable_vbf=mll_optim

variable_vh2j=mll_more
## combine the datacards

combineCards.py   em_mp_0j_pt2lt20=${workdir}/${datacardDir}/hww2l2v_13TeV_em_mp_0j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  me_mp_0j_pt2lt20=${workdir}/${datacardDir}/hww2l2v_13TeV_me_mp_0j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  em_pm_0j_pt2lt20=${workdir}/${datacardDir}/hww2l2v_13TeV_em_pm_0j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  me_pm_0j_pt2lt20=${workdir}/${datacardDir}/hww2l2v_13TeV_me_pm_0j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  em_mp_0j_pt2ge20=${workdir}/${datacardDir}/hww2l2v_13TeV_em_mp_0j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  me_mp_0j_pt2ge20=${workdir}/${datacardDir}/hww2l2v_13TeV_me_mp_0j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  em_pm_0j_pt2ge20=${workdir}/${datacardDir}/hww2l2v_13TeV_em_pm_0j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  me_pm_0j_pt2ge20=${workdir}/${datacardDir}/hww2l2v_13TeV_me_pm_0j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  of0j_Top=${workdir}/${datacardDir}/hww2l2v_13TeV_top_of0j/events/datacard.txt \
                  of0j_DYtt=${workdir}/${datacardDir}/hww2l2v_13TeV_dytt_of0j/events/datacard.txt \
                  >   Full2016_0jet_ggH.txt

combineCards.py   em_mp_1j_pt2lt20=${workdir}/${datacardDir}/hww2l2v_13TeV_em_mp_1j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  me_mp_1j_pt2lt20=${workdir}/${datacardDir}/hww2l2v_13TeV_me_mp_1j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  em_pm_1j_pt2lt20=${workdir}/${datacardDir}/hww2l2v_13TeV_em_pm_1j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  me_pm_1j_pt2lt20=${workdir}/${datacardDir}/hww2l2v_13TeV_me_pm_1j_pt2lt20/${variable_pt2lt20}/datacard.txt \
                  em_mp_1j_pt2ge20=${workdir}/${datacardDir}/hww2l2v_13TeV_em_mp_1j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  me_mp_1j_pt2ge20=${workdir}/${datacardDir}/hww2l2v_13TeV_me_mp_1j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  em_pm_1j_pt2ge20=${workdir}/${datacardDir}/hww2l2v_13TeV_em_pm_1j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  me_pm_1j_pt2ge20=${workdir}/${datacardDir}/hww2l2v_13TeV_me_pm_1j_pt2ge20/${variable_pt2ge20}/datacard.txt \
                  of1j_Top=${workdir}/${datacardDir}/hww2l2v_13TeV_top_of1j/events/datacard.txt \
                  of1j_DYtt=${workdir}/${datacardDir}/hww2l2v_13TeV_dytt_of1j/events/datacard.txt \
                  >   Full2016_1jet_ggH.txt

combineCards.py   of_2j=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j/${variable_ggh2j}/datacard.txt \
                  of2j_Top=${workdir}/${datacardDir}/hww2l2v_13TeV_top_of2j/events/datacard.txt \
                  of2j_DYtt=${workdir}/${datacardDir}/hww2l2v_13TeV_dytt_of2j/events/datacard.txt \
                  >   Full2016_2jet_ggH.txt

combineCards.py   vbf_2j_highmjj=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j_vbf_highmjj/${variable_vbf}/datacard.txt \
                  vbf_2j_lowmjj=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j_vbf_lowmjj/${variable_vbf}/datacard.txt \
                  vbf_2j_Top=${workdir}/${datacardDir}/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt \
                  vbf_2j_DYtt=${workdir}/${datacardDir}/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt \
                  >   Full2016_2jet_VBF.txt

combineCards.py   vh_2j=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j_vh2j/${variable_vh2j}/datacard.txt \
                  vh2j_Top=${workdir}/${datacardDir}/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt \
                  vh2j_DYtt=${workdir}/${datacardDir}/hww2l2v_13TeV_dytt_of2j_vh2j/events/datacard.txt \
                  >   Full2016_2jet_VH2j.txt

combineCards.py   sf_0j_ee_pt2lt20=${workdir}/${datacardDir}/hww2l2v_13TeV_0jee_pt2lt20/events/datacard.txt \
                  sf_0j_ee_pt2ge20=${workdir}/${datacardDir}/hww2l2v_13TeV_0jee_pt2ge20/events/datacard.txt \
                  sf_0j_ee_WW=${workdir}/${datacardDir}/hww2l2v_13TeV_WW_0jee/events/datacard.txt \
                  sf_0j_ee_Top=${workdir}/${datacardDir}/hww2l2v_13TeV_top_0jee/events/datacard.txt \
                  sf_0j_mm_pt2lt20=${workdir}/${datacardDir}/hww2l2v_13TeV_0jmm_pt2lt20/events/datacard.txt \
                  sf_0j_mm_pt2ge20=${workdir}/${datacardDir}/hww2l2v_13TeV_0jmm_pt2ge20/events/datacard.txt \
                  sf_0j_mm_WW=${workdir}/${datacardDir}/hww2l2v_13TeV_WW_0jmm/events/datacard.txt \
                  sf_0j_mm_Top=${workdir}/${datacardDir}/hww2l2v_13TeV_top_0jmm/events/datacard.txt \
                  >   Full2016_0jet_SF_ggH.txt

combineCards.py   sf_1j_ee=${workdir}/${datacardDir}/hww2l2v_13TeV_1jee/events/datacard.txt \
                  sf_1j_ee_WW=${workdir}/${datacardDir}/hww2l2v_13TeV_WW_1jee/events/datacard.txt \
                  sf_1j_mm=${workdir}/${datacardDir}/hww2l2v_13TeV_1jmm/events/datacard.txt \
                  sf_1j_mm_WW=${workdir}/${datacardDir}/hww2l2v_13TeV_WW_1jmm/events/datacard.txt \
                  sf_1j_Top=${workdir}/${datacardDir}/hww2l2v_13TeV_top_1jsf/events/datacard.txt \
                  >   Full2016_1jet_SF_ggH.txt

combineCards.py   wh3l_sssf=${workdir}/${datacardDir}/wh3l_13TeV_sssf/drllmin3l_sssf/datacard.txt.pruned.txt \
                  wh3l_13TeV_ossf=${workdir}/${datacardDir}/wh3l_13TeV_ossf/drllmin3l/datacard.txt.pruned.txt \
                  wh3l_wz_13TeV=${workdir}/${datacardDir}/wh3l_wz_13TeV/events/datacard.txt.pruned.txt \
                  wh3l_zg_13TeV=${workdir}/${datacardDir}/wh3l_zg_13TeV/events/datacard.txt.pruned.txt \
                  > Full2016_WH3l.txt

combineCards.py   zh4l_XSF_13TeV=${workdir}/${datacardDir}/XSFSignalRegion/datacard.txt.pruned.txt \
                  zh4l_XDF_13TeV=${workdir}/${datacardDir}/XDFSignalRegion/datacard.txt.pruned.txt \
                  zh4l_ZZ_13TeV=${workdir}/${datacardDir}/ZZControlRegion/datacard.txt.pruned.txt \
                  > Full2016_ZH4l.txt



## combine the datacards
combineCards.py   ggHtag_of0j=Full2016_0jet_ggH.txt \
                  ggHtag_of1j=Full2016_1jet_ggH.txt \
                  ggHtag_of2j=Full2016_2jet_ggH.txt \
                  ggHtag_sf0j=Full2016_0jet_SF_ggH.txt \
                  ggHtag_sf1j=Full2016_1jet_SF_ggH.txt \
                  vbftag_of2j=Full2016_2jet_VBF.txt \
                  vhtag_of2j=Full2016_2jet_VH2j.txt \
                  wh3ltag=Full2016_WH3l.txt \
                  zh4ltag=Full2016_ZH4l.txt \
                  >   Full2016.txt

bsub -q 8nh "text2workspace.py ${workdir}/Full2016_0jet_ggH.txt -o ${workdir}/Full2016_0jet_ggH.root"
bsub -q 8nh "text2workspace.py ${workdir}/Full2016_1jet_ggH.txt -o ${workdir}/Full2016_1jet_ggH.root"
bsub -q 8nh "text2workspace.py ${workdir}/Full2016_2jet_ggH.txt -o ${workdir}/Full2016_2jet_ggH.root"
bsub -q 8nh "text2workspace.py ${workdir}/Full2016_2jet_VBF.txt -o ${workdir}/Full2016_2jet_VBF.root"
#bsub -q 8nh "text2workspace.py ${workdir}/Full2016_2jet_VBF.txt -o ${workdir}/Full2016_2jet_VBF.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose --PO 'map=.*/.*H_.*:r[1,-10,10]' --PO 'map=.*vbf_2j/ggZH*:0' --PO 'map=.*vbf_2j/ZH*:0' --PO 'map=.*vbf_2j_Top/Vg:0' --PO 'map=.*vbf_2j_DYtt/VVV:0'"
bsub -q 8nh "text2workspace.py ${workdir}/Full2016_2jet_VH2j.txt -o ${workdir}/Full2016_2jet_VH2j.root"
bsub -q 8nh "text2workspace.py ${workdir}/Full2016_0jet_SF_ggH.txt -o ${workdir}/Full2016_0jet_SF_ggH.root"
bsub -q 8nh "text2workspace.py ${workdir}/Full2016_1jet_SF_ggH.txt -o ${workdir}/Full2016_1jet_SF_ggH.root"
bsub -q 8nh "text2workspace.py ${workdir}/Full2016_WH3l.txt -o ${workdir}/Full2016_WH3l.root"
bsub -q 8nh "text2workspace.py ${workdir}/Full2016_ZH4l.txt -o ${workdir}/Full2016_ZH4l.root"

bsub -q 8nh "text2workspace.py ${workdir}/Full2016.txt -o ${workdir}/Full2016.root"
#bsub -q 8nh "text2workspace.py ${workdir}/Full2016.txt -o ${workdir}/Full2016.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose --PO 'map=.*/.*H_.*:r[1,-10,10]' --PO 'map=.*vbf_2j/ggZH*:0' --PO 'map=.*vbf_2j/ZH*:0' --PO 'map=.*vbf_2j_Top/Vg:0' --PO 'map=.*vbf_2j_DYtt/VVV:0'"


bsub -q 8nh "text2workspace.py ${workdir}/Full2016.txt -o ${workdir}/Full2016.categories.root  -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                   --PO 'map=.*ggHtag_of0j.*/.*H_.*:r_of0jet[1,-5,5]' \
                   --PO 'map=.*ggHtag_of1j.*/.*H_.*:r_of1jet[1,-5,5]' \
                   --PO 'map=.*ggHtag_sf0j.*/.*H_.*:r_sf0jet[1,-5,5]' \
                   --PO 'map=.*ggHtag_sf1j.*/.*H_.*:r_sf1jet[1,-5,5]' \
                   --PO 'map=.*ggHtag_of2j.*/.*H_.*:r_of2jet[1,-5,5]' \
                   --PO 'map=.*vbftag_of2j.*/.*H_.*:r_of2jetvbf[1,-5,5]' \
                   --PO 'map=.*vhtag_of2j.*/.*H_.*:r_of2jetvh[1,-5,5]' \
                   --PO 'map=.*wh3ltag.*/.*H_.*:r_wh3l[1,-5,5]' \
                   --PO 'map=.*zh4ltag.*/.*H_.*:r_zh4l[1,-5,5]'" 

#                   --PO 'map=.*vbf_2j/ggZH*:0' \
#                   --PO 'map=.*vbf_2j/ZH*:0' \
#                   --PO 'map=.*vbf_2j_Top/Vg:0' \
#                   --PO 'map=.*vbf_2j_DYtt/VVV:0'"

bsub -q 8nh "text2workspace.py ${workdir}/Full2016.txt -o ${workdir}/Full2016.kVkF.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO verbose  \
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
                   --PO 'map=.*/ZH_htt:muVBF'"

#                   --PO 'map=.*vbf_2j/ggZH*:0' \
#                   --PO 'map=.*vbf_2j/ZH*:0' \
#                   --PO 'map=.*vbf_2j_Top/Vg:0' \
#                   --PO 'map=.*vbf_2j_DYtt/VVV:0'"
