#!/bin/bash

# Load combine
cd $HOME/work/combine/CMSSW_10_2_13/src/
eval `scramv1 runtime -sh`
cd -

## work directory
workdir=$PWD

cd $workdir

# Fit diagnostic
echo "events:" "" > Combination/diagnostics_class0_15_05_multicut.txt
combine -M FitDiagnostics Combination/class0_05_10_ext_try_multicut.root -t -1 --setParameters r_vbf=1,r_ggH=1 --redefineSignalPOIs=r_vbf --saveNormalizations --saveWithUncertainties -n diagnostics_class0_15_05_multicut >> Combination/diagnostics_class0_15_05_multicut.txt

mv fitDiagnosticsdiagnostics_class0_15_05_multicut.root Combination/
mv higgsCombinediagnostics_class0_15_05_multicut.FitDiagnostics.mH120.root Combination/
mv combine_logger.out Combination/

# Significance
echo "class0:" "" > Combination/significance_class0_05_10_ext_try_multicut.txt
combine -M Significance Combination/class0_05_10_ext_try_multicut.root -t -1 --setParameters r_vbf=1 --redefineSignalPOIs=r_vbf -n significance_class0_05_10_ext_try_multicut >> Combination/significance_class0_05_10_ext_try_multicut.txt

mv higgsCombinesignificance_class0_05_10_ext_try_multicut.Significance.mH120.root Combination/

