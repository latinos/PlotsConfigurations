# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
 
variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }

variables['mll_optim']  = { 'name': 'mll',            #   variable name
                            'range' : ([12,30,50,70,90,110,150,200],),    #   variable range
                            'xaxis' : 'mll [GeV]',  #   x axis name
                            'fold' : 3
                          }

