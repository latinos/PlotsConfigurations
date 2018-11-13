# example of configuration file

 # ===== VBF analysis
#date='_mjj400Nodetajj'
#date='_400mjj700Nodetajj'
#date='_mjj700Nodetajj'
#date='_mjj400'
#date='_400mjj700'
#date='_mjj700'

 # ===== DNN studies
#date='_mjj400NodetajjDNN'
#date='_400mjj700NodetajjDNN'
#date='_mjj700NodetajjDNN'
#date='_mjj400DNN'
#date='_400mjj700DNN'
#date='_mjj700DNN'

# ===== DNN optimized
#date='_mjj400NodetajjDNNoptim'
#date='_400mjj700NodetajjDNNoptim'
date='_mjj700NodetajjDNNoptim'
#date='_mjj400DNNoptim'
#date='_400mjj700DNNoptim'
#date='_mjj700DNNoptim'

tag = 'VBF'+date


# used by mkShape to define output directory for root files
outputDir = 'rootFile'+date


# file with list of variables
variablesFile = 'variables.py'

# file with list of cuts
cutsFile = 'cuts.py'

# file with list of samples
#samplesFile = 'samples.py' 
samplesFile = 'samples_dnn.py'

# file with list of samples
plotFile = 'plot.py' 


# luminosity to normalize to (in 1/fb)
lumi = 35.867

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plotVBF'+date


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards'+date


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'
#nuisancesFile = 'nuisances_DNNoptim.py'

