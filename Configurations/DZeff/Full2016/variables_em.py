# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow

variables['nvtx']  = {  'name': 'PV_npvsGood',
                        'range' : ([0,20,30,40,50,70,100],),
                        'xaxis' : 'nvtx',
                         'fold' : 3
                        }
