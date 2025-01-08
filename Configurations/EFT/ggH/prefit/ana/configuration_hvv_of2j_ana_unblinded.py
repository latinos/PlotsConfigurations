# Configuration file to produce initial root files -- has both merged and binned ggH samples

treeName = 'Events'

tag = 'hvv_2016_of2j_VBF_IP_H0PH'

# used by mkShape to define output directory for root files
outputDir = 'rootFile_'+tag

# file with TTree aliases
aliasesFile = 'aliases_ggH_allSignals_preAppV02_ana.py'

# file with list of variables
variablesFile = 'variables_combined_label_a2.py'

# file with list of cuts
cutsFile = 'cuts_hvv.py' 

# file with list of samples
samplesFile = 'samples_hvv.py' 

# file with list of samples
plotFile = 'plot_ggH2017_allSignals_forSRs_ana_unblinded.py' 

# luminosity to normalize to (in 1/fb)
lumi = 137.6

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
outputDirPlots = 'plotsSR_prefitFromTemplate_unblinded_'+tag

# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards_'+tag

# structure file for datacard
structureFile = 'structure_ggH_allSignals_preAppV02_ana.py'

# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances_ggH_allSignals_statOnly_preAppV02_ana.py' 

