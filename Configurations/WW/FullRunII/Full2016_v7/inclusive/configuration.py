# Configuration file to produce initial root files -- has both merged and binned ggH samples

treeName = 'Events'

#tag = 'WW2016_v7_incl_NoFid'
#tag = 'WW2016_v7_incl_27Oct'
tag = 'WW2016_v7_incl_forBDTPlots'

# used by mkShape to define output directory for root files
outputDir = 'rootFile'

# file with TTree aliases
aliasesFile = 'aliases.py'

# file with list of variables
#variablesFile = 'variables.py'
variablesFile = 'variables_forBDTPlot.py'

# file with list of cuts
cutsFile = 'cuts.py' 

# file with list of samples
samplesFile = 'samples.py' 

# file with list of samples
plotFile = 'plot.py' 

# luminosity to normalize to (in 1/fb)
lumi = 35.867

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plots'

# used by mkDatacards to define output directory for datacards
#outputDirDatacard = 'datacards_shapesUncert'
#outputDirDatacard = 'datacards_shapesUncert_total'
outputDirDatacard = 'datacards'

# structure file for datacard
structureFile = 'structure.py'

# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'
