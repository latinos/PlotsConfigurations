#!/bin/bash

### need to setup combine before

inputCard0j="/afs/cern.ch/user/a/amassiro/public/xLatinos/Moriond2016_05May/hww2l2v_13TeV_dytt_of0j/events/datacard.txt.pruned.txt"
inputCard1j="/afs/cern.ch/user/a/amassiro/public/xLatinos/Moriond2016_05May/hww2l2v_13TeV_dytt_of1j/events/datacard.txt.pruned.txt"

outputFileSF=${1}
outputFileLH=${2}

# extract SF for DYtt 0 jets
echo "~~~~~~~~~~ DYtt 0 jets SF ~~~~~~~~~~~~~" >> ${outputFileSF}
echo `combine -M MaxLikelihoodFit ${inputCard0j} --redefineSignalPOIs DYttnorm0j --freezeNuisances=r,WWnorm0j,Topnorm0j,CMS_scale_e,CMS_scale_m,CMS_scale_met,CMS_idiso,CMS_tttwTh,CMS_btag,lumi_13TeV` >> ${outputFileSF}
echo "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" >> ${outputFileSF}

# extract SF for DYtt 1 jets
echo "~~~~~~~~~~ DYtt 1 jet SF ~~~~~~~~~~~~~" >> ${outputFileSF}
echo `combine -M MaxLikelihoodFit ${inputCard1j} --redefineSignalPOIs DYttnorm1j --freezeNuisances=r,WWnorm1j,Topnorm1j,CMS_scale_e,CMS_scale_m,CMS_scale_met,CMS_idiso,CMS_tttwTh,CMS_btag,lumi_13TeV` >> ${outputFileSF}
echo "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" >> ${outputFileSF}

# perform the Likelihood scan for DYtt 0 jets
echo "~~~~~~~~~~ DYtt 0 jets Likelihood SCan ~~~~~~~~~~~~~" >> ${outputFileLH}
echo `combine -M MultiDimFit ${inputCard0j} -m 125 --algo=grid --points 50 --redefineSignalPOIs DYttnorm0j --freezeNuisances=r,WWnorm0j,Topnorm0j,CMS_scale_e,CMS_scale_m,CMS_scale_met,CMS_idiso,CMS_tttwTh,CMS_btag,lumi_13TeV --setPhysicsModelParameterRanges DYttnorm0j=0.01,2 -n "LHScanDYttnorm0j"` >> ${outputFileLH}
echo "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" >> ${outputFileLH}

# perform the Likelihood scan for DYtt 1 jet
echo "~~~~~~~~~~ DYtt 1 jet Likelihood Scan ~~~~~~~~~~~~~" >> ${outputFileLH}
echo `combine -M MultiDimFit ${inputCard1j} -m 125 --algo=grid --points 50 --redefineSignalPOIs DYttnorm1j --freezeNuisances=r,WWnorm1j,Topnorm1j,CMS_scale_e,CMS_scale_m,CMS_scale_met,CMS_idiso,CMS_tttwTh,CMS_btag,lumi_13TeV --setPhysicsModelParameterRanges DYttnorm1j=0.1,2 -n "LHScanDYttnorm1j"` >> ${outputFileLH}
echo "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" >> ${outputFileLH}

