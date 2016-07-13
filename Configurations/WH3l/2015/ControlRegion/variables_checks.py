# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }

variables['met']  = {   'name': 'metPfType1',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'pfmet [GeV]',  #   x axis name
                        'fold' : 0
                        }

variables['drllmin3l']  = {   'name': 'drllmin3l',            #   variable name    
                        'range' : (3,0,4),    #   variable range
                        'xaxis' : 'min #Delta Rm_{ll} [GeV]',  #   x axis name
                         'fold' : 0
                        }
