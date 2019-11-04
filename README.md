# PlotsConfigurations
Plots configuration for mkShapes, mkPlot, mkDatacards

    
First, setup the LatinoAnalysis framework:

    cmsrel CMSSW_10_6_4
    cd CMSSW_10_6_4/src/
    cmsenv
    git clone --branch 13TeV git@github.com:latinos/setup.git LatinosSetup
    source LatinosSetup/SetupShapeOnly.sh
    scram b -j4

Download the PlotsConfigurations package anywhere, but remember to do 'cmsenv' of the CMSSW release you are using:

    git clone git@github.com:latinos/PlotsConfigurations.git

Make a copy and edit the following python file (`userConfig.py`) to specify your base directory, i.e. the directory in which your job related information will be stored:

    cd LatinoAnalysis/Tools/python/
    cp userConfig_TEMPLATE.py userConfig.py

Prepare your configuration, you can use the following configuration as a template (this is based on 2018 data and MC):

    https://github.com/latinos/PlotsConfigurations/tree/master/Configurations/ggH/Full2018

Produce the histograms submitting batch jobs using HTCondor:

    mkShapesMulti.py --pycfg=configuration.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=longlunch

You can choose one of the following queues according to your job expected running time:

    espresso     = 20 minutes
    microcentury = 1 hour
    longlunch    = 2 hours
    workday      = 8 hours
    tomorrow     = 1 day
    testmatch    = 3 days
    nextweek     = 1 week

For quick tests you can run interactively by just typing `mkShapesMulti.py --pycfg=configuration.py`. Use `mkShapesMulty.py --help` for more options.
You can also run interactively but submitting jobs in parallel with the command `mkShapesMulti.py --pycfg=configuration.py --doThreads=True`.

Once all your jobs are done (you can check job status with `condor_q`), you will find a `rootFile` directory in your area containing all the histograms specified in your configuration. 
You can proceed by h-adding all the files to get a single one containing everything:

    mkShapesMulti.py --pycfg=configuration.py --doHadd=1 --batchSplit=Samples,Files

If the step above takes too much time (can happen if you have too many variables and/or cuts), you can try to h-add by hand with the following command (TAG is defined in `configuration.py`):
 
    cd rootFile
    hadd -f -j 4 plots_TAG.root plots_TAG*
    cd -

You can now proceed making plots (`mkPlot.py --help` to see all available options):

    mkPlot.py --pycfg configuration.py --inputFile rootFile/plots_TAG.root --showIntegralLegend 1

and datacards (`mkDatacards.py --help` to see all available options):

    mkDatacards.py --pycfg configuration.py --inputFile rootFile/plots_TAG.root


Congratulations! You have done the analysis, or at least a very first step...

For fits and combine general info check the following:

    http://cms-analysis.github.io/HiggsAnalysis-CombinedLimit/
