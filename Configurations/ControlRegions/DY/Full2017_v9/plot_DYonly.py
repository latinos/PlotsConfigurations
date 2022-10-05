# plot configuration

# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#

groupPlot['DY_nHardJets_0']  = {  
    'nameHR' : "DY_nHardJets_0",
    'isSignal' : 0,
    'color'    : 420,    # kGreen+4
    'samples'  : ['DY_nHardJets_0']
}

groupPlot['DY_nHardJets_1']  = {  
    'nameHR' : "DY_nHardJets_1",
    'isSignal' : 0,
    'color'    : 418,    # kGreen+2
    'samples'  : ['DY_nHardJets_1']
}

groupPlot['DY_nHardJets_2']  = {  
    'nameHR' : "DY_nHardJets_2",
    'isSignal' : 0,
    'color'    : 416,    # kGreen
    'samples'  : ['DY_nHardJets_2']
}


# plot = {}

# keys here must match keys in samples.py    
#                    

plot['DY_nHardJets_0']  = {  
    'color'    : 418,    # kGreen+2
    'isSignal' : 0,
    'isData'   : 0, 
    'scale'    : 1.0,
}

plot['DY_nHardJets_1']  = {  
    'color'    : 418,    # kGreen+2
    'isSignal' : 0,
    'isData'   : 0, 
    'scale'    : 1.0,
}

plot['DY_nHardJets_2']  = {  
    'color'    : 418,    # kGreen+2
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
