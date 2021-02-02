# Load signal sample dict

# Configuration file to produce initial root files

treeName = 'Events'

tag = 'darkHiggs_eff_2016v7'

# used by mkShape to define output directory for root files
outputDir = 'darkHiggs_eff_root'

# file with TTree aliases
aliasesFile = 'aliases_eff.py'

# file with list of variables
variablesFile = 'variables_eff.py'

# file with list of cuts
cutsFile = 'cuts_eff.py'

# file with list of samples
samplesFile = 'samples_eff.py'

# file with list of samples
plotFile = 'plot_eff.py'

# luminosity to normalize to (in 1/fb)
lumi = 35.9

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'darkHiggs_eff_plots'

# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'darkHiggs_eff_datacards'

# structure file for datacard
structureFile = 'structure.py'

# nuisances file for mkDatacards and for mkShape
#nuisancesFile = 'nuisances.py'
#nuisancesFile = 'nuisances_full.py'
