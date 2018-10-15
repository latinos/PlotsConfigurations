# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow

variables['mva_vbf_ggH'] = {
     'name': 'hww_VBF_mvaBDT_ggH(mjj,jetpt1,jetpt2,detajj,jeteta1,jeteta2)',
     'range' : (15,-1.,1.),
     'xaxis' : 'MVA discriminant',
     'fold' : 3,
     'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/VBF/Full2016BDT/mymacros/hww_VBF_mvaBDT_ggH.C+', 'initmyreaderBDT1()']
     }

variables['mucca_BDT4'] = { 'name': 'hww_VBF_mvaBDT(mll,mjj,jetpt1,jetpt2,detajj,mth,dphill,dphillmet,mR)',
                            'range' : ([-1.,-0.75,-0.5,-0.25,0.,0.15,0.25,0.35,0.50,0.65,1.],),    #   variable range : 
#Significance: 2.31872
#Best fit r: 1  -0.437689/+0.472283  (68% CL)
#                            'range' : ([-1.,-0.75,-0.5,-0.25,0.,0.10,0.20,0.30,0.40,0.50,0.60,1.],),    #   variable range 
                          #'range' : (15,-1.,1.),
                            'xaxis' : 'MVA discriminant',
                            'fold' : 3,
                            'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/VBF/MyChecks/SignalRegion/MVATesting/hww_VBF_mvaBDT.C+', 'initmyreaderBDT()'],
                            'doWeight' : 1,
                            'binX'     : 1,
                            'binY'     : 11
                          }

#variables['events']  = {   'name': '1',      
#                        'range' : (1,0,2),  
#                        'xaxis' : 'events', 
#                         'fold' : 3
#                        }

#variables['mll_optim']  = { 'name': 'mll',            #   variable name
#                            'range' : ([12,30,50,70,90,110,150,200],),    #   variable range
#                            'xaxis' : 'mll [GeV]',  #   x axis name
#                            'fold' : 3,
#                            'doWeight' : 1,
#                            'binX'     : 1,
#                            'binY'     : 7
#                          }
#
##variables['mll']  = {   'name': 'mll',            #   variable name
##                        'range' : (4, 0,200),    #   variable range
##                        #'range' : (7,10,210),    #   variable range
##                      # 'range' : (12,90,300),    #   control region: mll > 90
##                        'xaxis' : 'mll [GeV]',  #   x axis name
##                        'fold' : 3
##                        }
##
##variables['mll_more']  = {   'name': 'mll',            #   variable name
##                        'range' : (8, 0,200),    #   variable range
##                        #'range' : (7,10,210),    #   variable range
##                      # 'range' : (12,90,300),    #   control region: mll > 90
##                        'xaxis' : 'mll [GeV]',  #   x axis name
##                        'fold' : 3
##                        }
#
#
#variables['mjj']  = {  'name': 'mjj',
#                       'range': (20,400,1000),  #for 500 < mjj < 1000
#                       #'range': (20,0,200),  #for 500 < mjj < 1000
#                     # 'range': (15,1000,2000),  #for  mjj > 1000
#                       'xaxis': 'mjj [GeV]',
#                       'fold': 0
#                       }
#
#
#
#variables['detajj']  = {  'name': 'detajj',
#                       'range': (7,0.0,3.5),
#                     # 'range': (10,3.5,8.5),
#                       'xaxis': 'detajj',
#                       'fold': 3
#                       }
#
#variables['ptll']  = {  'name': 'ptll',            #   variable name
#                        'range' : (20,30,200),    #   variable range
#                        'xaxis' : 'ptll [GeV]',  #   x axis name
#                        'fold' : 3
#                        }
#
#
#variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',     
#                        'range' : (40,0,100),   
#                        'xaxis' : 'p_{T} 1st lep',
#                        'fold'  : 3                         
#                        }
#
#variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',     
#                        'range' : (40,0,100),   
#                        'xaxis' : 'p_{T} 2nd lep',
#                        'fold'  : 3                         
#                        }
#
#
#variables['drll']  = {   'name': 'drll',     
#                        'range' : (40,0,3.15),   
#                        'xaxis' : '#Delta R_{ll}',
#                        'fold'  : 3                         
#                        }
#
#
#
#
#
#
#
#
##variables['mjjmanybins']  = {  'name': 'mjj',
##                       'range': (30,20,200),  #for 500 < mjj < 1000
##                       #'range': (20,0,200),  #for 500 < mjj < 1000
##                     # 'range': (15,1000,2000),  #for  mjj > 1000
##                       'xaxis': 'mjj [GeV]',
##                       'fold': 0
##                       }
##
##
##
##
##variables['mllmanybins']  = {   'name': 'mll',            #   variable name
##                        'range' : (40, 0,200),    #   variable range
###                        #'range' : (7,10,210),    #   variable range
##                      # 'range' : (12,90,300),    #   control region: mll > 90
##                        'xaxis' : 'mll [GeV]',  #   x axis name
##                        'fold' : 0
##                        }
#
#
#
#
#
#
#
#
#
#
#
##variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',     
#                       ##'range' : (40,0,100),   
#                       #'range' : (10,25,100),   
#                       #'xaxis' : 'p_{T} 1st lep',
#                       #'fold'  : 0                         
#                       #}
#
##variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',     
#                        ##'range' : (40,0,100),   
#                        #'range' : (10,10,100),   
#                        #'xaxis' : 'p_{T} 2nd lep',
#                        #'fold'  : 0                         
#                        #}
##
##
##
##
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
#
##variables['pt1manybins']  = {   'name': 'std_vector_lepton_pt[0]',     
##                        #'range' : (40,0,100),   
##                        'range' : (100,25,200),   
##                        'xaxis' : 'p_{T} 1st lep',
##                        'fold'  : 0                         
##                        }
##
##variables['pt2manybins']  = {   'name': 'std_vector_lepton_pt[1]',     
##                        #'range' : (40,0,100),   
##                        'range' : (100,10,200),   
##                        'xaxis' : 'p_{T} 2nd lep',
##                        'fold'  : 0                         
##                        }
##
##
##
##variables['pt1rangelarge']  = {   'name': 'std_vector_lepton_pt[0]',     
##                        #'range' : (40,0,100),   
##                        'range' : (10,25,200),   
##                        'xaxis' : 'p_{T} 1st lep',
##                        'fold'  : 0                         
##                        }
##
##variables['pt2rangelarge']  = {   'name': 'std_vector_lepton_pt[1]',     
##                        #'range' : (40,0,100),   
##                        'range' : (10,10,200),   
##                        'xaxis' : 'p_{T} 2nd lep',
##                        'fold'  : 0                         
##                        }
##
##
##
##
##variables['jetpt1manybins']  = {   'name': 'std_vector_jet_pt[0]',     
##                        #'range' : (40,0,100),   
##                        'range' : (100,30,200),   
##                        'xaxis' : 'p_{T} 1st jet',
##                        'fold'  : 0                         
##                        }
##
##variables['jetpt2manybins']  = {   'name': 'std_vector_jet_pt[1]',     
##                        #'range' : (40,0,100),   
##                        'range' : (100,30,200),   
##                        'xaxis' : 'p_{T} 2nd jet',
##                        'fold'  : 0                         
##                        }


