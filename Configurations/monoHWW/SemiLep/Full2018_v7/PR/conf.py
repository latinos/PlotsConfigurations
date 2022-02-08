# Load signal sample dict

# Configuration file to produce initial root files

treeName = 'Events'

tag = 'PR_2018v7'

# used by mkShape to define output directory for root files
outputDir = 'PR_root'

# file with TTree aliases
aliasesFile = 'aliases.py'

# file with list of variables
variablesFile = 'variables.py'

# file with list of cuts
cutsFile = 'cuts.py'

# file with list of samples
samplesFile = 'samples.py'

# file with list of samples
plotFile = 'plot.py'

# luminosity to normalize to (in 1/fb)
lumi = lumi = 59.74


# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'PR_plots'

# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'PR_datacards'

# structure file for datacard
structureFile = 'structure.py'

# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'
