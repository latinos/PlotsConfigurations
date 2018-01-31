# example of configuration file

# Samples :
# mkShapes.py --pycfg=configuration.py --batchSplit=Cuts,Samples --doBatch=True --iihe-wall-time=8:00:00
# mkShapes.py --pycfg=configuration.py --batchSplit=Cuts,Samples --doHadd=True
# mkPlot.py --pycfg=configuration.py --inputFile=../rootFile/plots_WZ.root
# python ../makePositive.py ../rootFile/plots_WZ.root
# mkDatacards.py --pycfg=configuration.py --inputFile=../rootFile/plots_WZ.root

tag = 'WZ'


# used by mkShape to define output directory for root files
outputDir = '../rootFile'


# file with list of variables
variablesFile = 'variables.py'

# file with list of cuts
cutsFile = 'cuts.py' 

# file with list of samples
samplesFile = 'samples.py' 

# file with list of samples
plotFile = 'plot.py' 

# options of the plots
#plotNormalizedDistributions = True   # default is False



# luminosity to normalize to (in 1/fb)
#lumi = 6.264
#lumi = 4.3
# lumi = 5
lumi = 35.922

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plotWZ'


# used by mkDatacards to define output directory for datacards
outputDirDatacard = '../datacards'


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'


