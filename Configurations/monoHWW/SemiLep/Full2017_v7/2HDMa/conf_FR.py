# Load signal sample dict

# Configuration file to produce initial root files

treeName = 'Events'

tag = 'FR_2017v7'

# used by mkShape to define output directory for root files
outputDir = 'FR_root'

# file with TTree aliases
aliasesFile = 'aliases_FR.py'

# file with list of variables
variablesFile = 'variables_FR.py'

# file with list of cuts
cutsFile = 'cuts_FR.py'

# file with list of samples
samplesFile = 'samples_FR.py'

# file with list of samples
plotFile = 'plot_FR.py'

# luminosity to normalize to (in 1/fb)
lumi = 41.5

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'FR_plots'

# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'FR_datacards'

# structure file for datacard
structureFile = 'structure.py'

# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances_FR.py'
