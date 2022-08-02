# example of configuration file
treeName= 'Events'

tag = 'fit_v4.2_2016'
direc = 'conf_fit_v4.2'

# used by mkShape to define output directory for root files
outputDir = 'rootFile_'+tag 

# file with TTree aliases
aliasesFile = direc+'/aliases.py'

# file with list of variables
variablesFile = direc+'/variables_fit.py'

# file with list of cuts
cutsFile = direc+'/cuts.py'

# file with list of samples
samplesFile = direc+'/samples.py' 

# file with list of samples
plotFile = direc+'/plot.py'



# luminosity to normalize to (in 1/fb)
lumi = 35.867

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plot_'+tag 
# used by mkDatacards to define output directory for datacards

outputDirDatacard = 'datacards_' +tag + "_nuisNorm_PSsplitAll_njetsVBS_QGLmorphSplit_newFakes_EWKQCDfit"
#outputDirDatacard = 'datacards_' +tag +"_v2"

# structure file for datacard
structureFile = direc+'/structure_ewkqcd.py'


# nuisances file for mkDatacards and for mkShape
#nuisancesFile = direc+'/nuisances.py'
nuisancesFile = direc+'/nuisances_datacard.py'

customizeScript = direc + '/customize.py'