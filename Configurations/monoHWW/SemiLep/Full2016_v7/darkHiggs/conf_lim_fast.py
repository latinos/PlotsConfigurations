# Load signal sample dict

# Configuration file to produce initial root files

treeName = 'Events'

tag = 'darkHiggs_lim_2016v7'

# used by mkShape to define output directory for root files
outputDir = 'darkHiggs_lim_root'

# file with TTree aliases
aliasesFile = 'aliases.py'

# file with list of variables
variablesFile = 'variables_lim.py'
#variablesFile = 'variables_lim_datacard.py'
#variablesFile = 'variables_lim_fast.py'

# file with list of cuts
#cutsFile = 'cuts.py'
cutsFile = 'cuts_lim.py'

# file with list of samples
samplesFile = 'samples_fast.py'

# file with list of samples
#plotFile = 'plot.py'
plotFile = 'plot_lim_fast.py'

# luminosity to normalize to (in 1/fb)
lumi = 35.9

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'darkHiggs_lim_plots'

# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'darkHiggs_lim_datacards_fast'

# structure file for datacard
structureFile = 'structure.py'

# nuisances file for mkDatacards and for mkShape
#nuisancesFile = 'nuisances.py'
#nuisancesFile = 'nuisances_full.py'
#nuisancesFile = 'nuisances_full_new.py'
nuisancesFile = 'nuisances_full_fast.py'
