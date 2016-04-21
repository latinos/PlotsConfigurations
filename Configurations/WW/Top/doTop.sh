#!/bin/bash

### need to setup combine before

outputFileSF0j=TopSF0j.txt
outputFileLH0j=TopLH0j.txt
outputFileSF1j=TopSF1j.txt
outputFileLH1j=TopLH1j.txt

# extract SF for Top 0 jets
echo "~~~~~~~~~~ Top 0 jets SF ~~~~~~~~~~~~~" >> ${outputFileSF0j}
combine -M MaxLikelihoodFit datacards/ww_TopCR0j_em/events/datacard.txt --redefineSignalPOIs Topnorm0j --freezeNuisances=r >> ${outputFileSF0j}
echo "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" >> ${outputFileSF0j}

# perform the Likelihood scan for TOP 0 jets
echo "~~~~~~~~~~ TOP 0 jets Likelihood SCan ~~~~~~~~~~~~~" >> ${outputFileLH0j}
combine -M MultiDimFit datacards/ww_TopCR0j_em/events/datacard.txt --algo=grid --points 100 --redefineSignalPOIs Topnorm0j --freezeNuisances=r --setPhysicsModelParameterRanges Topnorm0j=0.01,2 -n "LHScanTopnorm0j" >> ${outputFileLH0j}
echo "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" >> ${outputFileLH0j}

# extract SF for Top 1 jets
echo "~~~~~~~~~~ Top 1 jets SF ~~~~~~~~~~~~~" >> ${outputFileSF1j}
combine -M MaxLikelihoodFit datacards/ww_TopCR1j_em/events/datacard.txt --redefineSignalPOIs Topnorm1j --freezeNuisances=r >> ${outputFileSF1j}
echo "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" >> ${outputFileSF1j}

# perform the Likelihood scan for TOP 1 jets
echo "~~~~~~~~~~ TOP 1 jets Likelihood SCan ~~~~~~~~~~~~~" >> ${outputFileLH1j}
combine -M MultiDimFit datacards/ww_TopCR1j_em/events/datacard.txt --algo=grid --points 111 --redefineSignalPOIs Topnorm1j --freezeNuisances=r --setPhysicsModelParameterRanges Topnorm1j=1.11,2 -n "LHScanTopnorm1j" >> ${outputFileLH1j}
echo "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" >> ${outputFileLH1j}
