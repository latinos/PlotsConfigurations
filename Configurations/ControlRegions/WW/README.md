WW plots
==============

Common tools for analysis:

    plot distributions


e.g.

    mkShapes.py      --pycfg=configuration.py  --inputDir=/media/data/amassiro/LatinoTrees/25ns/21Oct2015/mcwghtcount__MC__l2sel/
    
    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_WW.root
    
    mkDatacards.py   --pycfg=configuration.py  --inputFile=rootFile/plots_WW.root

    
    
    
    
    'VVV': {'isData': ['0'], 'name': ['latino_WZZ.root', 'latino_ZZZ.root'], 'weight': 'baseW*puW*GEN_weight_SM/abs(GEN_weight_SM)'},
    'top': {'isData': ['0', '0', '0'], 'weights': ['GEN_weight_SM/abs(GEN_weight_SM)', '1', '1'], 'name': ['latino_ST_t-channel.root', 'latino_ST_tW_antitop.root', 'latino_ST_tW_top.root'], 'weight': 'baseW*puW'}, 
    'WW': {'isData': ['0'], 'weights': ['abs(nllW)'], 'name': ['latino_WWTo2L2Nu.root'], 'weight': 'baseW*puW/10.481*12.718'},
    'Wjets': {'isData': ['0'], 'name': ['latino_WJetsToLNu.root'], 'weight': 'baseW*puW*GEN_weight_SM/abs(GEN_weight_SM)'}, 
    'DY': {'isData': ['0', '0'], 'name': ['latino_DYJetsToLL_M-50.root', 'latino_DYJetsToLL_M-10to50.root'], 'weight': 'baseW*puW*GEN_weight_SM/abs(GEN_weight_SM)'}, 
    'ttbar': {'isData': ['0'], 'weights': ['1'], 'name': ['latino_TTJets.root'], 'weight': 'baseW*puW*GEN_weight_SM/abs(GEN_weight_SM)'}, 
    'DATA': {'isData': ['1'], 'name': ['../l2sel/DATA.root'], 'weight': 'trigger'}, 
    'WZ': {'isData': ['0'], 'weights': ['1'], 'name': ['latino_WZTo3LNu.root'], 'weight': 'baseW*puW'}}

    
    
    
    
    

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
    
    hadd /media/data/amassiro/LatinoTrees/25ns/21Oct2015/mcwghtcount__MC__l2sel/latino_TTJets.root  \
         /media/data/amassiro/LatinoTrees/25ns/21Oct2015/mcwghtcount__MC__l2sel/latino_TTJets__part*.root
    
    
    hadd /media/data/amassiro/LatinoTrees/25ns/21Oct2015/mcwghtcount__MC__l2sel/latino_ST_t-channel.root  \
         /media/data/amassiro/LatinoTrees/25ns/21Oct2015/mcwghtcount__MC__l2sel/latino_ST_t-channel__part*.root
    
    
    hadd /media/data/amassiro/LatinoTrees/25ns/21Oct2015/l2sel/DATA.root  /media/data/amassiro/LatinoTrees/25ns/21Oct2015/l2sel/latino_*.root
    
    