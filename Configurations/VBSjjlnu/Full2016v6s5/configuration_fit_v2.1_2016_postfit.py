# example of configuration file
treeName= 'Events'

tag = 'fit_v2.1_2016'
direc = 'conf_fit_v2.1'

# used by mkShape to define output directory for root files
outputDir = 'rootFile_'+tag

# file with TTree aliases
aliasesFile = direc+'/aliases.py'

# file with list of variables
variablesFile = direc+'/variables.py'

# file with list of cuts
cutsFile = direc+'/cuts.py'

# file with list of samples
samplesFile = direc+'/samples_postfit.py' 

# file with list of samples
plotFile = direc+'/plot'



# luminosity to normalize to (in 1/fb)
lumi = 35.867

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plot_'+tag  + "_postfit"
# used by mkDatacards to define output directory for datacards

outputDirDatacard = 'datacards_' +tag  +"_jesWjets_jesTop_jesSignal"
#outputDirDatacard = 'datacards_' +tag +"_v2"

# structure file for datacard
structureFile = direc+'/structure.py'


# nuisances file for mkDatacards and for mkShape
#nuisancesFile = direc+'/nuisances.py'
#nuisancesFile = direc+'/nuisances_datacard.py'

