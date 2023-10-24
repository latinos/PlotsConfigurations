#!/bin/sh
ulimit -s unlimited
set -e
cd /afs/cern.ch/work/s/srudrabh/AZH/postprocessing/combine/CMSSW_11_3_4/src
export SCRAM_ARCH=slc7_amd64_gcc900
source /cvmfs/cms.cern.ch/cmsset_default.sh
eval `scramv1 runtime -sh`
cd /afs/cern.ch/work/s/srudrabh/AZH/postprocessing/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/AToZH_Full/scripts/condor_toys

 
combine --algo singles -t 1 --setParameters CMS_ttZ_norm2017=0.5,r=0 --saveFitResult -M MultiDimFit -s $1 -d ../../2017_v9/800_600_withWZCR.root --setParameterRanges r=-5.0,5.0 -n result_1000_600_0signal0.5ttZ$1


combine --algo singles -t 1 --setParameters CMS_ttZ_norm2017=1,r=0 --saveFitResult -M MultiDimFit -s $1 -d ../../2017_v9/800_600_withWZCR.root --setParameterRanges r=-5.0,5.0 -n result_1000_600_0signal1ttZ$1

combine --algo singles -t 1 --setParameters CMS_ttZ_norm2017=1.5,r=0 --saveFitResult -M MultiDimFit -s $1 -d ../../2017_v9/800_600_withWZCR.root --setParameterRanges r=-5.0,5.0 -n result_1000_600_0signal1.5ttZ$1

#r=0.01 - close to theory computation 

combine --algo singles -t 1 --setParameters CMS_ttZ_norm2017=0.5,r=0.01 --saveFitResult -M MultiDimFit -s $1 -d ../../2017_v9/800_600_withWZCR.root --setParameterRanges r=-5.0,5.0 -n result_1000_600_0.01signal0.5ttZ$1

combine --algo singles -t 1 --setParameters CMS_ttZ_norm2017=1,r=0.01 --saveFitResult -M MultiDimFit -s $1 -d ../../2017_v9/800_600_withWZCR.root --setParameterRanges r=-5.0,5.0 -n result_1000_600_0.01signal1ttZ$1

combine --algo singles -t 1 --setParameters CMS_ttZ_norm2017=1.5,r=0.01 --saveFitResult -M MultiDimFit -s $1 -d ../../2017_v9/800_600_withWZCR.root --setParameterRanges r=-5.0,5.0 -n result_1000_600_0.01signal1.5ttZ$1
