# example of configuration file

import os

configDir = os.path.expandvars("/afs/cern.ch/work/k/kaura/NewLatino_v2/CMSSW_10_2_5/src/newPlotConfigurations/PlotsConfigurations/Configurations/ZH4l/nano_config/Full2016") #chnage the path to where  cuts_BDT.py , samples_BDT.py and structure.py files for training  are present 

tagName = ''

# luminosity to normalize to (in 1/fb)
lumi = 35.9

# file with list of variables
#variablesFile = os.path.join(configDir,'variables.py')

# file with list of cuts
cutsFile = os.path.join(configDir,'cuts_BDT.py' )

# file with list of samples
samplesFile = os.path.join(configDir,'samples_BDT.py' )

# structure file for datacard
structureFile = os.path.join(configDir,'structure.py')
