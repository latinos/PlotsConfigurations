
res_cuts = [ c for c in cuts if 'res' in c]
boost_cuts = [ c for c in cuts if 'boost' in c]


variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }


variables['jet4_qgl'] = {  'name': 'Alt$(Jet_qgl[CleanJet_jetIdx[3]], -1)',
                        'range': (55,-0.1,1.),
                        'xaxis': 'QGL 4th jet',
                        'fold': 3
                }

variables['jet4_qgl_morphed'] = {  'name': 'Alt$(CleanJet_qgl_morphed[3],-1)',
                        'range': (55,-0.1,1.),
                        'xaxis': 'QGL 4th jet morphed',
                        'fold': 3
                }
