# example of configuration file
treeName= 'Events'


#tag = 'WH2017nano_forPlots'
#tag = 'WH2017nano_try7' #old fakes with MVAWP90 id
#tag = 'WH2017nano_try8' # new fakes with cut based tight id
#tag = 'WH2017nano_try9' #splitted fakes and no upper bound on mtw1
#tag = 'WH2017nano_try10' #no mtw1 and mllThird
#tag = 'WH2017nano_try11' #tree systematics open
tag = 'WH2017nano_try12' #mjj > 100 & mlljj20 > 50.


# used by mkShape to define output directory for root files
outputDir = 'rootFile'

# file with TTree aliases
aliasesFile = 'aliases.py'

# file with list of variables
variablesFile = 'variables.py'

# file with list of cuts
cutsFile = 'cuts.py' 

# file with list of samples
samplesFile = 'samples.py' 

# file with list of samples
plotFile = 'plot.py' 



# luminosity to normalize to (in 1/fb)
lumi = 41.53

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plot'+tag


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards'+tag


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'


