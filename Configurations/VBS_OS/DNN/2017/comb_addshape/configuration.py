# example of configuration file

tag = 'un_2017'
outputDir = 'RootFiles'
treeName = 'Events'

date='150621'

# luminosity to normalize to
lumi = 41.5

# file with TTree aliases
aliasesFile = 'aliases.py'

# file with list of variables
variablesFile = 'variables.py'

# file with list of cuts
cutsFile = 'cuts.py'

# file with list of samples
samplesFile = 'samples.py'

# file with list of plot
plotFile = 'plot/plot_sr.py'

# file with list of nuisances
nuisancesFile = 'nuisances.py'

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = '/eos/user/f/fcetorel/www/VBS_OS/test/2017/DNN_addshape_'+date+'/'

# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards/'

# structure file for datacard
structureFile = 'structure.py'
