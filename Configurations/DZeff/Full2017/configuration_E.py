# example of configuration file

tag = 'DZEff_2017E'

treeName='Events'

# used by mkShape to define output directory for root files
outputDir = 'rootFile'


# file with list of variables
variablesFile = 'variables.py'

# file with list of cuts
cutsFile = 'cuts_E.py' 

# file with list of samples
samplesFile = 'samples_E.py' 

# file with list of samples
plotFile = 'plot.py' 



# luminosity to normalize to (in 1/fb)
lumi = 42.

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
# outputDirPlots = '~/www/plotCR'
outputDirPlots = 'plotDY'


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards'


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
# nuisancesFile = 'nuisances.py'


