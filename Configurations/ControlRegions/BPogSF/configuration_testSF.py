# example of configuration file

tag = 'BpogSFTest'

outputDir = 'rootFile'


# file with list of variables
variablesFile = 'variables_testSF.py'

# file with list of cuts
cutsFile = 'cuts_testSF.py' 

# file with list of samples
samplesFile = 'samples_testSF.py' 

# file with list of samples
plotFile = 'plot.py' 



# luminosity to normalize to (in 1/fb)
lumi = 12.3 
#lumi = 0.040
# 40053803.220 /ub

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plotBpogSFTest'


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards'


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances_testSF.py'


