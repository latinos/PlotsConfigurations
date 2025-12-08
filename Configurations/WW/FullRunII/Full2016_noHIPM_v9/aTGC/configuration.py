# Configuration file to produce initial root files -- has both merged and binned ggH samples

treeName = 'Events'

backs = '../../../../../../../../../../eos/public/aTGC'
era = '2016_noHIPM_v9_aC'

tag = 'WW2016_noHIPM_v9_aC'
op = 'cll1'

# used by mkShape to define output directory for root files
outputDir = '{}/rootFile/{}'.format(backs,era)

# file with TTree aliases
aliasesFile = 'aliases.py'

# file with list of variables
variablesFile = 'variables.py'

# file with list of cuts
cutsFile = 'cuts.py' 

# file with list of samples
samplesFile = 'samples.py'

# file with list of samples
plotFile = 'plotConfigs/{}_plot.py'.format(op)

# luminosity to normalize to (in 1/fb)
lumi = 16.81 

# used by mkPlot to define output directory for plots
outputDirPlots = '{}/plots/{}/{}'.format(backs,era,op)

# used by mkDatacards to define output directory for datacards
outputDirDatacard = '{}/datacards/{}'.format(backs,era)

# structure file for datacard
structureFile = 'structure.py'

# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'
