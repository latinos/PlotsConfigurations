# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow

variables['events']  = {   'name': '1',
                        'range' : (1,0,2),
                        'xaxis' : 'events',
                         'fold' : 3
                        }

variables['mTi_0j']  = {   'name': 'mTi',            #   variable name    
                        'range' : ([100,150,200,250,300,350,400,450,500,600,700,1000],),    #   variable range
                        'xaxis' : 'm_{T,i} [GeV]',  #   x axis name
                        'fold' : 3
                        }

variables['mTi_1j']  = {   'name': 'mTi',            #   variable name    
                        'range' : ([100,150,200,250,300,350,400,450,500,700,1000],),    #   variable range
                        'xaxis' : 'm_{T,i} [GeV]',  #   x axis name
                        'fold' : 3
}                        

variables['mTi_VBF']  = {   'name': 'mTi',            #   variable name    
                        'range' : ([100,150,200,250,300,350,400,500,1000],),    #   variable range
                        'xaxis' : 'm_{T,i} [GeV]',  #   x axis name
                        'fold' : 3
                        }
variables['mll']  = {   'name': 'mll',            #   variable name    
                        'range' : (15,50,200),    #   variable range
                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                         'fold' : 0
                        }

variables['ptll']  = {   'name': 'ptll',
                        'range' : (20,0,300),
                        'xaxis' : 'p_{T}^{ll} [GeV]',
                        'fold' : 3
                        }

variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',
                        'range' : (20,0,300),
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 3
                        }

variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',
                        'range' : (15,0,200),
                        'xaxis' : 'p_{T} 2nd lep',
                        'fold'  : 3
                        }
 
