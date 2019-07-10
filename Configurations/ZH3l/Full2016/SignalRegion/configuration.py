# example of configuration file

#eleWP='cut_WP_Tight80X'
# eleWP='cut_WP_Tight80X_SS'
#eleWP='mva_80p_Iso2015'
#eleWP='mva_80p_Iso2016'
#eleWP='mva_90p_Iso2015'
eleWP='mva_90p_Iso2016'

#tag = 'WH3l_Signal_Final_'+eleWP
#tag = 'WH3l_Signal_forPlots_'+eleWP
tag = 'ZH3lSR_addvars'
#tag = 'ZH3lSR_1j_addsys'


# used by mkShape to define output directory for root files
outputDir = 'rootFiles_'+tag
#outputDir = 'rootFiles_forPlots_'+tag


# file with list of variables
variablesFile = 'variables_test.py'
#variablesFile = 'variables_zh.py'
#variablesFile = 'variables_zh_fit.py'

# file with list of cuts
#cutsFile = 'cuts.py' 
#cutsFile = 'cuts_zh_fit.py'
cutsFile = 'cuts_zh.py'
#cutsFile = 'cuts_test.py'

# file with list of samples
samplesFile = 'samples_zh.py' 

# file with list of samples
plotFile = 'plot.py' 

# luminosity to normalize to (in 1/fb)
#lumi = 12.2950
lumi = 35.867

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plot_'+tag

# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards_'+tag


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
#nuisancesFile = 'nuisances_zh_noWZmuscale.py'
#nuisancesFile = 'nuisances_noCR.py'
nuisancesFile = 'nuisances_empty.py'
