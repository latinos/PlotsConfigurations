# Load signal sample dict

# Configuration file to produce initial root files

treeName = 'Events'

tag = 'darkHiggs_HEM_2018v7'

# used by mkShape to define output directory for root files
outputDir = 'darkHiggs_HEM_root'

# file with TTree aliases
aliasesFile = 'aliases_HEM.py'

# file with list of variables
variablesFile = 'variables_HEM.py'

# file with list of cuts
cutsFile = 'cuts_HEM.py'

# file with list of samples
samplesFile = 'samples.py'

# file with list of samples
#plotFile = 'plot.py'
plotFile = 'plot_noNorm.py'

# luminosity to normalize to (in 1/fb)
lumi = 59.7

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'darkHiggs_HEM_plots'

# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'darkHiggs_HEM_datacards'

# structure file for datacard
structureFile = 'structure.py'

# nuisances file for mkDatacards and for mkShape
#nuisancesFile = 'nuisances.py'
nuisancesFile = 'nuisances_HEM.py'
#nuisancesFile = 'nuisances_full_new.py'
