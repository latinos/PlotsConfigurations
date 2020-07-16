#!/bin/bash
#$ -N mkShapes__ggH2016_v6__ALL__VZ.12
export X509_USER_PROXY=/afs/cern.ch/user/c/calderon/.proxy
voms-proxy-info
export SCRAM_ARCH=slc7_amd64_gcc820
export VO_CMS_SW_DIR=/cvmfs/cms.cern.ch
source $VO_CMS_SW_DIR/cmsset_default.sh
cd /afs/cern.ch/work/c/calderon/private/CMSSW_10_6_4
eval `scramv1 ru -sh`
ulimit -c 0 
cd '/afs/cern.ch/work/c/calderon/private/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/ggH_SF/Full2017_HTXS_Stage1p2/'

pwd 

pycfg="/afs/cern.ch/work/c/calderon/private/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/ggH_SF/Full2017_HTXS_Stage1p2/configuration.py"
dycfg="/afs/cern.ch/work/c/calderon/private/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/ggH_SF/Full2017_HTXS_Stage1p2/dyestim.py" 
input="/afs/cern.ch/work/c/calderon/private/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/ggH_SF/Full2017_HTXS_Stage1p2/rootFile/plots_STXS_ggH_SF_2017.root"

mkDYestim_data.py --pycfg=$pycfg --dycfg=$dycfg --inputFile=$input
