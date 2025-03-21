#! /bin/sh

cd /afs/cern.ch/user/m/mihawksw/private/azh/analysis/CMSSW_10_6_28/src/
export SCRAM_ARCH=slc7_amd64_gcc700
source /cvmfs/cms.cern.ch/cmsset_default.sh
eval `scramv1 runtime -sh`
cd /afs/cern.ch/user/m/mihawksw/private/azh/analysis/CMSSW_10_6_28/src/PlotsConfigurations/Configurations/AToZH_Full/FullRunII/

python do_add_hnom.py
