#!/bin/bash

### need to setup combine before

outputFileSF=${1}
outputFileLH=${2}

# extract SF for DY 1 jets
echo "~~~~~~~~~~ DY 1 jet SF ~~~~~~~~~~~~~" >> ${outputFileSF}
combine -M MaxLikelihoodFit datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt --redefineSignalPOIs DYttnorm1j --freezeNuisances=r,Topnorm1j,WWnorm1j >> ${outputFileSF}
echo "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" >> ${outputFileSF}

# perform the Likelihood scan for DY 1 jet
echo "~~~~~~~~~~ DY 1 jet Likelihood Scan ~~~~~~~~~~~~~" >> ${outputFileLH}
combine -M MultiDimFit datacards/hww2l2v_13TeV_dytt_of1j/events/datacard.txt --algo=grid --points 100 --redefineSignalPOIs DYttnorm1j --freezeNuisances=r,Topnorm1j,WWnorm1j --setPhysicsModelParameterRanges DYttnorm1j=0.01,2 -n "LHScanDYttnorm1j" >> ${outputFileLH}
echo "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" >> ${outputFileLH}

