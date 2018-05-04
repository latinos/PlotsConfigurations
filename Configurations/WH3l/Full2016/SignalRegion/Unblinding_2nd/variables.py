# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow


variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }

variables['drllmin3l']  = {   'name': 'drllmin3l',            #   variable name    
#                         'range' : ([0.,0.75, 1.5, 2.0, 2.5, 4.0],),    #   variable range
#                        'range' : (5,0,5),    #   variable range
                         'range' : ([0.,0.75,1.0,1.25,1.5,1.75,2.5,4.0],),    #   variable range
                         'xaxis' : 'min #Delta R_{ll}',  #   x axis name
                         'fold' : 0
                        }

variables['drllmin3l_sssf']  = {   'name': 'drllmin3l',            #   variable name    
         #               'range' : (3,0,4),    #   variable range
                         'range' : ([0.,1.0,1.25,1.5,1.75,2.0,2.5,4.0],),    #   variable range
                        'xaxis' : 'min #Delta R_{ll}',  #   x axis name
                         'fold' : 0
                        }
