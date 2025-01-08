# Configuration file to produce initial root files -- has both merged and binned ggH samples

treeName = 'Events'

#plotting Data/SM ratio
tag = 'Hgg_2018_of2j'

# used by mkShape to define output directory for root files
outputDir = 'rootFile_'+tag

# file with TTree aliases
aliasesFile = 'aliases_ggH_allSignals_preAppV02_ana.py'

# file with list of variables
variablesFile = 'variables_Hgg.py'

# file with list of cuts
cutsFile = 'cuts_Hgg.py' 

# file with list of samples
samplesFile = 'samples_Hgg.py' 

# file with list of samples
plotFile = 'plot_combined_Hgg_2018.py' 

# luminosity to normalize to (in 1/fb)
lumi = 59.7

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plotsSR_prefitFromTemplate_unblinded_'+tag

# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards_'+tag

# structure file for datacard
structureFile = 'structure_GGH2j_ana.py'

# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances18_ana.py' 

