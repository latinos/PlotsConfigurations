# example of configuration file
 
 # ===== VBF analysis
#date = '_detajj'
#date = '_nodetajj'

 # ===== DNN studies
#date = '_nodetajj_DNNlowmjj'
date = '_nodetajj_DNNhighmjj'

 # ===== DNN optimized
#date = '_nodetajjDNNoptim'

#tag = 'VBF'+date
tag = 'Higgs'+date


# used by mkShape to define output directory for root files
outputDir = 'rootFile'+tag


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
outputDirPlots = 'plot'+tag


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards'+tag


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'
#nuisancesFile = 'nuisances_DNNoptim.py'

