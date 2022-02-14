# Load signal sample dict

# Configuration file to produce initial root files

treeName = 'Events'

tag = 'darkHiggs_HT_2016v7'

# used by mkShape to define output directory for root files
outputDir = 'darkHiggs_HT_root'

# file with TTree aliases
aliasesFile = 'aliases.py'

# file with list of variables
#variablesFile = 'variables.py'
#variablesFile = 'variables_bdt.py'
variablesFile = 'variables_all.py'

# file with list of cuts
cutsFile = 'cuts.py'

# file with list of samples
samplesFile = 'samples.py'

# file with list of samples
plotFile = 'plot.py'

# luminosity to normalize to (in 1/fb)
lumi = 35.9

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'darkHiggs_HT_plots'

# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'darkHiggs_HT_datacards'

# structure file for datacard
structureFile = 'structure.py'
#structureFile = 'structure_int.py'

# nuisances file for mkDatacards and for mkShape
#nuisancesFile = 'nuisances.py'
#nuisancesFile = 'nuisances_full.py'
nuisancesFile = 'nuisances_full_fast.py'
