# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }

#variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',            #   variable name    
#                        'range' : (20,0.,200),    #   variable range
#                        'xaxis' : 'lept1_p_{T} [GeV]',  #   x axis name
#                         'fold' : 0
#                        }
#    
#variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',            #   variable name    
#                        'range' : (20,0.,200),    #   variable range
#                        'xaxis' : 'lept2_p_{T} [GeV]',  #   x axis name
#                         'fold' : 0
#                        }
#
#variables['pt3']  = {   'name': 'std_vector_lepton_pt[2]',            #   variable name    
#                        'range' : (20,0.,200),    #   variable range
#                        'xaxis' : 'lept3_p_{T} [GeV]',  #   x axis name
#                         'fold' : 0
#                        }
#
#variables['pt4']  = {   'name': 'std_vector_lepton_pt[3]',            #   variable name    
#                        'range' : (20,0.,200),    #   variable range
#                        'xaxis' : 'lept3_p_{T} [GeV]',  #   x axis name
#                         'fold' : 0
#                        }
#
#
#variables['nvtx']  = {   'name': 'nvtx',      
#                        'range' : (40,0,40),  
#                        'xaxis' : 'nvtx', 
#                         'fold' : 3
#                        }
#                        
#variables['met']  = {   'name': 'metPfType1',            #   variable name    
#                        'range' : (10,0,200),    #   variable range
#                        'xaxis' : 'pfmet [GeV]',  #   x axis name
#                       'fold' : 0
#                     }
#
#variables['leadjetPT'] = { 'name': 'std_vector_jet_pt[0]',
#                        'range' : (20,0,300),    #   variable range
#                        'xaxis' : 'pfmet [GeV]',  #   x axis name
#                       'fold' : 0
#                     }
