# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
# Tuning for shape analysis

variables['mll']  = {   'name': 'mll',            
                        'range' : (8,0,700),     
                        'xaxis' : 'm_{\ell\ell} [GeV]',
                        'fold' : 0
                    }

variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',            #   variable name    
                        'range' : (10,0,300),    #   variable range
                        'xaxis' : 'p_{T}^{1st lep} [GeV]',  #   x axis name
                        'fold' : 0
                        }

variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',            #   variable name    
                        'range' : (10,0,300),    #   variable range
                        'xaxis' : 'p_{T}^{2nd lep} [GeV]',  #   x axis name
                        'fold' : 0
                        }

variables['eta1']  = {   'name': 'std_vector_lepton_eta[0]',            #   variable name    
                        'range' : (10,-3,3),    #   variable range
                        'xaxis' : '\eta^{1st lep} [GeV]',  #   x axis name
                        'fold' : 0
                        }

variables['eta2']  = {   'name': 'std_vector_lepton_eta[1]',            #   variable name    
                        'range' : (10,-3,3),    #   variable range
                        'xaxis' : '\eta^{2nd lep} [GeV]',  #   x axis name
                        'fold' : 0
                        }

variables['dphill'] = {   'name': 'dphill',            #   variable name    
                          'range' : (10,0,3.1416),    #   variable range
                          'xaxis' : '\Delta\Phi_{\ell\ell} [rad]',  #   x axis name
                          'fold' : 0
                          }

variables['ptll']  = {   'name': 'ptll',            #   variable name    
                         'range' : (10,0,300),    #   variable range
                         'xaxis' : 'p_{T}^{\ell\ell} [GeV]',  #   x axis name
                         'fold' : 0
                         }





