# example of configuration file

tag = 'AZH_2016_noHIPM_UL'

# used by mkShape to define output directory for root files
outputDir = 'rootFiles_'+tag

# file with list of variables
variablesFile = 'variables_fit_all.py'

# file with TTree aliases
aliasesFile = 'aliases_all.py'

# file with list of cuts
cutsFile = 'cuts.py' 

# file with list of samples
samplesFile = 'samples_all.py' 

# file with list of samples
plotFile = 'plot_SR.py' 

# luminosity to normalize to (in 1/fb)
lumi = 16.81 

# used by mkPlot to define output directory for plots
outputDirPlots = 'plot_'+tag

# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards_'+tag

# structure file for datacard
structureFile = 'structure.py'

# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'
