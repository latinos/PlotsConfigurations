# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
variables['events']  = {   'name': '1',
                        'range' : (1,0,2),
                        'xaxis' : 'events',
                         'fold' : 3
                        }



#variables['mllVSmth'] = {   'name': 'mll:mth',            #   variable name    
                        #'range' : (10,0,200, 5,10,110),            #   variable range
                        #'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                        #'fold' : 3
                        #}

'''
variables['mllVSmth'] = {   'name': 'mll:mth',            #   variable name    
                        'range' : (7,60,200, 5,10,110),            #   variable range
                        'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                        'fold' : 3 ,
                        # do weighted plot too
                        'doWeight' : 1,
                        'binX'     : 7,
                        'binY'     : 5
                        #
                        }

variables['mllVSmth_more'] = {   'name': 'mll:mth',            #   variable name    
                             'range' : (14,60,200, 14,10,150),            #   variable range
                             'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                             'fold' : 3 ,
                             # do weighted plot too
                             'doWeight' : 1,
                             'binX'     : 14,
                             'binY'     : 14
                             #
                             }

variables['mllVSmth_pt2bins_v2'] = {   'name': 'mll:(( mth + (mth>180)*(190-mth) )*(std_vector_lepton_pt[1]<20)+(mth+200-60)*(std_vector_lepton_pt[1]>20))',            #   variable name
                             'range' : ([60,80,100,120,140,160,180,200,210,220,230,240,250,260,270,280,290,300,310,320,330,340],[10,20,30,40,50,60,70,80,90,100,110,120,130,140,150],),          #   variable range
                             'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                             'fold' : 3 ,
                             # do weighted plot too
                             'doWeight' : 1,
                             'binX'     : 21,
                             'binY'     : 14
                             #
                             }

variables['mllVSmth_pt2bins'] = {   'name': 'mll:((mth + (mth>180)*(190-mth) )*(std_vector_lepton_pt[1]<20)+(mth+200-60)*(std_vector_lepton_pt[1]>20))',            #   variable name    
                             'range' : (14,60,340, 14,10,150),            #   variable range
                             'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                             'fold' : 3 ,
                             # do weighted plot too
                             'doWeight' : 1,
                             'binX'     : 14,
                             'binY'     : 14
                             #
                             }
'''
variables['mllVSmth_pt2ge20'] = {   'name': 'mll:mth',            #   variable name    
                             'range' : ([60,70,80,85,90,95,100,105,110,115,125,140,200],[10,20,25,30,35,40,45,50,55,65,210],),            #   variable range
                             'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                             'fold' : 3 ,
                             # do weighted plot too
                             'doWeight' : 1,
                             'binX'     : 6,
                             'binY'     : 12
                             #
                             }

variables['mllVSmth_pt2ge20_optim'] = {   'name': 'mll:mth',            #   variable name    
                             'range' : ([60,80,90,100,110,120,130,140,200],[10,25,35,40,45,50,55,65,210],),            #   variable range
                             'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                             'fold' : 3 ,
                             # do weighted plot too
                             'doWeight' : 1,
                             'binX'     : 9,
                             'binY'     : 8
                             #
                             }


variables['mllVSmth_pt2lt20'] = {   'name': 'mll:mth',            #   variable name    
                             'range' : ([60,80,90,110,130,150,170,200],[10,30,50,70,90,110,150],),            #   variable range
                             'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                             'fold' : 3 ,
                             # do weighted plot too
                             'doWeight' : 1,
                             'binX'     : 7,
                             'binY'     : 6
                             #
                             }
                          
variables['mllVSmth_pt2lt20_optim'] = {   'name': 'mll:mth',            #   variable name    
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
variables['mllVSmth_pt2bins_optim'] = {   'name': 'mll:(( mth + (mth>180)*(190-mth) )*(std_vector_lepton_pt[1]<20)+(mth+200-60)*(std_vector_lepton_pt[1]>20))',            #   variable name
                             'range' : ([60,70,80,85,90,95,100,105,110,115,125,140,200,210,220,225,230,235,240,245,250,255,265,280,340],[10,15,20,25,30,35,40,45,50,55,65,210],),          #   variable range
                             'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                             'fold' : 3 ,
                             # do weighted plot too
                             'doWeight' : 1,
                             'binX'     : 24,
                             'binY'     : 11
                             #
                             }

## just for fun plots:
                  
variables['drll']  = {  'name': 'drll',        #   variable name    
                        'range' : (100,0,2),    #   variable range
                        'xaxis' : 'DR_{ll}',    #   x axis name
                        'fold' : 3
                        }


variables['nvtx']  = {   'name': 'nvtx',      
                        'range' : (40,0,40),  
                        'xaxis' : 'nvtx', 
                        'fold' : 3
                        }
'''
variables['mll']  = {   'name': 'mll',            #   variable name    
                        'range' : (20,10,200),    #   variable range
                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                         'fold' : 0
                        }
                        
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

variables['dphill']  = {   'name': 'abs(dphill)',     
                        'range' : (20,0,3.14),   
                        'xaxis' : '#Delta#phi_{ll}',
                        'fold' : 3
                        }
variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',     
                        'range' : (40,0,100),   
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 0                         
                        }

variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',     
                        'range' : (40,0,100),   
                        'xaxis' : 'p_{T} 2nd lep',
                        'fold'  : 0                         
                        }

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
'''
variables['njet']  = {
                        'name': 'njet',     
                        'range' : (5,0,5),   
                        'xaxis' : 'Number of jets',
                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }

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
