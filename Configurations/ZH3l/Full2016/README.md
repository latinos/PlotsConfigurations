Procedure for running current version of miniAOD analysis

Setup environmental variables CMSSW_DIRECTORY and COMBINE_DIRECTORY to point to CMSSW base dir (src) and Combine directory

To make plots for signal region:
> cd SignalRegion
> mkShapes.py --pycfg=configuration.py --batchSplit=AsMuchAsPossible --doThreads=True --inputDir=/afs/cern.ch/work/c/cmills/public/Zh3l_ntuples_1j/nominals
> mkPlot.py --inputFile=rootFiles_ZH3lSR/plots_ZH3lSR.root --showIntegralLegend=1

To make datacards for signal region:
> cd SignalRegion
> mkShapes.py --pycfg=configuration_fit.py --batchSplit=AsMuchAsPossible --doThreads=True --inputDir=/afs/cern.ch/work/c/cmills/public/Zh3l_ntuples_1j/nominals
> mkDatacards.py --pycfg=configuration_fit.py --inputFile=rootFiles_ZH3lSR_fit/plots_ZH3lSR_fit.root

To make plots for control region:
> cd ControlRegion
> mkShapes.py --pycfg=configuration.py --batchSplit=AsMuchAsPossible --doThreads=True --inputDir=/afs/cern.ch/work/c/cmills/public/Zh3l_ntuples_1j/nominals
> mkPlot.py --inputFile=rootFiles_ZH3lCR/plots_ZH3lCR.root --showIntegralLegend=1

To make datacards for control region:
> cd ControlRegion
> mkShapes.py --pycfg=configuration_fit.py --batchSplit=AsMuchAsPossible --doThreads=True --inputDir=/afs/cern.ch/work/c/cmills/public/Zh3l_ntuples_1j/nominals
> mkDatacards.py --pycfg=configuration_fit.py --inputFile=rootFiles_ZH3lCR_fit/plots_ZH3lCR_fit.root

All fits can be run using shell scripts in SignalRegion
> cd SignalRegion
> source setup_combine.sh (setup Combine environment)
> source prep_fits.sh (merge datacards and convert to workspaces)
> source run_fits.sh (calculate significance and mu uncertainties, with and without systematics, for all fits)

Note that these shell scripts are partially used as bookkeeping tools; feel free to disregard