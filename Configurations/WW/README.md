WW plots
==============

Common tools for analysis:

    plot distributions


e.g.

    mkShapes.py      --pycfg=configuration.py  --inputDir=/media/data/amassiro/LatinoTrees/50ns/
    
    mkPlot.py        --pycfg=configuration.py  --inputFile=plotWW/plots_WW.root
    
    mkDatacards.py   --pycfg=configuration.py  --inputFile=plotWW/plots_WW.root
    
Run combine:

    combine -M MaxLikelihoodFit -t -1 --expectSignal 1  -S 0  datacard.txt 

