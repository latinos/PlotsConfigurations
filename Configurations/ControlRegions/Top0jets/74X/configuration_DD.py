# example of configuration file

tag = 'TopDD'

outputDir = 'rootFile'


# file with list of variables
variablesFile = 'variables.py'

# file with list of cuts
cutsFile = 'cuts.py' 

# file with list of samples
samplesFile = 'samples_TPSF.py' 

# file with list of samples
plotFile = 'plotDD.py' 



# luminosity to normalize to (in 1/fb)
lumi = 2.120 
#lumi = 0.040
# 40053803.220 /ub

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plotTop0jetDD'


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards'


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances_TPSF_DD.py'


