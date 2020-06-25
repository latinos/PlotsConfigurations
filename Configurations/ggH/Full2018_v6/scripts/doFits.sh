#!/bin/bash

## FIXME this is where the Combine framework is installed
cd ~/Combine/CMSSW_10_2_13/src/
eval `scramv1 runtime -sh`
cd -

## work directory
workdir=/afs/cern.ch/work/l/lviliani/LatinosFramework13TeV_FullRun2_branchmaps/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/ggH/Full2018_v6/Combination

combine -M MultiDimFit --algo singles ${workdir}/Full2018_ggH.categories.root -t -1 --setParameters r_of0jet_2018=1,r_of1jet_2018=1,r_of2jet_2018=1 --X-rtd MINIMIZER_analytic &> ${workdir}/Full2018_ggH.categories.out

