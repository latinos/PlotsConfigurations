#variables['tree_DNN'] = {
#                        'tree': {
#                              'DNNoutput': 'DNNoutput'
#                          }
#                        }
#
variables['events']  = {   'name': '1',
                        'range' : (1,0,2),
                        'xaxis' : 'events',
                         'fold' : 3,
                        'blind' : {
                            "sr_lowZ": [0,2],
                            "sr_highZ": [0,2]
                            }
                        }

variables['DNNoutput_lowZ_s2sb5e3'] = {
                        'name' : 'DNNoutput',
                        'range' : ( [0, 0.22, 0.29, 0.37, 0.44, 0.5, 0.56, 0.61, 0.66, 0.7, 0.74, 0.78, 0.81, 0.84, 0.87, 0.9, 0.95, 1] ,),
                        'xaxis' : 'DNN score',
                        'fold' : 1,
#                        'divideByBinWidth' : 1, 
#                        'blind' : {
#                            "sr_lowZ": [0.7,1],
#                            "sr_highZ": [0.7,1]
#                            }
                        }

variables['DNNoutput_highZ_s2sb5e3'] = {
                        'name' : 'DNNoutput',
                        'range' : ([0, 0.43, 0.56, 0.66, 0.75, 0.83, 0.91, 1],),
                        'xaxis' : 'DNN score',
                        'fold' : 1,
#                        'divideByBinWidth' : 1, 
#                        'blind' : {
#                            "sr_lowZ": [0.7,1],
#                            "sr_highZ": [0.7,1]
#                            }
                        }

#mjj, detajj, ptll, dphill, jetpt1, jetpt2, Zepp1, Zepp2, mtw1

#variables['mjj']  = {   'name': 'mjj',
#                        'range' : (30,300,3000),
#                        'xaxis' : 'm_{jj} [GeV]',
#                        'fold' :3
#                        }
#
#variables['detajj']  = {   'name': 'TMath::Abs(detajj)',
#                           'range' : (20,2.5,9),
#                           'xaxis' : '#Delta#eta_{jj}',
#                           'fold' : 3
#                        }
#variables['ptll']    = {    'name': 'ptll',               
#                            'range' : (17,30,200),   
#                            'xaxis' : 'pt_{ll} [GeV]',
#                            'fold' : 3 
#                        }
#
#variables['dphill']  = {'name': 'TMath::Abs(dphill)',
#                        'range' : (20,0,3.5),
#                        'xaxis' : '#Delta#Phi_{ll}',
#                        'fold'  : 3
#                        }
#
#
#variables['jetpt1']  = {   'name': 'Alt$(CleanJet_pt[0],-9999.)',
#                           'range' : (20,30.,300),
#                           'xaxis' : 'p_{T} 1^{st} jet [GeV]',
#                           'fold'  : 3
#                           }
#
#variables['jetpt2']  = {   'name': 'Alt$(CleanJet_pt[1],-9999.)',
#                           'range' : (20,30.,300),
#                           'xaxis' : 'p_{T} 2^{nd} jet [GeV]',
#                           'fold'  : 3
#                           }
#
#variables['Zepp1']  = {   'name': 'Alt$(Lepton_eta[0],-9999.)-0.5*(Alt$(CleanJet_eta[0],-9999.)+Alt$(CleanJet_eta[1],-9999.))',
#                           'range' : (20,-5,5),
#                           'xaxis' : 'Zeppenfeld_{1}',
#                           'fold' :0
#                           }
#
#variables['Zepp2']  = {   'name': 'Alt$(Lepton_eta[1],-9999.)-0.5*(Alt$(CleanJet_eta[0],-9999.)+Alt$(CleanJet_eta[1],-9999.))',
#                           'range' : (20,-5,5),
#                           'xaxis' : 'Zeppenfeld_{2}',
#                           'fold' :0
#                           }
#variables['mtw1']  = {   'name': 'mtw1',            
#                        'range' : (20,0,400),    
#                        'xaxis' : 'm^{T}_{W1}  [GeV]',
#                        'fold'  : 3
#                        }
#
#
#
