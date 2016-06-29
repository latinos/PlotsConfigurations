BTag calculation
==============

To produce Control Region Plots in the present configuration, start mounting cernbox::

    source /afs/cern.ch/project/eos/installation/user/etc/setup.sh
    eosmount eosuser

Then launch mkShapes to produce the rootfile with the histograms::

     mkShapes.py --pycfg=configuration.py --inputDir=$PWD

and finally draw the plots:

    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_BTag.root 

the plots will be saved in your www folder, and will be visible on your cern web page.

==============

Common tools for analysis:

    plot distributions


Steps to get datacards and plots:

    
    cd /tmp/<your nice login>
    eosusermount eos
    cd -
    ln -s /tmp/<your nice login>
    
    mkShapes.py      --pycfg=configuration.py  --doThreads=True   --inputDir=eos/user/j/jlauwers/HWW2015/07Jun2016_spring16__mAODv2/MCl2loose__hadd__bSFLepEff__l2tight__wwSel
                                                                             
    mkPlot.py        --pycfg=configuration.py  --inputFile=rootFile/plots_BTag.root
    
    mkDatacards.py   --pycfg=configuration.py  --inputFile=rootFile/plots_BTag.root

    

    
    