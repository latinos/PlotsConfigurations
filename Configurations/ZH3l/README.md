ZH3l configurations

Example fit for 2018:

-- Make combined datacard --
combineCards.py   SR1j=datacards_ZH3l_2018/zh3l_SR_1j/mtw_fit/datacard.txt \
                WZCR1j=datacards_ZH3l_2018/zh3l_WZ_CR_1j/events/datacard.txt \
                ZgCR1j=datacards_ZH3l_2018/zh3l_Zg_CR_1j/events/datacard.txt \
                  SR2j=datacards_ZH3l_2018/zh3l_SR_2j/mtw_fit/datacard.txt \
                WZCR2j=datacards_ZH3l_2018/zh3l_WZ_CR_2j/events/datacard.txt \
                ZgCR2j=datacards_ZH3l_2018/zh3l_Zg_CR_2j/events/datacard.txt > Zh3l_2018.txt

-- Convert datacard to workspace --
text2workspace.py Zh3l_2018.txt         -o Zh3l_2018.root

-- Extract expected significance and signal strength uncertainty --
combine -M Significance   -t -1 --expectSignal=1                      Zh3l_2018.root -n Zh3l_2018
combine -M FitDiagnostics -t -1 --expectSignal=1 --rMin=-10 --rMax=10 Zh3l_2018.root -n Zh3l_2018

-- Also look at stat-only significance and signal strength uncertainty
combine -M Significance   -t -1 --expectSignal=1                      Zh3l_2018.root -n Zh3l_2018 -S 0
combine -M FitDiagnostics -t -1 --expectSignal=1 --rMin=-10 --rMax=10 Zh3l_2018.root -n Zh3l_2018 -S 0

-- Look at impacts --
combineTool.py -M Impacts -d Zh3l_2018.root -m 125.09 -n Zh3l_2018 --expectSignal=1 -t -1 --setParameterRanges r=-10,10 --doInitialFit --robustFit 1 
combineTool.py -M Impacts -d Zh3l_2018.root -m 125.09 -n Zh3l_2018 --expectSignal=1 -t -1 --setParameterRanges r=-10,10 --doFits --robustFit 1 --parallel 8
combineTool.py -M Impacts -d Zh3l_2018.root -m 125.09 -n Zh3l_2018 --expectSignal=1 -t -1 --setParameterRanges r=-10,10 -o impacts_Zh3l_2018.json
plotImpacts.py -i impacts_Zh3l_2018.json -o impacts_Zh3l_2018

