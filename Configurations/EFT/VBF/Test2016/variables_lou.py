
# variables

#variables = {}
 
'''

variables['mjj'] = { 'name' : 'mjj',
                     'range': (80,0,4000),
                     'xaxis': 'm_{jj}',
                     'fold' : 3 
                   }

variables['ptjj'] = { 'name' : 'ptjj[0]',
                     'range': (50,0,1000),
                     'xaxis': 'p_{T}^{jj}',
                     'fold' : 3 
                   }

variables['ptl1'] = { 'name' : 'Lepton_pt[0]',
                     'range': (20,0,400),
                     'xaxis': 'p_{T}^{lep1}',
                     'fold' : 3 
                   }

variables['ptl2'] = { 'name' : 'Lepton_pt[1]',
                     'range': (20,0,400),
                      'xaxis': 'p_{T}^{lep2}',
                     'fold' : 3 
                   }

variables['met'] = { 'name' : 'PuppiMET_pt',
                     'range': (20,0,400),
                     'xaxis': 'MET',
                     'fold' : 3 
                   }

variables['mjj2'] = { 'name' : 'mjj',
                     'range': (80,0,400),
                     'xaxis': 'm_{jj}',
                     'fold' : 3 
                   }

variables['detajj'] = { 'name' : 'detajj',
                        'range': (30,0,10),
                        'xaxis': '#Delta#eta_{jj}',
                        'fold' : 3 
                   }

variables['lepcen1'] = { 'name' : 'lepcen1[0]',
                         'range': (25,0,5),
                         'xaxis': 'Centrality_{l1}',
                         'fold' : 3 
                        }

variables['lepcen2'] = { 'name' : 'lepcen2[0]',
                         'range': (25,0,5),
                         'xaxis': 'Centrality_{l2}',
                         'fold' : 3 
                        }

variables['mll'] = { 'name' : 'mll',
                     'range': (20,0,400),
                     'xaxis': 'm_{ll}',
                     'fold' : 3 
                   }

variables['njet'] = { 'name' : 'njet',
                      'range': (6,0,6),
                      'xaxis': 'number of jets',
                      'fold' : 3 
                   }

variables['nfjet'] = { 'name' : 'nCleanFatJet', # pt and tau21 cuts applied
                      'range': (5,0,5),
                      'xaxis': 'number of fat jets',
                      'fold' : 3 
                   }

variables['ptll'] = {   'name': 'ptll',
                        'range': (20,0,400),
                        'xaxis': 'p_{T}^{ll}',
                        'fold': 3
                       }

variables['mth'] = { 'name' : 'mth',
                     'range': (20,0,200),
                     'xaxis': 'm_{T}^{H}',
                     'fold' : 3
                   }

variables['mtw2'] = { 'name' : 'mtw2',
                     'range': (20,0,200),
                     'xaxis': 'm_{T}^{W2}',
                     'fold' : 3
                    }

variables['mtw1'] = { 'name' : 'mtw1',
                     'range': (20,0,200),
                      'xaxis': 'm_{T}^{W1}',
                     'fold' : 3
                    }

variables['pTWW'] = { 'name' : 'pTWW',
                     'range': (50,0,1000),
                     'xaxis': 'p_{T}^{H}',
                     'fold' : 3
                   }


variables['hm'] = { 'name' : 'hm',
                     'range': (20,0,400),
                     'xaxis': 'm_{H}',
                     'fold' : 3
                   }
'''
############ VARIABLES USED IN CUTS.PY SUPERCUT #########
variables['mll'] = { 'name' : 'mll',
                     'range': (20,0,200),
                     'xaxis': 'm_{ll}',
                     'fold' : 3
                   }

variables['Lepton_pt[0]'] = { 'name' : 'Lepton_pt[0]',
                     'range': (20,0,150),
                     'xaxis': 'Lepton_pt[0]',
                     'fold' : 3
                   }
variables['Lepton_pt[1]'] = { 'name' : 'Lepton_pt[1]',
                     'range': (20,0,150),
                     'xaxis': 'Lepton_pt[1]',
                     'fold' : 3
                   }
variables['Lepton_pt[2]'] = { 'name' : 'Lepton_pt[2]',
                     'range': (50,0,10),
                     'xaxis': 'Lepton_pt[2]',
                     'fold' : 3
                   }

variables['nLepton'] = { 'name' : 'nLepton',
                     'range': (10,0,10),
                     'xaxis': 'nLepton',
                     'fold' : 3
                   }

