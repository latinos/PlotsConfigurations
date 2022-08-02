# example of configuration file
treeName= 'Events'


tag = 'dipole_reweight_2018_gen'
direc = "conf_fit_v4.4_dipole_reweight"

# used by mkShape to define output directory for root files
outputDir = 'rootFile_'+tag 

# file with TTree aliases
aliasesFile = direc+'/aliases_gen.py'

# file with list of variables
variablesFile = direc+'/variables_gen.py'

# file with list of cuts
cutsFile = direc +'/cuts_gen.py' 

# file with list of samples
samplesFile = direc+'/samples_gen.py' 
#samplesFile = direc+'/samples.py'

#t file with list of samples
plotFile = direc+'/plot.py' 

# luminosity to normalize to (in 1/fb)
lumi = 1.

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
#outputDirPlots = 'plot_'+tag +"_rescaled/detajpt_ext"
outputDirPlots = 'plot_'+tag  

# used by mkDatacards to define output directory for datacards
#outputDirDatacard = 'datacards_'+tag 
outputDirDatacard = 'datacards_'+tag +"_PythiaDipole_v1"

# structure file for datacard
structureFile = direc+'/structure.py'


# nuisances file for mkDatacards and for mkShape
#nuisancesFile = direc+'/nuisances.py'
nuisancesFile = direc+'/nuisances.py'
# nuisancesFile = direc + '/nuisances_recover.py'


customizeScript = direc + '/customize.py'