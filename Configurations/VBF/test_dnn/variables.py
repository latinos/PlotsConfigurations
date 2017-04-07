#variables = {}

#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow

variables['events']  = {   'name': '1',
                        'range' : (1,0,2),
                        'xaxis' : 'events',
                         'fold' : 3
                        }

variables['mll']  = {   'name': 'mll',            #   variable name
                        'range' : (4, 0,200),    #   variable range
                        'xaxis' : 'mll [GeV]',  #   x axis name
                        'fold' : 3 
                        }
   
variables['mjj']  = {  'name': 'mjj',
#                       'range': (15,400,1500),
                       'range': (15,0,1500),  #for 500 < mjj < 1000
                       'xaxis': 'mjj [GeV]',
                       'fold': 3
                       }

variables['detajj']  = {  'name': 'detajj',
#                          'range': (11,3.5,8.5),
                          'range': (17,0,8.5),
                          'xaxis': 'detajj',
                          'fold': 3
                       }
