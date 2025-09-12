# Configuration file to produce initial root files -- has both merged and binned ggH samples

treeName = 'Events'

tag = 'WW2018_v9_bReqNorm'

# used by mkShape to define output directory for root files
outputDir = 'rootFile_bReq'

# file with TTree aliases
aliasesFile = 'aliases.py'

# file with list of variables
variablesFile = 'variables.py'

# file with list of cuts
cutsFile = 'cuts_bReq.py' 

# file with list of samples
samplesFile = 'samples.py' 

# luminosity to normalize to (in 1/fb)
lumi =  59.83

# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances_bReq.py'
