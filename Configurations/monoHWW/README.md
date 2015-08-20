monoH, HWW plots
==============

Common tools for analysis:

    plot distributions


e.g.

    mkShapes.py      --pycfg=configuration.py  --inputDir=/media/data/amassiro/LatinoTrees/25ns/05Aug2015/
    mkShapes.py      --pycfg=configuration.py  --inputDir=/media/data/amassiro/LatinoTrees/monoH/
    
    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFileHWW/plots_WW.root
    
    mkDatacards.py   --pycfg=configuration.py  --inputFile=rootFileHWW/plots_WW.root
    
Run combine:

    git clone https://github.com/cms-analysis/HiggsAnalysis-CombinedLimit.git HiggsAnalysis/CombinedLimit
    cd HiggsAnalysis/CombinedLimit
    git checkout 74x-root6

    combine -M MaxLikelihoodFit -t -1 --expectSignal 1  -S 0  datacard.txt 
    combine -M MaxLikelihoodFit -t -1 --expectSignal 1        datacard.txt 

    combine -M Asymptotic datacard.txt
    combine -M Asymptotic -t -1 datacard.txt
    
    
Add variables:

    gardener.py dmvarfiller \
                /media/data/amassiro/LatinoTrees/25ns/05Aug2015/latino_WZ.root \
                /media/data/amassiro/LatinoTrees/monoH/latino_WZ.root

    gardener.py dmvarfiller \
                /media/data/amassiro/LatinoTrees/25ns/05Aug2015/latino_ZZ.root \
                /media/data/amassiro/LatinoTrees/monoH/latino_ZZ.root

    gardener.py dmvarfiller \
                /media/data/amassiro/LatinoTrees/25ns/05Aug2015/latino_Higgs_hzpzp_nohdecay_ww_1000GeV.root \
                /media/data/amassiro/LatinoTrees/monoH/latino_Higgs_hzpzp_nohdecay_ww_1000GeV.root

    gardener.py dmvarfiller \
                /media/data/amassiro/LatinoTrees/50ns/latino_WWTo2L2Nu.root \
                /media/data/amassiro/LatinoTrees/monoH/latino_WWTo2L2Nu.root
                