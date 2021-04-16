# Load signal sample dict

# Configuration file to produce initial root files

treeName = 'Events'

tag = 'darkHiggs_lim_2017v7'

# used by mkShape to define output directory for root files
outputDir = 'darkHiggs_lim_root'

# file with TTree aliases
aliasesFile = 'aliases.py'

# file with list of variables
variablesFile = 'variables_lim.py'

# file with list of cuts
#cutsFile = 'cuts.py'
cutsFile = 'cuts_lim.py'

# file with list of samples
samplesFile = 'samples.py'

# file with list of samples
plotFile = 'plot.py'
#plotFile = 'plot_lim.py'

# luminosity to normalize to (in 1/fb)
lumi = 41.5

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'darkHiggs_lim_onlyTop_plots'

# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'darkHiggs_lim_onlyTop_datacards'

# structure file for datacard
structureFile = 'structure_onlyTop.py'

# nuisances file for mkDatacards and for mkShape
#nuisancesFile = 'nuisances.py'
nuisancesFile = 'nuisances_full.py'
