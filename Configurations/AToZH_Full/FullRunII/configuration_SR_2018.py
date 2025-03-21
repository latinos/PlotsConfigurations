# example of configuration file

tag = 'AZH_2018_v9_Fit'

# used by mkShape to define output directory for root files
outputDir = 'rootFiles_'+tag

# file with list of variables
variablesFile = 'variables_SR.py'

# file with TTree aliases
aliasesFile = 'aliases_2018.py'

# file with list of cuts
cutsFile = 'cuts_SR.py' 

# file with list of samples
samplesFile = 'samples_2018.py' 

# file with list of samples
plotFile = 'plot_FullRunII.py' 

# luminosity to normalize to (in 1/fb)
lumi = 59.74 

# used by mkPlot to define output directory for plots
outputDirPlots = 'plot_'+tag

# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards_condor_'+tag

# structure file for datacard
structureFile = 'structure.py'

# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances_2018.py'
