# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 0
                        }
    
variables['nvtx']  = {   'name': 'nvtx',      
                        'range' : (40,0,40),  
                        'xaxis' : 'nvtx', 
                         'fold' : 0
                        }
                        
variables['mll']  = {   'name': 'mll',            #   variable name    
                        'range' : (20,50,200),    #   variable range
                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                         'fold' : 0
                        }
                        
variables['mth']  = {   'name': 'mth',            #   variable name    
                        'range' : (20,50,200),    #   variable range
                        'xaxis' : 'm_{T}^{H} [GeV]',  #   x axis name
                        'fold' : 0
                        }

variables['met']  = {   'name': 'pfType1Met',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'pfmet [GeV]',  #   x axis name
                         'fold' : 0
                        }

variables['trkMet']  = {   'name': 'trkMet',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'trk met [GeV]',  #   x axis name
                         'fold' : 0
                        }

variables['pupMet']  = {   'name': 'pupMet',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'puppi met [GeV]',  #   x axis name
                         'fold' : 0
                        }

variables['mpmet']  = {   'name': 'mpmet',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'min proj met [GeV]',  #   x axis name
                         'fold' : 0
                        }


