# Configuration file to produce initial root files -- has both merged and binned ggH samples

treeName = 'Events'

tag = 'ggH2017_allSignals_fullNuis_cutFix15_rebin07_preAppV01'

# used by mkShape to define output directory for root files
outputDir = 'rootFile_'+tag

# file with TTree aliases
aliasesFile = 'aliases_ana.py'

# file with list of variables
variablesFile = 'variables_ana.py'

# file with list of cuts
cutsFile = 'cuts_ana.py' 

# file with list of samples
samplesFile = 'samples_ana.py' 

# file with list of samples
plotFile = 'plot_ana.py' 

# luminosity to normalize to (in 1/fb)
lumi = 41.53

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plots_'+tag

# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards_'+tag

# structure file for datacard
structureFile = 'structure_ana.py'

# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances_ana.py' 

