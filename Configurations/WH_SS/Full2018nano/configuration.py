# example of configuration file
treeName= 'Events'


#tag = 'WH2018nano_forPlots'
#tag = 'WH2018nano_try4'
#tag = 'WH2018nano_try6'
#tag = 'fromSarah'
tag = 'WH2018nano_postfreeze_try1' #add Zveto in mm and remove DY
#tag = 'WH2018nano_forpreapp' #add Zveto in mm and remove DY

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

# file with list of samples
plotFile = 'plot.py' 



# luminosity to normalize to (in 1/fb)
lumi = 59.74

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plot'+tag


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards'+tag


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'


