# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
variables['events']  = {   'name': '1',
                        'range' : (1,0,2),
                        'xaxis' : 'events',
                         'fold' : 3
                        }

 
## just for fun plots:
                  
variables['mll']  = {   'name': 'mll',
                       'range' : (20,10,200),
                       'xaxis' : 'm_{ll} [GeV]',
                        'fold' : 0
                       }
                       
variables['drll']  = {  'name': 'drll',        #   variable name    
                       'range' : (100,0,2),    #   variable range
                       'xaxis' : 'DR_{ll}',    #   x axis name
                       'fold' : 3
                       }

variables['pt1']  = {   'name': 'Lepton_pt[0]',
                        'range' : (20,0,200),
                        'xaxis' : 'pt_{1} [GeV]',
                        'fold' : 0
                    }


variables['pt2']  = {   'name': 'Lepton_pt[1]',
                        'range' : (20,0,200),
                        'xaxis' : 'pt_{2} [GeV]',
                        'fold' : 0
                    }


variables['jet_pt1']  = {   'name': 'CleanJet_pt[0]*CleanJet_pt[0]>30',
                            'range' : (20,0,200),
                            'xaxis' : 'jet pt_{1} [GeV]',
                            'fold' : 0
                    }

variables['jet_pt1_0j']  = {   'name': 'CleanJet_pt[0]*CleanJet_pt[0]<30',
                            'range' : (20,0,200),
                            'xaxis' : 'jet pt_{1} [GeV]',
                            'fold' : 0
                    }

# variables['nvtx']  = {   'name': 'nvtx',      
#                        'range' : (40,0,40),  
#                        'xaxis' : 'nvtx', 
#                        'fold' : 3
#                        }

# variables['mth']  = {   'name': 'mth',
#                        'range' : (10,60,200),
#                        'xaxis' : 'm_{T}^{H} [GeV]',
#                        'fold' : 0
#                        }

# variables['ptll']  = {   'name': 'ptll',
#                        'range' : (20,0,200),
#                        'xaxis' : 'pt_{ll} [GeV]',
#                        'fold' : 0
#                        }

# variables['pt1']  = {   'name': 'Lepton_pt[0]',
#                         'range' : (20,0,200),
#                         'xaxis' : 'pt_{1} [GeV]',
#                         'fold' : 0
#                     }

