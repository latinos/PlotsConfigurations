# plot configuration

# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#

groupPlot['DY_UL']  = {  
    'nameHR' : "DY_UL",
    'isSignal' : 2,
    'color'    : 418,    # kGreen+2
    'samples'  : ['DY_UL']
}

groupPlot['DY_preUL']  = {  
    'nameHR' : "DY_preUL",
    'isSignal' : 2,
    'color'    : 4120,    # kGreen+4
    'samples'  : ['DY_preUL']
}

# plot = {}

# keys here must match keys in samples.py    
#                    
plot['DY_UL']  = {  
    'nameHR'   : 'DY_UL',
    'color'    : 418,    # kGreen+2
    'isSignal' : 2,
    'isData'   : 0, 
    'scale'    : 1.0,
}

plot['DY_preUL']  = {  
    'nameHR'   : 'DY_preUL',
    'color'    : 420,    # kGreen+4
    'isSignal' : 2,
    'isData'   : 0, 
    'scale'    : 1.0,
}


# # data

# plot['DATA']  = { 
#     'nameHR'   : 'Data',
#     'color'    : 1 ,  
#     'isSignal' : 0,
#     'isData'   : 1 ,
#     'isBlind'  : 0
# }




# additional options

legend['lumi'] = 'L =  59.8 fb^{-1}'

legend['sqrt'] = '#sqrt{s} = 13 TeV'
