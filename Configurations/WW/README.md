WW plots
==============

Common tools for analysis:

    plot distributions


e.g.

    mkShapes.py      --pycfg=configuration.py  --inputDir=/media/data/amassiro/LatinoTrees/50ns/
    mkShapes.py      --pycfg=configuration.py  --inputDir=/media/data/amassiro/LatinoTrees/25ns/05Aug2015/
    
    mkPlot.py        --pycfg=configuration.py  --inputFile=plotWW/plots_WW.root
    
    mkDatacards.py   --pycfg=configuration.py  --inputFile=plotWW/plots_WW.root
    
Run combine:

    git clone https://github.com/cms-analysis/HiggsAnalysis-CombinedLimit.git HiggsAnalysis/CombinedLimit
    cd HiggsAnalysis/CombinedLimit
    git checkout 74x-root6

    combine -M MaxLikelihoodFit -t -1 --expectSignal 1  -S 0  datacard.txt 
    combine -M MaxLikelihoodFit -t -1 --expectSignal 1        datacard.txt 

    combine -M Asymptotic datacard.txt
    combine -M Asymptotic -t -1 datacard.txt
    
    
    