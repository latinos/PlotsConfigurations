
# example of configuration file
treeName= 'Events'

tag = 'JJH18'

# used by mkShape to define output directory for root files
outputDir = '/eos/user/l/lurda/test/'+'rootFile'+tag

# file with TTree aliases
aliasesFile = 'aliases.py'

variablesFile = 'variables.py'

samplesFile = 'samples.py' 

cutsFile = 'cuts.py' 

# file with list of samples
plotFile = 'plot.py' 

# luminosity to normalize to (in 1/fb)
lumi = 59.74

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plot'+tag


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards'


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'


