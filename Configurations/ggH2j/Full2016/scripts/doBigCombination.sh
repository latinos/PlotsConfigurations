#!/bin/bash

## FIXME this is where the Combine framework is installed
cd ~/Combine/CMSSW_7_4_7/src/

eval `scramv1 runtime -sh`
cd -

## work directory
workdir=`pwd`

## output directory for storing the combined datacards
outputdir=`pwd`/combine_9Aug
cd $outputdir

## input datacards directory
datacardDir=datacards_9Aug

## variable used for the signal regions fit
variable=mllVSmth

## combine the datacards
combineCards.py   of_2j=${workdir}/${datacardDir}/hww2l2v_13TeV_of2j/${variable}/datacard.txt \
                  of2j_Top=${workdir}/${datacardDir}/hww2l2v_13TeV_top_of2j/events/datacard.txt \
                  of2j_DYtt=${workdir}/${datacardDir}/hww2l2v_13TeV_dytt_of2j/events/datacard.txt \
                  >   Full2016_ggH2j_${variable}.txt
echo "* autoMCStats 10 1" >> Full2016_ggH2j_${variable}.txt

## bbH_hww is completely negligible in the DYtt control region
## use multiSignalModel to scale with r all the signal processes and neglect bbH_hww in the of2j_DYtt channel
text2workspace.py Full2016_ggH2j_${variable}.txt -o Full2016_ggH2j_${variable}.root -P HiggsAnalysis.CombinedLimit.PhysicsModel:multiSignalModel --PO 'map=.*/*hww*:r[1,-10,10]' --PO 'map=of2j_DYtt/bbH*:0'
