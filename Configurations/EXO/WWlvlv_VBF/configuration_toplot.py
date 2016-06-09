# example of configuration file

tag = 'HWWhighMass_plots'


# used by mkShape to define output directory for root files
outputDir = 'rootFile'


# file with list of variables
variablesFile = 'variables_CR.py'

# file with list of cuts
cutsFile = 'cuts_CR.py' 

# file with list of samples
samplesFile = 'samples_toplot.py' 

# file with list of samples
plotFile = 'plot_toplot.py' 



# luminosity to normalize to (in 1/fb)
# lumi = 2.264
lumi = 2.318

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plotHWWhighMass_plots'


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards_plots'


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances_toplot.py'

