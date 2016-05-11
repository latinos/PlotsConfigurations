# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
variables['events']  = {   'name': '1',
                        'range' : (1,0,2),
                        'xaxis' : 'events',
                         'fold' : 3
                        }

variables['mll']  = {   'name': 'mll',            #   variable name    
                        'range' : (8,0,600),    #   variable range
                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                         'fold' : 3
                        }

variables['mth']  = {   'name': 'mth',            #   variable name    
                        'range' : (8,0,600),    #   variable range
                        'xaxis' : 'm_{T}^{H} [GeV]',  #   x axis name
                        'fold' : 3
                        }

variables['mllVSmti'] = { 'name' : 'mll:mTi',
                          'range' : (6,0,600, 8,0,1000),
                          'xaxis' : 'm_{ll} : m_{T}^{i}', #   x axis name
                          'fold' : 3
                        }

variables['mTi']  = {   'name': 'mTi',            #   variable name    
                        'range' : (10,0,1000),    #   variable range
                        'xaxis' : 'm_{T,i}^{H} [GeV]',  #   x axis name
                        'fold' : 3
                        }

variables['ht']  = {   'name': 'ht',            #   variable name    
                        'range' : (20,0,2000),    #   variable range
                        'xaxis' : 'ht [GeV]',  #   x axis name
                        'fold' : 3
                        }

