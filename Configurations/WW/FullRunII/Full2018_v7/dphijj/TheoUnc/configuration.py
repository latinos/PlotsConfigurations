# Configuration file to produce initial root files -- has both merged and binned ggH samples

treeName = 'Events'

tag = 'WW2018_v7_dphijj_TheoUnc'

# used by mkShape to define output directory for root files
outputDir = 'rootFile'

# file with TTree aliases
aliasesFile = 'aliases.py'

# file with list of variables
variablesFile = 'variables.py'

# file with list of cuts
cutsFile = 'cuts.py' 

# file with list of samples
samplesFile = 'samples.py' 

# luminosity to normalize to (in 1/fb)
lumi = 59.74

# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'
