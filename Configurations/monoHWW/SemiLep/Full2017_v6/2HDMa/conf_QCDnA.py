# Load signal sample dict

# Configuration file to produce initial root files

treeName = 'Events'

tag = 'MHlnjj_QCDnA_2017'

# used by mkShape to define output directory for root files
outputDir = '2HDMa_root_QCDnA'

# file with TTree aliases
aliasesFile = 'aliases_QCD.py'

# file with list of variables
variablesFile = 'variables.py'

# file with list of cuts
cutsFile = 'cuts_noAngle.py'

# file with list of samples
samplesFile = 'samples_QCD.py'

# file with list of samples
plotFile = 'plot_QCD.py'

# luminosity to normalize to (in 1/fb)
lumi = 41.5

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = '2HDMa_plots_QCDnA'

# used by mkDatacards to define output directory for datacards
outputDirDatacard = '2HDMa_datacards_QCDnA'

# structure file for datacard
structureFile = 'structure.py'

# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances_QCD.py'
