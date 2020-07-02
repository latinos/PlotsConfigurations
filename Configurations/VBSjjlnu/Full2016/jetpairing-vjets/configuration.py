# example of configuration file

tag = 'VBSjjlnu'

base_output = './'
# base_output = '/gwpool/users/dmapelli/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/VBSjjlnu/'

# used by mkShape to define output directory for root files
outputDir = base_output + 'rootFile'


# file with list of variables
variablesFile = 'variables.py'

# file with list of cuts
cutsFile = 'cuts.py' 

# file with list of samples
samplesFile = 'samples.py' 

# file with list of samples
plotFile = 'plot.py' 



# luminosity to normalize to (in 1/fb)
lumi = 35.867

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
# outputDirPlots = '~/www/plotCR'
outputDirPlots = base_output + 'plot' + tag


# used by mkDatacards to define output directory for datacards
outputDirDatacard = base_output + 'datacards'


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'


