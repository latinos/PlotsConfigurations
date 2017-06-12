# variables

#variables = {}
    
   
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
                        
variables['mllmin3l']  = {   'name': 'mllmin3l',            #   variable name    
                        'range' : (40, 0,200),    #   variable range
                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                         'fold' : 0
                        }

variables['mllpeak'] = {   'name': 'mllmin3l',            #   variable name
                           'range' : (20,80,100),    #   variable range
                           'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                           'fold' : 0
                        }

variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',     
                        'range' : (40,0,100),   
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 3                         
                        }

variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',     
                        'range' : (40,0,100),   
                        'xaxis' : 'p_{T} 2nd lep',
                        'fold'  : 3                         
                        }

variables['pt3']  = {   'name': 'std_vector_lepton_pt[2]',     
                        'range' : (40,0,100),   
                        'xaxis' : 'p_{T} 3rd lep',
                        'fold'  : 3                         
                        }

variables['eta1']  = {  'name': 'std_vector_lepton_eta[0]',     
                        'range' : (40,-3,3),   
                        'xaxis' : '#eta 1st lep',
                        'fold'  : 3                         
                        }

variables['eta2']  = {  'name': 'std_vector_lepton_eta[1]',     
                        'range' : (40,-3,3),   
                        'xaxis' : '#eta 2nd lep',
                        'fold'  : 3                         
                        }

variables['eta3']  = {  'name': 'std_vector_lepton_eta[2]',     
                        'range' : (40,-3,3),   
                        'xaxis' : '#eta 3rd lep',
                        'fold'  : 3                         
                        }

#variables['mT']  = {  'name': 'sqrt(2*std_vector_lepton_pt[2]*metPfType1*(1-cos(fabs(std_vector_lepton_phi[2]-metPfType1Phi))))',
#                        'range' : (40,0,200),
#                        'xaxis' : 'm_{T}^{W} [GeV]',
#                         'fold' : 3
#                        }

variables['pfmet']  = { 
                        'name': 'metPfType1',     
                        'range' : (40,0,200),   
                        'xaxis' : 'pfmet [GeV]',
                        'fold'  : 3                         
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
