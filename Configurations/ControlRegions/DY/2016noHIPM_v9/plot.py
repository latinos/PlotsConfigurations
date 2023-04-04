# plot configuration



# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#

groupPlot['DY']  = {  
    'nameHR' : "DY",
    'isSignal' : 0,
    'color'    : 418,    # kGreen+2
    'samples'  : ['DY']
}


# plot = {}

# keys here must match keys in samples.py    
#                    
plot['DY']  = {  
    'nameHR'   : 'DY',
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

legend['lumi'] = 'L = 16.8 fb^{-1}'

legend['sqrt'] = '#sqrt{s} = 13 TeV'




