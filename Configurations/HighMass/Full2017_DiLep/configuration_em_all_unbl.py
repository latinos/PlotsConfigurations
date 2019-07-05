# example of configuration file
treeName= 'Events'


tag = 'Full2017_em'


# used by mkShape to define output directory for root files
outputDir = 'rootFile_'+tag+'_all'

# file with TTree aliases
aliasesFile = 'aliases.py'

# file with list of variables
variablesFile = 'variables.py'

# file with list of cuts
cutsFile = 'cuts_em_unbl.py' 

# file with list of samples
samplesFile = 'samples_all.py' 

# file with list of samples
plotFile = 'plot_unbl.py' 



# luminosity to normalize to (in 1/fb)
lumi = 41.5

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plot_'+tag+'_all_unblind'


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards'


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'


