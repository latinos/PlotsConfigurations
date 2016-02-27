#!/bin/bash

### need to setup combine before

outputFileSF=${1}
outputFileLH=${2}

# extract SF for DY 0 jets
echo "~~~~~~~~~~ DY 0 jets SF ~~~~~~~~~~~~~" >> ${outputFileSF}
combine -M MaxLikelihoodFit datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt --redefineSignalPOIs DYttnorm0j --freezeNuisances=r,Topnorm0j,WWnorm0j >> ${outputFileSF}
echo "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" >> ${outputFileSF}

# perform the Likelihood scan for DY 0 jets
echo "~~~~~~~~~~ DY 0 jets Likelihood SCan ~~~~~~~~~~~~~" >> ${outputFileLH}
combine -M MultiDimFit datacards/hww2l2v_13TeV_dytt_of0j/events/datacard.txt --algo=grid --points 100 --redefineSignalPOIs DYttnorm0j --freezeNuisances=r,Topnorm0j,WWnorm0j --setPhysicsModelParameterRanges DYttnorm0j=0.01,2 -n "LHScanDYttnorm0j" >> ${outputFileLH}
echo "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" >> ${outputFileLH}

