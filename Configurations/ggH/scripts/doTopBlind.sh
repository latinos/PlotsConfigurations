#!/bin/bash

### need to setup combine before

inputCard0j="/afs/cern.ch/user/a/amassiro/public/xLatinos/Moriond2016-28Feb/hww2l2v_13TeV_top_of0j/events/datacard.txt"
inputCard1j="/afs/cern.ch/user/a/amassiro/public/xLatinos/Moriond2016-28Feb/hww2l2v_13TeV_top_of1j/events/datacard.txt"
outputFileSF=${1}
outputFileLH=${2}

# extract SF for Top 0 jets
echo "~~~~~~~~~~ Top 0 jets SF ~~~~~~~~~~~~~" >> ${outputFileSF}
echo `combine -M MaxLikelihoodFit ${inputCard0j} --redefineSignalPOIs Topnorm0j --freezeNuisances=r,WWnorm0j,DYttnorm0j` >> ${outputFileSF}
echo "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" >> ${outputFileSF}

# extract SF for Top 1 jets
echo "~~~~~~~~~~ Top 1 jet SF ~~~~~~~~~~~~~" >> ${outputFileSF}
echo `combine -M MaxLikelihoodFit ${inputCard1j} --redefineSignalPOIs Topnorm1j --freezeNuisances=r,WWnorm1j,DYttnorm1j` >> ${outputFileSF}
echo "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" >> ${outputFileSF}

# perform the Likelihood scan for Top 0 jets
echo "~~~~~~~~~~ Top 0 jets Likelihood SCan ~~~~~~~~~~~~~" >> ${outputFileLH}
echo `combine -M MultiDimFit ${inputCard0j} -m 125 --algo=grid --points 50 --redefineSignalPOIs Topnorm0j --freezeNuisances=r,WWnorm0j,DYttnorm0j --setPhysicsModelParameterRanges Topnorm0j=0.01,2 -n "LHScanTopnorm0j"` >> ${outputFileLH}
echo "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" >> ${outputFileLH}

# perform the Likelihood scan for Top 1 jet
echo "~~~~~~~~~~ Top 1 jet Likelihood Scan ~~~~~~~~~~~~~" >> ${outputFileLH}
echo `combine -M MultiDimFit ${inputCard1j} -m 125 --algo=grid --points 50 --redefineSignalPOIs Topnorm1j --freezeNuisances=r,WWnorm1j,DYttnorm1j --setPhysicsModelParameterRanges Topnorm1j=0.1,2 -n "LHScanTopnorm1j"` >> ${outputFileLH}
echo "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" >> ${outputFileLH}

