# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }
variables['njet'] = {   'name'  : 'njet',
  			'range' : (10,0,10),
  			'xaxis' : 'N_{jet}',
  			'fold' : 0
}



variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',            #   variable name    
                        'range' : (10,0.,200),    #   variable range
                        'xaxis' : 'lept1_p_{T} [GeV]',  #   x axis name
                         'fold' : 0
                        }
    
variables['dphilmetj'] = {     'name' : 'dphilmetj',
                                'range' : (16,0,3.14159),
                                'xaxis' : 'dphilmetj',
                                'fold' : 0
                            }

variables['dphilmetjj'] = {     'name' : 'dphilmetjj',
                                'range' : (16,0,3.14159),
                                'xaxis' : 'dphilmetjj',
                                'fold' : 0
                            }

variables['pTlmetj'] = {     'name' : 'pTlmetj',
                                'range' : (20,0,400),
                                'xaxis' : 'pTlmetj',
                                'fold' : 0
                            }

variables['pTlmetjj'] = {     'name' : 'pTlmetjj',
                                'range' : (20,0,400),
                                'xaxis' : 'pTlmetjj',
                                'fold' : 0
                            }

variables['mTlmetjj'] = {   'name' : 'mTlmetjj',
                            'range' : (25,0,500),
                            'xaxis' : 'mTlmetjj',
                            'fold' : 0
                        }

variables['ptz'] = {    'name' : 'ptz',
                        'range' : (20,0,400),
                        'xaxis' : 'ptz',
                        'fold' : 0
                    }

variables['mtw_notZ'] = {   'name' : 'mtw_notZ',
                            'range' : (20,0,200),
                            'xaxis' : 'mtw_notZ',
                            'fold' : 0
                        }

variables['pdgid_notZ'] = { 'name' : 'pdgid_notZ',
                            'range' : (32,-16,16),
                            'xaxis' : 'pdgid_notZ',
                            'fold' : 0
                        }

variables['mtw_fit'] = {   'name' : 'mtw_notZ',
                            'range' : (8,0,160),
                            'xaxis' : 'mtw_notZ',
                            'fold' : 2
                        }

variables['checkmZ'] = {    'name' : 'checkmZ',
                            'range' : (20,0,200),
                            'xaxis' : 'checkmZ',
                            'fold' : 0
                        }


