# Load signal sample dict

# Configuration file to produce initial root files

treeName = 'Events'

tag = 'Wjets_kfac_2018v7'

# used by mkShape to define output directory for root files
outputDir = 'Wjets_kfac_root'

# file with TTree aliases
#aliasesFile = 'aliases_kfac.py'
aliasesFile = 'aliases.py'

# file with list of variables
variablesFile = 'variables_kfac.py'

# file with list of cuts
cutsFile = 'cuts_kfac.py'

# file with list of samples
samplesFile = 'samples_kfac.py'

# file with list of samples
plotFile = 'plot_LO_vs_NLO.py'

# luminosity to normalize to (in 1/fb)
lumi = 59.74

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'Wjets_kfac_plots'

# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'Wjets_kfac_datacards'

# structure file for datacard
structureFile = 'structure.py'

# nuisances file for mkDatacards and for mkShape
#nuisancesFile = 'nuisances.py'
#nuisancesFile = 'nuisances_full.py'
