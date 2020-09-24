# Configuration file to produce initial root files -- has both merged and binned ggH samples

treeName = 'Events'

#tag = 'DY2018_v7'
#tag = 'DY2018_v7_INCL_v1'
tag = 'darkHiggs2018_v7'
#tag = 'Top2018_v7'

# used by mkShape to define output directory for root files
outputDir = 'rootFile_plots'

# file with TTree aliases
aliasesFile = 'aliases.py'

# file with list of variables
variablesFile = 'variables_plots.py'

# file with list of cuts
cutsFile = 'cuts.py' 
#cutsFile = 'cuts_topCR.py' 

# file with list of samples
samplesFile = 'samples.py' 

# file with list of samples
plotFile = 'plot.py' 

# luminosity to normalize to (in 1/fb)
lumi = 59.74

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plots'

# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards'

# structure file for datacard
structureFile = 'structure.py'

# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'
