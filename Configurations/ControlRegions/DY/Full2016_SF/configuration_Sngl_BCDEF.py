# example of configuration file

tag = 'DY-Sngl-BCDEF'
#tag = 'DYtest'


# used by mkShape to define output directory for root files
outputDir = 'rootFile'


# file with list of variables
variablesFile = 'variables.py'

# file with list of cuts
cutsFile = 'cuts_BCDEF.py' 

# file with list of samples
samplesFile = 'samples_Sngl.py' 

# file with list of samples
plotFile = 'plot.py' 



# luminosity to normalize to (in 1/fb)
# luminosity to normalize to (in 1/fb)
lumi = 35.867 


# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
#outputDirPlots = '~/www/plotCR'
#outputDirPlots = '~/www/figuresLxplus/21Jul2016/DY'
outputDirPlots = 'plotSnglBCDEF'


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards'


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
#nuisancesFile = 'nuisances.py'


