# example of configuration file

tag = 'WH3l'


# used by mkShape to define output directory for root files
outputDir = 'rootFiles_repro'

# file with list of variables
variablesFile = 'variables.py'

# file with list of cuts
cutsFile = 'cuts.py' 
#cutsFile = 'cuts_detailed.py'

# file with list of samples
samplesFile = 'samples.py' 

# file with list of samples
plotFile = 'plot.py' 

# luminosity to normalize to (in 1/fb)
lumi = 12.8890

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plot_repro'


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards_repro'


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'


