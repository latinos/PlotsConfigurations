# variables

#variables = {}

# 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
    
variables['events'] = {
    'name'  : '1',      
    'range' : (1,0,2),  
    'xaxis' : 'events', 
    'fold'  : 3
}

###################
# Control variables
###################

variables['mll'] = {
    'name'  : 'mll',
    'range' : (30,76.2,106.2),
    'xaxis' : 'm_{ll} [GeV]',
    'fold'  : 0
}

variables['mll_more_bins'] = {
    'name'  : 'mll',
    'range' : (60,76.2,106.2),
    'xaxis' : 'm_{ll} [GeV]',
    'fold'  : 0
}

variables['pt1'] = {
    'name'  : 'Lepton_pt[0]',     
    'range' : (20,0,100),   
    'xaxis' : 'p_{T} 1st lep',
    'fold'  : 3                         
}

variables['pt2'] = {
    'name'  : 'Lepton_pt[1]',     
    'range' : (20,0,100),   
    'xaxis' : 'p_{T} 2nd lep',
    'fold'  : 3                         
}

variables['eta1']  = {
    'name'  : 'Lepton_eta[0]',     
    'range' : (40,-3,3),   
    'xaxis' : '#eta 1st lep',
    'fold'  : 3                         
}

variables['eta2']  = {
    'name'  : 'Lepton_eta[1]',     
    'range' : (40,-3,3),   
    'xaxis' : '#eta 2nd lep',
    'fold'  : 3                         
}
