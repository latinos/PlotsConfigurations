#!/bin/bash
#$ -N mkShapes___WH_2016nano_CR_2__ALL__DY
export X509_USER_PROXY=/afs/cern.ch/user/s/safreed/.proxy
voms-proxy-info
export SCRAM_ARCH=slc6_amd64_gcc700
source $VO_CMS_SW_DIR/cmsset_default.sh
cd /afs/cern.ch/work/s/safreed/Latinos/WH_2017/CMSSW_10_2_11
eval `scramv1 ru -sh`
ulimit -c 0
cd $TMPDIR 
pwd 
python /afs/cern.ch/user/s/safreed/HWW2017/jobs//mkShapes___WH_2016nano_CR_2/mkShapes___WH_2016nano_CR_2__ALL__DY.py
[ $? -eq 0 ] && mv /afs/cern.ch/user/s/safreed/HWW2017/jobs//mkShapes___WH_2016nano_CR_2/mkShapes___WH_2016nano_CR_2__ALL__DY.jid /afs/cern.ch/user/s/safreed/HWW2017/jobs//mkShapes___WH_2016nano_CR_2/mkShapes___WH_2016nano_CR_2__ALL__DY.done