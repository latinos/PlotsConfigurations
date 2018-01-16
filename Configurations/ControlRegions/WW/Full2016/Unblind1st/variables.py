# variables

#variables = {}

'''   
variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }
    
variables['nvtx']  = {   'name': 'nvtx',      
                        'range' : (40,0,40),  
                        'xaxis' : 'nvtx', 
                         'fold' : 3
                      }
'''                        
variables['mll']  = {   'name': 'mll',            #   variable name    
                        'range' : (20, 80,300),    #   variable range
                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                         'fold' : 0
                        }

variables['mjj']  = {  'name': 'mjj',
                       'range': (40,0,1000),  #for 500 < mjj < 1000
                       #'range': (20,0,200),  #for 500 < mjj < 1000
                     # 'range': (15,1000,2000),  #for  mjj > 1000
                       'xaxis': 'mjj [GeV]',
                       'fold': 0
                       }

'''
variables['mllpeak'] = {   'name': 'mll',            #   variable name
                           'range' : (100,80,100),    #   variable range
                           'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                           'fold' : 0
                        }
'''
variables['mth']  = {   'name': 'mth',            #   variable name    
                        'range' : (20,60,200),    #   variable range
                        'xaxis' : 'm_{T}^{H} [GeV]',  #   x axis name
                         'fold' : 0
                        }
'''
variables['dphill']  = {   'name': 'abs(dphill)',     
                        'range' : (20,0,3.14),   
                        'xaxis' : '#Delta#phi_{ll}',
                        'fold' : 3
                        }
'''
variables['ptll']  = {   'name': 'ptll',     
                        'range' : (20, 30,150),   
                        'xaxis' : 'p_{T}^{ll} [GeV]',
                        'fold' : 0
                        }

variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',     
                        'range' : (25,25,200),   
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 0                         
                        }

variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',     
                        'range' : (13,10,100),   
                        'xaxis' : 'p_{T} 2nd lep',
                        'fold'  : 0                         
                        }

#variables['pt3']  = {   'name': 'std_vector_lepton_pt[2]',     
                        #'range' : (10,0,50),   
                        #'xaxis' : 'p_{T} 3rd lep',
                        #'fold'  : 3                         
                        #}

variables['eta1']  = {  'name': 'std_vector_lepton_eta[0]',     
                        'range' : (20,-2.5,2.5),   
                        'xaxis' : '#eta 1st lep',
                        'fold'  : 0                         
                        }

variables['eta2']  = {  'name': 'std_vector_lepton_eta[1]',     
                        'range' : (20,-2.5,2.5),   
                        'xaxis' : '#eta 2nd lep',
                        'fold'  : 0                         
                        }
'''
variables['eta1large']  = {  'name': 'std_vector_lepton_eta[0]',
                       'range' : ([-2.4, -2.1, -1.6, -1.2, -0.8, -0.3, -0.2, 0.2, 0.3, 0.8, 1.2, 1.6, 2.1, 2.4,],),
                       'xaxis' : '#eta 1st lep',
                       'fold'  : 3
                       }

variables['eta2large']  = {  'name': 'std_vector_lepton_eta[1]',
                       'range' : ([-2.4, -2.1, -1.6, -1.2, -0.8, -0.3, -0.2, 0.2, 0.3, 0.8, 1.2, 1.6, 2.1, 2.4,],),
                       'xaxis' : '#eta 2nd lep',
                       'fold'  : 3
                       }

variables['phi1']  = {  'name': 'std_vector_lepton_phi[0]',
                        'range' : (40,-3.2,3.2),
                        'xaxis' : '#phi 1st lep',
                        'fold'  : 3
                        }

variables['phi2']  = {  'name': 'std_vector_lepton_phi[1]',
                        'range' : (40,-3.2,3.2),
                        'xaxis' : '#phi 2nd lep',
                        'fold'  : 3
                        }


##variables['taupt1']  = {'name': 'std_vector_tau_pt[0]',     
#                        #'range' : (100,0,200),   
#                        #'xaxis' : 'p_{T} 1st tau',
#                        #'fold'  : 3                         
#                        #}
#
#
#
#
variables['cmva_1']  = { 
                        'name': 'std_vector_jet_cmvav2[0]',     
                        'range' : (40,-1,1),   
                        'xaxis' : 'cmva jet 1st',
                        'fold'  : 3                         
                        }



variables['cmva_2']  = { 
                        'name': 'std_vector_jet_cmvav2[1]',     
                        'range' : (40,-1,1),   
                        'xaxis' : 'cmva  jet 2nd',
                        'fold'  : 3                         
                        }
'''
variables['pfmet']  = { 
                        'name': 'metPfType1',     
                        'range' : (20,20,150),   
                        'xaxis' : 'PF MET [GeV]',
                        'fold'  : 0                         
                        }

'''
variables['njet']  = {
                        'name': 'njet',     
                        'range' : (5,0,5),   
                        'xaxis' : 'Number of jets',
                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }


'''

variables['jetpt1']  = {
                        'name': 'std_vector_jet_pt[0]',     
                        'range' : (40,0,200),   
                        'xaxis' : 'p_{T} 1st jet',
                        'fold' : 0   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }

variables['jetpt2']  = {
                        'name': 'std_vector_jet_pt[1]',     
                        'range' : (40,0,200),   
                        'xaxis' : 'p_{T} 2nd jet',
                        'fold' : 0   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }
'''
variables['jeteta1']  = {  'name': 'std_vector_jet_eta[0]',
                        'range' : (80,-5.0,5.0),
                        'xaxis' : '#eta 1st jet',
                        'fold'  : 0
                        }

variables['jeteta2']  = {  'name': 'std_vector_jet_eta[1]',
                        'range' : (80,-5.0,5.0),
                        'xaxis' : '#eta 2nd jet',
                        'fold'  : 0
                        }

variables['jetphi1']  = {  'name': 'std_vector_jet_phi[0]',
                        'range' : (40,-3.2,3.2),
                        'xaxis' : '#phi 1st jet',
                        'fold'  : 0
                        }

variables['jetphi2']  = {  'name': 'std_vector_jet_phi[1]',
                        'range' : (40,-3.2,3.2),
                        'xaxis' : '#phi 2nd jet',
                        'fold'  : 0
                        }


variables['mtw1']  = {  'name': 'mtw1',
                        'range' : (40,0,200),
                        'xaxis' : 'm_{T}^{W_{1}} [GeV]',
                         'fold' : 3
                        }

variables['mtw2']  = {  'name': 'mtw2',
                        'range' : (40,0,200),
                        'xaxis' : 'm_{T}^{W_{2}} [GeV]',
                         'fold' : 3
                        }

variables['trkMet']  = {   'name': 'metTtrk',
                        'range' : (40,0,200),
                        'xaxis' : 'trk met [GeV]',
                         'fold' : 3
                        }

variables['mpmet']  = { 'name': 'mpmet',
                        'range' : (40,0,200),
                        'xaxis' : 'min proj met [GeV]',
                        'fold' : 3
                        }

variables['dymvaggh']  = { 'name': 'dymvaggh',
                        'range' : (40,-1,1),
                        'xaxis' : 'DY MVA',
                        'fold' : 3
                        }

variables['dymvavbf']  = { 'name': 'dymvavbf',
                        'range' : (40,-1,1),
                        'xaxis' : 'DY MVA',
                        'fold' : 3
                        }
'''


                        

