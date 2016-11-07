# example of configuration file

tag = 'VBF'


# used by mkShape to define output directory for root files
outputDir = 'rootFile'


# file with list of variables
variablesFile = 'variables.py'

# file with list of cuts
cutsFile = 'cuts.py' 

# file with list of samples
samplesFile = 'samples_iteos.py' 

# file with list of samples
plotFile = 'plot.py' 

# options of the plots
plotNormalizedDistributions = True   # default is False



# luminosity to normalize to (in 1/fb)
#lumi = 6.264
#lumi = 4.3
# lumi = 5
lumi = 12.8890

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plotVBF'


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards'


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances_iteos.py'


