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

variables['mllVSmthOrig'] = {   'name': 'mll:mth',
                           'range': ([60,70,80,90,100,110,120,160,200,240,280],[0,26,41,56,71,85,100,120,140,160,180,200],),
                           'xaxis': 'm_{ll} : m_{T}^{H}',
                           'fold': 3
                       }
variables['mllVSmth'] = {   'name': 'mll:mth',
                           'range': ([60,70,80,90,100,110,125],[12,25,40,55,70,100,120,140,160,180,200],),
                           'xaxis': 'm_{ll} : m_{T}^{H}',
                           'fold': 3
                       }

variables['dphill']  = {  'name': 'dphill',
                        'range' : (20,0,3.2),
                        'xaxis' : '#Delta#phi_{ll}',
                        'fold'  : 3
                        }

