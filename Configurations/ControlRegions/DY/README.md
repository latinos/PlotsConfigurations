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


Steps to get datacards and plots:

    
    cd /tmp/<your nice login>
    eosusermount eos
    cd -
    mkShapes.py      --pycfg=configuration.py  --inputDir=/tmp/<nice-login>/eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight/
    
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
    
    

Data:

    /eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight/
    /eos/user/j/jlauwers/HWW2015/22Jan_Run2015C_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/
    /eos/user/j/jlauwers/HWW2015/22Jan_Run2015D_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/


Backup:

    mkShapes.py      --pycfg=configuration.py  --inputDir=/media/data/amassiro/LatinoTrees/Moriond/MCl2loose__hadd__bSFL2pTEff__l2tight/
    mkShapes.py      --pycfg=configuration.py  --inputDir=/tmp/amassiro/eos/user/j/jlauwers/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight/
    
    mkShapes.py      --pycfg=configuration.py  --inputDir=/tmp/amassiro/test/
    
    mkShapes.py      --pycfg=configuration.py  --inputDir=eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__L2Eff/
    
    mkShapes.py      --pycfg=configuration.py  --inputDir=eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight/
    mkShapes.py      --doThreads=True    --pycfg=configuration.py  --inputDir=eos/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight/
    
    
    
Test:

    TF1* f4 = new TF1 ("f4","[2]*(0.95 - 0.1*TMath::Erf((x-[0])/[1]))",0,20);
    f4->SetParameter(0,10);
    f4->SetParameter(1,1);
    f4->SetParameter(2,1);
    f4->Draw();

    
       1  p0           1.42199e+01   2.00614e-01   7.49397e-04  -3.24175e-03
       2  p1           8.78770e+00   2.36675e-01   1.47925e-03  -1.11709e-03
       3  p2           9.94280e-01   1.57245e-03   5.72159e-06  -2.93479e-01

    (0.95 - 0.1*TMath::Erf((x-14)/8.8))
    TF1* f4 = new TF1 ("f4","(0.95 - 0.1*TMath::Erf((x-14)/8.8))",0,20);
    
    
    
    
    
    