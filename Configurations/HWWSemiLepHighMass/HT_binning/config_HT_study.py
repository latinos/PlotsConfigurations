# Configuration file to produce initial root files

treeName = 'Events'

tag = 'hm_ht_2017'

# used by mkShape to define output directory for root files
outputDir = 'rootFile_ht_2017'

# file with TTree aliases
aliasesFile = 'aliases_ht_2017.py'

# file with list of variables
variablesFile = 'variables_ht.py'
# variablesFile = 'variablesPlot.py'
# variablesFile = 'variablesLimits.py'

# file with list of cuts
cutsFile = 'cuts_ht.py'

# file with list of samples
samplesFile = 'samples_ht_2017.py'

# file with list of samples
plotFile = 'plot_ht.py'

# luminosity to normalize to (in 1/fb)
lumi = 41.5 #41.5 #35.9 #59.7

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plots_ht_2017_bis'


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards_ht'

# structure file for datacard
structureFile = 'structure_medmass.py'

# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances_ht_2017.py'
