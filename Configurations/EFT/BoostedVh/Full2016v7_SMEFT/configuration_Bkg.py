
# example of configuration file
treeName= 'Events'

tag = 'JJH16BSMEFT_Bkg'

# used by mkShape to define output directory for root files
#outputDir = 'rootFile'+tag
outputDir= '/eos/user/l/lurda/test/'+'rootFile'+tag
# file with TTree aliases
aliasesFile = 'aliases.py'

variablesFile = 'ana/variables_hvv.py'

#samplesFile = 'samples_smeft.py' #signals
samplesFile = 'ana/samples_hvv.py'

#cutsFile = '../Full2016/cuts.py' 
cutsFile = 'ana/cuts_hvv.py'
# file with list of samples
plotFile = 'plot.py' 

# luminosity to normalize to (in 1/fb)
lumi = 36.33

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plot'+tag


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards'

# structure file for datacard
structureFile = 'structure_smeft.py'

# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'ana/nuisances.py'
