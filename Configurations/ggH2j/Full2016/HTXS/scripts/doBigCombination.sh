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
variable=mllVSmth

## combine the datacards
combineCards.py   of_2j=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j/${variable}/datacard.txt \
                  of2j_Top=${workdir}/${datacardDir}/hww2l2v_13TeV_top_of2j/events/datacard.txt \
                  of2j_DYtt=${workdir}/${datacardDir}/hww2l2v_13TeV_dytt_of2j/events/datacard.txt \
                  >   Full2016_ggH2j_HTXS_${variable}.txt
echo "* autoMCStats 10 1" >> Full2016_ggH2j_HTXS_${variable}.txt
#remove harmless nuisances that give bosus error
echo "nuisance edit drop qqH_fwd of_2j CMS_PS" >> Full2016_ggH2j_HTXS_${variable}.txt
echo "nuisance edit drop qqH_fwd of_2j CMS_UE" >> Full2016_ggH2j_HTXS_${variable}.txt
echo "nuisance edit drop qqH of_2j CMS_PS" >> Full2016_ggH2j_HTXS_${variable}.txt
echo "nuisance edit drop qqH of_2j CMS_UE" >> Full2016_ggH2j_HTXS_${variable}.txt
echo "nuisance edit drop VH_had_fwd of_2j CMS_scale_j" >> Full2016_ggH2j_HTXS_${variable}.txt


## bbH_hww is completely negligible in the DYtt control region
## use multiSignalModel to scale with r all the signal processes and neglect bbH_hww in the of2j_DYtt channel
text2workspace.py Full2016_ggH2j_HTXS_${variable}.txt -o Full2016_ggH2j_HTXS_${variable}.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
--PO 'map=.*/ggH:r_ggH[1,-10,10]' \
--PO 'map=.*/ggH_fwd:r_ggH_fwd[1,-10,10]' \
--PO 'map=.*/qqH:r_qqH[1,-10,10]' \
--PO 'map=.*/qqH_fwd:r_qqH_fwd[1,-10,10]' \
--PO 'map=.*/VH_had:r_VH_had[1,-10,10]' \
--PO 'map=.*/VH_had_fwd:r_VH_had_fwd[1,-10,10]' \
--PO 'map=.*/WH_lep:r_WH_lep[1,-10,10]' \
--PO 'map=.*/WH_lep_fwd:r_WH_lep_fwd[1,-10,10]' \
--PO 'map=.*/ZH_lep:r_ZH_lep[1,-10,10]' \
--PO 'map=.*/ZH_lep_fwd:r_ZH_lep_fwd[1,-10,10]' \
--PO 'map=.*/ggZH_lep:r_ggZH_lep[1,-10,10]' \
--PO 'map=.*/ggZH_lep_fwd:r_ggZH_lep_fwd[1,-10,10]' \
--PO 'map=.*/ttH:r_ttH[1,-10,10]' \
--PO 'map=.*/ttH_fwd:r_ttH_fwd[1,-10,10]' \
--PO 'map=.*/bbH:r_bbH[1,-10,10]' \
--PO 'map=.*/bbH_fwd:r_bbH_fwd[1,-10,10]' \
--PO 'map=of2j_DYtt/bbH*:0' \
--PO 'map=of2j_DYtt/qqH*:0' \
--PO 'map=of2j_Top/ggZH*:0' \
--PO 'map=of2j_Top/qqH*:0'
