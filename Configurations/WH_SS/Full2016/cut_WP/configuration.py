# example of configuration file

#date='_Nov252018_ptll'
date='_10Mar_cutsWP'

tag = 'WHSS'+date


# used by mkShape to define output directory for root files
outputDir = 'rootFile'+date


# file with list of variables
variablesFile = 'variables_mine.py'

# file with list of cuts
cutsFile = 'cuts_WH.py' 
#cutsFile = 'cuts_forPlots.py'

# file with list of samples
samplesFile = 'samples.py' 

# file with list of samples
plotFile = 'plot_mine.py' 

# options of the plots
plotNormalizedDistributions = True   # default is False



# luminosity to normalize to (in 1/fb)
lumi = 35.867

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plotWH'+date


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards'+date


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances_Sarah.py'


