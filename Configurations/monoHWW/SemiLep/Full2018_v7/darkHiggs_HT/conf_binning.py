handle = open('conf.py', 'r')
exec(handle)
handle.close()

tag = 'darkHiggs_HT_bin_2018v7'
variablesFile = 'variables_binning.py'
outputDirPlots = 'darkHiggs_HT_plots_bin'
outputDir = 'darkHiggs_HT_root_bin'
nuisancesFile = None
