# Configuration file to produce initial root files -- has both merged and binned ggH samples

treeName = 'Events'

tag = 'WW2016_HIPM_v9_btagNorm'

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
lumi = 19.52

# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'
