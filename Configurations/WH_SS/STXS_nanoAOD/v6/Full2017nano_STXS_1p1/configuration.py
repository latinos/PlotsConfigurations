# example of configuration file
treeName= 'Events'

tag = 'WHSS_2017_v6_STXS'

# used by mkShape to define output directory for root files
outputDir = 'rootFiles_'+tag

# file with TTree aliases
aliasesFile = 'aliases.py'

# file with list of variables
variablesFile = 'variables.py'

# file with list of cuts
cutsFile = 'cuts.py' 
#cutsFile = 'cuts_CR.py' 

# file with list of samples
samplesFile = 'samples.py' 

# file with list of samples
plotFile = 'plot.py' 



# luminosity to normalize to (in 1/fb)
lumi = 41.53

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plot_'+tag


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards_'+tag


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'


