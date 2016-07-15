# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow

variables['events']  = {   'name': '1',
                        'range' : (1,0,2),
                        'xaxis' : 'events',
                         'fold' : 3
                        }

variables['mTi']  = {   'name': 'mTi',            #   variable name    
                        'range' : ([100,125,150,200,250,300,500],),    #   variable range
                        'xaxis' : 'm_{T,i}^{H} [GeV]',  #   x axis name
                        'fold' : 3
                        }

variables['mTi_VBF']  = {   'name': 'mTi',            #   variable name    
                        'range' : ([100,150,200,250,300,350,400,500,1000],),    #   variable range
                        'xaxis' : 'm_{T,i}^{H} [GeV]',  #   x axis name
                        'fold' : 3
                        }

variables['mll_0j']  = {   'name': 'mll',            #   variable name    
                        'range' : (4,50,80),    #   variable range
                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                         'fold' : 0
                        }

variables['mll_1j']  = {   'name': 'mll',            #   variable name    
                        'range' : (6,50,80),    #   variable range
                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                         'fold' : 0
                        }

variables['mll_2j']  = {   'name': 'mll',            #   variable name    
                        'range' : (6,50,80),    #   variable range
                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                         'fold' : 0
                        }


variables['ptll']  = {   'name': 'ptll',
                        'range' : (10,30,100),
                        'xaxis' : 'p_{T}^{ll} [GeV]',
                        'fold' : 3
                        }

variables['pt1_0j']  = {   'name': 'std_vector_lepton_pt[0]',
                        'range' : (7,20,100),
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 3
                        }

variables['pt1_1j']  = {   'name': 'std_vector_lepton_pt[0]',
                        'range' : (12,20,100),
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 3
                        }


variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',
                        'range' : (15,0,200),
                        'xaxis' : 'p_{T} 2nd lep',
                        'fold'  : 3
                        }
 
