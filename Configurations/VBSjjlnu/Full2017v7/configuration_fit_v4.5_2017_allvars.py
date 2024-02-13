# example of configuration file
treeName= 'Events'


tag = 'fit_v4.5_2017_allvars'
direc = "conf_fit_v4.5"

# used by mkShape to define output directory for root files
outputDir = 'rootFile_'+tag

# file with TTree aliases
aliasesFile = direc+'/aliases_nobins.py'

# file with list of variables
variablesFile = direc+'/variables_all.py'

# file with list of cuts
cutsFile = direc +'/cuts.py' 

# file with list of samples
samplesFile = direc+'/samples_nobins.py' 
#samplesFile = direc+'/samples.py'

#t file with list of samples
plotFile = direc+'/plot_nobins.py' 

# luminosity to normalize to (in 1/fb)
lumi = 41.5

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
#outputDirPlots = 'plot_'+tag +"_rescaled/detajpt_ext"
outputDirPlots = 'plot_'+tag 

# used by mkDatacards to define output directory for datacards
#outputDirDatacard = 'datacards_'+tag 
outputDirDatacard = 'datacards_'+tag +"_Dipole_v1"

# structure file for datacard
structureFile = direc+'/structure.py'


# nuisances file for mkDatacards and for mkShape
nuisancesFile = direc+'/nuisances_reduced.py'
# nuisancesFile = direc+'/nuisances.py'

customizeScript = direc + "/customize.py"