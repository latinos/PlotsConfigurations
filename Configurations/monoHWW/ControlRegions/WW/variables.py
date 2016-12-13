
# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }
    
variables['muccamva1'] = {'name': 'muccamva1',            #   variable name    
                        'range' : (100,-1,1),    #   variable range
                        'xaxis' : 'MVA discriminator',  #   x axis name
                        'fold' : 3
                        }

variables['dphill'] = {   'name': 'dphill',            #   variable name    
                          'range' : (20,0,3.2),    #   variable range
                          'xaxis' : '\Delta\Phi_{\ell\ell} [rad]',  #   x axis name
                          'fold' : 0
                          }

variables['dphilmet1'] = {   'name': 'dphilmet1',            #   variable name    
                          'range' : (20,0,3.2),    #   variable range
                          'xaxis' : '\Delta\Phi_{\ell 1, E_{T}^{miss}} [rad]',  #   x axis name
                          'fold' : 0
                          }

variables['dphilmet2'] = {   'name': 'dphilmet2',            #   variable name    
                          'range' : (20,0,3.2),    #   variable range
                          'xaxis' : '\Delta\Phi_{\ell 2, E_{T}^{miss}} [rad]',  #   x axis name
                          'fold' : 0
                          }

variables['drll'] = {     'name': 'drll',            #   variable name    

                          'range' : (50,0,5.9),    #   variable range
                          'xaxis' : '\Delta R_{\ell\ell}',  #   x axis name
                          'fold'  : 0
                          }


variables['mtw1'] = {     'name'  : 'mtw1',            #   variable name    
                          'range' : (30,0,300),    #   variable range
                          'xaxis' : 'm_{T}^{W1}',  #   x axis name
                          'fold'  : 0
                          }


variables['mtw2'] = {     'name'  : 'mtw2',            #   variable name    
                          'range' : (50,0,500),    #   variable range
                          'xaxis' : 'm_{T}^{W2}',  #   x axis name
                          'fold'  : 0
                          }


variables['njet']  = {   'name': 'njet',      
                         'range' : (10,0,10),  
                         'xaxis' : 'njet', 
                         'fold' : 0
                         }
                        
variables['mth']  = {   'name': 'mth',            #   variable name    
                        'range' : (30,0,300),     #   variable range
                        'xaxis' : 'm_{T}^{\ell\ell} [GeV]',  #   x axis name
                        'fold' : 3
                        }


variables['ptll']  = {   'name': 'ptll',            #   variable name    
                         'range' : (20,0,200),    #   variable range
                         'xaxis' : 'p_{T}^{\ell\ell} [GeV]',  #   x axis name
                         'fold' : 3
                         }

variables['met']  = {   'name': 'metPfType1',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'E_{T}^{miss} [GeV]',  #   x axis name
                        'fold' : 0
                        }


variables['mll']  = {   'name': 'mll',             #   variable name    
                        'range' : (30,0,300),      #   variable range
                        'xaxis' : 'm_{\ell\ell} [GeV]',  #   x axis name
                        'fold' : 3
                        }
                        
variables['metTtrk'] = {'name': 'metTtrk',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'tracker E_{T}^{miss} [GeV]',  #   x axis name
                        'fold' : 0
                        }






# variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',            #   variable name    
#                         'range' : (40,0,400),    #   variable range
#                         'xaxis' : 'p_{T}^{1st lep} [GeV]',  #   x axis name
#                         'fold' : 3
#                         }

# variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',            #   variable name    
#                         'range' : (30,0,300),    #   variable range
#                         'xaxis' : 'p_{T}^{2nd lep} [GeV]',  #   x axis name
#                         'fold' : 3
#                         }

# variables['nvtx']  = {   'name': 'nvtx',      
#                          'range' : (40,0,40),  
#                          'xaxis' : 'nvtx', 
#                          'fold' : 3
#                          }
                        
