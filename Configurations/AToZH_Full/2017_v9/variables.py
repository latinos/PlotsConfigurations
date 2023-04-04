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

#variables['njet']       = { 'name'  : 'ZH3l_njet',
#                            'range' : (10,0,10),
#                            'xaxis' : 'N_{jet}',
#                            'fold' : 3 
#                        }

#variables['pt1']        = { 'name': 'Lepton_pt[0]',
#                            'range' : (10,0.,200),
#                            'xaxis' : 'lept1_p_{T} [GeV]',
#                            'fold' : 3 
#                        }

#variables['pt_subleadinglepton'] = { 'name': 'Lepton_pt[1]',
#                                     'range' : (10,0.,200),
#                                     'xaxis' : 'lept2_p_{T} [GeV]',
#                                     'fold' : 3
#}



    
#variables['checkmZ']    = { 'name' : 'ZH3l_checkmZ',
#                            'range' : (20,0,200),
#                            'xaxis' : 'checkmZ',
#                            'fold' : 3 
#                        }

#variables['ptjet0']     = { 'name' : 'CleanJet_pt[0]',
#                            'range' : (20,0,200),
#                            'xaxis' : 'Leading jet p_{T}',
#                            'fold' : 3 
#                        }

#variables['ptjet1']     = { 'name' : 'CleanJet_pt[1]',
#                            'range' : (20,0,200),
#                            'xaxis' : 'Subleading jet p_{T}',
#                            'cuts' : [cut for cut in cuts if '1j' not in cut],
#                            'fold' : 3 
#                        }


#variables['ptz']        = { 'name' : 'ZH3l_pTZ',
#                            'range' : (20,0,400),
#                            'xaxis' : 'ptz',
#                            'fold' : 3 
#                        }

variables['chisquare']  = { 'name' : 'AZH_ChiSquare',
                           'range' : (20,0,100),
			    'xaxis' : 'ChiSqaure distribution',
        		    'fold'  : 3
                         }


variables['mA-mH']  = { 'name' : 'AZH_mA_minus_mH',
                            'range' : (20,0,1000),
			    'xaxis' : 'm_{A}-m_{H}',
			    'fold'  : 3
                         }



variables['mA']  = { 'name' : 'AZH_Amass',
                            'range' : (20,0,2500),
			    'xaxis' : 'm_{A}',
			    'fold'  : 3
                        }



variables['mH']  = { 'name' : 'AZH_Hmass',
                            'range' : (20,0,2500),
			    'xaxis' : 'm_{H}',
			    'fold'  : 3
}



variables['chisquare_test']  = { 'name' : 'AZH_ChiSquare_test',
                           'range' : (20,0,100),
			    'xaxis' : 'Test ChiSqaure distribution',
        		    'fold'  : 3
                         }


variables['mA-mH_test']  = { 'name' : 'AZH_mA_minus_mH_test',
                            'range' : (20,0,1000),
			    'xaxis' : 'Test m_{A}-m_{H}',
			    'fold'  : 3
                         }



variables['mA_test']  = { 'name' : 'AZH_Amass_test',
                            'range' : (20,0,2500),
			    'xaxis' : 'Test m_{A}',
			    'fold'  : 3
                        }



variables['mH_test']  = { 'name' : 'AZH_Hmass_test',
                            'range' : (20,0,2500),
			    'xaxis' : 'Test m_{H}',
			    'fold'  : 3
                        }
variables['mtophadronic_test']  = { 'name' : 'AZH_Tophadronic_test',
                            'range' : (20,0,1000),
			    'xaxis' : 'Test m_{Hadronic Top}',
			    'fold'  : 3
                        }
variables['mtopleptonic_test']  = { 'name' : 'AZH_Topleptonic_test',
                            'range' : (20,0,1000),
			    'xaxis' : 'Test m_{Leptonic Top}',
			    'fold'  : 3
                        }
variables['mWhadronic']  = { 'name' : 'AZH_Whadronic_test',
                            'range' : (20,0,1000),
			    'xaxis' : 'Test m_{Whadronic}',
			    'fold'  : 3
                        }
variables['mWleptonic']  = { 'name' : 'AZH_Wleptonic_test',
                            'range' : (20,0,1000),
			    'xaxis' : 'Test m_{Wleptonic}',
			    'fold'  : 3
                        }

variables['tree'] = { 'name' : 'tree',
#                      'tree': {'mA':'mA', 'mH':'mH', 'mA-mH':'mA-mH', 'chisquare':'chisquare', 'mA_test':'mA_test', 'mH_test':'mH_test', 'mA-mH_test':'mA-mH_test', 'chisquare_test':'chisquare_test'},
#                       'tree': {'ZH3l_mTlmetjj_test':'ZH3l_mTlmetjj_test', 'ZH3l_mTlmetjj':'ZH3l_mTlmetjj', 'AZH_Zmass':'AZH_Zmass', 'ZH3l_checkmZ':'ZH3l_checkmZ','AZH_Amass':'AZH_Amass', 'AZH_Amass_test':'AZH_Amass_test', 'AZH_ChiSquare':'AZH_ChiSquare', 'AZH_ChiSquare_test':'AZH_ChiSquare_test'},
                        'tree': {'AZH_Wleptonic':'AZH_Wleptonic', 'AZH_Wleptonic_test':'AZH_Wleptonic_test', 'AZH_Whadronic':'AZH_Whadronic', 'AZH_Whadronic_test':'AZH_Whadronic_test', 'AZH_Tophadronic':'AZH_Tophadronic', 'AZH_Tophadronic_test':'AZH_Tophadronic_test', 'AZH_Topleptonic':'AZH_Topleptonic', 'AZH_Topleptonic_test':'AZH_Topleptonic_test',  'AZH_Hmass':'AZH_Hmass', 'AZH_Hmass_test':'AZH_Hmass_test'},
}




