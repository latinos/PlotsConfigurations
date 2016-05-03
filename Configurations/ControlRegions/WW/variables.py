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
                         'fold' : 0
                        }
                        
variables['mll']  = {   'name': 'mll',            #   variable name    
                        #'range' : (20,50,200),    #   variable range
                        'range' : (20,80,300),    #   variable range
                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                         'fold' : 0
                        }
                        
variables['mth']  = {   'name': 'mth',            #   variable name    
                        'range' : (20,60,200),    #   variable range
                        'xaxis' : 'm_{T}^{H} [GeV]',  #   x axis name
                        'fold' : 0
                        }

variables['met']  = {   'name': 'metPfType1',            #   variable name    
                        'range' : (20,20,150),    #   variable range
                        'xaxis' : 'pfmet [GeV]',  #   x axis name
                         'fold' : 0
                        }




# more and more


#variables['cmvajet1']  = {   'name': 'std_vector_jet_cmvav2[0]',     
                        #'range' : (100,-1,1),   
                        #'xaxis' : 'cmva jet 1',
                        #'fold'  : 3                         
                        #}





variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',     
                        'range' : (25,20,200),   
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 0                         
                        }

variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',     
                        'range' : (25,10,100),   
                        'xaxis' : 'p_{T} 2nd lep',
                        'fold'  : 0                         
                        }

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

variables['ptll']  = {   'name': 'ptll',     
                        'range' : (30,30,150),   
                        'xaxis' : 'p_{T}^{ll} [GeV]',
                         'fold' : 0
                        }

#variables['dphill']  = {   'name': 'abs(dphill)',     
                        #'range' : (20,0,3.14),   
                        #'xaxis' : '#Delta#phi_{ll}',
                         #'fold' : 3
                        #}
                        
                        