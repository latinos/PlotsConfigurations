# ZH3l configurations

## Making histograms

Unless specified otherwise, all commands should be run from the configuration directory

Submit jobs:

    mkShapesMulti.py --pycfg=configuration.py --batchSplit=Samples,Files --doBatch=True --batchQueue=longlunch --treeName=Events

You can check the status of running jobs with `condor_q <username>`, and look for failed jobs with `ls <jobdir>/*/*jid`.

To resubmit timed-out jobs, from the job directory do:

    for i in */*jid; do sed -i "s/longlunch/workday/g" ${i/jid/jds}; condor_submit ${i/jid/jds}; done
  
Note that the above commands assume you are using the default job directory structure, where the output files for each job are stored in separate subfolders. If all job output files are stored in the same directory (jobDirSplit = False in userConfig.py) replace the */*jid with *jid above.

Once all jobs have finished:
  
    mkShapesMulti.py --pycfg=configuration.py --doHadd=1 --batchSplit=Samples,Files --doNotCleanup --nThreads=10

## Making plots

    mkPlot.py --inputFile=<hadded root file> --showIntegralLegend=1 
    
## Making datacards

    mkDatacards.py --pycfg configuration.py --inputFile <hadded root file>
    
This produces separate datacards for each SR / CR -- they will need to be combined before running the fit.

## Combine datacards and produce workspace

Source combine environment:

    pushd COMBINE_DIR
    eval `scramv1 runtime -csh`
    popd

where COMBINE_DIR is the directory where you installed combine (ex. `~/Combine/CMSSW_10_2_13/src`)

To combine datacards for one year, do

    combineCards.py   SR1j=datacards_ZH3l_2016_v7/zh3l_SR_1j/mTlmetj/datacard.txt \
                    WZCR1j=datacards_ZH3l_2016_v7/zh3l_WZ_CR_1j/events/datacard.txt \
                      SR2j=datacards_ZH3l_2016_v7/zh3l_SR_2j/mTlmetjj/datacard.txt \
                    WZCR2j=datacards_ZH3l_2016_v7/zh3l_WZ_CR_2j/events/datacard.txt > Zh3l_2016.txt

To combine datacards for different years, you could go to the ZH3l directory and do:

    combineCards.py zh3l_2016=Full2016_v7/Zh3l_2016.txt zh3l_2017=Full2017_v7/Zh3l_2017.txt zh3l_2018=Full2018_v7/Zh3l_2018.txt > Zh3l_RunII.txt
    
Convert datacards to workspaces:

    text2workspace.py Zh3l_2016.txt  -o Zh3l_2016.root
    text2workspace.py Zh3l_2017.txt  -o Zh3l_2017.root
    text2workspace.py Zh3l_2018.txt  -o Zh3l_2018.root
    text2workspace.py Zh3l_RunII.txt -o Zh3l_RunII.root

where each command is run from the directory containing the .txt datacard.
    
## Run fit

Determine expected significance and signal strength uncertainty:

    combine -M Significance   -t -1 --expectSignal=1                      Zh3l_2016.root -n Zh3l_2016
    combine -M FitDiagnostics -t -1 --expectSignal=1 --rMin=-10 --rMax=10 Zh3l_2016.root -n Zh3l_2016

Determine stat-only expected significance and signal strength uncertainty:

    combine -M Significance   -t -1 --expectSignal=1                      Zh3l_2016.root -n Zh3l_2016 --freezeParameters var{.*}
    combine -M FitDiagnostics -t -1 --expectSignal=1 --rMin=-10 --rMax=10 Zh3l_2016.root -n Zh3l_2016 --freezeParameters var{.*}

Note that the above commands only seem to work in bash shell -- you can copy the above commands into a bash script and execute if tcsh is your default.

Run impacts:

    combineTool.py -M Impacts -d Zh3l_2016.root -m 125.09 -n Zh3l_2016 --expectSignal=1 -t -1 --setParameterRanges r=-10,10:CMS_hww_WZ3l1jnorm=-5,5:CMS_hww_WZ3l2jnorm=-5,5 --doInitialFit --robustFit 1 
    combineTool.py -M Impacts -d Zh3l_2016.root -m 125.09 -n Zh3l_2016 --expectSignal=1 -t -1 --setParameterRanges r=-10,10:CMS_hww_WZ3l1jnorm=-5,5:CMS_hww_WZ3l2jnorm=-5,5 --doFits --robustFit 1 --parallel 8
    combineTool.py -M Impacts -d Zh3l_2016.root -m 125.09 -n Zh3l_2016 --expectSignal=1 -t -1 --setParameterRanges r=-10,10:CMS_hww_WZ3l1jnorm=-5,5:CMS_hww_WZ3l2jnorm=-5,5 -o impacts_Zh3l_2016.json
    plotImpacts.py -i impacts_Zh3l_2016.json -o impacts_Zh3l_2016

For more info on combine, read the manual at https://cms-analysis.github.io/HiggsAnalysis-CombinedLimit/
    
You can also get a list of the different combine options by doing `combine --help`
