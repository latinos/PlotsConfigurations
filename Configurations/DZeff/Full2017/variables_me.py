# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow

variables['pt1_pt2'] = { 'name' : 'Lepton_pt[1]:Lepton_pt[0]', # variable name
                              'range': ([10,22,25,30,40,100],[10,15,17,18,19,20,22,25,30,40,100],), # variable range 
                              'xaxis': 'p_{T}^{1} : p_{T}^{2}', # x axis name 
                              'fold' : 3 , 
                            }

variables['nvtx']  = {  'name': 'PV_npvsGood',
                        'range' : ([0,20,30,40,50,100],),
                        'xaxis' : 'nvtx',
                         'fold' : 3
                        }

variables['pt1']  = {   'name': 'Lepton_pt[0]',
                        'range' : ([10,22,25,30,40,100],),
                        'xaxis' : 'p_{T}^{1st Lep}',
                         'fold' : 3
                        }

variables['pt2']  = {   'name': 'Lepton_pt[1]',
                        'range' : ([10,15,17,18,19,20,22,25,30,40,100],),
                        'xaxis' : 'p_{T}^{2nd Lep}',
                         'fold' : 3
                        }
