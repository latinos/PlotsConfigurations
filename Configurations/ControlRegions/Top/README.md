Top plots
==============

To produce Control Region Plots in the present configuration, start mounting cernbox::

   source /afs/cern.ch/project/eos/installation/user/etc/setup.sh
   eosmount eosuser

Then launch mkShapes to produce the rootfile with the histograms::

     mkShapes.py --pycfg=configuration.py --inputDir=$PWD

and finally draw the plots:

    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_Top.root 

the plots will be saved in your www folder, and will be visible on your cern web page.

==============

Common tools for analysis:

    plot distributions


Steps to get datacards and plots:

    
    cd /tmp/<your nice login>
    eosusermount eos
    cd -
    ln -s /tmp/<your nice login>
    
    mkShapes.py      --pycfg=configuration.py  --doThreads=True   --inputDir=eos/user/j/jlauwers/HWW2015/07Jun2016_spring16__mAODv2/MCl2loose16__hadd__LepEff__l2tight__wwSel
    mkShapes.py      --pycfg=configuration.py  --doThreads=True   --inputDir=eos/user/j/jlauwers/HWW2015/07Jun2016_spring16_mAODv2/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/
    mkShapes.py      --pycfg=configuration.py  --doThreads=True   --inputDir=eos/user/p/piedra/HWW2016/07Jun2016_spring16_mAODv2/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/  
    mkShapes.py      --pycfg=configuration.py  --doThreads=True   --inputDir=eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWWTightMu/07Jun2016_spring16_mAODv2_4p0fbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/
    
    mkShapes.py      --pycfg=configuration.py  --doThreads=True   --inputDir=eos/user/a/amassiro/HWW2015/ICHEP/07Jun2016_spring16_mAODv2_6p3fbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/
    
    mkShapes.py      --pycfg=configuration.py  --doThreads=True   --inputDir=eosBig/cms/store/group/phys_higgs/cmshww/amassiro/HWW12fb_v2/07Jun2016_spring16_mAODv2_12pXfbm1/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/

    mkShapes.py      --pycfg=configuration_iteos.py  --doThreads=True   --inputDir=eos/user/r/rodrigo/HWW2016/07Jun2016_spring16_mAODv2_12pXfbm1_repro/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/  

    
    
    
    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_Top.root
    
    mkDatacards.py   --pycfg=configuration.py  --inputFile=rootFile/plots_Top.root

    

    
    