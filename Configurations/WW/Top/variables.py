
# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }
    
variables['mll']  = {   'name': 'mll',            #   variable name    
                        'range' : (20,10,200),    #   variable range
                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                        'fold' : 3
                        }
                        
variables['mth']  = {   'name': 'mth',            #   variable name    
                        'range' : (20,0,400),    #   variable range
                        'xaxis' : 'm_{T}^{H} [GeV]',  #   x axis name
                        'fold' : 3
                        }


variables['ptll']  = {   'name': 'ptll',            #   variable name    
                         'range' : (20,0,200),    #   variable range
                         'xaxis' : 'pt_{ll} [GeV]',  #   x axis name
                         'fold' : 3
                         }

variables['pt1']  = {   'name': 'pt1',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'pt_{lep1} [GeV]',  #   x axis name
                        'fold' : 3
                        }

variables['pt2']  = {   'name': 'pt2',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'pt_{lep2} [GeV]',  #   x axis name
                        'fold' : 3
                        }

variables['met']  = {   'name': 'metPfType1',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'pfmet [GeV]',  #   x axis name
                        'fold' : 0
                        }


variables['dphill'] = {   'name': 'dphill',            #   variable name    
                          'range' : (20,0,3.2),    #   variable range
                          'xaxis' : '#Delta #Phi_{ll} [rad]',  #   x axis name
                          'fold' : 0
                          }

variables['nvtx']  = {   'name': 'nvtx',      
                         'range' : (40,0,40),  
                         'xaxis' : 'nvtx', 
                         'fold' : 3
                         }
                        
