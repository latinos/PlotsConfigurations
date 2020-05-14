# example of configuration file:wq

treeName= 'Events'

#tag = 'WHSS2016_v6ntuples_try7'
#tag = 'WHSS2016_v6ntuples_3rdLep'
#tag = 'WHSS2016_v6ntuples_newFakes'
#tag = 'WHSS2016_v6ntuples_final'
#tag = 'WHSS2016_LinearPlots'
#tag = 'WHSS2016_final_v1'
tag = 'WHSS2016_final_v1_ttHMVASF'
#tag = 'WHSS2016_ttHMVASF_Ele_linear'

# used by mkShape to define output directory for root files
outputDir = 'rootFile'

# file with TTree aliases
aliasesFile = 'aliases.py'

# file with list of variables
variablesFile = 'variables.py'

# file with list of cuts
cutsFile = 'cuts.py' 
#cutsFile = 'cuts_CR.py' 

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


