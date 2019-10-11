#!/bin/bash
## FIXME this is where the Combine framework is installed
cd /afs/cern.ch/work/r/rceccare/VBF/CMSSW_10_2_13
eval `scramv1 runtime -sh`
cd -

## work directory
workdir=/afs/cern.ch/work/r/rceccare/VBF/CMSSW_10_2_15_patch2/src/PlotsConfigurations/Configurations/VBF/Keras_2016

datacardDir=datacards

cd $workdir


combineCards.py   vbf_cut1=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j_DNN_vbf/class0/datacard.txt \
                  vbf_cut2=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j_DNN_top/class1/datacard.txt \
                  vbf_cut3=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j_DNN_ww/class2/datacard.txt \
                  vbf_cut4=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j_DNN_ggh/class3/datacard.txt \
                  DY=${workdir}/${datacardDir}/hww2l2v_13TeV_dytt_of2j/events/datacard.txt \
                  top=${workdir}/${datacardDir}/hww2l2v_13TeV_top_of2j/events/datacard.txt \
> class0_01_10_multicut.txt

echo "nuisance edit drop ttH_hww vbf_cut3 CMS_btag_cferr1" >> class0_01_10_multicut.txt
echo "nuisance edit drop ttH_hww vbf_cut3 CMS_btag_cferr2" >> class0_01_10_multicut.txt
echo "nuisance edit drop ttH_hww vbf_cut3 CMS_btag_hf" >> class0_01_10_multicut.txt
echo "nuisance edit drop ttH_hww vbf_cut3 CMS_btag_lf" >> class0_01_10_multicut.txt
echo "nuisance edit drop ttH_hww vbf_cut3 CMS_btag_hfstats1_2016" >> class0_01_10_multicut.txt 
echo "nuisance edit drop ttH_hww vbf_cut3 CMS_btag_hfstats2_2016" >> class0_01_10_multicut.txt
echo "nuisance edit drop ttH_hww vbf_cut3 CMS_btag_lfstats1_2016" >> class0_01_10_multicut.txt
echo "nuisance edit drop ttH_hww vbf_cut3 CMS_btag_lfstats2_2016" >> class0_01_10_multicut.txt
echo "nuisance edit drop ttH_hww vbf_cut3 CMS_btag_jes" >> class0_01_10_multicut.txt
echo "nuisance edit drop ttH_hww vbf_cut3 CMS_eff_e_2016" >> class0_01_10_multicut.txt
echo "nuisance edit drop ttH_hww vbf_cut3 CMS_eff_m_2016" >> class0_01_10_multicut.txt
echo "nuisance edit drop ttH_hww vbf_cut3 CMS_eff_hwwtrigger_2016" >> class0_01_10_multicut.txt
echo "nuisance edit drop ttH_hww vbf_cut3 CMS_eff_prefiring_2016" >> class0_01_10_multicut.txt




text2workspace.py class0_01_10_multicut.txt -o class0_01_10_multicut.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO 'map=.*/qqH_hww:r_vbf[1,-10,10]' --PO 'map=.*/ggH_hww:r_ggH[1,-10,10]'

#combineCards.py   vbf_cuts_1=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j_DNN_vbf_cut_1/class0/datacard.txt \
#                  vbf_cuts_2=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j_DNN_vbf_cut_2/class0/datacard.txt \
#                  vbf_cuts_3=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j_DNN_vbf_cut_3/class0/datacard.txt \
#                  vbf_cuts_4=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j_DNN_vbf_cut_4/class0/datacard.txt \
#                  DY=${workdir}/${datacardDir}/hww2l2v_13TeV_dytt_of2j/events/datacard.txt \
#                  top=${workdir}/${datacardDir}/hww2l2v_13TeV_top_of2j/events/datacard.txt \
#> class0_01_10_cuts.txt
#
#echo "nuisance edit drop ttH_hww vbf_cuts_1 CMS_btag_cferr1" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_1 CMS_btag_cferr2" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_1 CMS_btag_hf" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_1 CMS_btag_lf" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_1 CMS_btag_hfstats1_2016" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_1 CMS_btag_hfstats2_2016" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_1 CMS_btag_lfstats1_2016" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_1 CMS_btag_lfstats2_2016" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_1 CMS_btag_jes" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_1 CMS_eff_e_2016" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_1 CMS_eff_m_2016" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_1 CMS_eff_hwwtrigger_2016" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_1 CMS_eff_prefiring_2016" >> class0_01_10_cuts.txt
#
#
#echo "nuisance edit drop ttH_hww vbf_cuts_2 CMS_btag_cferr1" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_2 CMS_btag_cferr2" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_2 CMS_btag_hf" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_2 CMS_btag_lf" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_2 CMS_btag_hfstats1_2016" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_2 CMS_btag_hfstats2_2016" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_2 CMS_btag_lfstats1_2016" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_2 CMS_btag_lfstats2_2016" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_2 CMS_btag_jes" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_2 CMS_eff_e_2016" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_2 CMS_eff_m_2016" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_2 CMS_eff_hwwtrigger_2016" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_2 CMS_eff_prefiring_2016" >> class0_01_10_cuts.txt
#
#
#echo "nuisance edit drop ttH_hww vbf_cuts_3 CMS_btag_cferr1" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_3 CMS_btag_cferr2" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_3 CMS_btag_hf" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_3 CMS_btag_lf" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_3 CMS_btag_hfstats1_2016" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_3 CMS_btag_hfstats2_2016" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_3 CMS_btag_lfstats1_2016" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_3 CMS_btag_lfstats2_2016" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_3 CMS_btag_jes" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_3 CMS_eff_e_2016" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_3 CMS_eff_m_2016" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_3 CMS_eff_hwwtrigger_2016" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_3 CMS_eff_prefiring_2016" >> class0_01_10_cuts.txt
#
#
#echo "nuisance edit drop ttH_hww vbf_cuts_4 CMS_btag_cferr1" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_4 CMS_btag_cferr2" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_4 CMS_btag_hf" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_4 CMS_btag_lf" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_4 CMS_btag_hfstats1_2016" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_4 CMS_btag_hfstats2_2016" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_4 CMS_btag_lfstats1_2016" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_4 CMS_btag_lfstats2_2016" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_4 CMS_btag_jes" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_4 CMS_eff_e_2016" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_4 CMS_eff_m_2016" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_4 CMS_eff_hwwtrigger_2016" >> class0_01_10_cuts.txt
#echo "nuisance edit drop ttH_hww vbf_cuts_4 CMS_eff_prefiring_2016" >> class0_01_10_cuts.txt
#
#
#text2workspace.py class0_01_10_cuts.txt -o class0_01_10_cuts.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO 'map=.*/qqH_hww:r_vbf[1,-10,10]' --PO 'map=.*/ggH_hww:r_ggH[1,-10,10]'


#combineCards.py   vbf=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j_vbf/class0/datacard.txt \
#                  DY=${workdir}/${datacardDir}/hww2l2v_13TeV_dytt_of2j/events/datacard.txt \
#                  top=${workdir}/${datacardDir}/hww2l2v_13TeV_top_of2j/events/datacard.txt \
#> class0_09_09.txt

#text2workspace.py class0_09_09.txt -o class0_09_09.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO 'map=.*/qqH_hww:r_vbf[1,-10,10]' --PO 'map=.*/ggH_hww:r_ggH[1,-10,10]'

