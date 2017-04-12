# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }

#variables['etaj1'] = {  'name': 'abs(std_vector_jet_eta[0])',
#                        'range': (12,-6,6),
#                        'xaxis': 'etaj1',
#                        'fold': 3
#                        }

#variables['etaj2'] = {         'name': 'abs(std_vector_jet_eta[1])',
#                               'range': (12,-6,6),
#                               'xaxis': 'etaj2',
#                               'fold': 3
#                               }

variables['mjj']  = {  'name': 'mjj',
                       'range': (15,500,1000),  #for 500 < mjj < 1000
                     # 'range': (15,1000,2000),  #for  mjj > 1000
                       'xaxis': 'mjj [GeV]',
                       'fold': 3
                       }

variables['mll']  = {   'name': 'mll',            #   variable name
                        'range' : (4, 0,200),    #   variable range
                        #'range' : (7,10,210),    #   variable range
                      # 'range' : (12,90,300),    #   control region: mll > 90
                        'xaxis' : 'mll [GeV]',  #   x axis name
                        'fold' : 3
                        }



variables['mllfine']  = {   'name': 'mll',            #   variable name
                        'range' : (6, 0,200),    #   variable range
                        #'range' : (8, 0,200),    #   variable range
                        #'range' : (7,10,210),    #   variable range
                      # 'range' : (12,90,300),    #   control region: mll > 90
                        'xaxis' : 'mll [GeV]',  #   x axis name
                        'fold' : 3
                        }


variables['mth']  = {   'name': 'mth',            #   variable name
                        'range' : (10,30,200),    #   variable range
                        'xaxis' : 'mth [GeV]',  #   x axis name
                        'fold' : 3
                        }


variables['detajj']  = {  'name': 'detajj',
                       'range': (12,2.5,8.5),
                     # 'range': (10,3.5,8.5),
                       'xaxis': 'detajj',
                       'fold': 3
                       }

variables['ptll']  = {  'name': 'ptll',            #   variable name
                        'range' : (20,30,200),    #   variable range
                        'xaxis' : 'ptll [GeV]',  #   x axis name
                        'fold' : 3
                        }



  
variables['njet']  = {  'name': 'njet',      
                        'range' : (5,0,5),  
                        'xaxis' : 'njet', 
                        'fold' : 3
                        }


#variables['mtw2']  = {   'name': 'mtw2',            #   variable name    
                        #'range' : (20,0,200),    #   variable range
                        #'xaxis' : 'm_{T}^{W2} [GeV]',  #   x axis name
                        #'fold' : 3
                        #}



#variables['met']  = {   'name': 'metPfType1',            #   variable name
                       #'range' : (20,20,200),    #   variable range
                              #'xaxis' : 'pfmet [GeV]',  #   x axis name
                       #'fold' : 0
                       #}


variables['pt1']  = {  'name': 'std_vector_lepton_pt[0]',            #   variable name
                       'range' : (20,0,200),    #   variable range
                              'xaxis' : 'p_{T} 1st lep [GeV]',  #   x axis name
                       'fold' : 3
                       }

variables['pt2']  = {  'name': 'std_vector_lepton_pt[1]',            #   variable name
                       'range' : (20,0,200),    #   variable range
                              'xaxis' : 'p_{T} 2nd lep [GeV]',  #   x axis name
                       'fold' : 3
                       }



#variables['dphill']  = {  'name': 'dphill',  
#                        'range' : (14,0,3.5), 
#                        'xaxis' : 'dphill', 
#                        'fold' : 3
#                        }

#variables['ht']  = {  'name': 'ht', 
#                        'range' : (15,0,1000), 
#                        'xaxis' : 'ht',
#                        'fold' : 3
#                        }

#variables['dphilmet1']  = {  'name': 'dphilmet1',   
#                        'range' : (14,0,3.5),  
#                        'xaxis' : 'dphilmet1', 
#                        'fold' : 3
#                        }

#variables['dphilljj']  = {  'name': 'dphilljetjet', 
#                        'range' : (14,0,3.5), 
#                        'xaxis' : 'dphilljj', 
#                        'fold' : 3
#                        }

#variables['mth']  = {   'name': 'mth',            #   variable name
#                        'range' : (14,60,200),    #   variable range
#                        'xaxis' : 'm_{T}^{H} [GeV]',  #   x axis name
#                        'fold' : 3
#                        }

