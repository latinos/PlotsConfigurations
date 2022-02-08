# Load signal sample dict

# Configuration file to produce initial root files

treeName = 'Events'

tag = 'Wjets_binning_2017v7'

# used by mkShape to define output directory for root files
outputDir = 'Wjets_binning_root'

# file with TTree aliases
aliasesFile = 'aliases.py'

# file with list of variables
variablesFile = 'variables_binning.py'

# file with list of cuts
#cutsFile = 'cuts.py'
cutsFile = 'cuts_binning.py'

# file with list of samples
samplesFile = 'samples_binning.py'

# file with list of samples
plotFile = 'plot_binning.py'

# luminosity to normalize to (in 1/fb)
lumi = 35.9

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'Wjets_binning_plots'

# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'Wjets_binning_datacards'

# structure file for datacard
structureFile = 'structure.py'

# nuisances file for mkDatacards and for mkShape
#nuisancesFile = 'nuisances.py'
#nuisancesFile = 'nuisances_statOnly.py'
