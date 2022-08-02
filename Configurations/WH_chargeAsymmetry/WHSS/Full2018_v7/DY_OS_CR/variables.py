# variables

#variables = {}
    
variables['events'] = {
    'name': '1',      
    'range' : (1,0,2),  
    'xaxis' : 'events', 
    'fold' : 3
}

# 1 jet binning
variables['mlljj20_whss_1j_bin'] = {
    'name': 'mlljj20_whss',
    'range' : ([60.,70.,80.,90.,100.,110.,120.,130.,140.,150.,160.,170.,180.,190.,200.,250.,300.],),
    'xaxis' : 'mlljj20_whss [GeV]',
    'fold' : 3
}

# 2 jets binning
variables['mlljj20_whss_2j_bin'] = {
    'name': 'mlljj20_whss',
    'range' : ([60.,120.,130.,140.,150.,160.,170.,180.,190.,200.,250.,300.],),
    'xaxis' : 'mlljj20_whss [GeV]',
    'fold' : 3
}

variables['puppimet'] = {
    'name': 'PuppiMET_pt',    
    'range' : (20,0,200),
    'xaxis' : 'PUPPI met [GeV]',
    'fold'  : 3
}

variables['mll'] = {
    'name': 'mll',
    'range' : (20, 40,120),
    'xaxis' : 'm_{ll} [GeV]',
    'fold' : 0
}

variables['ptll'] = {
    'name': 'ptll',     
    'range' : (40, 0,200),   
    'xaxis' : 'p_{T}^{ll} [GeV]',
    'fold' : 0
}

variables['pt1'] = {
    'name': 'Lepton_pt[0]',     
    'range' : (20,0,100),   
    'xaxis' : 'p_{T} 1st lep',
    'fold'  : 3                         
}

variables['pt2'] = {
    'name': 'Lepton_pt[1]',     
    'range' : (20,0,100),   
    'xaxis' : 'p_{T} 2nd lep',
    'fold'  : 3                         
}

