# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }

variables['mllVSmth'] = {   'name': 'mll:mth',            #   variable name    
                        #'range' : (7,60,200, 5,10,110),            #   variable range
                        'range'  :  ([60,80,90,110,130,150,200],[10,20,30,50,70,90,150],),
                        'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                        'fold' : 3 , 
                        # do weighted plot too
                        'doWeight' : 1,
                        'binX'     : 6,
                        'binY'     : 6
                        #
                        }

## Just for fun plots
#variables['mll']  = {   'name': 'mll',            #   variable name    
#                        'range' : (20,10,200),    #   variable range
#                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
#                         'fold' : 0
#                        }
#
#variables['mjj']  = {  'name': 'mjj',
#                       'range': (40,20,400),  #for 500 < mjj < 1000
#                       #'range': (20,0,200),  #for 500 < mjj < 1000
#                       # 'range': (15,1000,2000),  #for  mjj > 1000
#                       'xaxis': 'mjj [GeV]',
#                       'fold': 0
#                    }
#
#variables['mth']  = {   'name': 'mth',            #   variable name    
#                        'range' : (10,60,200),    #   variable range
#                        'xaxis' : 'm_{T}^{H} [GeV]',  #   x axis name
#                        'fold' : 0
#                        }
#
#variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',     
#                        'range' : (20,0,100),   
#                        'xaxis' : 'p_{T} 1st lep',
#                        'fold'  : 0                         
#                        }
#variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',     
#                        'range' : (20,0,100),   
#                        'xaxis' : 'p_{T} 2nd lep',
#                        'fold'  : 0                         
#                        }

#variables['jetpt1']  = {
#                        'name': 'std_vector_jet_pt[0]',     
#                        'range' : (40,0,200),   
#                        'xaxis' : 'p_{T} 1st jet',
#                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
#                        }
#
#variables['jetpt2']  = {
#                        'name': 'std_vector_jet_pt[1]',     
#                        'range' : (40,0,200),   
#                        'xaxis' : 'p_{T} 2nd jet',
#                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
#                        }
#
#variables['jeteta1']  = {  'name': 'std_vector_jet_eta[0]',
#                        'range' : (40,-5.0,5.0),
#                        'xaxis' : '#eta 1st jet',
#                        'fold'  : 0
#                        }
#
#variables['jeteta2']  = {  'name': 'std_vector_jet_eta[1]',
#                        'range' : (40,-5.0,5.0),
#                        'xaxis' : '#eta 2nd jet',
#                        'fold'  : 0
#                        }
#variables['mjj']  = {  'name': 'mjj',
#                       'range': (10,20,200),  #for 500 < mjj < 1000
#                       #'range': (20,0,200),  #for 500 < mjj < 1000
#                     # 'range': (15,1000,2000),  #for  mjj > 1000
#                       'xaxis': 'mjj [GeV]',
#                       'fold': 0
#                       }
#
#variables['mllbigbins']  = {   'name': 'mll',            #   variable name
#                        'range' : (8, 0,200),    #   variable range
#                        #'range' : (7,10,210),    #   variable range
#                      # 'range' : (12,90,300),    #   control region: mll > 90
#                        'xaxis' : 'mll [GeV]',  #   x axis name
#                        'fold' : 3
#                        }
#variables['detajj']  = {  'name': 'detajj',
                       #'range': (7,0.0,3.5),
                     ## 'range': (10,3.5,8.5),
                       #'xaxis': 'detajj',
                       #'fold': 3
                       #}

#variables['ptll']  = {  'name': 'ptll',            #   variable name
                        #'range' : (20,30,200),    #   variable range
                        #'xaxis' : 'ptll [GeV]',  #   x axis name
                        #'fold' : 3
                        #}


