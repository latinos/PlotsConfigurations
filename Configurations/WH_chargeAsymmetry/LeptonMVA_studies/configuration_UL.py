# Configuration file for charge asymmetry LeptonMVA studies
treeName= 'Events'

tag = "LeptonMVA_studies_UL"


# file with TTree aliases
aliasesFile = 'aliases_UL.py'

# file with list of variables
variablesFile = 'variables_UL.py'

# file with list of cuts
cutsFile = 'cuts.py' 

# file with list of samples
samplesFile = 'samples_UL.py' 

# file with plot configuration
# plotFile = 'plot.py' 

# luminosity to normalize to (in 1/fb)
lumi = 1

# structure file for datacard
# structureFile = 'structure.py'

# nuisances file for mkDatacards and for mkShape
# nuisancesFile = 'nuisances.py'

# used by mkShape to define output directory for root files
outputDir = 'rootFile_UL'

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plots_' + tag

# used by mkDatacards to define output directory for datacards
# outputDirDatacard = 'datacards'
