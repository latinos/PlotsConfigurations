# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
variables['events']  = {   'name': '1',
                        'range' : (1,0,2),
                        'xaxis' : 'events',
                         'fold' : 3
                        }

variables['mTi']  = {   'name': 'mTi',            #   variable name    
                        'range' : ([100,150,200,250,300,350,400,450,500,600,700,1000],),    #   variable range
                        'xaxis' : 'm_{T,i} [GeV]',  #   x axis name
                        'fold' : 3
                        }

variables['mTi_VBF']  = {   'name': 'mTi',            #   variable name    
                        'range' : ([100,150,200,250,300,350,400,500,700,1000, 2000],),    #   variable range
                        'xaxis' : 'm_{T,i} [GeV]',  #   x axis name
                        'fold' : 3
                        }

'''

variables['HT']    = {  'name': 'std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0)+std_vector_LHEparton_pt[3]*(std_vector_LHEparton_pt[3]>0)',            #   variable name    
                        'range' : (300,0,3000),    #   variable range
                        'xaxis' : 'GEN HT [GeV]',  #   x axis name
                        'fold' :3
                     }   

'''
'''
variables['ptll']  = {   'name': 'ptll',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'pT_{ll} [GeV]',  #   x axis name
                        'fold' :3
                        }
variables['mll']  = {   'name': 'mll',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                        'fold' :3
                        }

variables['mjj']  = {   'name': 'mjj',            #   variable name    
                        'range' : (40,0,400),    #   variable range
                        'xaxis' : 'm_{jj} [GeV]',  #   x axis name
                        'fold' :3
                        }

variables['std_vector_lepton_pt[0]']  = {   'name': 'std_vector_lepton_pt[0]',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'pT_{1l} [GeV]',  #   x axis name
                        'fold' :3
                        }

variables['std_vector_lepton_pt[1]']  = {   'name': 'std_vector_lepton_pt[1]',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'pT_{2l} [GeV]',  #   x axis name
                        'fold' :3
                        }
'''                        
variables['metPfType1']  = {   'name': 'metPfType1',            #   variable name    
                        'range' : (25,0,250),    #   variable range
                        'xaxis' : 'MET [GeV]',  #   x axis name
                        'fold' :3
                        }
'''                        
variables['njet']  = {   'name': 'njet',            #   variable name    
                        'range' : (10,0,10),    #   variable range
                        'xaxis' : 'njet',  #   x axis name
                        'fold' :3
                        }
'''                        
