# Configuration file to produce initial root files

treeName = 'Events'

tag = 'hm_FAKE_2018'

# used by mkShape to define output directory for root files
outputDir = 'rootFile_second_test'

# file with TTree aliases
aliasesFile = 'aliases_FS_2018.py'

# file with list of variables
variablesFile = 'variables_FS.py'
# variablesFile = 'variablesPlot.py'
# variablesFile = 'variabl8sLimits.py'

# file with list of cuts
cutsFile = 'cuts_FS.py'

# file with list of samples
samplesFile = 'samples_FS_2018.py'

# file with list of samples
plotFile = 'plot_FS.py'

# luminosity to normalize to (in 1/fb)
lumi = 59.7#41.5 #35.9 #59.7

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plottini_2018_Dec_7'


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'Datacards_last'

# structure file for datacard
structureFile = 'structure_FS.py'

# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances_FS.py'
