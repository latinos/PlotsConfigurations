# plot configuration

# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used

"""
groupPlot['VVV']  = {  
    'nameHR' : 'VVV',
    'isSignal' : 0,
    'color': 416,
    'samples'  : ['VVV']
}
"""
groupPlot['VV']  = {  
    'nameHR' : 'VV',
    'isSignal' : 0,
    'color': 609,
    'samples'  : ['VV', 'VZ', 'WZ', 'ZZ']
}

groupPlot['Vg']  = {  
    'nameHR' : "V#gamma (*)",
    'isSignal' : 0,
    'color'    : 800,
    'samples'  : ['Vg', 'Wg', 'VgS_H','VgS_L']
}

"""
groupPlot['VgS']  = {
    'nameHR' : "V#gamma*",
    'isSignal' : 0,
    'color'    : 409,
    'samples'  : ['VgS_H','VgS_L']
}
"""

groupPlot['Fake']  = {
    'nameHR' : 'nonprompt',
    'isSignal' : 0,
    'color': 920,
    'samples'  : ['Fake']
}

groupPlot['ttV']  = {
    'nameHR' : 'ttV',
    'isSignal' : 0,
    'color': 432,
    'samples'  : ['ttW', 'ttZ']
}

"""
groupPlot['ttW']  = {
    'nameHR' : 'ttW',
    'isSignal' : 0,
    'color': 402,
    'samples'  : ['ttW']
}

groupPlot['ttZ']  = {
    'nameHR' : 'ttZ',
    'isSignal' : 0,
    'color': 404,
    'samples'  : ['ttZ']
}
"""

groupPlot['TTToSemiLeptonic']  = {
    'nameHR' : 'TTToSemiLeptonic',
    'isSignal' : 0,
    'color': 418,
    'samples'  : ['TTToSemiLeptonic']
}

groupPlot['DY']  = {  
    'nameHR' : "DY",
    'isSignal' : 0,
    'color': 877,
    'samples'  : ['DY']
}

groupPlot['singleTop']  = {
    'nameHR' : 'Single top',
    'isSignal' : 0,
    'color': 632,
    'samples'  : ['singleTop']
}

groupPlot['ttbar']  = {  
    'nameHR' : 't#bar{t}',
    'isSignal' : 0,
    'color': 600,
    'samples'  : ['ttbar']
}

#plot = {}

# keys here must match keys in samples.py    

plot['DY']  = {  
    'color': 877,
    'isSignal' : 0,
    'isData'   : 0, 
    'scale'    : 1.0,
}

plot['Fake']  = {  
    'color': 920,
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0                  
}

"""
plot['MCFake']  = {  
    'color': 920,
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0                  
}
"""

plot['ttbar'] = {   
    'nameHR' : 't#bar{t}',
    'color': 600,
    'isSignal' : 0,
    'isData'   : 0, 
    'scale'    : 1.0,
}

plot['singleTop'] = {
    'nameHR' : 'Single top',
    'color': 632,
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['TTToSemiLeptonic'] = {
    'nameHR' : 'TTToSemiLeptonic',
    'color': 418,
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

"""
plot['ttV'] = {
    'nameHR' : 'ttV',
    'color': 432,
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}
"""

plot['ttW'] = {
    'nameHR' : 'ttW',
    'color': 432,
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['ttZ'] = {
    'nameHR' : 'ttZ',
    'color': 434,
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['WW']  = {
    'color': 609,
    'isSignal' : 0,
    'isData'   : 0,    
    'scale'    : 1.0
}

plot['Vg']  = { 
    'color': 800,
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['VgS_H'] = { 
    'color'    : 800,
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

plot['VgS_L'] = {
    'color'    : 800,
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}


plot['VZ']  = { 
    'color': 609,
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}

"""
plot['VVV']  = { 
    'color': 416,
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0
}
"""
# data

plot['DATA']  = { 
    'nameHR' : 'Data',
    'color': 1 ,  
    'isSignal' : 0,
    'isData'   : 1 ,
    'isBlind'  : 0
}

# additional options

legend['lumi'] = 'L = 41.5/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'
