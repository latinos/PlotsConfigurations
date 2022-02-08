# example of configuration file

tag = 'paper_2016'
outputDir = 'RootFiles'
treeName = 'Events'

date='070721'

# luminosity to normalize to
lumi = 35.867

# file with TTree aliases
aliasesFile = 'aliases.py'

# file with list of variables
variablesFile = 'variables.py'

# file with list of cuts
cutsFile = 'cuts.py'

# file with list of samples
samplesFile = 'samples.py'

# file with list of plot
plotFile = 'plot/plot_topcr.py'

# file with list of nuisances
nuisancesFile = 'nuisances.py'

# used by mkPlot to define output directory for plots
# different from "outputDir" to do things more tidy
#outputDirPlots = '/eos/user/f/fcetorel/www/VBS_OS/test/2016/DNN_unblinding_'+date+'/preFit'
outputDirPlots = '/eos/user/f/fcetorel/www/VBS_OS/test/2016/DNN_postprefit_dipolerecoil_ANv9_041021/preFit'
# used by mkDatacards to define output directory for datacards
outputDirDatacard = 'datacards'

# structure file for datacard
structureFile = 'structure.py'
