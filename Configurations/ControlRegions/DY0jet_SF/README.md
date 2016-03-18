DY plots
==============

To produce Control Region Plots in the present configuration, start mounting cernbox::

      source /afs/cern.ch/project/eos/installation/user/etc/setup.sh
   
      eosmount eosuser

Then launch mkShapes to produce the rootfile with the histograms::

     mkShapes.py --pycfg=configuration.py --inputDir=$PWD

and finally draw the plots:

    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_DY.root 

the plots will be saved in your www folder, and will be visible on your cern web page.

==============

Common tools for analysis:

    plot distributions


e.g.

    mkShapes.py      --pycfg=configuration.py  --inputDir=/media/data/amassiro/LatinoTrees/25ns/21Oct2015/mcwghtcount__MC__l2sel/
    mkShapes.py      --pycfg=configuration.py  --inputDir=/media/data/amassiro/LatinoTrees/Moriond/nominal/

    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_DY.root
    
    mkDatacards.py   --pycfg=configuration.py  --inputFile=rootFile/plots_DY.root

    
Run combine:

    git clone https://github.com/cms-analysis/HiggsAnalysis-CombinedLimit.git HiggsAnalysis/CombinedLimit
    cd HiggsAnalysis/CombinedLimit
    git checkout 74x-root6

    combine -M MaxLikelihoodFit -t -1 --expectSignal 1  -S 0  datacard.txt 
    combine -M MaxLikelihoodFit -t -1 --expectSignal 1        datacard.txt 

    combine -M Asymptotic datacard.txt
    combine -M Asymptotic -t -1 datacard.txt
    
    
    
