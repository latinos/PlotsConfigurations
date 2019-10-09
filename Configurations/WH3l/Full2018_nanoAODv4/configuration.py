# example of configuration file
tagName = "2018_v4"

treeName= 'Events'

# file with TTree aliases
aliasesFile = 'aliases.py'

# file with list of variables
variablesFile = 'variables.py'

# file with list of cuts
cutsFile = 'cuts.py' 

# file with list of samples
samplesFile = 'samples.py' 

# file with plot configuration
plotFile = 'plot.py' 

# luminosity to normalize to (in 1/fb)
lumi = 59.74

# structure file for datacard
structureFile = 'structure.py'

# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'

# used by mkShape to define output directory for root files
outputDir = 'rootFiles'+tagName

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plot'+tagName

# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards'+tagName
