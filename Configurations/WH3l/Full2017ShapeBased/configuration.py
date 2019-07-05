# example of configuration file

import os

configDir = os.path.expandvars("${CMSSW_BASE}/src/PlotsConfigurations/Configurations/WH3l/Full2017ShapeBased/")

tagName = '27MayCR_v9'

# luminosity to normalize to (in 1/fb)
lumi = 41.860

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

