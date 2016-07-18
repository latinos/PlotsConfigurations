# example of configuration file

tag = 'WH3l'


# used by mkShape to define output directory for root files
outputDir = 'rootFiles_WH_CR_forWZExcl'

# file with list of variables
variablesFile = 'variables.py'


# file with list of cuts
cutsFile = 'cuts.py' 

# file with list of samples
samplesFile = 'samples.py' 

# file with list of samples
plotFile = 'plot.py' 



# luminosity to normalize to (in 1/fb)
# lumi = 2.264
lumi = 4.337

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plotWH_CR_forWZExcl'


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards_CR_forWZExcl'


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'
