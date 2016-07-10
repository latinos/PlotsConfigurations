# example of configuration file

tag = 'WH3l'


# used by mkShape to define output directory for root files
outputDir = 'rootFiles_WH_WZ_v1'
#outputDir = 'rootFiles_WH_Zg'

# file with list of variables
variablesFile = 'variables.py'

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
outputDirPlots = 'plotWH_WZ_v1'
#outputDirPlots = 'plotWH_Top'
#outputDirPlots = 'plotWH_Zg'


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards_WZ_v1'
#outputDirDatacard = 'datacards_WZ_Zg'


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'


