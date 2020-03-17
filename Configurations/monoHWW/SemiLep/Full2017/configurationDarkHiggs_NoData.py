# Configuration file to produce initial root files -- has both merged and binned ggH samples

treeName = 'Events'

tag = 'DarkHiggsSemlep_2017'

# used by mkShape to define output directory for root files
outputDir = 'rootFileDarkHiggs_NoData'

# file with TTree aliases
aliasesFile = 'aliasesNoData.py'

# file with list of variables
variablesFile = 'variables.py'

# file with list of cuts
cutsFile = 'cuts.py' 

# file with list of samples
samplesFile = 'samplesDarkHiggs_NoData_2017.py' 

# file with list of samples
plotFile = 'plotDarkHiggs_NoData.py' 

# luminosity to normalize to (in 1/fb)
lumi = 41.53

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plotsDarkHiggs_NoData'

# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards'

# structure file for datacard
structureFile = 'structureNoData.py'

# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'

