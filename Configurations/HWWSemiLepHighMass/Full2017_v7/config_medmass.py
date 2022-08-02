# Configuration file to produce initial root files

treeName = 'Events'

tag = 'hm_trial'

# used by mkShape to define output directory for root files
outputDir = 'rootFile_2017'

# file with TTree aliases
aliasesFile = 'aliases_medmass.py'

# file with list of variables
variablesFile = 'variables_medmass.py'
# variablesFile = 'variablesPlot.py'
# variablesFile = 'variablesLimits.py'

# file with list of cuts
cutsFile = 'cuts_medmass.py'

# file with list of samples
samplesFile = 'samples_medmass.py'

# file with list of samples
plotFile = 'plot_medmass.py'

# luminosity to normalize to (in 1/fb)
lumi = 41.5

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'Plots'


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'Datacards_0.5'

# structure file for datacard
structureFile = 'structure_medmass.py'

# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances_medmass.py'
