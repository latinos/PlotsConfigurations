# example of configuration file
treeName= 'Events'


tag = 'fit_v4.3_2017_allvars'
direc = "conf_fit_v4.3"

# used by mkShape to define output directory for root files
outputDir = 'rootFile_'+tag + "_redoWjets"

# file with TTree aliases
aliasesFile = direc+'/aliases_allvars.py'

# file with list of variables
variablesFile = direc+'/variables_allvars.py'

# file with list of cuts
cutsFile = direc +'/cuts.py' 

# file with list of samples
samplesFile = direc+'/samples_allvars.py' 
#samplesFile = direc+'/samples.py'

#t file with list of samples
plotFile = direc+'/plot_allvars.py' 

# luminosity to normalize to (in 1/fb)
lumi = 41.5

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
#outputDirPlots = 'plot_'+tag +"_rescaled/detajpt_ext"
outputDirPlots = 'plot_'+tag + "/"

# used by mkDatacards to define output directory for datacards
#outputDirDatacard = 'datacards_'+tag 
#outputDirDatacard = 'datacards_'+tag + "/Wjets_njets"
outputDirDatacard = 'datacards_'+tag 

# structure file for datacard
structureFile = direc+'/structure.py'


# nuisances file for mkDatacards and for mkShape
# nuisancesFile = direc+'/nuisances_reduced.py'
#nuisancesFile = direc+'/nuisances_datacard_join.py'
nuisancesFile = direc + '/nuisances_reduced.py'

customizeScript = direc + "/customize.py"