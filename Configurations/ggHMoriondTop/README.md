ggH analysis
==============

Common tools for analysis:

    plot distributions
    limit and significance results


e.g.

    mkShapes.py      --pycfg=configuration.py  --inputDir=/media/data/amassiro/LatinoTrees/25ns/21Oct2015/mcwghtcount__MC__l2sel/
    mkShapes.py      --pycfg=configuration.py  --inputDir=/media/data/amassiro/LatinoTrees/Moriond/nominal/
    mkShapes.py      --pycfg=configuration.py  --inputDir=/media/data/amassiro/LatinoTrees/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/
    mkShapes.py      --pycfg=configuration.py  --inputDir=/tmp/amassiro/eos/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff/
    
    
    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_ggH_old.root
    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_ggH.root
    
    mkDatacards.py   --pycfg=configuration.py  --inputFile=rootFile/plots_ggH.root

    
Run combine:

    git clone https://github.com/cms-analysis/HiggsAnalysis-CombinedLimit.git HiggsAnalysis/CombinedLimit
    cd HiggsAnalysis/CombinedLimit
    git checkout 74x-root6

    cd ~/Framework/CMSSW_7_1_15/src/
    cmsenv
    cd -
    
    combine -M MaxLikelihoodFit -t -1 --expectSignal 1  -S 0  datacard.txt 
    combine -M MaxLikelihoodFit -t -1 --expectSignal 1        datacard.txt 

    combine -M Asymptotic datacard.txt
    combine -M Asymptotic -t -1 datacard.txt
    
    
    combine -M MultiDimFit datacard.txt  --algo=grid --points 100  --setPhysicsModelParameterRanges r=0.01,10  -m 125   -t -1 --expectSignal=1 --saveToys
    
    combine -M ProfileLikelihood --significance datacard.txt -t -1 --expectSignal=1

    Significance: 1.63231

Data:

    /eos/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco/l2sel__hadd
    /eos/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0716pb/l2sel__hadd
    /eos/user/x/xjanssen/HWW2015/21OctBis_Run2015D_PromptReco_0851pb/l2sel__hadd

