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
    
    
    
Filter trees:


    gardener.py  filter \
                -f  "std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] < 0   \
                 &&  std_vector_lepton_pt[0]>30 && std_vector_lepton_pt[1]>20 \
                 && (abs(std_vector_lepton_flavour[0]) == 13 || std_vector_lepton_eleIdMedium[0] == 1) \
                 && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_eleIdMedium[1] == 1) \
                 && (abs(std_vector_lepton_flavour[0]) == 11 || std_vector_lepton_isMediumMuon[0] == 1) \
                 && (abs(std_vector_lepton_flavour[1]) == 11 || std_vector_lepton_isMediumMuon[1] == 1) \
                 && (abs(std_vector_lepton_flavour[0]) == 11 || std_vector_lepton_chargedParticleIso[0]/std_vector_lepton_pt[0] < 0.20) \
                 && (abs(std_vector_lepton_flavour[1]) == 11 || std_vector_lepton_chargedParticleIso[1]/std_vector_lepton_pt[1] < 0.20) \
                 && mll>10"  \
                -r   /media/data/amassiro/LatinoTrees/25ns/05Aug2015/  \
                     /media/data/amassiro/LatinoTrees/WW/25ns/05Aug2015/

                     
    gardener.py  filter \
                -f  "std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] < 0   \
                 &&  std_vector_lepton_pt[0]>30 && std_vector_lepton_pt[1]>20 \
                 && (abs(std_vector_lepton_flavour[0]) == 13 || std_vector_lepton_eleIdMedium[0] == 1) \
                 && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_eleIdMedium[1] == 1) \
                 && (abs(std_vector_lepton_flavour[0]) == 11 || std_vector_lepton_isMediumMuon[0] == 1) \
                 && (abs(std_vector_lepton_flavour[1]) == 11 || std_vector_lepton_isMediumMuon[1] == 1) \
                 && (abs(std_vector_lepton_flavour[0]) == 11 || std_vector_lepton_chargedParticleIso[0]/std_vector_lepton_pt[0] < 0.20) \
                 && (abs(std_vector_lepton_flavour[1]) == 11 || std_vector_lepton_chargedParticleIso[1]/std_vector_lepton_pt[1] < 0.20) \
                 && mll>10"  \
                -r   /media/data/amassiro/LatinoTrees/50ns/05Aug2015/  \
                     /media/data/amassiro/LatinoTrees/WW/50ns/05Aug2015/                     
                    
                    
                    