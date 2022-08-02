handle = open('conf.py', 'r')
exec(handle)
handle.close()

plotFile = 'plot_NLOs_vs_NLOm.py'
outputDirPlots = 'Wjets_plots_NLOs_vs_NLOm'
structureFile = 'structure_NLOs.py'
