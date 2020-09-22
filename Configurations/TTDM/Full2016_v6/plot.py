# plot configuration

# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used

groupPlot['ttbar']  = {  
    'nameHR' : 't#bar{t}',
    'isSignal' : 0,
    'color': 400,
    'samples'  : ['ttbar']
}

groupPlot['singleTop']  = {
    'nameHR' : 'Single top',
    'isSignal' : 0,
    'color': 401,
    'samples'  : ['singleTop']
}

groupPlot['TTToSemiLeptonic']  = {
    'nameHR' : 'TTToSemiLeptonic',
    'isSignal' : 0,
    'color': 402,
    'samples'  : ['TTToSemiLeptonic']
}

groupPlot['ttV']  = {
    'nameHR' : 'ttV',
    'isSignal' : 0,
    'color': 403,
    'samples'  : ['ttV']
}

groupPlot['WW']  = {  
    'nameHR' : 'WW',
    'isSignal' : 0,
    'color': 851,
    'samples'  : ['WW']
}

groupPlot['Fake']  = {
    'nameHR' : 'nonprompt',
    'isSignal' : 0,
    'color': 921,
    'samples'  : ['Fake']
}

groupPlot['DY']  = {  
    'nameHR' : "DY",
    'isSignal' : 0,
    'color': 418,
    'samples'  : ['DY']
}

groupPlot['VVV']  = {  
    'nameHR' : 'VVV',
    'isSignal' : 0,
    'color': 857,
    'samples'  : ['VVV']
}

groupPlot['VZ']  = {  
    'nameHR' : "VZ",
    'isSignal' : 0,
    'color'    : 617,
    'samples'  : ['VZ', 'WZ', 'ZZ']
}

groupPlot['Vg']  = {  
    'nameHR' : "V#gamma",
    'isSignal' : 0,
    'color'    : 810,
    'samples'  : ['Vg', 'Wg']
}

groupPlot['VgS']  = {
    'nameHR' : "V#gamma*",
    'isSignal' : 0,
    'color'    : 409,
    'samples'  : ['VgS_H','VgS_L']
}

#plot = {}

# keys here must match keys in samples.py    

plot['DY']  = {  
    'color': 418,
    'isSignal' : 0,
    'isData'   : 0, 
    'scale'    : 1.0,
}

plot['Fake']  = {  
    'color': 921,
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0                  
}

plot['ttbar'] = {   
    'nameHR' : 't#bar{t}',
    'color': 400,
    'isSignal' : 0,
    'isData'   : 0, 
    'scale'    : 1.0,
}

plot['singleTop'] = {
    'nameHR' : 'Single top',
    'color': 401,
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['TTToSemiLeptonic'] = {
    'nameHR' : 'TTToSemiLeptonic',
    'color': 402,
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['ttV'] = {
    'nameHR' : 'ttV',
    'color': 403,
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['WW']  = {
    'color': 851,
    'isSignal' : 0,
    'isData'   : 0,    
    'scale'    : 1.0
}

plot['Vg']  = { 
    'color': 859,
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['VgS_H'] = { 
    'color'    : 617,
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['VgS_L'] = {
    'color'    : 617,
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}


plot['VZ']  = { 
    'color': 858,
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['VVV']  = { 
    'color': 857,
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

# data

plot['DATA']  = { 
    'nameHR' : 'Data',
    'color': 1 ,  
    'isSignal' : 0,
    'isData'   : 1 ,
    'isBlind'  : 0
}

# additional options

legend['lumi'] = 'L = 35.9/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'
