handle = open('conf.py', 'r')
exec(handle)
handle.close()
tag = 'run2_prefit_2016'
outputDirPlots = tag+'_plots'  
plotFile = 'plot_2016.py'   
