handle = open('conf.py', 'r')
exec(handle)
handle.close()

tag = 'darkHiggs_HT_sig_2017v7'
variablesFile = 'variables_sig.py'
outputDirPlots = 'darkHiggs_HT_plots_sig'
outputDir = 'darkHiggs_HT_root_sig'
plotFile = 'plot_sig.py'
#structureFile = 'structure_int.py'
samplesFile = 'samples_sig.py'
nuisancesFile = None
