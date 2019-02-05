#!/bin/bash

# the mass for which you want to make the workspace

#FIXME this is where the Combine framework is installed
cd /afs/cern.ch/user/l/lenzip/work/Combine_autoMC_regularization/CMSSW_8_1_0/
eval `scram runtime -sh`
cd -

outputdir=`pwd`/combine
if [ ! -d "$outputdir" ]; then
  mkdir $outputdir
fi
  
cd $outputdir

combine -M MultiDimFit --algo singles -t -1 --setParameters r_0=1,r_1=1,r_2=1,r_3=1,r_4=1 workspace_2017.root --X-rtd MINIMIZER_analytic | tee logMultiDimFit.txt
combine -M FitDiagnostics -t -1 --setParameters r_0=1,r_1=1,r_2=1,r_3=1,r_4=1 --redefineSignalPOIs r_0 workspace_2017.root --X-rtd MINIMIZER_analytic | tee logFit.txt

combine -M MultiDimFit --algo singles -t -1 --setParameters r_0=1,r_1=1,r_2=1,r_3=1,r_4=1 workspace_2017.reg.root --X-rtd MINIMIZER_analytic | tee logMultiDimFit.reg.txt
combine -M FitDiagnostics -t -1 --setParameters r_0=1,r_1=1,r_2=1,r_3=1,r_4=1 --redefineSignalPOIs r_0 -n regularized workspace_2017.reg.root --X-rtd MINIMIZER_analytic | tee logFit.reg.txt

