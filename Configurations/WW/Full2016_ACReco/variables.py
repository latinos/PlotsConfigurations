# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
# Tuning for shape analysis

variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }


#variables['mll']  = {   'name': 'mll',            
#                        'range' : (8,0,700),     
#                        'xaxis' : 'm_{\ell\ell} [GeV]',
#                        'fold' : 3
#                        }

variables['mll']  = {   'name': 'mll',
                        'range' : ([0,100,200,300,400,500,550,600,650,700,750,800,850],),
                        'xaxis' : 'm_{\ell\ell} [GeV]',
                        'fold' : 3
                        }
