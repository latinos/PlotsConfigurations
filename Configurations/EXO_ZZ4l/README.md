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

    mkPlot.py --pycfg=configuration.py --inputFile=rootFiles_exo4l/plots_exo4l.root



Variables:

    https://github.com/latinos/LatinoAnalysis/blob/master/Gardener/python/variables/ZWWVar.C
    


Resubmit:


    ls -alrth /afs/cern.ch/user/a/amassiro/jobs/jobs/mkShapes__exo4l__ALL/mkShapes__exo4l__*.jid | awk '{print "condor_submit " $9}'  | sed 's/jid/jds/'
    ls -alrth /afs/cern.ch/user/a/amassiro/jobs/jobs/mkShapes__exo4l__ALL/*/mkShapes__exo4l__*.jid | awk '{print "condor_submit " $9}'  | sed 's/jid/jds/'

