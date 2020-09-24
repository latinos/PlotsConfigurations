# structure configuration for datacard

#structure = {}
# keys here must match keys in samples.py    

structure['DY']  = {  
    'isSignal' : 0,
    'isData'   : 0
}

structure['Fake']  = {  
    'isSignal' : 0,
    'isData'   : 0 
}

structure['MCFake']  = {  
    'isSignal' : 0,
    'isData'   : 0 
}

structure['Fake_em']  = {  
    'isSignal' : 0,
    'isData'   : 0,
    'removeFromCuts' : [ k for k in cuts if 'me' in k],
}

structure['Fake_me']  = {  
    'isSignal' : 0,
    'isData'   : 0,
    'removeFromCuts' : [ k for k in cuts if 'em' in k],
}

structure['ttbar'] = {   
    'isSignal' : 0,
    'isData'   : 0 
}

structure['singleTop'] = {   
    'isSignal' : 0,
    'isData'   : 0 
}

structure['top'] = {   
    'isSignal' : 0,
    'isData'   : 0 
}

structure['TTToSemiLeptonic'] = {   
    'isSignal' : 0,
    'isData'   : 0 
}

structure['ttV'] = {   
    'isSignal' : 0,
    'isData'   : 0 
}

structure['ttW'] = {   
    'isSignal' : 0,
    'isData'   : 0 
}

structure['ttZ'] = {   
    'isSignal' : 0,
    'isData'   : 0 
}

structure['WW']  = {
    'isSignal' : 0,
    'isData'   : 0    
}

structure['Wg']  = { 
    'isSignal' : 0,
    'isData'   : 0 
}

structure['Vg']  = { 
    'isSignal' : 0,
    'isData'   : 0 
}

structure['VgS'] = { 
    'isSignal' : 0,
    'isData'   : 0 
}

structure['VgS_L'] = {
    'isSignal' : 0,
    'isData'   : 0
}

structure['VgS_H'] = {
    'isSignal' : 0,
    'isData'   : 0
}

structure['Zg']  = { 
    'isSignal' : 0,
    'isData'   : 0 
}

structure['VZ']  = { 
    'isSignal' : 0,
    'isData'   : 0 
}

structure['WZ']  = { 
    'isSignal' : 0,
    'isData'   : 0 
}

structure['VVV']  = { 
    'isSignal' : 0,
    'isData'   : 0 
}

structure['ZZ']  = {
    'isSignal' : 0,
    'isData'   : 0    
}

# data

structure['DATA']  = { 
    'isSignal' : 0,
    'isData'   : 1 
}
