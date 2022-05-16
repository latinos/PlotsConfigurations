handle = open('conf.py', 'r')
exec(handle)
handle.close()
tag = 'run2_postfit_2017'
outputDirPlots = tag+'_plots'  
plotFile = 'plot_2017.py'   
