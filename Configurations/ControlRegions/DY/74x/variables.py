# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 0
                        }
    
variables['nvtx']  = {   'name': 'nvtx',      
                        'range' : (40,0,40),  
                        'xaxis' : 'nvtx', 
                         'fold' : 3
                        }

variables['mll']  = {   'name': 'mll',            #   variable name    
                        'range' : (10,0,100),    #   variable range
                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                         'fold' : 0
                        }

variables['mth']  = {   'name': 'mth',            #   variable name    
                        'range' : (10,0,100),    #   variable range
                        'xaxis' : 'm_{T}^{H} [GeV]',  #   x axis name
                         'fold' : 0
                        }

variables['dphill']  = {   'name': 'abs(dphill)',     
                        'range' : (10,0,3.14),   
                        'xaxis' : '#Delta#phi_{ll}',
                        'fold' : 3
                        }

variables['ptll']  = {   'name': 'ptll',     
                        'range' : (10,0,100),   
                        'xaxis' : 'p_{T}^{ll} [GeV]',
                        'fold' : 3
                        }

variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',     
                        'range' : (10,0,100),   
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 3                         
                        }

variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',     
                        'range' : (10,0,100),   
                        'xaxis' : 'p_{T} 2nd lep',
                        'fold'  : 3                         
                        }

#variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',     
                        #'range' : (100,0,200),   
                        #'xaxis' : 'p_{T} 1st lep',
                        #'fold'  : 3                         
                        #}

#variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',     
#                        'range' : (50,0,200),   
#                        'xaxis' : 'p_{T} 2nd lep',
#                        'fold'  : 3                         
#                        }

#variables['eta1']  = {  'name': 'std_vector_lepton_eta[0]',     
#                        'range' : (100,-3.2,3.2),   
#                        'xaxis' : '#eta 1st lep',
#                        'fold'  : 3                         
#                        }

#variables['eta2']  = {  'name': 'std_vector_lepton_eta[1]',     
#                        'range' : (100,-3.2,3.2),   
#                        'xaxis' : '#eta 2nd lep',
#                        'fold'  : 3                         
#                        }
                       
#variables['phi1']  = {  'name': 'std_vector_lepton_phi[0]',
                        #'range' : (100,-3.2,3.2),
                        #'xaxis' : '#phi 1st lep',
                        #'fold'  : 3
                        #}

#variables['phi2']  = {  'name': 'std_vector_lepton_phi[1]',
                        #'range' : (100,-3.2,3.2),
                        #'xaxis' : '#phi 2nd lep',
                        #'fold'  : 3
                        #}

#variables['dphill']  = {   'name': 'abs(dphill)',     
                        #'range' : (20,0,3.14),   
                        #'xaxis' : '#Delta#phi_{ll}',
                         #'fold' : 3
                        #}

variables['met']  = {   'name': 'pfType1Met',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'pfmet [GeV]',  #   x axis name
                         'fold' : 3
                        }

#variables['trkMet']  = {   'name': 'trkMet',            #   variable name    
                        #'range' : (20,0,200),    #   variable range
                        #'xaxis' : 'trk met [GeV]',  #   x axis name
                         #'fold' : 0
                        #}

#variables['pupMet']  = {   'name': 'pupMet',            #   variable name    
                        #'range' : (20,0,200),    #   variable range
                        #'xaxis' : 'puppi met [GeV]',  #   x axis name
                         #'fold' : 0
                        #}

##variables['mpmet']  = {   'name': 'mpmet',            #   variable name    
                        ##'range' : (20,0,200),    #   variable range
                        ##'xaxis' : 'min proj met [GeV]',  #   x axis name
                         ##'fold' : 0
                        ##}

  
variables['njet']  = {  'name': 'njet',      
                        'range' : (5,0,5),  
                        'xaxis' : 'njet', 
                        'fold' : 3
                        }

variables['jetpt1']  = {
                        'name': 'std_vector_jet_pt[0]',     
                        'range' : (20,0,200),   
                        'xaxis' : 'p_{T} 1st jet',
                        'fold' : 3   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }

variables['jetpt2']  = {
                        'name': 'std_vector_jet_pt[1]',     
                        'range' : (20,0,200),   
                        'xaxis' : 'p_{T} 2nd jet',
                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }

#variables['jeteta1']  = {
                        #'name': 'std_vector_jet_eta[0]',
                        #'range' : (100,-5.2,5.2),
                        #'xaxis' : '#eta 1st jet',
                        #'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        #}

#variables['jeteta2']  = {
                        #'name': 'std_vector_jet_eta[1]',
                        #'range' : (100,-5.2,5.2),
                        #'xaxis' : '#eta 2nd jet',
                        #'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        #}

#variables['jetphi1']  = {
                        #'name': 'std_vector_jet_phi[0]',
                        #'range' : (100,-3.2,3.2),
                        #'xaxis' : '#phi 1st jet',
                        #'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        #}


variables['jetphi2']  = {
                        'name': 'std_vector_jet_phi[1]',
                        'range' : (100,-3.2,3.2),
                        'xaxis' : '#phi 2nd jet',
                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }

variables['csvv2ivf_1']  = { 
                        'name': 'std_vector_jet_csvv2ivf[0]',     
                        'range' : (100,0,1),   
                        'xaxis' : 'csvv2ivf 1st jet',
                        'fold'  : 3                         
                        }

variables['csvv2ivf_2']  = {
                        'name': 'std_vector_jet_csvv2ivf[1]',
                        'range' : (100,0,1),
                        'xaxis' : 'csvv2ivf 2nd jet',
                        'fold'  : 3
                        }
