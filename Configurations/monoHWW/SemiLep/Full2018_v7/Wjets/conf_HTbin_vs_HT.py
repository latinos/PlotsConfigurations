handle = open('conf.py', 'r')
exec(handle)
handle.close()

plotFile = 'plot_HTbin_vs_HT.py'
outputDirPlots = 'Wjets_plots_HTbin_vs_HT'
structureFile = 'structure_HTbin.py'
