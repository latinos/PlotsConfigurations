# example of configuration file
treeName= 'Events'


#tag = 'WH2016nano_forPlotsv2'
#tag = '_WH2016nano_try1'
#tag = '_WH2016nano_try2' #mtw2 < 80
#tag = '_WH2016nano_try3' #DY LO
#tag = '_WH2016nano_try4' #DY LO with Susan tech
#tag = '_WH2016nano_try6' #include deta(ll)
tag = '_WH2016nano_try7' #include ll categories


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
lumi = 35.867

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plot'+tag


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards'+tag


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'


