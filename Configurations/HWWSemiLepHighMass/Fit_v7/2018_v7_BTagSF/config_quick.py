# Configuration file to produce initial root files

treeName = 'Events'

tag = 'hm_2018_Fit_test'
#tag = 'hm_2018_Fit'

# used by mkShape to define output directory for root files
outputDir = 'rootFile_highmass_2018'

# file with TTree aliases
aliasesFile = 'aliases_medmass.py'#aliases_highmass to use the high mass trained DNN

# file with list of variables
variablesFile = 'variables_fit.py'
# variablesFile = 'variablesPlot.py'
# variablesFile = 'variablesLimits.py'

# file with list of cuts
cutsFile = 'cuts_medmass.py'

# file with list of samples
samplesFile = 'samples_medmass.py'

# file with list of samples
plotFile = 'plot_medmass.py'

# luminosity to normalize to (in 1/fb)
lumi = 59.7

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'Plots_Test'


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'Datacards_DiffWidth_nonui'

# structure file for datacard
structureFile = 'structure_medmass.py'

# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances_no.py'
