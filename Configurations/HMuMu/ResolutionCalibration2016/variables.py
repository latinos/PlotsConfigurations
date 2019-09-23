# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
variables['events']  = {   
    'name': '1',
    'range' : (1,0,2),
    'xaxis' : 'events',
    'fold' : 3
}

variables['mll']  = {   
    'name': 'mll',
    'range' : (150,75,105),
    'xaxis' : 'm_{ll} [GeV]',
    'fold' : 0
}
                       
 
