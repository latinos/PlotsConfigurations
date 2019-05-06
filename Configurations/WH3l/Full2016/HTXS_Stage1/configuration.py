# example of configuration file

treeName= 'latino'

tag = 'WH3l_HTXS_Stage1'

# used by mkShape to define output directory for root files
outputDir = 'rootFiles_'+tag

# file with list of variables
variablesFile = 'variables.py'

# file with list of cuts
cutsFile = 'cuts.py' 
#cutsFile = 'cuts_detailed.py'

# file with list of samples
samplesFile = 'samples.py' 

# file with list of samples
plotFile = 'plot.py' 

# luminosity to normalize to (in 1/fb)
#lumi = 12.2950
lumi = 35.867

# used by mkPlot to define output directory for plots
outputDirPlots = 'plot_'+tag

# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards_'+tag

# structure file for datacard
structureFile = 'structure.py'

# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'
