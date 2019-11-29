# variables

#variables = {}

variables['events']  = {   'name': '1',      
                           'range' : (1,0,2),  
                           'xaxis' : 'events', 
                           'fold' : 3
                       }
 
variables['WlepPt_whssv1'] = { 'name': 'WlepPt_whssv1',
                               'range' : (60,0,300),
                             'xaxis' : 'Wlep Pt [GeV]',
                             'fold' : 1
                         }

variables['WlepPt_whssv2'] = { 'name': 'WlepPt_whssv2',
                             'range' : (60,0,300),
                             'xaxis' : 'Wlep Pt [GeV]',
                             'fold' : 1
                         }

variables['WlepMt_whss'] = { 'name': 'WlepMt_whss',
                             'range' : (60,0,300),
                             'xaxis' : 'Wlep Mt [GeV]',
                             'fold' : 1
                         }

variables['mlljj20_whss_bin4']  = {   'name': 'mlljj20_whss',
                        'range' : ([60.,70.,80.,90.,100.,110.,120.,130.,140.,150.,160.,170.,180.,190.,200.,250.,300.],),
                        'xaxis' : 'mlljj20_whss [GeV]',
                        'fold' : 0
                        }

variables['mlljj20_whss_bin5']  = {   'name': 'mlljj20_whss',
                        'range' : ([60.,100.,110.,120.,130.,140.,150.,175.,200.,250.,300.],),
                        'xaxis' : 'mlljj20_whss [GeV]',
                        'fold' : 0
                        }
