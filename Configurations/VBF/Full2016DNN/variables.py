# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
 
variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }

variables['mll']  = { 'name': 'mll',            #   variable name
                            'range' : ([12,30,50,70,120,200],),    #   variable range
                            'xaxis' : 'mll [GeV]',  #   x axis name
                            'fold' : 3,
                            'doWeight' : 1,
                            'binX'     : 1,
                            'binY'     : 5
                          }

variables['DNNvar']  = { 'name': 'DNNvar',            #   variable name
                            'range' : (10,0,1),    #   variable range
                            'xaxis' : 'DNNvar',  #   x axis name
                            'fold' : 3,
                          }

variables['DNNvar_optim']  = { 'name': 'DNNvar_optim',   
				'range' : ([0,0.00045,0.00055,0.00145,0.00155,0.00425,0.01695,0.13695,0.49815,1],),
                                'xaxis' : 'DNNvar',  #   x axis name
                                'fold' : 3,
                              }


