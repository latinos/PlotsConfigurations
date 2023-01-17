EXO ZZ>4l
====

Install

    cmsrel CMSSW_10_6_4
    cd CMSSW_10_6_4/src/
    cmsenv
    
    git clone --branch 13TeV git@github.com:latinos/setup.git LatinosSetup
    
    source LatinosSetup/SetupShapeOnly.sh
    
    scramv1 b -j 20
    
    
Test

    voms-proxy-init -voms cms

    
    
Uff:

    rm -rf correctionlib jsonpog-integration
    
    
Run:
    
    
    mkShapesMulti.py --pycfg=configuration.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=workday 

    mkShapesMulti.py --pycfg=configuration.py --doHadd=1 --batchSplit=Samples,Files

    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_exo4l.root



