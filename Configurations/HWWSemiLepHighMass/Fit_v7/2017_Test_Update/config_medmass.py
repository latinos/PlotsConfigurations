# Configuration file to produce initial root files

treeName = 'Events'

#tag = 'hm_2017_Fit_SRCR_wDeepTag_corrMSFCHECK'
tag = 'hm_2017_Fit_SplitLep_etaCut_BefReStat'#_PerFitNewCut'
#tag = 'hm_2017_Fit_SRCR_wDeepTag'

# used by mkShape to define output directory for root files
outputDir = 'rootFile_Debug_2017'

# file with TTree aliases
aliasesFile = 'aliases_medmass.py'#DNN trained with the high mass with aliases_highmass.py

# file with list of variables
variablesFile = 'variables_fit.py'
# variablesFile = 'variablesPlot.py'
# variablesFile = 'variablesLimits.py'

# file with list of cuts
cutsFile = 'cuts_medmass.py'

# file with list of samples
samplesFile = 'samples_medmass.py'

# file with list of samples
plotFile = 'plot_medmass_UPD_pf.py'

# luminosity to normalize to (in 1/fb)
lumi = 41.5

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'Plot_NEWNoNui_NJoBar_ZoomLepPt'


# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'Data_diffwidth'

# structure file for datacard
structureFile = 'structure_medmass.py'

# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances_medmass.py'
