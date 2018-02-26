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


variables['jetpt1']  = {   'name': 'std_vector_jet_pt[0]',     
                       'range' : (20,10,100),   
                       'xaxis' : 'p_{T} 1st jet',
                       'fold'  : 2                        
                       }

variables['jetpt2']  = {   'name': 'std_vector_jet_pt[1]',     
                       'range' : (20,10,100),   
                       'xaxis' : 'p_{T} 2nd jet',
                       'fold'  : 2                        
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
