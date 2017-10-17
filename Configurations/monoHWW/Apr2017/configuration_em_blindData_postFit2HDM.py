# example of configuration file

tag = 'monoHWW_em_blindData_postFit'


# used by mkShape to define output directory for root files
outputDir = 'rootFile_em_blindData_postFit2HDM'


# file with list of variables
variablesFile = 'variables.py'

# file with list of cuts
cutsFile = 'cuts_em_blindData.py' 

# file with list of samples
samplesFile = 'samples_em_blindData_postFit2HDM.py'
 
# file with list of samples
plotFile = 'plot_em_blindData_postFit2HDM.py' 


# luminosity to normalize to (in 1/fb)
lumi = 2.39


# used by mkPlot to define output directory for plots
outputDirPlots = 'monoH_2HDM_em_blindData_postFit2HDM'

# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards_blindData'

# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
#nuisancesFile = 'nuisances_light.py'
#nuisancesFile = 'nuisances.py'
nuisancesFile = 'nuisances_full.py'

