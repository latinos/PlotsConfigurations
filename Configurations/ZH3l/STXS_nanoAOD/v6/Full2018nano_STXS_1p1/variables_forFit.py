# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
variables['events']     = { 'name': '1',      
                            'range' : (1,0,2),  
                            'xaxis' : 'events', 
                            'fold' : 3
                        }

variables['mtw_fit']    = { 'name' : 'ZH3l_mTlmet',
                            'range' : (8,0,160),
                            'xaxis' : 'mTlmet',
                            'fold' : 2
                        }
