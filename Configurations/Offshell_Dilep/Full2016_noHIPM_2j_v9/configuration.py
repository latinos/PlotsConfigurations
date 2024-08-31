# example of configuration file
treeName= 'Events'

tag = 'hww_offshell_UL_2016_noHIPM'



eos_space = '/../../../../../../../../../../../../../eos/user/j/jrotter/Latinos_RootFiles/' 

# used by mkShape to define output directory for root files
outputDir = eos_space + 'Full2016_noHIPM_2j_v9_W_SYST_FINAL_v5_Aug2024/rootFiles'

# file with TTree aliases
aliasesFile = 'aliases.py'

# file with list of variables
variablesFile = 'variables.py'

# file with list of cuts
cutsFile = 'cuts.py' 

# file with list of samples
samplesFile = 'samples.py' 

# file with list of samples
plotFile = 'plot.py' 



# luminosity to normalize to (in 1/fb)
lumi = 16.81

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
# outputDirPlots = '~/www/plotCR'

outputDirPlots = eos_space + '../www/BLINDED_FINAL_W_SYST_Full2016_noHIPM_2j_v9_v5_Aug2024'

# used by mkDatacards to define output directory for datacards
outputDirDatacard = eos_space + 'Full2016_noHIPM_2j_v9_W_SYST_FINAL_v5_Aug2024/datacards_2016_noHIPM'


# structure file for datacard
structureFile = 'structure.py'


# nuisances file for mkDatacards and for mkShape
nuisancesFile = 'nuisances.py'

