WW plots
==============

Common tools for analysis:

    plot distributions


e.g.

    mkShapes.py      --pycfg=configuration.py  --inputDir=/media/data/amassiro/LatinoTrees/25ns/21Oct2015/mcwghtcount__MC__l2sel/
    
    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_WW.root
    
    mkDatacards.py   --pycfg=configuration.py  --inputFile=rootFile/plots_WW.root


Run combine:

    git clone https://github.com/cms-analysis/HiggsAnalysis-CombinedLimit.git HiggsAnalysis/CombinedLimit
    cd HiggsAnalysis/CombinedLimit
    git checkout 74x-root6

    combine -M MaxLikelihoodFit -t -1 --expectSignal 1  -S 0  datacard.txt 
    combine -M MaxLikelihoodFit -t -1 --expectSignal 1        datacard.txt 

    combine -M Asymptotic datacard.txt
    combine -M Asymptotic -t -1 datacard.txt
    
    
Hadd trees:

    hadd /media/data/amassiro/LatinoTrees/25ns/21Oct2015/mcwghtcount__MC__l2sel/latino_DYJetsToLL_M-50.root \
         /media/data/amassiro/LatinoTrees/25ns/21Oct2015/mcwghtcount__MC__l2sel/latino_DYJetsToLL_M-50_0*.root
    
    hadd /media/data/amassiro/LatinoTrees/25ns/21Oct2015/mcwghtcount__MC__l2sel/latino_DYJetsToLL_M-10to50.root \
         /media/data/amassiro/LatinoTrees/25ns/21Oct2015/mcwghtcount__MC__l2sel/latino_DYJetsToLL_M-10to50_0*.root
    
    
    hadd /media/data/amassiro/LatinoTrees/25ns/21Oct2015/mcwghtcount__MC__l2sel/latino_WJetsToLNu.root  \
         /media/data/amassiro/LatinoTrees/25ns/21Oct2015/mcwghtcount__MC__l2sel/latino_WJetsToLNu__part*.root
    
    hadd /media/data/amassiro/LatinoTrees/25ns/21Oct2015/mcwghtcount__MC__l2sel/latino_TTTo2L2Nu.root  \
         /media/data/amassiro/LatinoTrees/25ns/21Oct2015/mcwghtcount__MC__l2sel/latino_TTTo2L2Nu__part*.root
    
    hadd /media/data/amassiro/LatinoTrees/25ns/21Oct2015/mcwghtcount__MC__l2sel/latino_ST_t-channel.root  \
         /media/data/amassiro/LatinoTrees/25ns/21Oct2015/mcwghtcount__MC__l2sel/latino_ST_t-channel__part*.root
    
    
    hadd /media/data/amassiro/LatinoTrees/25ns/21Oct2015/l2sel/DATA.root  /media/data/amassiro/LatinoTrees/25ns/21Oct2015/l2sel/latino_*.root
    
    