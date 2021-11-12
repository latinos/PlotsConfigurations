# Load signal sample dict

# Configuration file to produce initial root files

treeName = 'Events'

tag = 'WUpDown_PS_2018v7'

# used by mkShape to define output directory for root files
outputDir = 'WUpDown_PS_root'

# file with TTree aliases
aliasesFile = 'aliases_PS.py'

# file with list of variables
variablesFile = 'variables.py'

# file with list of cuts
cutsFile = 'cuts_PS.py'

# file with list of samples
samplesFile = 'samples_PS.py'

# file with list of samples
plotFile = 'plot.py'

# luminosity to normalize to (in 1/fb)
lumi = 59.7

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'WUpDown_PS_plots'

# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'WUpDown_PS_datacards'

# structure file for datacard
structureFile = 'structure.py'

# nuisances file for mkDatacards and for mkShape
#nuisancesFile = 'nuisances.py'
#nuisancesFile = 'nuisances_full.py'
