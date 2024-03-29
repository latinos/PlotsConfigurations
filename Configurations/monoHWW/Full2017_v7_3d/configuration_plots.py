# example of configuration file
treeName= 'Events'

tag = 'darkHiggs2017_v7_plots'


# used by mkShape to define output directory for root files
outputDir = 'rootFile_plots'

# file with TTree aliases
aliasesFile = 'aliases.py'

# file with list of variables
variablesFile = 'variables_plots.py'

# file with list of cuts
cutsFile = 'cuts_plots.py' 

# file with list of samples
samplesFile = 'samples_plots.py' 

# file with list of samples
plotFile = 'plot.py' 



# luminosity to normalize to (in 1/fb)
lumi = 41.48

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
# outputDirPlots = '~/www/plotCR'
outputDirPlots = 'plots_plots'


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards'


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'


