#!/bin/bash
#$ -N mkShapes__AZH_2018_v7__ALL__ttV.13
export X509_USER_PROXY=/afs/cern.ch/user/s/srudrabh/.proxy
voms-proxy-info
export SCRAM_ARCH=slc7_amd64_gcc820
export VO_CMS_SW_DIR=/cvmfs/cms.cern.ch
source $VO_CMS_SW_DIR/cmsset_default.sh
cd /afs/cern.ch/work/s/srudrabh/AZH/Analysis/CMSSW_10_6_4
eval `scramv1 ru -sh`
ulimit -c 0 -s unlimited
cd $TMPDIR 
pwd 
python /afs/cern.ch/work/s/srudrabh/AZH/Analysis/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/AToZH/Full2018_v7/jobs//mkShapes__AZH_2018_v7/mkShapes__AZH_2018_v7__ALL__ttV.13.py
[ $? -eq 0 ] && mv /afs/cern.ch/work/s/srudrabh/AZH/Analysis/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/AToZH/Full2018_v7/jobs//mkShapes__AZH_2018_v7/mkShapes__AZH_2018_v7__ALL__ttV.13.jid /afs/cern.ch/work/s/srudrabh/AZH/Analysis/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/AToZH/Full2018_v7/jobs//mkShapes__AZH_2018_v7/mkShapes__AZH_2018_v7__ALL__ttV.13.done