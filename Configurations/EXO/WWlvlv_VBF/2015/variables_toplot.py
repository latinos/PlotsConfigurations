# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
variables['events']  = {   'name': '1',
                        'range' : (1,0,2),
                        'xaxis' : 'events',
                         'fold' : 3
                        }

variables['mll']  = {   'name': 'mll',            #   variable name    
                        'range' : (40,0,800),    #   variable range
                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                         'fold' : 3
                        }

variables['ht']  = {   'name': 'ht',            #   variable name    
                        'range' : (20,0,2000),    #   variable range
                        'xaxis' : 'ht [GeV]',  #   x axis name
                        'fold' : 3
                        }

variables['dphill']  = {   'name': 'abs(dphill)',
                        'range' : (10,0,3.14),
                        'xaxis' : '#Delta#phi_{ll}',
                        'fold' : 3
                        }

variables['ptll']  = {   'name': 'ptll',
                        'range' : (20,40,600),
                        'xaxis' : 'p_{T}^{ll} [GeV]',
                        'fold' : 3
                        }

variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',
                        'range' : (30,0,400),
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 3
                        }

variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',
                        'range' : (30,0,400),
                        'xaxis' : 'p_{T} 2nd lep',
                        'fold'  : 3
                        }

variables['pfmet']  = {
                        'name': 'metPfType1',
                        'range' : (20,0,400),
                        'xaxis' : 'pfmet [GeV]',
                        'fold'  : 3
                        }
variables['njet']  = {
                        'name': 'njet',
                        'range' : (5,0,5),
                        'xaxis' : 'Number of jets',
                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }

variables['mjj']  = {
                        'name': 'mjj',
                        'range' : (40,0,1500),
                        'xaxis' : 'M_{jj} [GeV]',
                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }

variables['detajj']  = {
                        'name': 'detajj',
                        'range' : (20,0,10),
                        'xaxis' : '#Delta(#eta_{jj})',
                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }


