
# example of configuration file
treeName= 'Events'

tag = 'JJH17BSMEFT_ZH'

# used by mkShape to define output directory for root files
#outputDir = 'rootFile'+tag
outputDir= '/eos/user/l/lurda/test/'+'rootFile'+tag
# file with TTree aliases
aliasesFile = 'aliases.py'

variablesFile = 'variables.py'

#samplesFile = 'samples_smeft.py' #signals
samplesFile = 'samples_ZH.py'

#cutsFile = '../Full2016/cuts.py' 
cutsFile = 'cuts.py'
# file with list of samples
plotFile = 'plot.py' 

# luminosity to normalize to (in 1/fb)
lumi = 41.53

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plot'+tag


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards'

# structure file for datacard
structureFile = 'structure.py'

# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'
