# variables

#variables = {}
    
variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }

variables['mllSR'] = { 'name' : 'mll',
                     'range': (25,0,250),
                     'xaxis': 'm_{ll}',
                     'fold' : 3
                }

variables['mllDYCR'] = { 'name' : 'mll',
                     'range': (25,0,100),
                     'xaxis': 'm_{ll}',
                     'fold' : 3
                }
variables['mllTopCR'] = { 'name' : 'mll',
                     'range': (25,0,250),
                     'xaxis': 'm_{ll}',
                     'fold' : 3
                }

variables['mthSR'] = { 'name' : 'mth',
                     'range': (25,50,150),
                     'xaxis': 'm_{T}^{H}',
                     'fold' : 3
                }

variables['mthDYCR'] = { 'name' : 'mth',
                     'range': (25,0,100),
                     'xaxis': 'm_{T}^{H}',
                     'fold' : 3
                }

variables['mthTopCR'] = { 'name' : 'mth',
                     'range': (25,0,250),
                     'xaxis': 'm_{T}^{H}',
                     'fold' : 3
                }

variables['mllVSmth_Orig'] = {   'name': 'mll:mth',
                           'range': ([60,70,80,90,100,110,125],[12,25,40,55,70,100,120,140,160,180,200],),
                           'xaxis': 'm_{ll} : m_{T}^{H}',
                           'fold': 3
                       }

variables['mllVSmth_Legacy'] = {   'name': 'mll:mth',
                           'range' : ([60,95,110,125],[12,17,25,30,35,40,45,65,200],),
                           'xaxis': 'm_{ll} : m_{T}^{H}',
                           'fold': 3
                       }

variables['mllVSmth_B21'] = {   'name': 'mll:mth',
                           'range' : ([60,70,80,90,100,110,125],[12,17,25,30,35,40,45,65,100,200],),
                           'xaxis': 'm_{ll} : m_{T}^{H}',
                           'fold': 3
                       }

variables['dphill']  = {  'name': 'dphill',
                        'range' : (20,0,3.2),
                        'xaxis' : '#Delta#phi_{ll}',
                        'fold'  : 3
                        }

variables['njet']  = {
                        'name': 'Sum$(CleanJet_pt>30)',
                        'range' : (5,0,5),
                        'xaxis' : 'Number of jets',
                        'fold' : 2   
                        }
