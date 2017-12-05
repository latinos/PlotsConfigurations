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
                         'fold' : 0
                       }

variables['mll_low']  = {   'name': 'mll',            #   variable name    
                        'range' : (50,0,5),    #   variable range
                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                         'fold' : 0
                       }

variables['ptll']  = {   'name': 'ptll',            #   variable name    
                        'range' : (20,0,150),    #   variable range
                        'xaxis' : 'pt_{ll} [GeV]',  #   x axis name
                        'fold' : 0
                        }
                        
variables['drll']  = {   'name': 'drll',            #   variable name    
                        'range' : (40,0,4),    #   variable range
                        'xaxis' : 'DR_{ll}',  #   x axis name
                         'fold' : 2
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
variables['mllmin3l']  = {   'name': 'mllmin3l',            #   variable name    
                        'range' : (120, 0,120),    #   variable range
                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                         'fold' : 0
                        }

variables['mllmin3lLLowM'] = {   'name': 'mllmin3l',            #   variable name
                           'range' : (100,0,5),    #   variable range
                           'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                           'fold' : 0
                        }
##
##
##
##
variables['met']  = {   'name': 'metPfType1',            #   variable name    
                        'range' : (20,0,150),    #   variable range
                        'xaxis' : 'pfmet [GeV]',  #   x axis name
                        'fold' : 0
                        }

variables['mpmet']  = {   'name': 'mpmet',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'mpmet [GeV]',  #   x axis name
                         'fold' : 2
                        }
 

variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',     
                        'range' : (20,10,100),   
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 0                         
                        }
variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',     
                        'range' : (20,10,100),   
                        'xaxis' : 'p_{T} 2nd lep',
                        'fold'  : 0                         
                        }

variables['pt3']  = {   'name': 'std_vector_lepton_pt[2]',     
                        'range' : (20,10,100),   
                        'xaxis' : 'p_{T} 3rd lep',
                        'fold'  : 0                         
                        }

variables['njet']  = {   'name': 'njet',      
                        'range' : (4,0,4),  
                        'xaxis' : 'njet',   
                         'fold' : 2
                        }
