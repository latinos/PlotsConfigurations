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
                        

variables['mjj']  = {   'name': 'mjj',            #   variable name    
                        'range' : (200,0,2000),    #   variable range
                        'xaxis' : 'm_{jj} [GeV]',  #   x axis name
                         'fold' : 3
                        }


variables['mjjCoarse']  = {   
                        'name': 'mjj',            #   variable name    
                        'range' : (20,0,2000),    #   variable range
                        'xaxis' : 'm_{jj} [GeV]',  #   x axis name
                         'fold' : 3
                        }


