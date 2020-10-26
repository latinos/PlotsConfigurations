#!/bin/bash

# Load combine
cd $HOME/work/combine/CMSSW_10_2_13/src/
eval `scramv1 runtime -sh`
cd -

## work directory
workdir=$PWD

datacardDir=datacards

cd $workdir

mkdir -p Combination

combineCards.py   vbf_cut1=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j_DNN_vbf/classvbf/datacard.txt \
                  vbf_cut2=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j_DNN_top/classtop/datacard.txt \
                  vbf_cut3=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j_DNN_ww/classww/datacard.txt \
                  vbf_cut4=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j_DNN_ggh/classggh/datacard.txt \
                  DY=${workdir}/${datacardDir}/hww2l2v_13TeV_dytt_of2j/events/datacard.txt \
                  top=${workdir}/${datacardDir}/hww2l2v_13TeV_top_of2j/events/datacard.txt \
> Combination/class0_05_10_ext_try_multicut.txt

cp Combination/class0_05_10_ext_try_multicut.txt Combination/class0_05_10_ext_try_multicut_orig.txt 
python RemoveSample.py Combination/class0_05_10_ext_try_multicut.txt -o Combination/class0_05_10_ext_try_multicut.txt -i inputRemoveAllSamplesBelowThreshold.py --threshold 0.01


echo "nuisance edit drop Vg vbf_cut1 CMS_scale_JESEC2_2018"            >> Combination/class0_05_10_ext_try_multicut.txt
echo "nuisance edit drop Vg vbf_cut1 CMS_scale_JESRelativeBal"         >> Combination/class0_05_10_ext_try_multicut.txt
echo "nuisance edit drop DY vbf_cut4 CMS_scale_JESFlavorQCD"           >> Combination/class0_05_10_ext_try_multicut.txt
echo "nuisance edit drop DY vbf_cut4 CMS_scale_JESRelativeSample_2018" >> Combination/class0_05_10_ext_try_multicut.txt
echo "nuisance edit drop Vg vbf_cut4 CMS_scale_JESHF"                  >> Combination/class0_05_10_ext_try_multicut.txt
echo "nuisance edit drop Vg vbf_cut4 CMS_scale_JESHF_2018"             >> Combination/class0_05_10_ext_try_multicut.txt
echo "nuisance edit drop Vg vbf_cut4 CMS_scale_JESRelativeSample_2018" >> Combination/class0_05_10_ext_try_multicut.txt

echo "nuisance edit drop DY vbf_cut2 QCDscale_V"                       >> Combination/class0_05_10_ext_try_multicut.txt
echo "nuisance edit drop Vg vbf_cut3 CMS_btag_cferr1"                  >> Combination/class0_05_10_ext_try_multicut.txt
echo "nuisance edit drop Vg vbf_cut3 CMS_btag_cferr2"                  >> Combination/class0_05_10_ext_try_multicut.txt
echo "nuisance edit drop Vg vbf_cut3 CMS_btag_jes"                     >> Combination/class0_05_10_ext_try_multicut.txt
echo "nuisance edit drop Vg vbf_cut3 CMS_scale_JESRelativeBal"         >> Combination/class0_05_10_ext_try_multicut.txt
echo "nuisance edit drop Vg vbf_cut3 CMS_scale_JESRelativeSample_2018" >> Combination/class0_05_10_ext_try_multicut.txt
echo "nuisance edit drop Vg vbf_cut3 QCDscale_VV"                      >> Combination/class0_05_10_ext_try_multicut.txt


text2workspace.py Combination/class0_05_10_ext_try_multicut.txt -o Combination/class0_05_10_ext_try_multicut.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO 'map=.*/qqH_hww:r_vbf[1,-10,10]' --PO 'map=.*/ggH_hww:r_ggH[1,-10,10]'
