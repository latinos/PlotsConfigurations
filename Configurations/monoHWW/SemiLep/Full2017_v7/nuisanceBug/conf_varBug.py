# Load signal sample dict

# Configuration file to produce initial root files

treeName = 'Events'

tag = 'nuisanceBug_2017v7'

# used by mkShape to define output directory for root files
outputDir = 'nuisanceBug_root'

# file with TTree aliases
aliasesFile = 'aliases_varBug.py'

# file with list of variables
variablesFile = 'variables_varBug.py'

# file with list of cuts
cutsFile = 'cuts_varBug.py'

# file with list of samples
samplesFile = 'samples_varBug.py'

# file with list of samples
plotFile = 'plot.py'

# luminosity to normalize to (in 1/fb)
lumi = 41.5

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'nuisanceBug_plots'

# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'nuisanceBug_datacards'

# structure file for datacard
structureFile = 'structure.py'

# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances_varBug.py'
