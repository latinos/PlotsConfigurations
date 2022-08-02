# variables

SignalRegions = set(x for x in cuts if 'SR' in x)
ControlRegions = set(x for x in cuts if 'CR' in x)

variables['BDTOutput_0j_Top'] = {
    'name': 'BDTOutput_0j_Top',
    'range' : ([-1.0,-0.5,-0.25,0.,0.25,0.5,1.0],),
    'xaxis' : 'Top MVA discriminant WW',
    'fold' : 3,
    'cuts' : SignalRegions
}

variables['BDTOutput_1j_Top'] = {
    'name': 'BDTOutput_1j_Top',
    'range' : ([-1.0,-0.5,-0.25,0.,0.25,0.5,1.0],),
    'xaxis' : 'Top MVA discriminant WW',
    'fold' : 3,
    'cuts' : SignalRegions
}

variables['BDTOutput_2j_Top'] = {
    'name': 'BDTOutput_2j_Top',
    'range' : ([-1.0,-0.5,-0.25,0.,0.25,0.5,1.0],),
    'xaxis' : 'Top MVA discriminant WW',
    'fold' : 3,
    'cuts' : SignalRegions
}

variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }

variables['mll']  = {   'name': 'mll',
                        'range' : (30, 20,250),
                        'xaxis' : 'm_{ll} [GeV]',
                        'fold' : 3
                        }


variables['drll']  = {   'name': 'drll',
                         'range' : (30, 0, 4.0),
                        'xaxis' : '#Delta R_{ll}',
                        'fold' : 3
                        }


variables['mth']  = {   'name': 'mth',
                        'range' : (30, 40,400),
                        'xaxis' : 'm_{T}^{ll, p_{T}^{miss}} [GeV]',
                        'fold' : 3
                        }


variables['mtw2']  = {   'name': 'mtw2',
                        'range' : (30, 20,300),
                         'xaxis' : 'm_{T}^{p_{T}^{min}, p_{T}^{miss}} [GeV]',
                        'fold' : 3
                        }

variables['ptll']  = {   'name': 'ptll',     
                        'range' : (30, 30,300),   
                        'xaxis' : 'p_{T}^{ll} [GeV]',
                        'fold' : 3
                        }

variables['pt1']  = {   'name': 'Lepton_pt[0]',     
                        'range' : (30,25,250),   
                        'xaxis' : 'p_{T}^{max} [GeV]',
                        'fold'  : 3
                        }

variables['pt2']  = {   'name': 'Lepton_pt[1]',     
                        'range' : (30,20,150),   
                        'xaxis' : 'p_{T}^{min} [GeV]',
                        'fold'  : 3 
                        }

variables['eta1']  = {  'name': 'Lepton_eta[0]',     
                        'range' : (30,-3,3),   
                        'xaxis' : '#eta^{max}',
                        'fold'  : 3                         
                        }

variables['eta2']  = {  'name': 'Lepton_eta[1]',     
                        'range' : (30,-3,3),   
                        'xaxis' : '#eta^{min}',
                        'fold'  : 3                         
                        }

                        
variables['puppimet']  = {
                        'name': 'PuppiMET_pt',
                        'range' : (30,20,300),
                        'xaxis' : 'p_{T}^{miss} [GeV]',
                        'fold'  : 3
                        }



variables['mpmet']  = {
                        'name': 'mpmet',
                        'range' : (30,20,200),
                        'xaxis' : 'Projected p_{T}^{miss} [GeV]',
                        'fold'  : 3
                        }

