# Connect to GitHub with SSH

    eval "$(ssh-agent -s)"
    ssh-add ~/.ssh/id_ed25519

# Produce a valid VOMS proxy

    voms-proxy-init -voms cms -rfc --valid 168:0
    cmsenv

# Produce histograms

    mkShapesMulti.py --pycfg=configuration.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=testmatch

# Check job status

    condor_q

# Resubmit failed jobs

    pushd $HOME/cms/HWW2015/jobs/mkShapes__SS_2017_v9__ALL
    for i in */*jid; do condor_submit ${i/jid/jds}; done
    popd

If they failed because the wall clock time has been exceeded, resubmit them on a longer-time queue.

    pushd $HOME/cms/HWW2015/jobs/mkShapes__SS_2017_v9__ALL
    for i in */*jid; do sed -i "s/longlunch/workday/g" ${i/jid/jds}; condor_submit ${i/jid/jds}; done
    popd

# Group (hadd) histograms

    mkShapesMulti.py --pycfg=configuration.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=8

# Draw distributions

    mkPlot.py --pycfg=configuration.py --inputFile=rootFile/plots_SS_2017_v9.root --fileFormats=png --onlyPlot=cratio --showIntegralLegend=1 --minLogCratio=1

