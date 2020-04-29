# example of configuration file

import os

configDir = os.path.expandvars("/afs/cern.ch/work/k/kaura/NewLatino_v2/CMSSW_10_2_5/src/newPlotConfigurations/PlotsConfigurations/Configurations/ZH4l/nano_config/Full2016/") #change the path to where following files are

tagName = ''

# luminosity to normalize to (in 1/fb)
lumi = 137.1

# file with list of variables
variablesFile = os.path.join(configDir,'variables.py')

# file with list of cuts
cutsFile = os.path.join(configDir,'cuts_BDT.py' )

# file with list of samples
samplesFile = os.path.join(configDir,'samples_BDT678_v6.py' )

# structure file for datacard
structureFile = os.path.join(configDir,'structure_BDT678.py')
