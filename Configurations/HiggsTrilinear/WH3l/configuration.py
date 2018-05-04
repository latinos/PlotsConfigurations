# example of configuration file

#eleWP='cut_WP_Tight80X'
# eleWP='cut_WP_Tight80X_SS'
#eleWP='mva_80p_Iso2015'
#eleWP='mva_80p_Iso2016'
#eleWP='mva_90p_Iso2015'
eleWP='mva_90p_Iso2016'

#tag = 'WH3l_Signal_Final_'+eleWP
tag = 'WH3l_Signal_forPlots_'+eleWP


# used by mkShape to define output directory for root files
outputDir = 'rootFiles_'+tag
#outputDir = 'rootFiles_forPlots_'+tag


# file with list of variables
variablesFile = 'variables.py'

# file with list of cuts
#cutsFile = 'cuts.py' 
cutsFile = 'cuts.py'

# file with list of samples
samplesFile = 'samples.py' 

# file with list of samples
plotFile = 'plot.py' 

# luminosity to normalize to (in 1/fb)
#lumi = 12.2950
lumi = 35.867

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plot_'+tag
#outputDirPlots = 'plot_forPlots_'+tag


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards_'+tag
#outputDirDatacard = 'datacards_forPlots_'+tag


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'
