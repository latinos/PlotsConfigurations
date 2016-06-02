Control regions plots
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
    
    hadd /media/data/amassiro/LatinoTrees/25ns/21Oct2015/mcwghtcount__MC__l2sel/latino_TTJets.root  \
         /media/data/amassiro/LatinoTrees/25ns/21Oct2015/mcwghtcount__MC__l2sel/latino_TTJets__part*.root
    
    
    hadd /media/data/amassiro/LatinoTrees/25ns/21Oct2015/mcwghtcount__MC__l2sel/latino_ST_t-channel.root  \
         /media/data/amassiro/LatinoTrees/25ns/21Oct2015/mcwghtcount__MC__l2sel/latino_ST_t-channel__part*.root
    
    
    hadd /media/data/amassiro/LatinoTrees/25ns/21Oct2015/l2sel/DATA.root  /media/data/amassiro/LatinoTrees/25ns/21Oct2015/l2sel/latino_*.root
    

All:

    cd /afs/cern.ch/user/a/amassiro/Framework/CMSSW_8_0_5/src/LatinoAnalysis/
    cmsenv
    scramv1 b -j 20
    
    cd /afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ControlRegions
    
    cd WW
    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_WW.root
    cd ..
    
    cd Top0jets
    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_Top0jet.root
    cd ..
    
    cd Top1jet
    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_Top1jet.root
    cd ..
    
    cd SS
    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_ggH.root
    cd ..
    
    cd DYtt
    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_DY.root
    cd ..
    
    
    cd ../ggH/
    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_ggH.root
    cd -
    
    
    
    scp amassiro@lxplus.cern.ch:/afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ControlRegions/DYtt/plotCR/*.png    Figs/ControlRegions/DYtt/
    scp amassiro@lxplus.cern.ch:/afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ControlRegions/Top0jets/plotTop0jet/*.png    Figs/ControlRegions/Top0jets/
    scp amassiro@lxplus.cern.ch:/afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ControlRegions/Top1jet/plotTop1jet/*.png     Figs/ControlRegions/Top1jet/
    scp amassiro@lxplus.cern.ch:/afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ControlRegions/SS/plotGGH/*.png     Figs/ControlRegions/Fakes/
    scp amassiro@lxplus.cern.ch:/afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ControlRegions/WW/plotCR/*.png    Figs/WW/
    scp amassiro@lxplus.cern.ch:/afs/cern.ch/user/a/amassiro/Framework/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/ggH/plotGGH/*.png Figs/Results/
    
    
