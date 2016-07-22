# example of configuration file

tag = 'DY'


# used by mkShape to define output directory for root files
outputDir = 'rootFile'


# file with list of variables
variablesFile = 'variables.py'

# file with list of cuts
cutsFile = 'cuts.py' 

# file with list of samples
samplesFile = 'samples.py' 

# file with list of samples
plotFile = 'plot.py' 



# luminosity to normalize to (in 1/fb)
# luminosity to normalize to (in 1/fb)
#lumi = 0.805
<<<<<<< HEAD
#lumi = 4.3
lumi = 6.264
=======
lumi = 6.4
>>>>>>> e4aa2ac98dad3f7d13d5271a0daf24f8f84cb72e

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
#outputDirPlots = '~/www/figuresLxplus/30May2016/DYtt/NoSF'
<<<<<<< HEAD
#outputDirPlots ='~/www/figuresLxplus/15Jul2016/DYtt'
outputDirPlots = 'plotCR'
=======
outputDirPlots ='~/www/figuresLxplus/21Jul2016/DYtt'
>>>>>>> e4aa2ac98dad3f7d13d5271a0daf24f8f84cb72e


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards'


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'
# nuisancesFile = 'nuisances_light.py'


