# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
# The following is needed if combining plots between years:
#'doWeight' : 1
#'binX' : 1 
#'binY' : <# of bins>
   
variables['events']     = { 'name': '1',      
                            'range' : (1,0,2),  
                            'xaxis' : 'events', 
                            'fold' : 3
                        }


variables['ptzVSdeltam']  = { 'name' : 'ZH3l_pTZ:AZH_mA_minus_mH',
                            'range' : ([0,100,200,300,400,600,1000],[0,200,300,400,500,600,800],),
			    'xaxis' : 'ptz:m_{A}-m_{H}',
			    'fold'  : 3
#			    'doWeight' : 1,
#			    'binX' : 10,
#			    'binY' : 10
}

variables['mA-mH']  = { 'name' : 'AZH_mA_minus_mH',
                            'range' : (6,0,1000),
			    'xaxis' : 'm_{A}-m_{H}',
			    'fold'  : 3
                         }


variables['ptz']        = { 'name' : 'ZH3l_pTZ',
                            'range' : (6,0,1000),
                            'xaxis' : 'ptz',
                            'fold' : 3 
                        }

variables['mA']  = { 'name' : 'AZH_Amass',
                     'range' : (20,0,2500),
		     'xaxis' : 'm_{A}',
		     'fold'  : 3									                            }

variables['mH']  = { 'name' : 'AZH_Hmass',
                     'range' : (20,0,2500),
		     'xaxis' : 'm_{H}',
		     'fold'  : 3									                            }

variables['njet']       = { 'name'  : 'ZH3l_njet',
                            'range' : (10,0,10),
			    'xaxis' : 'N_{jet}',
			    'fold' : 3
}



#variables['tree'] = { 'name' : 'tree',
#                           'tree': {'ZH3l_pTZ':'ZH3l_pTZ', 'AZH_mA_minus_mH':'AZH_mA_minus_mH'},
#         }
