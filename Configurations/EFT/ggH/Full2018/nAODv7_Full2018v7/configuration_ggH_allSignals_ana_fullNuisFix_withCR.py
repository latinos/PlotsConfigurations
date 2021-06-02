
treeName = 'Events'

tag = 'ggH2018_allSignals_fullNuisFix_withCR'

# used by mkShape to define output directory for root files
outputDir = 'rootFile_'+tag

# file with TTree aliases
aliasesFile = 'aliases_ggH_allSignals_ana.py'

# file with list of variables
variablesFile = 'variables_ggH_ana.py'

# file with list of cuts
cutsFile = 'cuts_ggH_ana_withCR.py' 

# file with list of samples
samplesFile = 'samples_ggH_allSignals_ana.py' 

# file with list of samples
plotFile = 'plot_ggH_allSignals_ana.py' 

# luminosity to normalize to (in 1/fb)
lumi = 59.74

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plotsAna_'+tag

# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards_'+tag

# structure file for datacard
structureFile = 'structure_ggH_allSignals.py'

# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances_ggH_allSignals_ana_fullNuisFix_withJES.py'

