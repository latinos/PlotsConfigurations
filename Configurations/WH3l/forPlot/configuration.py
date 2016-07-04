# example of configuration file

tag = 'WH3l'


# used by mkShape to define output directory for root files
#outputDir = 'rootFiles_WH_WZ_Top_MC'
#outputDir = 'rootFiles_WH_Zg'
outputDir = 'rootFiles_WH_CutFlow_Divided'


# file with list of variables
variablesFile = 'variables.py'

# file with list of cuts
#cutsFile = 'cuts.py' 
cutsFile = 'cuts_divided.py'

# file with list of samples
samplesFile = 'samples.py' 

# file with list of samples
plotFile = 'plot.py' 



# luminosity to normalize to (in 1/fb)
# lumi = 2.264
lumi = 2.318

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
#outputDirPlots = 'plotWH_WZ_Top_MC'
#outputDirPlots = 'plotWH_Zg'
outputDirPlots = 'plotWH_CutFlow_Divided'


# used by mkDatacards to define output directory for datacards
#outputDirDatacard = 'datacards_WZ_Top_MC'
#outputDirDatacard = 'datacards_Zg'
outputDirDatacard = 'datacards_CutFlow_Divided'


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'


