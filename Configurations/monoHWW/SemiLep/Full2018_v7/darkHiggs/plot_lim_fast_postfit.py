handle = open('plot_lim_fast.py', 'r')
exec(handle)
handle.close()

plot['total_postfit_s']  = { 
    'nameHR' : 'post-fit s',
    'color': 632,
    'isSignal' : 2,
    'isData'   : 0 , 
    'scale'    : 1    #   
}
plot['total_postfit_b']  = { 
    'nameHR' : 'post-fit b',
    'color': 800,
    'isSignal' : 2,
    'isData'   : 0 , 
    'scale'    : 1    #   
}
plot['total_prefit']  = { 
    'nameHR' : 'pre-fit',
    'color': 600,
    'isSignal' : 2,
    'isData'   : 0 , 
    'scale'    : 1    #   
}

groupPlot['total_postfit_s']  = { 
    'nameHR' : 'post-fit s',
    'color': 632 ,
    'isSignal' : 2,
    'samples'  : ['total_postfit_s'], 
}
groupPlot['total_postfit_b']  = { 
    'nameHR' : 'post-fit b',
    'color': 800 ,
    'isSignal' : 2,
    'samples'  : ['total_postfit_b'], 
}
groupPlot['total_prefit']  = { 
    'nameHR' : 'pre-fit',
    'color': 600 ,
    'isSignal' : 2,
    'samples'  : ['total_prefit'], 
}
