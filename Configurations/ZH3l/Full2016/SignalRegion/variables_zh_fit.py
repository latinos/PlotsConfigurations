# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }

variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',            #   variable name    
                        'range' : (10,0.,200),    #   variable range
                        'xaxis' : 'lept1_p_{T} [GeV]',  #   x axis name
                         'fold' : 0
                        }
    
variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',            #   variable name    
                        'range' : (10,0.,200),    #   variable range
                        'xaxis' : 'lept2_p_{T} [GeV]',  #   x axis name
                         'fold' : 0
                        }

variables['pt3']  = {   'name': 'std_vector_lepton_pt[2]',            #   variable name    
                        'range' : (10,0.,100),    #   variable range
                        'xaxis' : 'lept3_p_{T} [GeV]',  #   x axis name
                         'fold' : 0
                        }


variables['njet'] = {   'name'  : 'njet',
                        'range' : (10,0,10),
                        'xaxis' : 'N_{jet}',
                        'fold' : 0
                        }

variables['lead_jetPT'] = {  'name': 'std_vector_jet_pt[0]',     #  variable name
                              'range' : (10,0,200),    #   variable range
                              'xaxis' : 'Leading Jet PT [GeV]',  #   x axis name
                              'fold' : 0
                        }

variables['metPfType1'] = {   'name' : 'metPfType1',
                              'range' : (40,0,200),
                              'xaxis' : 'pfmet [GeV]',
                              'fold' : 0
                          }

variables['mjj'] = {    'name' : 'mjj',
                        'range' : (40,0,200),
                        'xaxis' : 'm_{jj} [GeV]',
                        'fold' : 0
                   }

variables['dphilmetjj'] = {     'name' : 'dphilmetjj',
                                'range' : (16,0,3.14159),
                                'xaxis' : 'dphilmetjj',
                                'fold' : 0
                            }

variables['mTlmetjj'] = {   'name' : 'mTlmetjj',
                            'range' : (20,0,400),
                            'xaxis' : 'mTlmetjj',
                            'fold' : 0
                        }

variables['ptz'] = {    'name' : 'ptz',
                        'range' : (20,0,400),
                        'xaxis' : 'ptz',
                        'fold' : 0
                    }




