# example of configuration file

tag = 'HWWhighMass2016_nuis_top_bin_test'


# used by mkShape to define output directory for root files
outputDir = 'rootFile_nuis_top_bin_test'


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
lumi = 1.0
#**********RIMETTERE baseW!!!!!*****
#lumi = 6.264
#lumi = 12.9
#lumi = 35.867
#lumi = 35.9

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plotHWWhighMass_top_bin_test'


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards'


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape

#nuisancesFile = 'nuisances_MY.py'
nuisancesFile = 'nuisances_vuoto.py'
