handle = open('conf.py', 'r')
exec(handle)
handle.close()

plotFile = 'plot_HTbin_vs_LO.py'
outputDirPlots = 'Wjets_plots_HTbin_vs_LO'
structureFile = 'structure_HTbin.py'
