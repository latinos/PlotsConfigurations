# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }

variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',            #   variable name    
                        'range' : (20,0.,200),    #   variable range
                        'xaxis' : 'lept1_p_{T} [GeV]',  #   x axis name
                         'fold' : 0
                        }
    
variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',            #   variable name    
                        'range' : (20,0.,200),    #   variable range
                        'xaxis' : 'lept2_p_{T} [GeV]',  #   x axis name
                         'fold' : 0
                        }

variables['pt3']  = {   'name': 'std_vector_lepton_pt[2]',            #   variable name    
                        'range' : (20,0.,200),    #   variable range
                        'xaxis' : 'lept3_p_{T} [GeV]',  #   x axis name
                         'fold' : 0
                        }

variables['pt4']  = {   'name': 'std_vector_lepton_pt[3]',            #   variable name    
                        'range' : (20,0.,200),    #   variable range
                        'xaxis' : 'lept3_p_{T} [GeV]',  #   x axis name
                         'fold' : 0
                        }


variables['met']  = {   'name': 'metPfType1',            #   variable name    
                        'range' : (10,0,200),    #   variable range
                        'xaxis' : 'pfmet [GeV]',  #   x axis name
                       'fold' : 0
                     }

variables['z0Mass_zh4l'] = { 'name': 'z0Mass_zh4l',  # variable name
                        'range' : (20,60,120),    #   variable range
                        'xaxis' : 'Z0_Mass [GeV]',  #   x axis name
                       'fold' : 0
                     }

variables['z1Mass_zh4l'] = { 'name': 'z1Mass_zh4l',  # variable name
                        'range' : (20,0.,100.),    #   variable range
                        'xaxis' : 'Z1_Mass [GeV]',  #   x axis name
                       'fold' : 0
                     }


variables['mllll_zh4l'] = { 'name': 'mllll_zh4l',  # variable name
                        'range' : (20,0.,300.),    #   variable range
                        'xaxis' : 'm_{4l} [GeV]',  #   x axis name
                       'fold' : 0
                     }

variables['z1Mt_zh4l'] = { 'name': 'z1Mt_zh4l',  # variable name
                        'range' : (20,0.,300.),    #   variable range
                        'xaxis' : 'm_T{z1} [GeV]',  #   x axis name
                       'fold' : 0
                     }

variables['leadjetPT'] = { 'name': 'std_vector_jet_pt[0]',
                        'range' : (20,0,300),    #   variable range
                        'xaxis' : 'Lead Jet pT [GeV]',  #   x axis name
                       'fold' : 0
                     }
