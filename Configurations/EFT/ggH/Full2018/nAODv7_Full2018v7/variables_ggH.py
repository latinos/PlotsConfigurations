# variables

#variables = {}
    
variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }

variables['mll'] = { 'name' : 'mll',
                     'range': (20,0,200),
                     'xaxis': 'm_{ll}',
                     'fold' : 3
                }

variables['mllExt'] = { 'name' : 'mll',
                     'range': (25,0,250),
                     'xaxis': 'm_{ll}',
                     'fold' : 3
                }

variables['mll100'] = { 'name' : 'mll',
                     'range': (40,0,100),
                     'xaxis': 'm_{ll}',
                     'fold' : 3
                }

variables['mth'] = { 'name' : 'mth',
                     'range': (20,0,200),
                     'xaxis': 'm_{T}^{H}',
                     'fold' : 3
                }

variables['mthExt'] = { 'name' : 'mth',
                     'range': (25,0,250),
                     'xaxis': 'm_{T}^{H}',
                     'fold' : 3
                }

variables['mth120'] = { 'name' : 'mth',
                     'range': (40,60,120),
                     'xaxis': 'm_{T}^{H}',
                     'fold' : 3
                }

variables['hm'] = { 'name' : 'hm',
                     'range': (20,0,400),
                     'xaxis': 'm_{H}',
                     'fold' : 3
                   }

variables['hm100'] = { 'name' : 'hm',
                     'range': (40,0,100),
                     'xaxis': 'm_{H}',
                     'fold' : 3
                   }

variables['mllVSmth'] = {   'name': 'mll:mth',
                           'range': ([60,65,70,75,80,90,100,110,125],[10,15,20,25,30,40,50,60,70,80,100],),
                           'xaxis': 'm_{ll} : m_{T}^{H}',
                           'fold': 3
                       }

variables['mllVSmthExt'] = {   'name': 'mll:mth',
                               'range': ([60,65,70,75,80,90,100,110,125,150],[10,15,20,25,30,40,50,60,70,80,100,125,150],),
                               'xaxis': 'm_{ll} : m_{T}^{H}',
                               'fold': 3
                           }
