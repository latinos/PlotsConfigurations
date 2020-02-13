# example of configuration file
treeName= 'Events'


tag = 'datac16'

# used by mkShape to define output directory for root files
outputDir = 'rootFile_'+tag

# file with TTree aliases
aliasesFile = 'aliases_rew.py'

# file with list of variables
variablesFile = 'variables_{}.py'.format(tag)

# file with list of cuts
cutsFile = 'cuts_{}.py'.format(tag) 

# file with list of samples
samplesFile = 'samples_rew.py' 

# file with list of samples
plotFile = 'plot.py' 



# luminosity to normalize to (in 1/fb)
lumi = 35.867

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plot_'+tag


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards_'+tag


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'


