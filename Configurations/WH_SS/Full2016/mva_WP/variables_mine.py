# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow


#variables['detall'] = { 'name': 'detall(std_vector_lepton_eta[0],std_vector_lepton_eta[1])',
#                       'range' : (10,0,5),
#                       'xaxis' : "#Delta#eta_{ll}",
#                       'fold' : 3,
#                       'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_9_4_6_patch1/src/PlotsConfigurations/Configurations/WH_SS/Full2016/macros/detall.C+']
#                    }
#
##variables['mlljj'] = { 'name': 'mlljj(std_vector_lepton_pt[0],std_vector_lepton_eta[0],std_vector_lepton_phi[0],std_vector_lepton_pt[1],std_vector_lepton_eta[1],std_vector_lepton_phi[1],std_vector_jet_pt[0],std_vector_jet_eta[0],std_vector_jet_phi[0],std_vector_jet_mass[0],std_vector_jet_pt[1],std_vector_jet_eta[1],std_vector_jet_phi[1],std_vector_jet_mass[1],njet)',
##                       'range' : (25,0,300),
##                       'xaxis' : "m_{2l,jj}",
##                       'fold' : 3,
##                       'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_9_4_6_patch1/src/PlotsConfigurations/Configurations/WH_SS/Full2016/macros/mlljj.C+']
##                    }
#
#variables['maxmtw'] = { 'name': 'maxmtw(mtw1,mtw2)',
#                       'range' : (20,0.,200.),
#                       'xaxis' : "Max m_{T}^{w}",
#                       'fold' : 3,
#                       'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_9_4_6_patch1/src/PlotsConfigurations/Configurations/WH_SS/Full2016/macros/maxmtw.C+']
#                    }
#
#variables['minmtw'] = { 'name': 'minmtw(mtw1,mtw2)',
#                       'range' : (20,0.,200.),
#                       'xaxis' : "Min m_{T}^{w}",
#                       'fold' : 3,
#                       'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_9_4_6_patch1/src/PlotsConfigurations/Configurations/WH_SS/Full2016/macros/minmtw.C+']
#                    }
 
variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }

variables['njet']  = {   'name': 'njet',
                        'range' : (6,0,6),
                        'xaxis' : 'njets',
                         'fold' : 3
                        }

variables['mll']  = {   'name': 'mll',            #   variable name
                        'range' : (25, 0,200),    #   variable range
                        #'range' : (7,10,210),    #   variable range
                      # 'range' : (12,90,300),    #   control region: mll > 90
                        'xaxis' : 'mll [GeV]',  #   x axis name
                        'fold' : 3
                        }


variables['mjj']  = {  'name': 'mjj',
                       'range': (25,0.,200),  #for 500 < mjj < 1000
#                       'range': (20,60,120),  #for 500 < mjj < 1000
                     # 'range': (15,1000,2000),  #for  mjj > 1000
                       'xaxis': 'mjj [GeV]',
                       'fold': 0
                       }
#variables['detajj']  = {  'name': 'detajj',
#                       'range': (7,0.0,7.0),
#                     # 'range': (10,3.5,8.5),
#                       'xaxis': 'detajj',
#                       'fold': 3
#                       }
#
variables['ptll']  = {  'name': 'ptll',            #   variable name
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'ptll [GeV]',  #   x axis name
                        'fold' : 3
                        }
#variables['drll']  = {   'name': 'drll',     
#                        'range' : (10,0,5.0),   
#                        'xaxis' : '#Delta R_{ll}',
#                        'fold'  : 3                         
#                        }
variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',     
                        'range' : (30,0.,150),   
                       # 'range' : (10,25,100),   
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 0                         
                        }

variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',     
                        #'range' : (40,0,100),   
                        'range' : (20,0.,100),   
                        'xaxis' : 'p_{T} 2nd lep',
                        'fold'  : 0                         
                        }

variables['jetpt1']  = {   'name': 'std_vector_jet_pt[0]',     
                        #'range' : (40,0,100),   
                        'range' : (15,0,200),   
                        'xaxis' : 'p_{T} 1st jet',
                        'fold'  : 0                        
                        }

variables['jetpt2']  = {   'name': 'std_vector_jet_pt[1]',     
                        #'range' : (40,0,100),   
                        'range' : (10,30,200),   
                        'xaxis' : 'p_{T} 2nd jet',
                        'fold'  : 0                        
                        }


variables['met']  = {   'name': 'metPfType1',            #   variable name    
                        'range' : (25,0,250),    #   variable range
                        'xaxis' : 'pfmet [GeV]',  #   x axis name
                        'fold' : 0
                        }

variables['etaj1'] = {  'name': 'std_vector_jet_eta[0]',
                        'range': (20,-5,5),
                        'xaxis': 'etaj1',
                        'fold': 3
                        }

variables['etaj2'] = {         'name': 'std_vector_jet_eta[1]',
                               'range': (20,-5,5),
                               'xaxis': 'etaj2',
                               'fold': 3
                               }
variables['etal1'] = {  'name': 'std_vector_lepton_eta[0]',
                        'range': (5,-5,5),
                        'xaxis': 'etal1',
                        'fold': 3
                        }
variables['etal2'] = {  'name': 'std_vector_lepton_eta[1]',
                        'range': (5,-5,5),
                        'xaxis': 'etal2',
                        'fold': 3
                        }
variables['projmet']  = {   'name': 'projpfmet',            #   variable name    
                        'range' : (25,0,100),    #   variable range
                        'xaxis' : 'projpfmet [GeV]',  #   x axis name
                        'fold' : 0
                        }
