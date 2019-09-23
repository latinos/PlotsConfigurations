# example of configuration file

#eleWP='cut_WP_Tight80X'
# eleWP='cut_WP_Tight80X_SS'
#eleWP='mva_80p_Iso2015'
#eleWP='mva_80p_Iso2016'
#eleWP='mva_90p_Iso2015'
eleWP='mva_90p_Iso2016'

tag = 'ZH3l'

# used by mkShape to define output directory for root files
outputDir = 'rootFiles_'+tag

# file with list of variables
variablesFile = 'variables.py'

# file with TTree aliases
aliasesFile = 'aliases_test.py'

# file with list of cuts
cutsFile = 'cuts_test.py' 

# file with list of samples
samplesFile = 'samples_test.py' 

# file with list of samples
plotFile = 'plot.py' 

# luminosity to normalize to (in 1/fb)
lumi = 35.867

# used by mkPlot to define output directory for plots
outputDirPlots = 'plot_'+tag

# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards_'+tag

# structure file for datacard
structureFile = 'structure.py'

# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances_test.py'
