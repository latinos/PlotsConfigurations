combine -M Significance   -t -1 --expectSignal=1                      Zh3l_2018_v6.root --X-rtd MINIMIZER_analytic -n Zh3l_2018_v6
combine -M Significance   -t -1 --expectSignal=1                      Zh3l_2018_v6.root --X-rtd MINIMIZER_analytic -n Zh3l_2018_v6 -S 0
combine -M FitDiagnostics -t -1 --expectSignal=1 --rMin=-10 --rMax=10 Zh3l_2018_v6.root --X-rtd MINIMIZER_analytic -n Zh3l_2018_v6
combine -M FitDiagnostics -t -1 --expectSignal=1 --rMin=-10 --rMax=10 Zh3l_2018_v6.root --X-rtd MINIMIZER_analytic -n Zh3l_2018_v6 -S 0

combineTool.py -M Impacts -d Zh3l_2018_v6.root -m 125.09 -n Zh3l_2018_v6 --expectSignal=1 -t -1 --setParameterRanges r=-10,10:CMS_hww_Zg3l1jnorm=-5,5:CMS_hww_Zg3l2jnorm=-5,5:CMS_hww_WZ3l1jnorm=-5,5:CMS_hww_WZ3l2jnorm=-5,5 --X-rtd MINIMIZER_analytic --robustFit=1 --doInitialFit
combineTool.py -M Impacts -d Zh3l_2018_v6.root -m 125.09 -n Zh3l_2018_v6 --expectSignal=1 -t -1 --setParameterRanges r=-10,10:CMS_hww_Zg3l1jnorm=-5,5:CMS_hww_Zg3l2jnorm=-5,5:CMS_hww_WZ3l1jnorm=-5,5:CMS_hww_WZ3l2jnorm=-5,5 --X-rtd MINIMIZER_analytic --robustFit=1 --doFits --parallel 8
combineTool.py -M Impacts -d Zh3l_2018_v6.root -m 125.09 -n Zh3l_2018_v6 --expectSignal=1 -t -1 --setParameterRanges r=-10,10:CMS_hww_Zg3l1jnorm=-5,5:CMS_hww_Zg3l2jnorm=-5,5:CMS_hww_WZ3l1jnorm=-5,5:CMS_hww_WZ3l2jnorm=-5,5 --X-rtd MINIMIZER_analytic --robustFit=1 -o impacts_Zh3l_2018_v6.json
plotImpacts.py -i impacts_Zh3l_2018_v6.json -o impacts_Zh3l_2018_v6



