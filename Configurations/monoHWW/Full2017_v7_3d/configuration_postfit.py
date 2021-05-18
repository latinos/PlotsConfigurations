# example of configuration file
treeName= 'Events'

tag = 'darkHiggs2017_v7'


# used by mkShape to define output directory for root files
outputDir = 'rootFile'

# file with TTree aliases
aliasesFile = 'aliases.py'

# file with list of variables
variablesFile = 'variables.py'

# file with list of cuts
cutsFile = 'cuts.py' 

# file with list of samples
samplesFile = 'samples_postfit.py' 

# file with list of samples
plotFile = 'plot.py' 



# luminosity to normalize to (in 1/fb)
lumi = 41.48

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
# outputDirPlots = '~/www/plotCR'
outputDirPlots = 'plots_postfit'


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards_2017'


# structure file for datacard
structureFile = 'structure_postfit.py'


# nuisances file for mkDatacards and for mkShape
#nuisancesFile = 'nuisances_postfit.py'