variables['ptll'] = { 'name' : 'ptll',
                     'range': (20,24,150),
                     'xaxis': 'nLepton',
                     'fold' : 3
                   }
variables['PuppiMET_pt'] = { 'name' : 'PuppiMET_pt',
                     'range': (20,0,150),
                     'xaxis': 'PuppiMET_pt',
                     'fold' : 3
                   }
variables['hm'] = { 'name' : 'hm',
                     'range': (20,0,200),
                     'xaxis': 'hm',
                     'fold' : 3
                   }
############ SRVH CUTS VARIABLES #########
variables['CleanJet_pt[0]'] = { 'name' : 'CleanJet_pt[0]',
                     'range': (20,0,200),
                     'xaxis': 'CleanJet_pt[0]',
                     'fold' : 3
                   }
variables['CleanJet_pt[1]'] = { 'name' : 'CleanJet_pt[1]',
                     'range': (20,0,200),
                     'xaxis': 'CleanJet_pt[1]',
                     'fold' : 3
                   }
variables['CleanJet_pt[2]'] = { 'name' : 'CleanJet_pt[2]',
                     'range': (10,0,30),
                     'xaxis': 'CleanJet_pt[2]',
                     'fold' : 3
                   }
variables['CleanJet_eta[0]'] = { 'name' : 'CleanJet_eta[0]',
                     'range': (10,0,2.4),
                     'xaxis': 'CleanJet_eta[0]',
                     'fold' : 3
                   }
variables['CleanJet_eta[1]'] = { 'name' : 'CleanJet_eta[1]',
                     'range': (10,0,2.4),
                     'xaxis': 'CleanJet_eta[1]',
                     'fold' : 3
                   }
variables['nCleanFatJet'] = { 'name' : 'nCleanFatJet',
                     'range': (10,0,10),
                     'xaxis': 'nCleanFatJet',
                     'fold' : 3
                   }
variables['mjj'] = { 'name' : 'mjj',
                     'range': (20,0,120),
                     'xaxis': 'mjj',
                     'fold' : 3
                   }
variables['mth'] = { 'name' : 'mth',
                     'range': (50,0,125),
                     'xaxis': 'mth',
                     'fold' : 3
                   }
variables['CleanFatJet_pt[0]'] = { 'name' : 'CleanFatJet_pt[0]',
                     'range': (50,200,500),
                     'xaxis': 'CleanFatJet_pt[0]',
                     'fold' : 3
                   }
variables['CleanFatJet_eta[0]'] = { 'name' : 'CleanFatJet_eta[0]',
                     'range': (10,0,2.4),
                     'xaxis': 'CleanFatJet_eta[0]',
                     'fold' : 3
                   }
variables['mV[0]'] = { 'name' : 'mV[0]',
                     'range': (20,0,200),
                     'xaxis': 'mV[0]',
                     'fold' : 3
                   }
#bveto cut --> Sum$(CleanJet_pt > 20. && abs(CleanJet_eta) < 2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) == 0'
variables['Jet_btagDeepB[CleanJet_jetIdx]'] = { 'name' : 'Jet_btagDeepB[CleanJet_jetIdx]',
                     'range': (100,0,1),
                     'xaxis': 'Jet_btagDeepB[CleanJet_jetIdx]',
                     'fold' : 3
                   }
variables['CleanJet_jetIdx'] = { 'name' : 'CleanJet_jetIdx',
                     'range': (20,0,20),
                     'xaxis': 'CleanJet_jetIdx',
                     'fold' : 3
                   }
