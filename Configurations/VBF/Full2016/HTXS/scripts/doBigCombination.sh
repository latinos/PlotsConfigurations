#!/bin/bash

## FIXME this is where the Combine framework is installed
cd ~/work/Combine_autoMC/CMSSW_7_4_7/src/

eval `scramv1 runtime -sh`
cd -

## work directory
workdir=`pwd`

## output directory for storing the combined datacards
outputdir=`pwd`/combine
cd $outputdir

## input datacards directory
datacardDir=datacards

## variable used for the signal regions fit
variable=mll_optim

## combine the datacards
combineCards.py   of_vbftag_low=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j_vbf_lowmjj/${variable}/datacard.txt \
                  of_vbftag_high=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j_vbf_highmjj/${variable}/datacard.txt \
                  of_vbftag_Top=${workdir}/${datacardDir}/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt \
                  of_vbftag_DYtt=${workdir}/${datacardDir}/hww2l2v_13TeV_dytt_of2j_vbf/events/datacard.txt \
                  >   Full2016_vbf_HTXS_${variable}.txt
#remove harmless nuisances that give bosus error
echo "nuisance edit drop qqH_fwd of_vbftag_low CMS_scale_j" >> Full2016_vbf_HTXS_${variable}.txt
echo "nuisance edit drop ggH_fwd of_vbftag_low CMS_scale_j" >> Full2016_vbf_HTXS_${variable}.txt
echo "nuisance edit drop bbH_fwd of_vbftag_high CMS_scale_j" >> Full2016_vbf_HTXS_${variable}.txt
echo "nuisance edit drop WH_lep_fwd of_vbftag_high CMS_scale_j" >> Full2016_vbf_HTXS_${variable}.txt
echo "nuisance edit drop WH_lep_fwd of_vbftag_high CMS_scale_met" >> Full2016_vbf_HTXS_${variable}.txt
echo "nuisance edit drop WH_lep of_vbftag_high CMS_scale_j" >> Full2016_vbf_HTXS_${variable}.txt


## bbH_hww is completely negligible in the DYtt control region
## use multiSignalModel to scale with r all the signal processes and neglect bbH_hww in the of2j_DYtt channel
text2workspace.py Full2016_vbf_HTXS_${variable}.txt -o Full2016_vbf_HTXS_${variable}.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
--PO 'map=.*/ggH:r_ggH[1,-10,10]' \
--PO 'map=.*/ggH_fwd:r_ggH_fwd[1,-10,10]' \
--PO 'map=.*/qqH:r_qqH[1,-10,10]' \
--PO 'map=.*/qqH_fwd:r_qqH_fwd[1,-10,10]' \
--PO 'map=.*/VH_had:r_VH_had[1,-10,10]' \
--PO 'map=.*/VH_had_fwd:0' \
--PO 'map=.*/WH_lep:r_WH_lep[1,-10,10]' \
--PO 'map=.*/WH_lep_fwd:r_WH_lep_fwd[1,-10,10]' \
--PO 'map=.*/ZH_lep:0' \
--PO 'map=.*/ZH_lep_fwd:0' \
--PO 'map=.*/ggZH_lep:r_ggZH_lep[1,-10,10]' \
--PO 'map=.*/ggZH_lep_fwd:0' \
--PO 'map=.*/ttH:r_ttH[1,-10,10]' \
--PO 'map=.*/ttH_fwd:0' \
--PO 'map=.*/bbH:r_bbH[1,-10,10]' \
--PO 'map=.*/bbH_fwd:r_bbH_fwd[1,-10,10]' \
--PO 'map=of_vbftag_DYtt/VVV*:0' \
#--PO 'map=of2j_DYtt/qqH*:0' \
#--PO 'map=of2j_Top/ggZH*:0' \
#--PO 'map=of2j_Top/qqH*:0'
