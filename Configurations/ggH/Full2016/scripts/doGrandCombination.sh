#!/bin/bash

## FIXME this is where the Combine framework is installed
cd ~/Combine/CMSSW_7_4_7/src/
eval `scramv1 runtime -sh`
cd -

## work directory
workdir=/afs/cern.ch/work/l/lviliani/LatinosFramework13TeV_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/ggH/Full2016/GrandCombination

cd $workdir

## combine the datacards
combineCards.py   ggHtag_0j=Full2016_0jet.txt \
                  ggHtag_1j=Full2016_1jet.txt \
                  ggHtag_2j=Full2016_ggH2j_mllVSmth.txt \
                  vbftag_2j=Full2016_VBF_mll_more.txt \
                  vhtag_2j=Full2016_VH2j_mll_more.txt \
                  >   Full2016.txt
#echo "* autoMCStats 10 1" >> Full2016.txt

text2workspace.py Full2016.txt -o Full2016.root  -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO 'map=.*/*hww*:r[1,-10,10]' 
#--PO 'map=.*vbf_2j/ggZH*:0' --PO 'map=.*vbf_2j/ZH*:0' --PO 'map=.*vbf_2j_Top/Vg:0' --PO 'map=.*vbf_2j_DYtt/VVV:0'

text2workspace.py Full2016.txt -o Full2016.categories.root  -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel \
                   --PO 'map=.*ggHtag_0j.*/.*H_.*:r_0jet[1,-5,5]' \
                   --PO 'map=.*ggHtag_1j.*/.*H_.*:r_1jet[1,-5,5]' \
                   --PO 'map=.*ggHtag_2j.*/.*H_.*:r_2jet[1,-5,5]' \
                   --PO 'map=.*vbftag_2j.*/.*H_.*:r_2jetvbf[1,-5,5]' \
                   --PO 'map=.*vhtag_2j.*/.*H_.*:r_2jetvh[1,-5,5]' 
