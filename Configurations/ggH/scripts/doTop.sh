#!/bin/bash

### need to setup combine before

### update combined datacard path
# inputCardCOMB="/afs/cern.ch/user/a/amassiro/public/xLatinos/Moriond2016-28Feb/hww2l2v_13TeV_top_of0j/events/datacard.txt"
outputFileSF=${1}
outputFileLH=${2}


inputCardCOMB="/afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_top_of0j/events/datacard.txt.pruned.txt"

echo "~~~~~~~~~~ Top 0 jets SF ~~~~~~~~~~~~~" >> ${outputFileSF}
echo `combine -M MaxLikelihoodFit ${inputCardCOMB} --redefineSignalPOIs ICHEP_Topnorm0j --freezeNuisances=r` >> ${outputFileSF}
# echo "combine -M MaxLikelihoodFit ${inputCardCOMB} --redefineSignalPOIs ICHEP_Topnorm0j --freezeNuisances=r" 
echo "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" >> ${outputFileSF}
 
inputCardCOMB="/afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/datacards/hww2l2v_13TeV_top_of1j/events/datacard.txt.pruned.txt"

echo "~~~~~~~~~~ Top 1 jet SF ~~~~~~~~~~~~~" >> ${outputFileSF}
echo `combine -M MaxLikelihoodFit ${inputCardCOMB} --redefineSignalPOIs ICHEP_Topnorm1j --freezeNuisances=r` >> ${outputFileSF}
echo "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" >> ${outputFileSF}



inputCardCOMB="/afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH2j/datacards/hww2l2v_13TeV_top_of2j/events/datacard.txt.pruned.txt"
 
echo "~~~~~~~~~~ Top 2 jet SF ~~~~~~~~~~~~~" >> ${outputFileSF}
echo `combine -M MaxLikelihoodFit ${inputCardCOMB} --redefineSignalPOIs ICHEP_Topnorm2j --freezeNuisances=r` >> ${outputFileSF}
echo "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" >> ${outputFileSF}


inputCardCOMB="/afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VBF/datacards/hww2l2v_13TeV_top_of2j_vbf/events/datacard.txt.pruned.txt"
 
echo "~~~~~~~~~~ Top 2 jet VBF SF ~~~~~~~~~~~~~" >> ${outputFileSF}
echo `combine -M MaxLikelihoodFit ${inputCardCOMB} --redefineSignalPOIs Topnorm2jvbf --freezeNuisances=r` >> ${outputFileSF}
echo "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" >> ${outputFileSF}


inputCardCOMB="/afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/VH2j/datacards/hww2l2v_13TeV_top_of2j_vh2j/events/datacard.txt.pruned.txt"
 
echo "~~~~~~~~~~ Top 2 jet VH2j SF ~~~~~~~~~~~~~" >> ${outputFileSF}
echo `combine -M MaxLikelihoodFit ${inputCardCOMB} --redefineSignalPOIs ICHEP_Topnorm2jvh --freezeNuisances=r` >> ${outputFileSF}
echo "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" >> ${outputFileSF}








# 
# 
# # # perform the Likelihood scan for Top 0 jets
# # echo "~~~~~~~~~~ Top 0 jets Likelihood SCan ~~~~~~~~~~~~~" >> ${outputFileLH}
# # echo `combine -M MultiDimFit ${inputCardCOMB} --algo=grid --points 100 --redefineSignalPOIs ICHEP_Topnorm0j --freezeNuisances=r --setPhysicsModelParameterRanges ICHEP_Topnorm0j=0.01,2 -n "LHScanTopnorm0j"` >> ${outputFileLH}
# # echo "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" >> ${outputFileLH}
# 
# # # perform the Likelihood scan for Top 1 jet
# # echo "~~~~~~~~~~ Top 1 jet Likelihood Scan ~~~~~~~~~~~~~" >> ${outputFileLH}
# # echo `combine -M MultiDimFit ${inputCardCOMB} --algo=grid --points 100 --redefineSignalPOIs ICHEP_Topnorm1j --freezeNuisances=r --setPhysicsModelParameterRanges ICHEP_Topnorm1j=0.01,2 -n "LHScanTopnorm1j"` >> ${outputFileLH}
# # echo "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" >> ${outputFileLH}
# # 
# # 
# 
# # perform the Likelihood scan for Top 2 jet
# echo "~~~~~~~~~~ Top 2 jet Likelihood Scan ~~~~~~~~~~~~~" >> ${outputFileLH}
# echo `combine -M MultiDimFit ${inputCardCOMB} --algo=grid --points 100 --redefineSignalPOIs ICHEP_Topnorm2j --freezeNuisances=r --setPhysicsModelParameterRanges ICHEP_Topnorm2j=0.01,2 -n "LHScanTopnorm2j"` >> ${outputFileLH}
# echo "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" >> ${outputFileLH}


