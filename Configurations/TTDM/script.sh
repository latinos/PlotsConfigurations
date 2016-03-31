#!/bin/bash

cd /afs/cern.ch/user/n/ntrevisa/work/CMSSW_7_6_3/src/

#cmsenv
eval `scramv1 runtime -sh`

cd /afs/cern.ch/user/n/ntrevisa/work/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/WW/

source /afs/cern.ch/project/eos/installation/user/etc/setup.sh

#eosmount eosuser
/afs/cern.ch/project/eos/installation/0.3.84-aquamarine.user/bin/eos.select -b fuse mount eosuser

mkShapes.py      --pycfg=configuration.py  --inputDir=eosuser/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight

mkDatacards.py   --pycfg=configuration.py  --inputFile=rootFile/plots_WW.root

#mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_WW.root