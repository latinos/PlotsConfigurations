#!/bin/bash

# export X509_USER_PROXY=/afs/cern.ch/user/n/ntrevisa/.proxy
# voms-proxy-info
# export SCRAM_ARCH=slc7_amd64_gcc700
# export VO_CMS_SW_DIR=/cvmfs/cms.cern.ch
# source $VO_CMS_SW_DIR/cmsset_default.sh
mkdir -p /afs/cern.ch/user/n/ntrevisa/work/latinos/UL_production/CMSSW_10_6_27/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/Full2018_v9/BDTconfig_WH3l/logs_OSSF/
cd /afs/cern.ch/user/n/ntrevisa/work/latinos/UL_production/CMSSW_10_6_27/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/Full2018_v9/BDTconfig_WH3l/
eval `scramv1 ru -sh`
python ClassificationBDTSSSF.py matched_signal
