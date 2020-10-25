# Snowmass VBF

Configuration for VBF the analysis targeting the snowmass conference. The current version is based on the Keras_2018_v6 configuration, located at:

    https://github.com/latinos/PlotsConfigurations/tree/master/Configurations/VBF/Keras_2018_v6

## Instructions to run the analysis

### Produce distributions using mkShapesMulti.py in batch mode

    mkShapesMulti.py --pycfg=configuration.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

Resubmit failed jobs:

    cd $HOME/scripts/jobs/mkShapes__vbf_snowmass/
    for i in *jid; do condor_submit ${i/jid/jds}; done
    cd -

Or, if they failed because the wall clock time have been exceeded, resubmit them on a longer-time queue:

    cd $HOME/scripts/jobs/mkShapes__vbf_snowmass/
    for i in *jid; do sed -i "s/longlunch/workday/g" ${i/jid/jds}; condor_submit ${i/jid/jds}; done
    cd -

### Merge rootfiles using hadd

    mkShapesMulti.py --pycfg=configuration.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

### Plot distributions

    mkPlot.py --inputFile=rootFile/plots_vbf_snowmass.root --fileFormats=png --onlyPlot=cratio

Repeat, but without plotting data in the signal region (blind policy):

    mkPlot.py --pycfg=configuration_blind.py --onlyCut=hww2l2v_13TeV_of2j_vbf     --inputFile=rootFile/plots_vbf_snowmass.root --fileFormats=png --onlyPlot=cratio
    mkPlot.py --pycfg=configuration_blind.py --onlyCut=hww2l2v_13TeV_of2j_DNN_vbf --inputFile=rootFile/plots_vbf_snowmass.root --fileFormats=png --onlyPlot=cratio
    mkPlot.py --pycfg=configuration_blind.py --onlyCut=hww2l2v_13TeV_of2j_DNN_top --inputFile=rootFile/plots_vbf_snowmass.root --fileFormats=png --onlyPlot=cratio
    mkPlot.py --pycfg=configuration_blind.py --onlyCut=hww2l2v_13TeV_of2j_DNN_ww  --inputFile=rootFile/plots_vbf_snowmass.root --fileFormats=png --onlyPlot=cratio
    mkPlot.py --pycfg=configuration_blind.py --onlyCut=hww2l2v_13TeV_of2j_DNN_ggh --inputFile=rootFile/plots_vbf_snowmass.root --fileFormats=png --onlyPlot=cratio

### Create datacards

    mkDatacards.py --pycfg=configuration.py --inputFile=rootFile/plots_vbf_snowmass.root    
