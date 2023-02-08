# plot configuration

# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#

groupPlot['top_nHardJets_0']  = {  
    'nameHR' : "top_nHardJets_0",
    'isSignal' : 0,
    'color'    : 404,    # kYellow+4
    'samples'  : ['top_nHardJets_0']
}

groupPlot['top_nHardJets_1']  = {  
    'nameHR' : "top_nHardJets_1",
    'isSignal' : 0,
    'color'    : 402,    # kYellow+2
    'samples'  : ['top_nHardJets_1']
}

groupPlot['top_nHardJets_2']  = {  
    'nameHR' : "top_nHardJets_2",
    'isSignal' : 0,
    'color'    : 400,    # kYellow
    'samples'  : ['top_nHardJets_2']
}


# plot = {}

# keys here must match keys in samples.py    
#                    

plot['top_nHardJets_0']  = {  
    'color'    : 404,    # kYellow+4
    'isSignal' : 0,
    'isData'   : 0, 
    'scale'    : 1.0,
}

plot['top_nHardJets_1']  = {  
    'color'    : 402,    # kYellow+2
    'isSignal' : 0,
    'isData'   : 0, 
    'scale'    : 1.0,
}

plot['top_nHardJets_2']  = {  
    'color'    : 400,    # kYellow
    'isSignal' : 0,
    'isData'   : 0, 
    'scale'    : 1.0,
}


# data

plot['DATA']  = { 
    'nameHR'   : 'Data',
    'color'    : 1 ,  
    'isSignal' : 0,
    'isData'   : 1 ,
    'isBlind'  : 0
}


# additional options

legend['lumi'] = 'L = 41.5 fb^{-1}'

legend['sqrt'] = '#sqrt{s} = 13 TeV'
