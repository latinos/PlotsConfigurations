#!/bin/bash
## FIXME this is where the Combine framework is installed
cd /afs/cern.ch/work/r/rceccare/VBF/CMSSW_10_2_13
eval `scramv1 runtime -sh`
cd -

## work directory
workdir=/afs/cern.ch/work/r/rceccare/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/VBF/Keras_2018_v6

datacardDir=datacards

cd $workdir


#combineCards.py   vbf=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j_vbf/class0/datacard.txt \
#                  DY=${workdir}/${datacardDir}/hww2l2v_13TeV_dytt_of2j/events/datacard.txt \
#                  top=${workdir}/${datacardDir}/hww2l2v_13TeV_top_of2j/events/datacard.txt \
#> class0_30_10_fdm_vbf.txt



combineCards.py   vbf_cut1=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j_DNN_vbf/classvbf/datacard.txt \
                  vbf_cut2=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j_DNN_top/classtop/datacard.txt \
                  vbf_cut3=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j_DNN_ww/classww/datacard.txt \
                  vbf_cut4=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j_DNN_ggh/classggh/datacard.txt \
                  DY=${workdir}/${datacardDir}/hww2l2v_13TeV_dytt_of2j/events/datacard.txt \
                  top=${workdir}/${datacardDir}/hww2l2v_13TeV_top_of2j/events/datacard.txt \
> class0_05_10_ext_try_multicut.txt

cp class0_05_10_ext_try_multicut.txt class0_05_10_ext_try_multicut_orig.txt 
python RemoveSample.py  class0_05_10_ext_try_multicut.txt -o  class0_05_10_ext_try_multicut.txt -i inputRemoveAllSamplesBelowThreshold.py --threshold 0.01


echo "nuisance edit drop Vg vbf_cut1 CMS_scale_JESEC2_2018" >> class0_05_10_ext_try_multicut.txt
echo "nuisance edit drop Vg vbf_cut1 CMS_scale_JESRelativeBal" >> class0_05_10_ext_try_multicut.txt
echo "nuisance edit drop DY vbf_cut4 CMS_scale_JESFlavorQCD" >> class0_05_10_ext_try_multicut.txt
echo "nuisance edit drop DY vbf_cut4 CMS_scale_JESRelativeSample_2018" >> class0_05_10_ext_try_multicut.txt
echo "nuisance edit drop Vg vbf_cut4 CMS_scale_JESHF" >> class0_05_10_ext_try_multicut.txt
echo "nuisance edit drop Vg vbf_cut4 CMS_scale_JESHF_2018" >> class0_05_10_ext_try_multicut.txt
echo "nuisance edit drop Vg vbf_cut4 CMS_scale_JESRelativeSample_2018" >> class0_05_10_ext_try_multicut.txt

echo "nuisance edit drop DY vbf_cut2 QCDscale_V" >> class0_05_10_ext_try_multicut.txt
echo "nuisance edit drop Vg vbf_cut3 CMS_btag_cferr1" >> class0_05_10_ext_try_multicut.txt
echo "nuisance edit drop Vg vbf_cut3 CMS_btag_cferr2" >> class0_05_10_ext_try_multicut.txt
echo "nuisance edit drop Vg vbf_cut3 CMS_btag_jes" >> class0_05_10_ext_try_multicut.txt
echo "nuisance edit drop Vg vbf_cut3 CMS_scale_JESRelativeBal" >> class0_05_10_ext_try_multicut.txt
echo "nuisance edit drop Vg vbf_cut3 CMS_scale_JESRelativeSample_2018" >> class0_05_10_ext_try_multicut.txt
echo "nuisance edit drop Vg vbf_cut3 QCDscale_VV" >> class0_05_10_ext_try_multicut.txt



text2workspace.py class0_05_10_ext_try_multicut.txt -o class0_05_10_ext_try_multicut.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO 'map=.*/qqH_hww:r_vbf[1,-10,10]' --PO 'map=.*/ggH_hww:r_ggH[1,-10,10]'
#


#combineCards.py   vbf_cut1=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j_DNN_vbf/classvbf/datacard.txt \
#                  vbf_cut2=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j_DNN_top/classtop/datacard.txt \
#                  vbf_cut3=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j_DNN_ggh/classggh/datacard.txt \
#                  DY=${workdir}/${datacardDir}/hww2l2v_13TeV_dytt_of2j/events/datacard.txt \
#                  top=${workdir}/${datacardDir}/hww2l2v_13TeV_top_of2j/events/datacard.txt \
#> class0_05_10_ext_try_multicut.txt
#
#cp class0_05_10_ext_try_multicut.txt class0_05_10_ext_try_multicut_orig.txt 
#python RemoveSample.py  class0_05_10_ext_try_multicut.txt -o  class0_05_10_ext_try_multicut.txt -i inputRemoveAllSamplesBelowThreshold.py --threshold 0.01
#
#
#echo "nuisance edit drop DY vbf_cut2 QCDscale_V" >> class0_05_10_ext_try_multicut.txt
#
#
#
#
#
#text2workspace.py class0_05_10_ext_try_multicut.txt -o class0_05_10_ext_try_multicut.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO 'map=.*/qqH_hww:r_vbf[1,-10,10]' --PO 'map=.*/ggH_hww:r_ggH[1,-10,10]'
#
