# example of configuration file

tag = 'HWWhighMass2016_OF_V3'
#V3 fix nuisance to SM H
#V4 con SBI (+V3)


# used by mkShape to define output directory for root files
outputDir = 'rootFile_OF_V3'


# file with list of variables
variablesFile = 'variables.py'

# file with list of cuts
cutsFile = 'cuts.py' 

# file with list of samples
samplesFile = 'samples_fix.py' 
#samplesFile ='samples_genericFormulas.py'

# file with list of samples
plotFile = 'plot.py' 



# luminosity to normalize to (in 1/fb)
#RIMETTERE baswW se lumi !=1 !!!!
#lumi = 1.0
#lumi = 35.867

lumi = 35.9

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plotHWWhighMass_OF_V3'


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards_test_OF'


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances_MY.py'

#nuisancesFile = 'nuisances_vuoto.py'
