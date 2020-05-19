#!/bin/bash

## FIXME this is where the Combine framework is installed
cd ~/Combine/CMSSW_10_2_13/src/
eval `scramv1 runtime -sh`
cd -

## work directory
workdir=/afs/cern.ch/work/l/lviliani/LatinosFramework13TeV_FullRun2/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/ggH/Full2018_v6/HTXS_Stage1p2/Combination

combine -M MultiDimFit --algo singles ${workdir}/Full2018_ggH_HTXS_Stage1p2.root -t -1 --setParameters r_ggH_hww_0J_PTH_0_10=1,r_ggH_hww_0J_PTH_GT10=1,r_ggH_hww_1J_PTH_0_60=1,r_ggH_hww_1J_PTH_60_120=1,r_ggH_hww_1J_PTH_120_200=1 --X-rtd MINIMIZER_analytic &> ${workdir}/Full2018_ggH_HTXS_Stage1p2.out

combine -M MultiDimFit --algo singles ${workdir}/Full2018_ggH_HTXS_Stage1p2_01J.root -t -1 --setParameters r_ggH_hww_0J=1,r_ggH_hww_1J=1 --X-rtd MINIMIZER_analytic &> ${workdir}/Full2018_ggH_HTXS_Stage1p2_01J.out

combine -M MultiDimFit --algo singles ${workdir}/Full2018_ggH_HTXS_Stage1p2_onePOI.root -t -1 --setParameters r_ggH_hww=1 --X-rtd MINIMIZER_analytic &> ${workdir}/Full2018_ggH_HTXS_Stage1p2_onePOI.out



