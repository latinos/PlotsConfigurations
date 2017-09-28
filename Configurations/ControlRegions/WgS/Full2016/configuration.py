# example of configuration file

#tag = 'ggHmetXYcor'
tag = 'WgSt'
#tag = 'WZsamples'
#tag = 'DYmetXYcor'
#tag = 'ggH'
#tag = 'ggHTESTPARTIALamassiro'


# used by mkShape to define output directory for root files
outputDir = 'rootFile'


# file with list of variables
#variablesFile = 'variables_WZsampleStudy.py'
#variablesFile = 'variablesDY.py'
variablesFile = 'variables.py'

# file with list of cuts
#cutsFile = 'cuts_WZsampleStudy.py' 
#cutsFile = 'cutsDY.py' 
cutsFile = 'cuts.py' 

# file with list of samples
#samplesFile = 'samples_fake.py' 
#samplesFile = 'samples_WZsampleStudy.py' 
samplesFile = 'samples.py' 
#samplesFile = 'samples_test.py' 

# file with list of samples
#plotFile = 'plot_WZsampleStudy.py' 
plotFile = 'plot.py' 



# luminosity to normalize to (in 1/fb)
lumi = 35.867
#lumi = 1.

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plotWgSt'
#outputDirPlots = 'plotWZsamples'
#outputDirPlots = 'plotDYCorrMetXYshift'
#outputDirPlots = 'plotGGhCorrMetXYshift'


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards'


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
#nuisancesFile = 'nuisances.py'