#variables['mllVSmth'] = {   'name': 'mll:mth',            #   variable name    
#                        'range' : (7,60,200, 5,10,110),            #   variable range
#                        'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
#                        'fold' : 3 , 
#                        # do weighted plot too
#                        'doWeight' : 1,
#                        'binX'     : 7,
#                        'binY'     : 5
#                        #
#                        }

#variables['ptl1']  = {  'name': 'std_vector_lepton_pt[0]',            #   variable name
#                        'range' : (10,0,200),    #   variable range
#                       	'xaxis' : 'p_{T} 1st lep [GeV]',  #   x axis name
#                        'fold' : 3
#                        }

#variables['met']  = {   'name': 'metPfType1',            #   variable name
#                        'range' : (20,0,200),    #   variable range
#                       	'xaxis' : 'pfmet [GeV]',  #   x axis name
#                        'fold' : 0
#                        }

#variables['nvtx']  = {   'name': 'nvtx',      
#                         'range' : (40,0,40),  
#                         'xaxis' : 'nvtx', 
#                         'fold' : 3
#                        }








variables['mjjmanybins']  = {  'name': 'mjj',
                       'range': (15,400,1000),  #for 500 < mjj < 1000
                       #'range': (20,0,200),  #for 500 < mjj < 1000
                     # 'range': (15,1000,2000),  #for  mjj > 1000
                       'xaxis': 'mjj [GeV]',
                       'fold': 0
                       }




variables['mllmanybins']  = {   'name': 'mll',            #   variable name
                        'range' : (40, 0,200),    #   variable range
                        #'range' : (7,10,210),    #   variable range
                      # 'range' : (12,90,300),    #   control region: mll > 90
                        'xaxis' : 'mll [GeV]',  #   x axis name
                        'fold' : 0
                        }




#variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',     
                        ##'range' : (40,0,100),   
                        #'range' : (10,25,100),   
                        #'xaxis' : 'p_{T} 1st lep',
                        #'fold'  : 0                         
                        #}

#variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',     
                        ##'range' : (40,0,100),   
                        #'range' : (10,10,100),   
                        #'xaxis' : 'p_{T} 2nd lep',
                        #'fold'  : 0                         
                        #}




variables['pt1manybins']  = {   'name': 'std_vector_lepton_pt[0]',     
                        #'range' : (40,0,100),   
                        #'range' : (100,25,200),   
                        'range' : (40,25,200),   
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 0                         
                        }

variables['pt2manybins']  = {   'name': 'std_vector_lepton_pt[1]',     
                        #'range' : (40,0,100),   
                        #'range' : (100,10,200),   
                        'range' : (40,10,200),   
                        'xaxis' : 'p_{T} 2nd lep',
                        'fold'  : 0                         
                        }



variables['pt1rangelarge']  = {   'name': 'std_vector_lepton_pt[0]',     
                        #'range' : (40,0,100),   
                        'range' : (10,25,200),   
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 0                         
                        }

variables['pt2rangelarge']  = {   'name': 'std_vector_lepton_pt[1]',     
                        #'range' : (40,0,100),   
                        'range' : (10,10,200),   
                        'xaxis' : 'p_{T} 2nd lep',
                        'fold'  : 0                         
                        }





variables['jetpt1']  = {   'name': 'std_vector_jet_pt[0]',     
                        #'range' : (40,0,100),   
                        'range' : (10,30,200),   
                        'xaxis' : 'p_{T} 1st jet',
                        'fold'  : 0                        
                        }

variables['jetpt2']  = {   'name': 'std_vector_jet_pt[1]',     
                        #'range' : (40,0,100),   
                        'range' : (10,30,200),   
                        'xaxis' : 'p_{T} 2nd jet',
                        'fold'  : 0                        
                        }


variables['jetpt1manybins']  = {   'name': 'std_vector_jet_pt[0]',     
                        #'range' : (40,0,100),   
                        #'range' : (100,30,200),   
                        'range' : (40,30,200),   
                        'xaxis' : 'p_{T} 1st jet',
                        'fold'  : 0                         
                        }

variables['jetpt2manybins']  = {   'name': 'std_vector_jet_pt[1]',     
                        #'range' : (40,0,100),   
                        #'range' : (100,30,200),   
                        'range' : (40,30,200),   
                        'xaxis' : 'p_{T} 2nd jet',
                        'fold'  : 0                         
                        }
