# example of configuration file

treeName = 'Events'

tag = '_ggH_CR2016_finalv3'


# used by mkShape to define output directory for root files
outputDir = 'rootFile'+tag

# file with TTree aliases
aliasesFile = 'aliases.py'

# file with list of variables
variablesFile = 'variables.py'
#variablesFile = 'variables_forPlots.py'

# file with list of cuts
cutsFile = 'cuts.py'
#cutsFile = 'cuts_forPlots.py' 

# file with list of samples
samplesFile = 'samples.py' 

# file with list of samples
plotFile = 'plot.py' 



# luminosity to normalize to (in 1/fb)
lumi = 35.867

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plot'+tag


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards'


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'


