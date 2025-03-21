#! /bin/sh
cd /afs/cern.ch/user/m/mihawksw/private/azh/analysis/CMSSW_10_6_28/src/
export SCRAM_ARCH=slc7_amd64_gcc700
source /cvmfs/cms.cern.ch/cmsset_default.sh
eval `scramv1 runtime -sh`
cd /afs/cern.ch/user/m/mihawksw/private/azh/analysis/CMSSW_10_6_28/src/PlotsConfigurations/Configurations/AToZH_Full/scripts/

source /cvmfs/sft.cern.ch/lcg/views/setupViews.sh LCG_98python3 x86_64-centos7-gcc8-opt
mkdir -p condor_ellipses_onebjet_FullRunII
python3 ellipses_onebjet_FullRunII.py $1
