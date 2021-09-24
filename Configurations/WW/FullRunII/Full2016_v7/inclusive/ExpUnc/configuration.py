# Configuration file to get reco-level nuisance normalizations for inclusive measurement

treeName = 'Events'

tag = 'WW2016_v7_incl_ExpNorm'

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
lumi = 35.867

# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'
