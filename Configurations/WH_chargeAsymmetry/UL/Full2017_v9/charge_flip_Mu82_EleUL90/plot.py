# plot configuration

# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#
groupPlot['DY']  = {  
    'nameHR'   : "DY",
    'isSignal' : 0,
    'color'    : 418,    # kGreen+2
    'samples'  : ['DY','DY_LO']
}


#plot = {}

# keys here must match keys in samples.py    
     
plot['DY']  = {  
    'color'    : 418,    # kGreen+2
    'isSignal' : 0,
    'isData'   : 0, 
    'scale'    : 1.0,
}

plot['DY_LO']  = {  
    'color'    : 418,    # kGreen+2
    'isSignal' : 0,
    'isData'   : 0, 
    'scale'    : 0,
}

########
# Data #
########

plot['DATA']  = { 
    'nameHR'   : 'Data',
    'color'    : 1 ,  
    'isSignal' : 0,
    'isData'   : 1,
    'isBlind'  : 0
}


# Additional options

legend['lumi'] = 'L = 41.5 fb^{-1}'
legend['sqrt'] = '#sqrt{s} = 13 TeV'
