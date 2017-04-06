Test
====


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
