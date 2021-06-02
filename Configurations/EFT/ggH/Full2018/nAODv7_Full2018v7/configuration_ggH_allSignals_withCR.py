# Configuration file to produce initial root files -- has both merged and binned ggH samples

treeName = 'Events'

tag = 'ggH2018_allSignals_fullNuis_withCR'

# used by mkShape to define output directory for root files
outputDir = 'rootFile_'+tag

# file with TTree aliases
aliasesFile = 'aliases_ggH_allSignals.py'

# file with list of variables
variablesFile = 'variables_ggH.py'

# file with list of cuts
cutsFile = 'cuts_ggH_withCR.py' 

# file with list of samples
samplesFile = 'samples_ggH_allSignals.py' 

# file with list of samples
plotFile = 'plot_ggH_allSignals.py' 

# luminosity to normalize to (in 1/fb)
lumi = 59.74

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plots_'+tag

# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards_'+tag

# structure file for datacard
structureFile = 'structure_ggH_allSignals.py'

# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances_ggH_allSignals_withJES.py'

