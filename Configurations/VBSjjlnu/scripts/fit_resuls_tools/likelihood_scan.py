from multiprocessing import Pool
import os

cmds = [
    'combine -M MultiDimFit workspace.root -n .scan_all --rMin 0 --rMax 2 --saveWorkspace -t -1 --expectSignal=1 --toysFreq --algo grid --point 30 --cminDefaultMinimizerStrategy 0 --cminFallbackAlgo Minuit2,Migrad,0:0.1 --robustFit=1 --X-rtd FITTER_NEW_CROSSING_ALGO --X-rtd FITTER_NEVER_GIVE_UP --X-rtd FITTER_BOUND --X-rtd=MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=9999999',
    'combine -M MultiDimFit higgsCombine.snapshot.MultiDimFit.mH120.root -n .scan_freezeNorm --rMin 0 --rMax 2 --snapshotName MultiDimFit -t -1 --expectSignal=1 --toysFreq --algo grid --point 30 --cminDefaultMinimizerStrategy 0 --cminFallbackAlgo Minuit2,Migrad,0:0.1 --robustFit=1 --X-rtd FITTER_NEW_CROSSING_ALGO --X-rtd FITTER_NEVER_GIVE_UP --X-rtd FITTER_BOUND --freezeNuisanceGroup norm --X-rtd=MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=9999999',
    'combine -M MultiDimFit higgsCombine.snapshot.MultiDimFit.mH120.root -n .scan_freezeTheoryAndNorm --rMin 0 --rMax 2 --snapshotName MultiDimFit -t -1 --expectSignal=1 --toysFreq --algo grid --point 30 --freezeNuisanceGroups theory,norm --cminDefaultMinimizerStrategy 0 --cminFallbackAlgo Minuit2,Migrad,0:0.1 --robustFit=1 --X-rtd FITTER_NEW_CROSSING_ALGO --X-rtd FITTER_NEVER_GIVE_UP --X-rtd FITTER_BOUND --X-rtd=MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=9999999',
    'combine -M MultiDimFit higgsCombine.snapshot.MultiDimFit.mH120.root -n .scan_freezeTheoryAndNormAndMCstat --rMin 0 --rMax 2 --snapshotName MultiDimFit -t -1 --expectSignal=1 --toysFreq --algo grid --point 30 --freezeNuisanceGroups theory,norm,autoMCStats --cminDefaultMinimizerStrategy 0 --cminFallbackAlgo Minuit2,Migrad,0:0.1 --robustFit=1 --X-rtd FITTER_NEW_CROSSING_ALGO --X-rtd FITTER_NEVER_GIVE_UP --X-rtd FITTER_BOUND --X-rtd=MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=9999999',
    'combine -M MultiDimFit higgsCombine.snapshot.MultiDimFit.mH120.root -n .scan_freezeAll --rMin 0 --rMax 2 --snapshotName MultiDimFit -t -1 --expectSignal=1 --toysFreq --algo grid --point 30 --freezeParameters "rgx{.*}" --cminDefaultMinimizerStrategy 0 --cminFallbackAlgo Minuit2,Migrad,0:0.1 --robustFit=1 --X-rtd FITTER_NEW_CROSSING_ALGO --X-rtd FITTER_NEVER_GIVE_UP --X-rtd FITTER_BOUND --X-rtd=MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=999999',
]


p = Pool()
p.map(os.system, cmds)
