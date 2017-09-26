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

                        
variables['drll']  = {   'name': 'drll',            #   variable name    
                        'range' : (40,0,4),    #   variable range
                        'xaxis' : 'DR_{ll}',  #   x axis name
                         'fold' : 3
                        }

variables['met']  = {   'name': 'metPfType1',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'pfmet [GeV]',  #   x axis name
                        'fold' : 0
                        }

variables['metPhi']  = {   'name': 'metPfType1Phi',            #   variable name    
                        'range' : (20,-3.14,3.14),    #   variable range
                        'xaxis' : 'pfmetPhi',  #   x axis name
                        'fold' : 0
                        }
# from usage guid from https://indico.cern.ch/event/628846/  upto 10 arguments

#variables['drllOneTwo'] = { 'name': 'dRLL(std_vector_lepton_eta[0],std_vector_lepton_eta[1],,std_vector_lepton_phi[0],std_vector_lepton_phi[1])',
#    			'range' : (40,0,5),
#			'xaxis' : '#Delta R_{ll}(first,second)',
#			'fold'  :1,
#			'linesToAdd': ['.L /u/user/salee/Latino/CMSSW8026patch2Return2Mst/src/PlotsConfigurations/Configurations/ControlRegions/WgS/Full2016/dRLL.C+']
#			}
#


variables['drllOneThree']  = {   'name': 'drllOneThree',            #   variable name    
                        'range' : (10,0,1),    #   variable range
                        'xaxis' : '#Delta R_{ll} 2nd3rd',  #   x axis name
                         'fold' : 0
                        }
variables['drllTwoThree']  = {   'name': 'drllTwoThree',            #   variable name    
                        'range' : (10,0,1),    #   variable range
                        'xaxis' : '#Delta R_{ll} 2nd3rd',  #   x axis name
                         'fold' : 0
                        }

variables['mth']  = {   'name': 'mth',            #   variable name    
                        'range' : (100,0,200),    #   variable range
                        'xaxis' : 'm_{T}^{H} [GeV]',  #   x axis name
                        'fold' : 3
                        }
#
 
variables['mllThird']  = {   'name': 'mllThird',            #   variable name    
                        'range' : (80,0,120),    #   variable range
                        'xaxis' : 'm_{ll} 3rd [GeV]',  #   x axis name
                         'fold' : 0
                        }


variables['mllOneThree']  = {   'name': 'mllOneThree',            #   variable name    
                        'range' : (80,0,120),    #   variable range
                        'xaxis' : 'm_{ll} 1st3rd [GeV]',  #   x axis name
                         'fold' : 0
                        }

variables['mllTwoThree']  = {   'name': 'mllTwoThree',            #   variable name    
                        'range' : (80,0,120),    #   variable range
                        'xaxis' : 'm_{ll} 2nd3rd [GeV]',  #   x axis name
                         'fold' : 0
                        }

#


variables['mllWgSt']  = {   'name': '\
                         mllWgSt \
                        ',
                        'range' : (60,0,120),    #   variable range
                        'xaxis' : 'm_{ll} from #gamma^{*} [GeV]',  #   x axis name
                         'fold' : 0
                        }



variables['mllWgStLowM']  = {   'name': '\
                          mllWgSt \
                        ',
                        'range' : (100,0,5),    #   variable range
                        'xaxis' : 'm_{ll} from #gamma^{*} [GeV]',  #   x axis name
                         'fold' : 0
                        }

##
##                        
variables['njet']  = {   'name': 'njet',      
                        'range' : (4,0,4),  
                        'xaxis' : 'njet',   
                         'fold' : 3
                        }

                        
##
##
##

variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',     
                        'range' : (45,0,90),   
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 0                         
                        }
variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',     
                        'range' : (30,0,60),   
                        'xaxis' : 'p_{T} 2nd lep',
                        'fold'  : 0                         
                        }

variables['pt3']  = {   'name': 'std_vector_lepton_pt[2]',     
                        'range' : (30,0,60),   
                        'xaxis' : 'p_{T} 3rd lep',
                        'fold'  : 0                         
                        }

