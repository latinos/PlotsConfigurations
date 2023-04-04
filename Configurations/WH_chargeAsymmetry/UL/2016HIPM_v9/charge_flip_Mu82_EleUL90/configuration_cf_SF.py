# Configuration file for charge asymmetry WHSS analysis using the UL 2018 dataset

treeName = 'Events'

tag = 'WHSS_2016HIPM_v9_chargeFlip_SF_validation_Mu82_EleUL90'

# used by mkShape to define output directory for root files
outputDir = 'rootFile'

# file with TTree aliases
aliasesFile = 'aliases.py'

# file with list of variables
variablesFile = 'variables.py'

# file with list of cuts
cutsFile = 'cuts.py' 

# file with list of samples
samplesFile = 'samples_cf_SF.py' 

# file with list of samples
plotFile = 'plot.py'

# luminosity to normalize to (in 1/fb)
# https://github.com/latinos/LatinoAnalysis/blob/UL_production/NanoGardener/python/data/TrigMaker_cfg.py#L27 (#95 #165)
# 16.802739097 + 1.063261220 + 1.655228036 = 19.521228353 
lumi = 19.52

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plots_' + tag

# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards'

# structure file for datacard
structureFile = 'structure.py'

# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'
