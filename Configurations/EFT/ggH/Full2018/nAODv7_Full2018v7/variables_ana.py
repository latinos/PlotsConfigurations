# variables

#variables = {}
    

print("KELLO variables Ana Rebin07")
'''
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
'''
'''
variables['mllVSmth'] = {   'name': 'mll:mth',
                           'range': ([60,65,70,75,80,90,100,110,125],[10,15,20,25,30,40,50,60,70,80,100],),
                           'xaxis': 'm_{ll} : m_{T}^{H}',
                           'fold': 3
                       }
'''
#FOR SCANS
variables['varH0PH'] = {   'name': 'mll:mth',
                           'range': ([60,70,80,90,100,110,120,160,200,240,280],[0,26,41,56,71,85,100,120,140,160,180,200],),
                           'xaxis': 'm_{ll} : m_{T}^{H}',
                           'fold': 3
                       }

variables['varH0M'] = {   'name': 'mll:mth',
                           'range': ([60,70,80,90,100,110,120,160,200,240,280],[0,26,41,56,71,85,100,120,140,160,180,200],),
                           'xaxis': 'm_{ll} : m_{T}^{H}',
                           'fold': 3
                       }

variables['varH0L1'] = {   'name': 'mll:mth',
                           'range': ([60,70,80,90,100,110,120,160,200,240,280],[0,26,41,56,71,85,100,120,140,160,180,200],),
                           'xaxis': 'm_{ll} : m_{T}^{H}',
                           'fold': 3
                       }

#JUST FOR PLOTTING
'''
variables['varH0PH'] = { 'name' : 'mll',
                     'range': (20,0,200),
                     'xaxis': 'm_{ll}',
                     'fold' : 3
                }
variables['varH0M'] = { 'name' : 'mll',
                     'range': (20,0,200),
                     'xaxis': 'm_{ll}',
                     'fold' : 3
                }
variables['varH0L1'] = { 'name' : 'mll',
                     'range': (20,0,200),
                     'xaxis': 'm_{ll}',
                     'fold' : 3
                }


variables['varH0PH'] = { 'name' : 'mth',
                     'range': (20,0,200),
                     'xaxis': 'm_{T}^{H}',
                     'fold' : 3
                }
variables['varH0M'] = { 'name' : 'mth',
                     'range': (20,0,200),
                     'xaxis': 'm_{T}^{H}',
                     'fold' : 3
                }
variables['varH0L1'] = { 'name' : 'mth',
                     'range': (20,0,200),
                     'xaxis': 'm_{T}^{H}',
                     'fold' : 3
                }

'''
'''
variables['mllVSmth_pt2ge20'] = {   'name': 'mll:mth',            #   variable name    
                             'range' : ([60,80,90,100,110,120,130,150,200],[12,25,35,40,45,50,55,70,90,210],),            #   variable range
                             'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                             'fold' : 3 ,
                             # do weighted plot too
                             'doWeight' : 1,
                             'binX'     : 8,
                             'binY'     : 9
                             #
                             }

variables['mllVSmth_pt2lt20'] = {   'name': 'mll:mth',            #   variable name    
                             'range' : ([60,80,90,110,130,150,200],[12,25,40,50,70,90,210],),            #   variable range
                             'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                             'fold' : 3 ,
                             # do weighted plot too
                             'doWeight' : 1,
                             'binX'     : 6,
                             'binY'     : 6
                             #
                             }
'''
