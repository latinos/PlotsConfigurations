#!/bin/bash

mkdir -p /afs/cern.ch/user/n/ntrevisa/work/latinos/UL_production/CMSSW_10_6_27/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/Full2017_v9/BDTconfig_WHSS/logs_WHSS/
cd /afs/cern.ch/user/n/ntrevisa/work/latinos/UL_production/CMSSW_10_6_27/src/PlotsConfigurations/Configurations/WH_chargeAsymmetry/UL/Full2017_v9/BDTconfig_WHSS/
eval `scramv1 ru -sh`
python ClassificationBDT_WHSS.py _WHSS_TTToSemiLeptonic




