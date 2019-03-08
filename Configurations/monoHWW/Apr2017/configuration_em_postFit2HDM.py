# example of configuration file

tag = 'monoHWW_em_postFit'


# used by mkShape to define output directory for root files
outputDir = 'rootFile_em_postFit2HDM'


# file with list of variables
variablesFile = 'variables_PAPER.py'

# file with list of cuts
cutsFile = 'cuts_em.py' 

# file with list of samples
samplesFile = 'samples_em_2HDM_postFit.py'
 
# file with list of samples
plotFile = 'plot_2HDM_postFit.py' 


# luminosity to normalize to (in 1/fb)
lumi = 35.9


# used by mkPlot to define output directory for plots
outputDirPlots = 'monoH_2HDM_em_PAPER_postFit2HDM'

# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards_PAPER'

# structure file for datacard
structureFile = 'structure_PAPER.py'


# nuisances file for mkDatacards and for mkShape
#nuisancesFile = 'nuisances_light.py'
#nuisancesFile = 'nuisances.py'
nuisancesFile = 'nuisances_full.py'

