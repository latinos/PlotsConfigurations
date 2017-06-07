Test
====


    cd /afs/cern.ch/work/a/amassiro/Latinos/Framework/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/ggH/test

    

Test 1: combination of datacards and nuisance vs mu scans
~~~

    cd ~/Framework/Combine/CMSSW_7_4_7/src/
    eval `scramv1 runtime -sh`
    cd -


 
    combineCards.py   0j=datacard.0.txt \
                      1j=datacard.1.txt \
                  >   combined.txt
                  


    text2workspace.py combined.txt   -o    combined.root

                       
    combineTool.py -d combined.root -M MultiDimFit    \
               --algo=grid  --saveSpecifiedNuis all  --setPhysicsModelParameterRanges  r=-0.0,2.0    -n "mytest"   \
               --points 100   


    python  plot2Dscan.py -i   higgsCombinemytest.MultiDimFit.mH120.root   -n   testPlot

    
    
    
Test 2: post-fit normalization
~~~

    cd ~/Framework/Combine/CMSSW_7_4_7/src/
    eval `scramv1 runtime -sh`
    cd -


 
    combineCards.py   b0j=datacard.0.new.txt \
                      b1j=datacard.1.new.txt \
                      b2j=datacard.2.new.txt \
                      -S   \
                  >   combined.new.txt
                  
    text2workspace.py combined.new.txt   -o    combined.new.root

    
    combine -M MaxLikelihoodFit    combined.new.root     --saveShapes --saveNormalizations   -n "saveall" 
    
    
    r99t mlfitsaveall.root
    .L printPrePostFit.C
    printPrePostFit("background")
    printPrePostFit("bkg2")
    printPrePostFit("ggH_hww")
    
    
    
    