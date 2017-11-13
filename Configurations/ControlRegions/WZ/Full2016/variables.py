# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
#variables['events']  = {   'name': '1',      
#                        'range' : (1,0,2),  
#                        'xaxis' : 'events', 
#                         'fold' : 3
#                        }
#    
variables['mll']  = {   'name': 'mll',            #   variable name    
                        'range' : (120,0,120),    #   variable range
                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                         'fold' : 1
                       }

variables['mllmin3l']  = {   'name': 'mllmin3l',            #   variable name    
                        'range' : (200, 0,200),    #   variable range
                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                         'fold' : 0
                        }

variables['mllmin3lPeak'] = {   'name': 'mllmin3l',            #   variable name
                           'range' : (20,80,100),    #   variable range
                           'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                           'fold' : 0
                        }


variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',     
                        'range' : (50,0,100),   
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 3                         
                        }

variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',     
                        'range' : (50,0,100),   
                        'xaxis' : 'p_{T} 2nd lep',
                        'fold'  : 3                         
                        }

variables['pt3']  = {   'name': 'std_vector_lepton_pt[2]',     
                        'range' : (50,0,100),   
                        'xaxis' : 'p_{T} 3rd lep',
                        'fold'  : 3                         
                        }

variables['eta1']  = {  'name': 'std_vector_lepton_eta[0]',     
                        'range' : (40,-3,3),   
                        'xaxis' : '#eta 1st lep',
                        'fold'  : 3                         
                        }

variables['eta2']  = {  'name': 'std_vector_lepton_eta[1]',     
                        'range' : (40,-3,3),   
                        'xaxis' : '#eta 2nd lep',
                        'fold'  : 3                         
                        }

variables['eta3']  = {  'name': 'std_vector_lepton_eta[2]',     
                        'range' : (40,-3,3),   
                        'xaxis' : '#eta 3rd lep',
                        'fold'  : 3                         
                        }


variables['pfmet']  = { 
                        'name': 'metPfType1',     
                        'range' : (50,0,200),   
                        'xaxis' : 'pfmet [GeV]',
                        'fold'  : 3                         
                        }

variables['trkMet']  = {   'name': 'metTtrk',
                        'range' : (50,0,200),
                        'xaxis' : 'trk met [GeV]',
                         'fold' : 3
                        }

variables['mpmet']  = { 'name': 'mpmet',
                        'range' : (50,0,200),
                        'xaxis' : 'min proj met [GeV]',
                        'fold' : 3
                        }



variables['mth']  = {   'name': 'mth',            #   variable name    
                        'range' : (100,0,200),    #   variable range
                        'xaxis' : 'm_{T}^{H} [GeV]',  #   x axis name
                        'fold' : 3
                        }
variables['ptll']  = {   'name': 'ptll',            #   variable name    
                        'range' : (50,0,200),    #   variable range
                        'xaxis' : 'pt_{ll} [GeV]',  #   x axis name
                        'fold' : 0
                        }
                        
variables['drll']  = {   'name': 'drll',            #   variable name    
                        'range' : (40,0,4),    #   variable range
                        'xaxis' : 'DR_{ll}',  #   x axis name
                         'fold' : 3
                        }
# from usage guid from https://indico.cern.ch/event/628846/  upto 10 arguments

#variables['drllOneTwo'] = { 'name': 'dRLL(std_vector_lepton_eta[0],std_vector_lepton_eta[1],,std_vector_lepton_phi[0],std_vector_lepton_phi[1])',
#    			'range' : (40,0,5),
#			'xaxis' : '#Delta R_{ll}(first,second)',
#			'fold'  :1,
#			'linesToAdd': ['.L /u/user/salee/Latino/CMSSW8026patch2Return2Mst/src/PlotsConfigurations/Configurations/ControlRegions/WgS/Full2016/dRLL.C+']
#			}
#



variables['mllWgSt']  = {   'name': 'mllWgSt',
                        'range' : (120,0,120),    #   variable range
                        'xaxis' : 'm_{ll} from Z/#gamma^{*} [GeV]',  #   x axis name
                         'fold' : 0
                        }


variables['mllWgStLowM']  = {   'name': 'mllWgSt',
                        'range' : (20,0,10),    #   variable range
                        'xaxis' : 'm_{ll} from Z/#gamma^{*} [GeV]',  #   x axis name
                         'fold' : 0
                        }

variables['mllWgStLLowM']  = {   'name': 'mllWgSt',
                        'range' : (100,0,5),    #   variable range
                        'xaxis' : 'm_{ll} from #gamma^{*} [GeV]',  #   x axis name
                         'fold' : 0
                        }
##
##
##
variables['mtw1']  = {   'name': 'mtw1',      
                        'range' : (50,0,100),  
                        'xaxis' : 'mtw1 [GeV]',   
                         'fold' : 3
                        }

##                        
variables['njet']  = {   'name': 'njet',      
                        'range' : (4,0,4),  
                        'xaxis' : 'njet',   
                         'fold' : 3
                        }

##                        

