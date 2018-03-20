# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
 
variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }



variables['leppt1']  = {   'name': 'std_vector_lepton_pt[0]',     
                       'range' : (30,10,200),   
                       'xaxis' : 'p_{T} 1st lep',
                       'fold'  : 2                        
                       }

variables['leppt2']  = {   'name': 'std_vector_lepton_pt[1]',     
                       'range' : (30,10,200),   
                       'xaxis' : 'p_{T} 2nd lep',
                       'fold'  : 2                        
                       }



variables['dphill'] = {   'name': 'dphill',            #   variable name    
                          'range' : (10,0,3.1416),    #   variable range
                          'xaxis' : '\Delta\Phi_{\ell\ell} [rad]',  #   x axis name
                          'fold' : 0
                          }

variables['ptll']  = {   'name': 'ptll',            #   variable name    
                         'range' : (30,0,300),    #   variable range
                         'xaxis' : 'p_{T}^{\ell\ell} [GeV]',  #   x axis name
                         'fold' : 3
                         }


variables['pfmet']  = {   'name': 'metPfType1',            #   variable name    
                         'range' : (30,0,300),    #   variable range
                         'xaxis' : 'MET [GeV]',  #   x axis name
                         'fold' : 3
                         }



#  tagger['CMVA'] = {}
#  tagger['CMVA']['algo'] = 'cmvav2'
#  tagger['CMVA']['L']    = -0.5884
#  tagger['CMVA']['M']    = 0.4432
#  tagger['CMVA']['T']    = 0.9432
#
#
#  tagger['CSV'] = {}
#  tagger['CSV']['algo'] = 'csvv2ivf'
#  tagger['CSV']['L']    = 0.5426
#  tagger['CSV']['M']    = 0.8484
#  tagger['CSV']['T']    = 0.9535
#
#
#  tagger['deepCSV'] = {}
#  tagger['deepCSV']['algo'] = 'DeepCSVB'
#  tagger['deepCSV']['L']    = 0.2219
#  tagger['deepCSV']['M']    = 0.6324
#  tagger['deepCSV']['T']    = 0.8958


variables['maxcsvv2ivfjet12']  = {   'name': 'std_vector_jet_csvv2ivf[0]*(std_vector_jet_csvv2ivf[0]>std_vector_jet_csvv2ivf[1])+std_vector_jet_csvv2ivf[1]*(std_vector_jet_csvv2ivf[0]<=std_vector_jet_csvv2ivf[1])',     
                       'range' : (10,-1,1),   
                       'xaxis' : 'csvv2ivf max jet',
                       'fold'  : 3                        
                       }



variables['maxDeepCSVBjet12']  = {   'name': 'std_vector_jet_DeepCSVB[0]*(std_vector_jet_DeepCSVB[0]>std_vector_jet_DeepCSVB[1])+std_vector_jet_DeepCSVB[1]*(std_vector_jet_DeepCSVB[0]<=std_vector_jet_DeepCSVB[1])',     
                       'range' : (10,-1,1),   
                       'xaxis' : 'DeepCSVB max jet',
                       'fold'  : 3                        
                       }



variables['maxcmvajet12']  = {   'name': 'std_vector_jet_cmvav2[0]*(std_vector_jet_cmvav2[0]>std_vector_jet_cmvav2[1])+std_vector_jet_cmvav2[1]*(std_vector_jet_cmvav2[0]<=std_vector_jet_cmvav2[1])',     
                       'range' : (10,-1,1),   
                       'xaxis' : 'cmva max jet',
                       'fold'  : 3                        
                       }



variables['cmvajet1']  = {   'name': 'std_vector_jet_cmvav2[0]',     
                       'range' : (10,-1,1),   
                       'xaxis' : 'cmva 1st jet',
                       'fold'  : 3                        
                       }


variables['cmvajet2']  = {   'name': 'std_vector_jet_cmvav2[1]',     
                       'range' : (10,-1,1),   
                       'xaxis' : 'cmva 2nd jet',
                       'fold'  : 3                        
                       }


variables['cmvajet3']  = {   'name': 'std_vector_jet_cmvav2[2]',     
                       'range' : (10,-1,1),   
                       'xaxis' : 'cmva 3rd jet',
                       'fold'  : 3                        
                       }


variables['cmvajetsum']  = {   'name': 'std_vector_jet_cmvav2[0]+std_vector_jet_cmvav2[1]',     
                       'range' : (40,-2,2),   
                       'xaxis' : 'cmva 1st+2nd jet',
                       'fold'  : 3                        
                       }





variables['dphijj']  = {   'name': 'abs(std_vector_jet_phi[0] - std_vector_jet_phi[1]) * (abs(std_vector_jet_phi[0] - std_vector_jet_phi[1])<3.14159265359) + (2*3.14159265359 - abs(std_vector_jet_phi[0] - std_vector_jet_phi[1])) * (abs(std_vector_jet_phi[0] - std_vector_jet_phi[1])>=3.14159265359)',     
                       'range' : (30,0,3.15),   
                       'xaxis' : '#Delta#phi jet-jet',
                       'fold'  : 3                       
                       }

variables['jetpt1']  = {   'name': 'std_vector_jet_pt[0]',     
                       'range' : (20,10,100),   
                       'xaxis' : 'p_{T} 1st jet',
                       'fold'  : 3                       
                       }

variables['jetpt2']  = {   'name': 'std_vector_jet_pt[1]',     
                       'range' : (20,10,50),   
                       'xaxis' : 'p_{T} 2nd jet',
                       'fold'  : 3                       
                       }

variables['jetpt3']  = {   'name': 'std_vector_jet_pt[2]',     
                       'range' : (20,10,40),   
                       'xaxis' : 'p_{T} 3rd jet',
                       'fold'  : 3                        
                       }


variables['jeteta1']  = {   'name': 'std_vector_jet_eta[0]',     
                       'range' : (20,-5,5),   
                       'xaxis' : '#eta 1st jet',
                       'fold'  : 2                        
                       }

variables['jeteta2']  = {   'name': 'std_vector_jet_eta[1]',     
                       'range' : (20,-5,5),   
                       'xaxis' : '#eta 2nd jet',
                       'fold'  : 2                        
                       }

                    
variables['mth']  = {   'name': 'mth',            #   variable name    
                       'range' : (30,0,200),    #   variable range
                       'xaxis' : 'm_{T}^{H} [GeV]',  #   x axis name
                       'fold' : 2
                       }



variables['mll']  = {   'name': 'mll',            #   variable name
                       'range' : (100, 0,200),    #   variable range
                       'xaxis' : 'mll [GeV]',  #   x axis name
                       'fold' : 3
                       }



variables['mjj']  = {  'name': 'mjj',
                      'range': (20,0,200),  #for 500 < mjj < 1000
                      'xaxis': 'mjj [GeV]',
                      'fold': 2
                      }



variables['detajj']  = {  'name': 'detajj',
                      'range': (28,0.0,7.0),
                      'xaxis': 'detajj',
                      'fold': 3
                      }
