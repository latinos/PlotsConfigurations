# Load signal sample dict

# Configuration file to produce initial root files

treeName = 'Events'

tag = 'WUpDown_QCD_2017v7'

# used by mkShape to define output directory for root files
outputDir = 'WUpDown_QCD_root'

# file with TTree aliases
aliasesFile = 'aliases_QCD.py'

# file with list of variables
variablesFile = 'variables.py'

# file with list of cuts
cutsFile = 'cuts_QCD.py'

# file with list of samples
samplesFile = 'samples_QCD.py'

# file with list of samples
plotFile = 'plot.py'

# luminosity to normalize to (in 1/fb)
lumi = 41.5

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'WUpDown_QCD_plots'

# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'WUpDown_QCD_datacards'

# structure file for datacard
structureFile = 'structure.py'

# nuisances file for mkDatacards and for mkShape
#nuisancesFile = 'nuisances.py'
#nuisancesFile = 'nuisances_full.py'
