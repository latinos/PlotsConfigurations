# Load signal sample dict

# Configuration file to produce initial root files

treeName = 'Events'

tag = 'darkHiggs_JER_2018v7'

# used by mkShape to define output directory for root files
outputDir = 'darkHiggs_JER_root'

# file with TTree aliases
aliasesFile = 'aliases_JER.py'

# file with list of variables
variablesFile = 'variables_JER.py'

# file with list of cuts
cutsFile = 'cuts_JER.py'

# file with list of samples
samplesFile = 'samples_JER.py'

# file with list of samples
plotFile = 'plot_JER.py'

# luminosity to normalize to (in 1/fb)
lumi = 59.7

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'darkHiggs_JER_plots'

# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'darkHiggs_JER_datacards'

# structure file for datacard
structureFile = 'structure.py'

# nuisances file for mkDatacards and for mkShape
#nuisancesFile = 'nuisances.py'
nuisancesFile = 'nuisances_JER.py'
#nuisancesFile = 'nuisances_full_new.py'
