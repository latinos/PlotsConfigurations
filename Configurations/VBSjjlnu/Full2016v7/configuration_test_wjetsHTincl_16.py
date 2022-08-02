# example of configuration file
treeName= 'Events'

tag = 'test_wjetsHTincl_16'
direc = 'conf_test_wjetsHT'

# used by mkShape to define output directory for root files
outputDir = 'rootFile_'+tag 

# file with TTree aliases
aliasesFile = direc+'/aliases_inclusive.py'

# file with list of variables
variablesFile = direc+'/variables_inclusive.py'

# file with list of cuts
cutsFile = direc+'/cuts_inclusive.py'

# file with list of samples
samplesFile = direc+'/samples_inclusive.py' 

# file with list of samples
plotFile = direc+'/plot_NLO.py'



# luminosity to normalize to (in 1/fb)
lumi = 35.867

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plot_'+tag + "_NLO"
# used by mkDatacards to define output directory for datacards

outputDirDatacard = 'datacards_' +tag
#outputDirDatacard = 'datacards_' +tag +"_v2"

# structure file for datacard
structureFile = direc+'/structure.py'


# nuisances file for mkDatacards and for mkShape
#nuisancesFile = direc+'/nuisances.py'
#nuisancesFile = direc+'/nuisances_datacard.py'