############ VBF KD ############## 
'''
variables['kd_vbf'] = { 'name' : 'kd_vbf',
                       'range': (20,0,1),
                       'xaxis': 'D_{VBF}',
                       'fold' : 3
                     }

variables['kd_vbf_hm'] = { 'name' : 'kd_vbf_hm',
                       'range': (20,0,1),
                       'xaxis': 'D_{VBF 0^{-}}',
                       'fold' : 3
                     }

variables['kd_vbf_hp'] = { 'name' : 'kd_vbf_hp',
                       'range': (20,0,1),
                       'xaxis': 'D_{VBF 0^{+}}',
                       'fold' : 3
                     }

variables['kd_vbf_hl'] = { 'name' : 'kd_vbf_hl',
                       'range': (20,0,1),
                        'xaxis': 'D_{VBF 0^{#Lambda 1}}',
                       'fold' : 3
                     }
variables['kd_qcd_hm'] = { 'name' : 'kd_qcd_hm',
                       'range': (20,0,1),
                       'xaxis': 'D_{Hjj 0^{-}}',
                       'fold' : 3
                     }

variables['kd_qcd_mixhm'] = { 'name' : 'kd_qcd_mixhm',
                       'range': (20,-1,1),
                       'xaxis': 'D_{Hjj 0^{-}}',
                       'fold' : 3
                     }




variables['kd_vbf_mixhm'] = { 'name' : 'kd_vbf_mixhm',
                              'range': (20,-1,1),
                          'xaxis': 'D_{VBF CP}',
                          'fold' : 3
                        }

variables['mllVSkd_vbf_hm'] = {   'name': 'mll:kd_vbf_hm', 
                                 'range': ([0,0.2,0.4,0.6,0.8,1.0],[10,20,30,40,50,60,70],),
                                  'xaxis': 'm_{ll} : D_{VBF 0^{-}}',
                           'fold': 3
                       }

variables['kd_vbf_mixhp'] = { 'name' : 'kd_vbf_mixhp',
                          'range': (20,-1,1),
                          'xaxis': 'D_{VBF Int}',
                          'fold' : 3
                        }
'''
############ VH KD ######################



variables['kd_vh'] = { 'name' : 'kd_vh',
                       'range': (10,0,1),
                       'xaxis': 'D_{VH}',
                       'fold' : 3
                     }

variables['kd_vh_hm'] = { 'name' : 'kd_vh_hm',
                       'range': (10,0,1),
                       'xaxis': 'D_{VH 0^{-}}',
                       'fold' : 3
                     }

variables['kd_vh_hp'] = { 'name' : 'kd_vh_hp',
                       'range': (10,0,1),
                       'xaxis': 'D_{VH 0^{+}}',
                       'fold' : 3
                     }

variables['kd_vh_hl'] = { 'name' : 'kd_vh_hl',
                       'range': (10,0,1),
                       'xaxis': 'D_{VH 0^{#Lambda 1}}',
                       'fold' : 3
                     }
'''
variables['kd_vh_mixhm'] = { 'name' : 'kd_vh_mixhm',
                             'range': (10,-1,1),
                          'xaxis': 'D_{VH CP}',
                          'fold' : 3
                        }

variables['mllVSkd_vh_hm'] = {   'name': 'mll:kd_vh_hm', 
                                 'range': ([0,0.2,0.4,0.6,0.8,1.0],[10,20,30,40,50,60,70],),
                                 'xaxis': 'm_{ll} : D_{VH 0^{-}}',
                           'fold': 3
                       }

variables['kd_vh_mixhp'] = { 'name' : 'kd_vh_mixhp',
                             'range': (10,-1,1),
                          'xaxis': 'D_{VH Int}',
                          'fold' : 3
                        }
'''
############ boosted VH KD ######################


variables['mV'] = { 'name' : 'mV[0]',
                     'range': (20,0,200),
                     'xaxis': 'm_{V}',
                     'fold' : 3 
                   }


variables['kd_Vh'] = { 'name' : 'kd_Vh',
                       'range': (10,0,1),
                       'xaxis': 'D_{V*H}',
                       'fold' : 3
                     }

variables['kd_Vh_hm'] = { 'name' : 'kd_Vh_hm',
                       'range': (10,0,1),
                       'xaxis': 'D_{V*H 0^{-}}',
                       'fold' : 3
                     }

variables['kd_Vh_hp'] = { 'name' : 'kd_Vh_hp',
                       'range': (10,0,1),
                       'xaxis': 'D_{V*H 0^{+}}',
                       'fold' : 3
                     }

variables['kd_Vh_hl'] = { 'name' : 'kd_Vh_hl',
                       'range': (10,0,1),
                       'xaxis': 'D_{V*H 0^{#Lambda 1}}',
                       'fold' : 3
                     }

'''
variables['kd_Vh_mixhm'] = { 'name' : 'kd_Vh_mixhm',
                          'range': (10,-1,1),
                          'xaxis': 'D_{V*H CP}',
                          'fold' : 3
                        }

variables['kd_Vh_mixhp'] = { 'name' : 'kd_Vh_mixhp',
                          'range': (10,-1,1),
                          'xaxis': 'D_{V*H Int}',
                          'fold' : 3
                        }
'''
