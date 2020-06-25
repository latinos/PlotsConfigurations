# example of configuration file
treeName= 'Events'


tag = 'njetsLO'
direc = "conf_njetsLO"

# used by mkShape to define output directory for root files
outputDir = 'rootFile_'+tag 

# file with TTree aliases
aliasesFile = direc+'/aliases.py'

# file with list of variables
variablesFile = direc+'/variables.py'

# file with list of cuts
cutsFile = direc +'/cuts.py' 

# file with list of samples
samplesFile = direc+'/samples.py' 

#t file with list of samples
plotFile = direc+'/plot_HT.py' 
#plotFile = direc +'/plot_boostcaled_ele.py'

# luminosity to normalize to (in 1/fb)
lumi = 59.74

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
#outputDirPlots = 'plot_'+tag +"_rescaled/detajpt_ext"
outputDirPlots = 'plot_'+tag +"/wjets_HT"

# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards_'+tag 

# structure file for datacard
structureFile = direc+'/structure.py'


# nuisances file for mkDatacards and for mkShape
nuisancesFile = direc+'/nuisances.py'
#nuisancesFile = direc+'/nuisances_datacard.py'
#nuisancesFile = direc + '/nuisances_datacard.py'
