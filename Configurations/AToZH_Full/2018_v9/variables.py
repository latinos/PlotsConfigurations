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

variables['njet']       = { 'name'  : 'ZH3l_njet',
                            'range' : (10,0,10),
                            'xaxis' : 'N_{jet}',
                            'fold' : 3 
                        }

variables['pt1']        = { 'name': 'Lepton_pt[0]',
                            'range' : (10,0.,200),
                            'xaxis' : 'lept1_p_{T} [GeV]',
                            'fold' : 3 
                        }

variables['pt_subleadinglepton'] = { 'name': 'Lepton_pt[1]',
                                     'range' : (10,0.,200),
                                     'xaxis' : 'lept2_p_{T} [GeV]',
                                     'fold' : 3
}
    
variables['checkmZ']    = { 'name' : 'ZH3l_checkmZ',
                            'range' : (20,0,200),
                            'xaxis' : 'checkmZ',
                            'fold' : 3 
                        }

variables['ptjet0']     = { 'name' : 'CleanJet_pt[0]',
                            'range' : (20,0,200),
                            'xaxis' : 'Leading jet p_{T}',
                            'fold' : 3 
                        }

variables['ptjet1']     = { 'name' : 'CleanJet_pt[1]',
                            'range' : (20,0,200),
                            'xaxis' : 'Subleading jet p_{T}',
                            'cuts' : [cut for cut in cuts if '1j' not in cut],
                            'fold' : 3 
                        }


variables['ptz']        = { 'name' : 'ZH3l_pTZ',
                            'range' : (6,0,1000),
                            'xaxis' : 'ptz',
                            'fold' : 3 
                        }

variables['ChiSquare']  = { 'name' : 'AZH_ChiSquare',
                           'range' : (20,0,100),
			    'xaxis' : 'ChiSqaure distribution',
        		    'fold'  : 3
                         }


variables['DeltaM']  = { 'name' : 'AZH_mA_minus_mH',
                            'range' : (6,0,1000),
			    'xaxis' : 'm_{A}-m_{H}',
			    'cuts' : [cut for cut in cuts if '1j' not in cut],
			    'fold'  : 3
                         }

variables['DeltaM_onebjet'] = { 'name' : 'AZH_mA_minus_mH_onebjet',
                       'range' : (6,0,1000),
		       'xaxis' : 'm_{A}-m_{H}',
		       'cuts' : [cut for cut in cuts if '1j' in cut],
		       'fold'  : 3
		}


variables['ptzVSdeltam']  = { 'name' : 'ZH3l_pTZ:AZH_mA_minus_mH',
                            'range' : ([0,100,200,300,400,600,1000],[0,200,300,400,500,600,800],),
			    'xaxis' : 'ptz:m_{A}-m_{H}',
			    'fold'  : 3,
			#    'doWeight' : 1,
			#    'binX' : 10,
			#    'binY' : 10
}
#variables['tree'] = { 'name' : 'tree',
#                       'tree': {'ZH3l_mTlmetjj_test':'ZH3l_mTlmetjj_test', 'ZH3l_mTlmetjj':'ZH3l_mTlmetjj', 'AZH_Zmass':'AZH_Zmass', 'ZH3l_checkmZ':'ZH3l_checkmZ','AZH_Amass':'AZH_Amass', 'AZH_Amass_test':'AZH_Amass_test', 'AZH_ChiSquare':'AZH_ChiSquare', 'AZH_ChiSquare_test':'AZH_ChiSquare_test'},
#}
