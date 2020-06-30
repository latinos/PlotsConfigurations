# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   

variables['mllVSmth'] = {   'name': 'mll:mth',            #   variable name    
                        'range' : (10,0,200, 5,10,110),            #   variable range
                        'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                        'fold' : 3
                        }

