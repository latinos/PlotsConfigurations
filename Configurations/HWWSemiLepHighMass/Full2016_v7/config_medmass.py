# Configuration file to produce initial root files

treeName = 'Events'

tag = 'hm_res_2'

# used by mkShape to define output directory for root files
outputDir = 'rootFile_resolved'

# file with TTree aliases
aliasesFile = 'aliases_medmass.py'

# file with list of variables
variablesFile = 'variables_medmass.py'
# variablesFile = 'variablesPlot.py'
# variablesFile = 'variablesLimits.py'

# file with list of cuts
cutsFile = 'cuts_medmass.py'

# file with list of samples
samplesFile = 'samples_medmass.py'

# file with list of samples
plotFile = 'plot_medmass.py'

# luminosity to normalize to (in 1/fb)
lumi = 35.9

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'Plot_kfact'


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'Datacards_last'

# structure file for datacard
structureFile = 'structure_medmass.py'

# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances_medmass.py'
