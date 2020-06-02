#!/bin/bash

pushd $COMBINE_SOURCE_DIR
eval `scramv1 runtime -sh`
popd

combine -M Significance   -t -1 --expectSignal=1                      Zh3l_2016_v6_newWP.root --X-rtd MINIMIZER_analytic -n Zh3l_2016_v6_newWP
combine -M Significance   -t -1 --expectSignal=1                      Zh3l_2016_v6_newWP.root --X-rtd MINIMIZER_analytic -n Zh3l_2016_v6_newWP --freezeParameters allConstrainedNuisances
combine -M FitDiagnostics -t -1 --expectSignal=1 --rMin=-10 --rMax=10 Zh3l_2016_v6_newWP.root --X-rtd MINIMIZER_analytic -n Zh3l_2016_v6_newWP
combine -M FitDiagnostics -t -1 --expectSignal=1 --rMin=-10 --rMax=10 Zh3l_2016_v6_newWP.root --X-rtd MINIMIZER_analytic -n Zh3l_2016_v6_newWP --freezeParameters allConstrainedNuisances

combineTool.py -M Impacts -d Zh3l_2016_v6_newWP.root -m 125.09 -n Zh3l_2016_v6_newWP --expectSignal=1 -t -1 --setParameterRanges r=-10,10:CMS_hww_WZ3l1jnorm=-5,5:CMS_hww_WZ3l2jnorm=-5,5 --X-rtd MINIMIZER_analytic --robustFit=1 --doInitialFit
combineTool.py -M Impacts -d Zh3l_2016_v6_newWP.root -m 125.09 -n Zh3l_2016_v6_newWP --expectSignal=1 -t -1 --setParameterRanges r=-10,10:CMS_hww_WZ3l1jnorm=-5,5:CMS_hww_WZ3l2jnorm=-5,5 --X-rtd MINIMIZER_analytic --robustFit=1 --doFits --parallel 8
combineTool.py -M Impacts -d Zh3l_2016_v6_newWP.root -m 125.09 -n Zh3l_2016_v6_newWP --expectSignal=1 -t -1 --setParameterRanges r=-10,10:CMS_hww_WZ3l1jnorm=-5,5:CMS_hww_WZ3l2jnorm=-5,5 --X-rtd MINIMIZER_analytic --robustFit=1 -o impacts_Zh3l_2016_v6_newWP.json
plotImpacts.py -i impacts_Zh3l_2016_v6_newWP.json -o impacts_Zh3l_2016_v6_newWP

combine -M Significance   -t -1 --expectSignal=1                      Zh3l_2016_v6_mTlmetjj.root --X-rtd MINIMIZER_analytic -n Zh3l_2016_v6_mTlmetjj
combine -M Significance   -t -1 --expectSignal=1                      Zh3l_2016_v6_mTlmetjj.root --X-rtd MINIMIZER_analytic -n Zh3l_2016_v6_mTlmetjj --freezeParameters allConstrainedNuisances
combine -M FitDiagnostics -t -1 --expectSignal=1 --rMin=-10 --rMax=10 Zh3l_2016_v6_mTlmetjj.root --X-rtd MINIMIZER_analytic -n Zh3l_2016_v6_mTlmetjj
combine -M FitDiagnostics -t -1 --expectSignal=1 --rMin=-10 --rMax=10 Zh3l_2016_v6_mTlmetjj.root --X-rtd MINIMIZER_analytic -n Zh3l_2016_v6_mTlmetjj --freezeParameters allConstrainedNuisances

combineTool.py -M Impacts -d Zh3l_2016_v6_mTlmetjj.root -m 125.09 -n Zh3l_2016_v6_mTlmetjj --expectSignal=1 -t -1 --setParameterRanges r=-10,10:CMS_hww_WZ3l1jnorm=-5,5:CMS_hww_WZ3l2jnorm=-5,5 --X-rtd MINIMIZER_analytic --robustFit=1 --doInitialFit
combineTool.py -M Impacts -d Zh3l_2016_v6_mTlmetjj.root -m 125.09 -n Zh3l_2016_v6_mTlmetjj --expectSignal=1 -t -1 --setParameterRanges r=-10,10:CMS_hww_WZ3l1jnorm=-5,5:CMS_hww_WZ3l2jnorm=-5,5 --X-rtd MINIMIZER_analytic --robustFit=1 --doFits --parallel 8
combineTool.py -M Impacts -d Zh3l_2016_v6_mTlmetjj.root -m 125.09 -n Zh3l_2016_v6_mTlmetjj --expectSignal=1 -t -1 --setParameterRanges r=-10,10:CMS_hww_WZ3l1jnorm=-5,5:CMS_hww_WZ3l2jnorm=-5,5 --X-rtd MINIMIZER_analytic --robustFit=1 -o impacts_Zh3l_2016_v6_mTlmetjj.json
plotImpacts.py -i impacts_Zh3l_2016_v6_mTlmetjj.json -o impacts_Zh3l_2016_v6_mTlmetjj


