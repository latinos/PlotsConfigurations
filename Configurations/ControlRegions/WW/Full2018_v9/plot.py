# plot configuration



# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#

groupPlot['top']  = {  
    'nameHR' : 'tW and t#bar{t}',
    'isSignal' : 0,
    'color'    : 400,   # kYellow
    'samples'  : ['top']
}

groupPlot['WW']  = {  
    'nameHR' : 'WW',
    'isSignal' : 0,
    'color'    : 851, # kAzure -9 
    'samples'  : ['WW', 'ggWW']
}

groupPlot['Fake']  = {  
    'nameHR' : 'Non-prompt',
    'isSignal' : 0,
    'color': 921,    # kGray + 1
    'samples'  : ['Fake']
}


groupPlot['DY']  = {  
    'nameHR' : "DY",
    'isSignal' : 0,
    'color'    : 418,    # kGreen+2
    'samples'  : ['DY']
}



groupPlot['VVV']  = {  
    'nameHR' : 'VVV',
    'isSignal' : 0,
    'color'    : 857, # kAzure -3  
    'samples'  : ['VVV']
}


groupPlot['VZ']  = {  
    'nameHR' : "VZ",
    'isSignal' : 0,
    'color'    : 617,   # kViolet + 1  
    'samples'  : ['VZ']
}

groupPlot['Vg']  = {  
    'nameHR' : "V#gamma",
    'isSignal' : 0,
    'color'    : 810,   # kOrange + 10
    'samples'  : ['Vg']
}

groupPlot['VgS']  = {
    'nameHR' : "V#gamma*",
    'isSignal' : 0,
    'color'    : 409,   # kGreen - 9
    'samples'  : ['VgS_L', 'VgS_H']
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

plot['Fake']  = {  
    'color': 921,    # kGray + 1
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0                  
}

              
plot['top'] = {   
    'nameHR'   : 'tW and t#bar{t}',
    'color'    : 400,   # kYellow
    'isSignal' : 0,
    'isData'   : 0, 
    'scale'    : 1.0,
}


plot['WW']  = {
    'color': 851, # kAzure -9 
    'isSignal' : 0,
    'isData'   : 0,    
    'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
}

plot['ggWW']  = {
    'color'    : 850, # kAzure -10
    'isSignal' : 0,
    'isData'   : 0,    
    'scale'    : 1.24 # 0.06387 / 0.05152 = legacy / UL cross-sections --> why this difference?
}


plot['Vg']  = { 
    'color': 859, # kAzure -1  
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0, # (55.5 * 1.06 / 131.3) 
}
                  
plot['VZ']  = { 
    'color': 858, # kAzure -2  
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['VVV']  = { 
    'color'    : 857, # kAzure -3  
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['VgS_L']  = {
    'color': 617, # kViolet + 1
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['VgS_H']  = {
    'color': 617, # kViolet + 1
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
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

legend['lumi'] = 'L = 59.8 fb^{-1}'

legend['sqrt'] = '#sqrt{s} = 13 TeV'




