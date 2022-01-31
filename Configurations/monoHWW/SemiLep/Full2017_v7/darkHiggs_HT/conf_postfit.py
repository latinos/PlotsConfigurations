handle = open('conf.py', 'r')
exec(handle)
handle.close()

tag = 'darkHiggs_HT_lim_2017v7'
variablesFile = 'variables_lim.py'
outputDir = 'darkHiggs_HT_root_lim'
#structureFile = 'structure_int.py'
#samplesFile = 'samples_int.py'
#nuisancesFile = 'nuisances_stat.py'
nuisancesFile = None
