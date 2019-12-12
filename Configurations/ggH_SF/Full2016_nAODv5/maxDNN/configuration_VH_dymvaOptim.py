# example of configuration file
treeName= 'Events'

tag = 'ggH_SF_2016_VH_dymvaOptim'

# used by mkShape to define output directory for root files
outputDir = 'rootFile_VH_dymvaOptim'

# file with TTree aliases
aliasesFile = 'aliases.py'

# file with list of variables
variablesFile = 'variables_VH.py'

# file with list of cuts
cutsFile = 'cuts_VH_dymvaOptim.py' 

# file with list of samples
samplesFile = 'samples.py' 

# file with list of samples
plotFile = 'plot.py' 



# luminosity to normalize to (in 1/fb)
lumi = 35.867

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plotGGH_SF_SR'+tag


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards'


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'

