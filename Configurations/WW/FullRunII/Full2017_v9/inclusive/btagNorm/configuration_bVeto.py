# Configuration file to produce initial root files -- has both merged and binned ggH samples

treeName = 'Events'

tag = 'WW2017_v9_bVetoNorm'

# used by mkShape to define output directory for root files
outputDir = 'rootFile_bVeto'

# file with TTree aliases
aliasesFile = 'aliases.py'

# file with list of variables
variablesFile = 'variables.py'

# file with list of cuts
cutsFile = 'cuts_bVeto.py' 

# file with list of samples
samplesFile = 'samples.py'

# luminosity to normalize to (in 1/fb)
lumi = 41.53

# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances_bVeto.py'

