# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
#variables['events']  = {   'name': '1',      
#                        'range' : (1,0,2),  
#                        'xaxis' : 'events', 
#                         'fold' : 3
#                        }
#    
#variables['mll']  = {   'name': 'mll',            #   variable name    
#                        'range' : (120,0,120),    #   variable range
#                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
#                         'fold' : 1
#                       }
#
#                        
variables['ptll']  = {   'name': 'ptll',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'pt_{ll} [GeV]',  #   x axis name
                         'fold' : 3
                        }


variables['pfMet']  = {   'name': 'metPfType1',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'pfmet [GeV]',  #   x axis name
                         'fold' : 3
                        }

#variables['drll']  = {   'name': 'drll',            #   variable name    
#                        'range' : (40,0,4),    #   variable range
#                        'xaxis' : 'DR_{ll}',  #   x axis name
#                         'fold' : 3
#                        }
#
variables['drllWgSt']  = {   'name': 'drllWgSt',            #   variable name    
                        'range' : (10,0,1),    #   variable range
                        'xaxis' : '#Delta R_{ll} WgSt',  #   x axis name
                         'fold' : 0
                        }

# 
#
#
variables['mllWgSt']  = {   'name': '\
                         mllWgSt \
                        ',
                        'range' : (120,0,120),    #   variable range
                        'xaxis' : 'm_{ll} from #gamma^{*} [GeV]',  #   x axis name
                         'fold' : 0
                        }
variables['Gen_ZGstar_mass']  = {   'name': '\
                         Gen_ZGstar_mass \
                        ',
                        'range' : (120,0,120),    #   variable range
                        'xaxis' : 'Gen_ZGstar_mass [GeV]',  #   x axis name
                         'fold' : 0
                        }

variables['mllWgStLowM']  = {   'name': '\
                         mllWgSt \
                        ',
                        'range' : (100,0,5),    #   variable range
                        'xaxis' : 'm_{ll} from #gamma^{*} [GeV]',  #   x axis name
                         'fold' : 0
                        }

#
#
###
variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',     
                        'range' : (45,0,90),   
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 0                         
                        }
#
##                        }
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
#
