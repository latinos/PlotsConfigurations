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

variables['ptz']        = { 'name' : 'ZH3l_pTZ',
                            'range' : (6,0,1000),
                            'xaxis' : 'ptz',
#			    'cuts' : ['breq_SR','bveto_1j_SR'],
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
    
variables['pt_thirdlepton'] = { 'name': 'Lepton_pt[2]',
                                      'range' : (10,0.,200),
				      'xaxis' : 'lept3_p_{T} [GeV]',
				      'fold' : 3
}


variables['checkmZ']    = { 'name' : 'ZH3l_checkmZ',
                            'range' : (20,0,500),
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
#                            'cuts' : [cut for cut in cuts if '1j' not in cut],
                            'fold' : 3 
                        }


