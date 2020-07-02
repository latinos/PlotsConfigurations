# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
variables['events']  = {   'name': '1',
                        'range' : (1,0,2),
                        'xaxis' : 'events',
                         'fold' : 3
                        }

'''
variables['mllVSmth_pt2ge20'] = {   'name': 'mll:mth',            #   variable name    
                             'range' : ([60,80,90,100,110,120,130,150,200],[10,25,35,40,45,50,55,70,90,210],),            #   variable range
                             'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                             'fold' : 3 ,
                             # do weighted plot too
                             'doWeight' : 1,
                             'binX'     : 8,
                             'binY'     : 9
                             #
                             }

variables['mllVSmth_pt2lt20'] = {   'name': 'mll:mth',            #   variable name    
                             'range' : ([60,80,90,110,130,150,200],[10,25,40,50,70,90,210],),            #   variable range
                             'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                             'fold' : 3 ,
                             # do weighted plot too
                             'doWeight' : 1,
                             'binX'     : 6,
                             'binY'     : 6
                             #
                             }
 
variables['mllVSmth_pt2ge20_old'] = {   'name': 'mll:mth',            #   variable name    
                             'range' : ([60,80,90,100,110,120,130,140,200],[10,25,35,40,45,50,55,65,210],),            #   variable range
                             'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                             'fold' : 3 ,
                             # do weighted plot too
                             'doWeight' : 1,
                             'binX'     : 8,
                             'binY'     : 8
                             #
                             }


variables['mllVSmth_pt2lt20_old'] = {   'name': 'mll:mth',            #   variable name    
                             'range' : ([60,80,90,110,130,150,200],[10,20,30,50,70,90,150],),            #   variable range
                             'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                             'fold' : 3 ,
                             # do weighted plot too
                             'doWeight' : 1,
                             'binX'     : 6,
                             'binY'     : 6
                             #
                             }
'''
## just for fun plots:
                  
#variables['drll']  = {  'name': 'drll',        #   variable name    
#                        'range' : (100,0,2),    #   variable range
#                        'xaxis' : 'DR_{ll}',    #   x axis name
#                        'fold' : 3
#                        }
#
#
#variables['nvtx']  = {   'name': 'nvtx',      
#                        'range' : (40,0,40),  
#                        'xaxis' : 'nvtx', 
#                        'fold' : 3
#                        }
#

variables['mll']  = {   'name': 'mll',            #   variable name    
                        'range' : (20,10,200),    #   variable range
                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                         'fold' : 3
                        }
'''
variables['mjj']  = {   'name': 'mjj',            #   variable name                                                                                                                                                                                                                                                                                                                                                                     
                        'range' : (20,10,250),    #   variable range                                                                                                                                                                                                                                                                                                                                                                    
                        'xaxis' : 'm_{jj} [GeV]',  #   x axis name                                                                                                                                                                                                                                                                                                                                                                      
                         'fold' : 3
                        }
'''
'''
variables['mjj*detajj']  = {   'name': 'mjj*detajj',            #   variable name                                                                                                                                   
                                                                                                                                                                                                      
                                                                                                                                                                                                      
                        'range' : (20,10,500),    #   variable range                                                                                                                                  
                                                                                                                                                                                                      
                                                                                                                                                                                                       
                        'xaxis' : 'm_{jj}*#Delta#eta_{jj} [GeV]',  #   x axis name                                                                                                                                    
                                                                                                                                                                                                      
                                                                                                                                                                                                      
                         'fold' : 3
   
                     }
'''

'''
variables['mth']  = {   'name': 'mth',            #   variable name    
                        'range' : (10,60,200),    #   variable range
                        'xaxis' : 'm_{T}^{H} [GeV]',  #   x axis name
                        'fold' : 0
                        }

variables['ptll']  = {   'name': 'ptll',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'pt_{ll} [GeV]',  #   x axis name
                       'fold' : 0
                        }

variables['met']  = {   'name': 'metPfType1',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'pfmet [GeV]',  #   x axis name
                        'fold' : 0
                       }
'''
'''
variables['abs(eta1-eta2)']  = {   'name': 'abs(detall)',     
                        'range' : (20,0,3.14),   
                        'xaxis' : '#Delta#eta_{ll}',
                        'fold' : 3
                        }
'''
'''
variables['detajj']  = {   'name': 'abs(detajj)',
                        'range' : (20,0,4.7),
                        'xaxis' : '#Delta#eta_{jj}',
                        'fold' : 3
                        }
'''

'''

variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',     
                        'range' : (40,0,200),   
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 0                         
                        }

variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',     
                        'range' : (40,0,100),   
                        'xaxis' : 'p_{T} 2nd lep',
                        'fold'  : 0                         
                        }

'''

variables['eta1']  = {  'name': 'std_vector_lepton_eta[0]',     
                        'range' : (20,-3,3),   
                        'xaxis' : '#eta 1st lep',
                        'fold'  : 3                         
                        }

variables['eta2']  = {  'name': 'std_vector_lepton_eta[1]',     
                        'range' : (20,-3,3),   
                        'xaxis' : '#eta 2nd lep',
                        'fold'  : 3                         
                        }
variables['detall']  = {   'name': 'abs(std_vector_lepton_eta[0]-std_vector_lepton_eta[1])',                                                                                                                                              
                        'range' : (20,0,5),                                                                                                                                                         
                        'xaxis' : '#Delta#eta_{ll}',                                                                                                                                                   
                        'fold' : 3                                                                                                                                                                     
                        }  

variables['mll*abs(detall)']  = {   'name': 'mll*abs(std_vector_lepton_eta[0]-std_vector_lepton_eta[1])',            #   variable name                                                                                                           \
                                                                                                                                                                                                  
                        'range' : (20,10,200),    #   variable range                                                                                                                                  
                                                               
                        'xaxis' : 'm_{ll}*#Delta#eta_{ll} [GeV]',  #   x axis name                                                                                                                                                                                               
                                                                                    
                         'fold' : 3                                                                                                                                                                    
                        }  
#new variable
variables['R_{pT}']  = {   'name': '(std_vector_lepton_pt[0]-std_vector_lepton_pt[1])/(std_vector_jet_pt[0]*std_vector_jet_pt[1])',          
                                                                                                      

                        'range' : (20,0,5),                                                           

                        'xaxis' : 'R_{pT}',                                                  

                        'fold' : 3                                                                    

                        }




#Variables ['njet']  = {
 #                       'name': 'njet',     
  #                      'range' : (5,0,5),   
   #                     'xaxis' : 'Number of jets',
    #                    'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
     #                   }

variables['jetpt1']  = {
                        'name': 'std_vector_jet_pt[0]',     
                        'range' : (40,0,200),   
                        'xaxis' : 'p_{T} 1st jet',
                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }

variables['jetpt2']  = {
                        'name': 'std_vector_jet_pt[1]',     
                        'range' : (40,0,200),   
                        'xaxis' : 'p_{T} 2nd jet',
                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }
'''
variables['jeteta1']  = {  'name': 'std_vector_jet_eta[0]',
                        'range' : (80,-5.0,5.0),
                        'xaxis' : '#eta 1st jet',
                        'fold'  : 0
                        }

variables['jeteta2']  = {  'name': 'std_vector_jet_eta[1]',
                        'range' : (80,-5.0,5.0),
                        'xaxis' : '#eta 2nd jet',
                        'fold'  : 0
                        }

'''
