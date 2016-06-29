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

#variables['mll']  = {   'name': 'mll',            #   variable name    
                        #'range' : (300,0,200),    #   variable range
                        #'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                         #'fold' : 0
                        #}

variables['mll']  = {   'name': 'mll',            #   variable name    
                        'range' : (30,50,200),    #   variable range
                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                         'fold' : 0
                        }


variables['mth']  = {   'name': 'mth',            #   variable name    
                        'range' : (30,0,250),    #   variable range
                        'xaxis' : 'm_{T}^{H} [GeV]',  #   x axis name
                         'fold' : 0
                        }

#variables['dphill']  = {   'name': 'abs(dphill)',     
                        #'range' : (10,0,3.14),   
                        #'xaxis' : '#Delta#phi_{ll}',
                        #'fold' : 3
                        #}

variables['ptll']  = {   'name': 'ptll',     
                        'range' : (200,0,100),   
                        'xaxis' : 'p_{T}^{ll} [GeV]',
                        'fold' : 3
                        }

#variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]*(1 - (abs(std_vector_lepton_flavour[0])==11)*0.01*(dataset != 0))',     
                        #'range' : (40,0,100),   
                        #'xaxis' : 'p_{T} 1st lep',
                        #'fold'  : 3                         
                        #}

#variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]*(1 - (abs(std_vector_lepton_flavour[1])==11)*0.01*(dataset != 0))',     
                        #'range' : (40,0,100),   
                        #'xaxis' : 'p_{T} 2nd lep',
                        #'fold'  : 3                         
                        #}

variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',     
                        'range' : (20,0,200),   
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 0                         
                        }

variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',     
                        'range' : (20,0,100),   
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



variables['met']  = {   'name': 'metPfType1',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'pfmet [GeV]',  #   x axis name
                         'fold' : 0
                        }

  
variables['njet']  = {  'name': 'njet',      
                        'range' : (5,0,5),  
                        'xaxis' : 'njet', 
                        'fold' : 3
                        }