#variables['mllmanybins']  = {   'name': 'mll',            #   variable name
#                        'range' : (40, 0,200),    #   variable range
#                        #'range' : (7,10,210),    #   variable range
#                      # 'range' : (12,90,300),    #   control region: mll > 90
#                        'xaxis' : 'mll [GeV]',  #   x axis name
#                        'fold' : 0
#                        }
#
#
#variables['pt1manybins']  = {   'name': 'std_vector_lepton_pt[0]',     
#                        #'range' : (40,0,100),   
#                        'range' : (100,25,200),   
#                        'xaxis' : 'p_{T} 1st lep',
#                        'fold'  : 0                         
#                        }
#
#variables['pt2manybins']  = {   'name': 'std_vector_lepton_pt[1]',     
#                        #'range' : (40,0,100),   
#                        'range' : (100,10,200),   
#                        'xaxis' : 'p_{T} 2nd lep',
#                        'fold'  : 0                         
#                        }
#
#
#
#variables['pt1rangelarge']  = {   'name': 'std_vector_lepton_pt[0]',     
#                        #'range' : (40,0,100),   
#                        'range' : (10,25,200),   
#                        'xaxis' : 'p_{T} 1st lep',
#                        'fold'  : 0                         
#                        }
#
#variables['pt2rangelarge']  = {   'name': 'std_vector_lepton_pt[1]',     
#                        #'range' : (40,0,100),   
#                        'range' : (10,10,200),   
#                        'xaxis' : 'p_{T} 2nd lep',
#                        'fold'  : 0                         
#                        }
#
#variables['jetpt1']  = {   'name': 'std_vector_jet_pt[0]',     
#                        #'range' : (40,0,100),   
#                        'range' : (10,30,200),   
#                        'xaxis' : 'p_{T} 1st jet',
#                        'fold'  : 0                        
#                        }
#
#variables['jetpt2']  = {   'name': 'std_vector_jet_pt[1]',     
#                        #'range' : (40,0,100),   
#                        'range' : (10,30,200),   
#                        'xaxis' : 'p_{T} 2nd jet',
#                        'fold'  : 0                        
#                        }
#
#
#variables['jetpt1manybins']  = {   'name': 'std_vector_jet_pt[0]',     
#                        #'range' : (40,0,100),   
#                        'range' : (100,30,200),   
#                        'xaxis' : 'p_{T} 1st jet',
#                        'fold'  : 0                         
#                        }
#
#variables['jetpt2manybins']  = {   'name': 'std_vector_jet_pt[1]',     
#                        #'range' : (40,0,100),   
#                        'range' : (100,30,200),   
#                        'xaxis' : 'p_{T} 2nd jet',
#                        'fold'  : 0                         
#                        }
#
#
#variables['drll']  = {   'name': 'drll',     
                        #'range' : (40,0,3.15),   
                        #'xaxis' : '#Delta R_{ll}',
                        #'fold'  : 3                         
                        #}

                        
#variables['met']  = {   'name': 'pfType1Met',            #   variable name    
                        #'range' : (20,0,200),    #   variable range
                        #'xaxis' : 'pfmet [GeV]',  #   x axis name
                         #'fold' : 0
                        #}


                        
#variables['mpmet']  = {   'name': 'mpmet',            #   variable name    
                        #'range' : (20,0,200),    #   variable range
                        #'xaxis' : 'mpmet [GeV]',  #   x axis name
                         #'fold' : 0
                        #}





                      
#variables['mth']  = {   'name': 'mth',            #   variable name    
#                        'range' : (10,60,200),    #   variable range
#                        'xaxis' : 'm_{T}^{H} [GeV]',  #   x axis name
#                        'fold' : 0
#                        }
#
#
#                      
#variables['largemth']  = {   'name': 'mth',            #   variable name    
#                        'range' : (20,0,200),    #   variable range
#                        'xaxis' : 'm_{T}^{H} [GeV]',  #   x axis name
#                        'fold' : 0
#                        }
#
#
#variables['drll']  = {  'name': 'drll',        #   variable name    
#                        'range' : (40,0,20),    #   variable range
#                        'xaxis' : 'DR_{ll}',    #   x axis name
#                        'fold' : 3
#                        }
#variables['nvtx']  = {   'name': 'nvtx',      
                        #'range' : (40,0,40),  
                        #'xaxis' : 'nvtx', 
                         #'fold' : 3
                        #}
                        
#variables['ptll']  = {   'name': 'ptll',            #   variable name    
#                        'range' : (20,0,200),    #   variable range
#                        'xaxis' : 'pt_{ll} [GeV]',  #   x axis name
#                        'fold' : 0
#                        }
#variables['met']  = {   'name': 'metPfType1',            #   variable name    
#                        'range' : (20,0,200),    #   variable range
#                        'xaxis' : 'pfmet [GeV]',  #   x axis name
#                        'fold' : 0
#                        }
#variables['dphill']  = {   'name': 'abs(dphill)',     
#                        'range' : (20,0,3.14),   
#                        'xaxis' : '#Delta#phi_{ll}',
#                        'fold' : 3
#                        }
#variables['eta1']  = {  'name': 'std_vector_lepton_eta[0]',     
#                        'range' : (20,-3,3),   
#                        'xaxis' : '#eta 1st lep',
#                        'fold'  : 3                         
#                        }
#variables['eta2']  = {  'name': 'std_vector_lepton_eta[1]',     
#                        'range' : (20,-3,3),   
#                        'xaxis' : '#eta 2nd lep',
#                        'fold'  : 3                         
#                        }
#variables['njet']  = {
#                        'name': 'njet',     
#                        'range' : (5,0,5),   
#                        'xaxis' : 'Number of jets',
#                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
#                        }

