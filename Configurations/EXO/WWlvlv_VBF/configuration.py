# example of configuration file

tag = 'HWWhighMass'


# used by mkShape to define output directory for root files
outputDir = 'rootFile_INT'


# file with list of variables
variablesFile = 'variables_newbins.py'

# file with list of cuts
cutsFile = 'cuts.py' 

# file with list of samples
samplesFile = 'samples.py' 

# file with list of samples
plotFile = 'plot.py' 



# luminosity to normalize to (in 1/fb)
# lumi = 2.264
lumi = 2.318

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plotHWWhighMass_UNBLIND'


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards_UNBLIND'


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'

