# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
# Tuning for shape analysis

variables['mll']  = {   'name': 'mll',            
                        'range' : (8,0,700),     
                        'xaxis' : 'm_{\ell\ell} [GeV]',
                        'fold' : 0
                    }
