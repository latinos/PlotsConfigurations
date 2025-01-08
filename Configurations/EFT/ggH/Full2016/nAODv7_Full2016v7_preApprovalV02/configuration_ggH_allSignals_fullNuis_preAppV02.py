treeName = 'Events'

tag = 'ggH2016_allSignals_fullNuis_preAppV02'

# used by mkShape to define output directory for root files
outputDir = 'rootFile_'+tag

# file with TTree aliases
aliasesFile = 'aliases_ggH_allSignals_preAppV02.py'

# file with list of variables
variablesFile = 'variables_ggH_preAppV02.py'

# file with list of cuts
cutsFile = 'cuts_ggH_withCR_preAppV02.py' 

# file with list of samples
samplesFile = 'samples_ggH_allSignals_preAppV02.py' 

# file with list of samples
plotFile = 'plot_ggH_allSignals_forSRs.py' 

# luminosity to normalize to (in 1/fb)
lumi = 36.33

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plotsCR_'+tag

# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards_'+tag

# structure file for datacard
structureFile = 'structure_ggH_allSignals_preAppV02.py'

# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances_ggH_allSignals_fullNuis_preAppV02.py'

