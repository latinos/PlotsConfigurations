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
    ln -s /tmp/<your nice login>
    
    mkShapes.py      --pycfg=configuration.py  --doThreads=True   --inputDir=eos/user/p/piedra/HWW2016/07Jun2016_spring16_mAODv2/MCl2loose__hadd__bSFL2pTEff__l2tight/  
    
    mkShapes.py      --pycfg=configuration.py  --doThreads=True   --inputDir=eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWWTightMu/07Jun2016_spring16_mAODv2_4p0fbm1/MCl2loose__hadd__bSFL2pTEff__l2tight/
      
    mkShapes.py      --pycfg=configuration.py  --doThreads=True   --inputDir=eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3/07Jun2016_spring16_mAODv2_6p3fbm1/MCl2loose__hadd__bSFL2pTEff__l2tight/
    
    mkShapes.py      --pycfg=configuration.py  --doThreads=True   --inputDir=eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3_v2/MCl2loose__hadd__bSFL2pTEff__l2tight/

    mkShapes.py      --pycfg=configuration.py  --doThreads=True   --inputDir=eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__puadder__hadd__bSFL2pTEff__l2tight/
    
    mkShapes.py      --pycfg=configuration.py  --doThreads=True   --inputDir=eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_repro/07Jun2016_spring16_mAODv2_12pXfbm1_repro/MCl2loose__hadd__bSFL2pTEff__l2tight/
    
    
    
    
    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_DY.root
    
    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_DYtest.root
    
    
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
    
    mkShapes.py      --pycfg=configuration.py  --doThreads=True   --inputDir=eos/user/j/jlauwers/HWW2015/07Jun2016_spring16__mAODv2/MCl2loose16__hadd__LepEff__l2tight
    
    mkShapes.py      --pycfg=configuration.py  --doThreads=True   --inputDir=eos/user/p/piedra/HWW2016/07Jun2016_spring16_mAODv2/MCl2loose__hadd__bSFL2pTEff__l2tight/  
    
    mkShapes.py      --pycfg=configuration.py  --doThreads=True   --inputDir=eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW6p3_v2/MCl2loose__hadd__bSFL2pTEff__l2tight/

    mkShapes.py      --pycfg=configuration.py  --doThreads=True   --inputDir=eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__puadder__hadd__bSFL2pTEff__l2tight/
    
    mkShapes.py      --pycfg=configuration.py  --doThreads=True   --inputDir=eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_v2/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__hadd__bSFL2pTEff__l2tight/
    
    
Test:

    TF1* f4 = new TF1 ("f4","[2]*(0.95 - [3]*TMath::Erf((x-[0])/[1]))",0,20);
    f4->SetParameter(0,10);
    f4->SetParameter(1,1);
    f4->SetParameter(2,1);
    f4->SetParameter(3,0.1);
    f4->Draw();

    
      1  p0           1.25151e+01   2.78047e-01   2.35850e-03  -1.46487e-04
      2  p1           5.51582e+00   4.99190e-01   4.44581e-03   7.74559e-05
      3  p2           1.08683e+00   2.00564e-03   1.61409e-05   1.68214e-02
      4  p3           6.57370e-02   1.84326e-03   1.61061e-05   4.17076e-04

      
      (1.08683 * (0.95 - 0.0657370*TMath::Erf((x-12.5151)/5.51582)))
      
    
    TF1* f4 = new TF1 ("f4","(1.08683 * (0.95 - 0.0657370*TMath::Erf((x-12.5151)/5.51582)))",0,100);
    f4->Draw();

    
    
    
    