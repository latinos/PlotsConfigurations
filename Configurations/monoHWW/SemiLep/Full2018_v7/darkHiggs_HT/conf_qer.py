handle = open('conf.py', 'r')
exec(handle)
handle.close()

tag = 'darkHiggs_HT_qer_2018v7'
variablesFile = 'variables_qer.py'
cutsFile = 'cuts_qer.py'
outputDirPlots = 'darkHiggs_HT_plots_qer'
outputDir = 'darkHiggs_HT_root_qer'
aliasesFile = 'aliases_qer.py'
samplesFile = 'samples_qer.py'
nuisancesFile = 'nuisances_qer.py'
