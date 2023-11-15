# Configuration file to produce initial root files

treeName = 'Events'

tag = 'hm_Med_UpDate_2016'

# used by mkShape to define output directory for root files
outputDir = 'rootFile_16_bkup'

# file with TTree aliases
aliasesFile = 'aliases_medmass.py'

# file with list of variables
variablesFile = 'variables_f.py'
# variablesFile = 'variablesPlot.py'
# variablesFile = 'variablesLimits.py'

# file with list of cuts
cutsFile = 'cuts_medmass.py'

# file with list of samples
samplesFile = 'samples_medmass.py'

# file with list of samples
plotFile = 'plot_medmass.py'

# luminosity to normalize to (in 1/fb)
lumi = 36.3

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'Plot_Classifier'


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'Datacards_good'

# structure file for datacard
structureFile = 'structure_medmass.py'

# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances_medmass.py'
