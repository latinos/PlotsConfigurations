# example of configuration file

import os

configDir = "/afs/cern.ch/work/p/pyu/HWAnalysis/zh4lFull2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/ZH4l/config_Run2016-35pXfbm1_cutOptimization/"

# tagName='_5Dec'
tagName='_SG_mva_90p_Iso2016'
#'_CR_cut_WP_Tight80X_SS'
#'_CR_cut_WP_Tight80X_SS'
#'_CR_mva_80p_Iso2015'
#'_CR_mva_80p_Iso2016'
#'_CR_mva_90p_Iso2015'
#'_CR_mva_90p_Iso2016'


tag = 'ZH4l'+tagName
# tag = 'ZH4l'

# luminosity to normalize to (in 1/fb)
lumi = 35.867

# file with list of variables
variablesFile = os.path.join(configDir,'variables.py')

# file with list of cuts
cutsFile = os.path.join(configDir,'cuts.py' )

# file with list of samples
samplesFile = os.path.join(configDir,'samples.py' )

# file with list of samples
plotFile = os.path.join(configDir,'plot.py')

# structure file for datacard
structureFile = os.path.join(configDir,'structure.py')

# nuisances file for mkDatacards and for mkShape
nuisancesFile = os.path.join(configDir,'nuisances.py')

# used by mkShape to define output directory for root files
outputDir = 'rootFiles'+tagName

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plot'+tagName

# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards'+tagName

