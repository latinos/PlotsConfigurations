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
#variables['ptjet0']     = { 'name' : 'CleanJet_pt[0]',
#                            'range' : (20,0,200),
#                            'xaxis' : 'Leading jet p_{T}',
#                            'fold' : 3 
#                        }


#variables['ptz']        = { 'name' : 'ZH3l_pTZ',
#                            'range' : (20,0,400),
#                            'xaxis' : 'ptz',
#                            'fold' : 3 
#                        }


#variables['chisquare']  = { 'name' : 'AZH_ChiSquare',
#                           'range' : (20,0,100),
#                           'xaxis' : 'ChiSqaure distribution',
#        		   'fold'  : 3
#                         }


variables['mA-mH_4jets']  = { 'name' : 'AZH_mA_minus_mH_4jets',
                            'range' : (20,0,1000),
                            'xaxis' : 'm_{A}-m_{H}',
			    #'cuts' : ['jet_cut_4j'],
                            'fold'  : 3
                        }

#variables['DeltaM_onebjet'] = { 'name' : 'AZH_mA_minus_mH_onebjet',
#    'range' : (6,0,1000),
#    'xaxis' : 'm_{A}-m_{H}',
#    'cuts' : [cut for cut in cuts if '1j' in cut],
#    'fold'  : 3
#}

#variables['DeltaM']  = { 'name' : 'AZH_mA_minus_mH',
#    'range' : (6,0,1000),
#    'xaxis' : 'm_{A}-m_{H}',
#    'cuts' : [cut],
#    'fold'  : 3
#}


#variables['mA']  = { 'name' : 'AZH_Amass',
#                     'range' : (20,0,2500),
#                     'xaxis' : 'm_{A}',
#                     'fold'  : 3
#                       }



#variables['mH']  = { 'name' : 'AZH_Hmass',
#                     'range' : (20,0,2500),
#                     'xaxis' : 'm_{H}',
#                     'fold'  : 3
#}

#variables['MET'] = { 'name' : 'PuppiMET_pt',
#                     'range' : (30,0,300),
#                     'xaxis': 'PuppiMET p_{T}',
#                     'fold' : 3
#} 
