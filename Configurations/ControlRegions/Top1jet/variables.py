# variables

#variables = {}
    
   
#variables['events']  = {   'name': '1',      
                        #'range' : (1,0,2),  
                        #'xaxis' : 'events', 
                         #'fold' : 3
                        #}
    
#variables['nvtx']  = {   'name': 'nvtx',      
                        #'range' : (10,0,30),  
                        #'xaxis' : 'nvtx', 
                         #'fold' : 3
                        #}
                        
variables['mll']  = {   'name': 'mll',            #   variable name    
                        'range' : (15,50,200),    #   variable range
                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                         'fold' : 0
                        }

variables['mth']  = {   'name': 'mth',            #   variable name    
                        'range' : (15,50,200),    #   variable range
                        'xaxis' : 'm_{T}^{H} [GeV]',  #   x axis name
                         'fold' : 0
                        }

#variables['dphill']  = {   'name': 'abs(dphill)',     
#                        'range' : (10,0,3.14),   
#                        'xaxis' : '#Delta#phi_{ll}',
#                        'fold' : 3
#                        }

#variables['ptll']  = {   'name': 'ptll',     
#                        'range' : (10,40,200),   
#                        'xaxis' : 'p_{T}^{ll} [GeV]',
#                        'fold' : 3
#                        }

variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',     
                        'range' : (15,0,200),   
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 3                         
                        }

variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',     
                        'range' : (15,0,200),   
                        'xaxis' : 'p_{T} 2nd lep',
                        'fold'  : 3                         
                        }

#variables['pt3']  = {   'name': 'std_vector_lepton_pt[2]',     
                        #'range' : (10,0,50),   
                        #'xaxis' : 'p_{T} 3rd lep',
                        #'fold'  : 3                         
                        #}

#variables['eta1']  = {  'name': 'std_vector_lepton_eta[0]',     
#                        'range' : (10,-3,3),   
#                        'xaxis' : '#eta 1st lep',
#                        'fold'  : 3                         
#                        }

#variables['eta2']  = {  'name': 'std_vector_lepton_eta[1]',     
#                        'range' : (10,-3,3),   
#                        'xaxis' : '#eta 2nd lep',
#                        'fold'  : 3                         
#                        }

##variables['taupt1']  = {'name': 'std_vector_tau_pt[0]',     
#                        #'range' : (100,0,200),   
#                        #'xaxis' : 'p_{T} 1st tau',
#                        #'fold'  : 3                         
#                        #}
#
#
#
#
#variables['cmva_1']  = { 
                        #'name': 'std_vector_jet_cmvav2[0]',     
                        #'range' : (10,0,1),   
                        #'xaxis' : 'cmva jet 1st',
                        #'fold'  : 3                         
                        #}



#variables['cmva_2']  = { 
                        #'name': 'std_vector_jet_cmvav2[1]',     
                        #'range' : (10,0,1),   
                        #'xaxis' : 'csvv2ivf jet 2nd',
                        #'fold'  : 3                         
                        #}

#variables['cmva_twobins_1']  = {
                        #'name': 'std_vector_jet_cmvav2[0]',
                        #'range' : (2,-1.43,0),
                        #'xaxis' : 'cmvav2 jet 1st',
                        #'fold'  : 3
                        #}



#variables['cmva_twobins_2']  = {
                        #'name': 'std_vector_jet_cmvav2[1]',
                        #'range' : (2,-1.43,0),
                        #'xaxis' : 'cmvav2 jet 2nd',
                        #'fold'  : 3
                        #}                        


variables['pfmet']  = { 
                        'name': 'metPfType1',     
                        'range' : (20,0,200),   
                        'xaxis' : 'pfmet [GeV]',
                        'fold'  : 3                         
                        }


##variables['muId1']  = { 
#                        #'name': 'std_vector_lepton_isTightMuon[0]',     
#                        #'range' : (2,0,2),   
#                        #'xaxis' : 'tight Muon Id 1st lep',
#                        #'fold'  : 0                         
#                        #}
#
#variables['muId2']  = { 
                        #'name': 'std_vector_lepton_isTightMuon[1]',     
                        #'range' : (2,0,2),   
                        #'xaxis' : 'tight Muon Id 2nd lep',
                        #'fold'  : 0                         
                        #}



#variables['njet']  = {
                        #'name': 'njet',     
                        #'range' : (5,0,5),   
                        #'xaxis' : 'Number of jets',
                        #'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        #}




#variables['jetpt1']  = {
                        #'name': 'std_vector_jet_pt[0]',     
                        #'range' : (20,0,200),   
                        ##'range' : (5,0,30),
                        #'xaxis' : 'p_{T} 1st jet',
                        #'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        #}

#variables['jetpt2']  = {
                        #'name': 'std_vector_jet_pt[1]',     
                        #'range' : (20,0,200),   
##                      'range' : (5,0,30),
                        #'xaxis' : 'p_{T} 2nd jet',
                        #'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        #}
