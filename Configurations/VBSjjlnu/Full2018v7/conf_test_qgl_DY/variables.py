# variables

#variables = {}
#variables['nvtx']  = {   'name': 'PV_npvsGood',      
#                        'range' : (20,0,100),  
#                        'xaxis' : 'nvtx', 
#                         'fold' : 3
#                      }



variables['jet_0_qgl'] = {  'name': 'j0_qgl',
                        'range': (55,-0.1,1.),
                        'xaxis': 'Qgl jet 1',
                        'fold': 3,
                }

variables['jet_1_qgl'] = {  'name': 'j1_qgl',
                        'range': (55,-0.1,1.),
                        'xaxis': 'Qgl jet 2',
                        'fold': 3,
                }

variables['jet_2_qgl'] = {  'name': 'j2_qgl',
                        'range': (55,-0.1,1.),
                        'xaxis': 'Qgl jet 3',
                        'fold': 3,
                }

variables['jet_3_qgl'] = {  'name': 'j3_qgl',
                        'range': (55,-0.1,1.),
                        'xaxis': 'Qgl jet 4',
                        'fold': 3,
                }



variables['jet_0_qglmorphed'] = {  'name': 'j0_qglmorphed',
                        'range': (55,-0.1,1.),
                        'xaxis': 'Qgl jet 1',
                        'fold': 3,
                }

variables['jet_1_qglmorphed'] = {  'name': 'j1_qglmorphed',
                        'range': (55,-0.1,1.),
                        'xaxis': 'Qgl jet 2',
                        'fold': 3,
                }

variables['jet_2_qglmorphed'] = {  'name': 'j2_qglmorphed',
                        'range': (55,-0.1,1.),
                        'xaxis': 'Qgl jet 3',
                        'fold': 3,
                }

variables['jet_3_qglmorphed'] = {  'name': 'j3_qglmorphed',
                        'range': (55,-0.1,1.),
                        'xaxis': 'Qgl jet 4',
                        'fold': 3,
                }

############
variables['jet_0_eta'] = {  'name': 'Alt$(abs(CleanJet_eta[0]),-1)',
                        'range': (50,0,5),
                        'xaxis': 'Jet 1 eta',
                        'fold': 0,
                }


variables['jet_0_pt'] = {  'name': 'Alt$(CleanJet_pt[0],-1)',
                        'range': (50,0,300),
                        'xaxis': 'Jet 1 pt',
                        'fold': 0,
                }


variables['jet_1_eta'] = {  'name': 'Alt$(abs(CleanJet_eta[1]),-1)',
                        'range': (50,0,5),
                        'xaxis': 'Jet 1 eta',
                        'fold': 0,
                }


variables['jet_1_pt'] = {  'name': 'Alt$(CleanJet_pt[1],-1)',
                        'range': (50,0,300),
                        'xaxis': 'Jet 1 pt',
                        'fold': 0,
                }


variables['jet_2_eta'] = {  'name': 'Alt$(abs(CleanJet_eta[2]),-1)',
                        'range': (50,0,5),
                        'xaxis': 'Jet 1 eta',
                        'fold': 0,
                }


variables['jet_2_pt'] = {  'name': 'Alt$(CleanJet_pt[2],-1)',
                        'range': (50,0,300),
                        'xaxis': 'Jet 1 pt',
                        'fold': 0,
                }