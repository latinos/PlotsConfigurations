#!/bin/bash

### need to setup combine before

inputCard=${1}
outputFileSF=${2}
outputFileLH=${3}

# extract SF for Top 0 jets
echo "~~~~~~~~~~ Top 0 jets SF ~~~~~~~~~~~~~" >> ${outputFileSF}
combine -M MaxLikelihoodFit ${inputCard} --redefineSignalPOIs Topnorm0j --freezeNuisances=r >> ${outputFileSF}
echo "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" >> ${outputFileSF}

# extract SF for Top 1 jets
echo "~~~~~~~~~~ Top 1 jet SF ~~~~~~~~~~~~~" >> ${outputFileSF}
combine -M MaxLikelihoodFit ${inputCard} --redefineSignalPOIs Topnorm1j --freezeNuisances=r >> ${outputFileSF}
echo "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" >> ${outputFileSF}

# perform the Likelihood scan for Top 0 jets
echo "~~~~~~~~~~ Top 0 jets Likelihood SCan ~~~~~~~~~~~~~" >> ${outputFileLH}
combine -M MultiDimFit ${inputCard} --algo=grid --points 100 --redefineSignalPOIs Topnorm0j --freezeNuisances=r --setPhysicsModelParameterRanges Topnorm0j=0.01,2 -n "LHScanTopnorm0j" >> ${outputFileLH}
echo "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" >> ${outputFileLH}

# perform the Likelihood scan for Top 1 jet
echo "~~~~~~~~~~ Top 1 jet Likelihood Scan ~~~~~~~~~~~~~" >> ${outputFileLH}
combine -M MultiDimFit ${inputCard} --algo=grid --points 100 --redefineSignalPOIs Topnorm1j --freezeNuisances=r --setPhysicsModelParameterRanges Topnorm1j=0.01,2 -n "LHScanTopnorm1j" >> ${outputFileLH}
echo "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" >> ${outputFileLH}

