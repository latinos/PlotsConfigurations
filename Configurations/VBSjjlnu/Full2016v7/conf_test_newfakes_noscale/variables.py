
res_cuts = [ c for c in cuts if 'res' in c]
boost_cuts = [ c for c in cuts if 'boost' in c]


variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }



# # #leptons

variables['Lepton_eta_abs'] = {   'name': 'abs(Lepton_eta[0])',      
                        'range' : (40,0,2.5),  
                        'xaxis' : 'Lepton #eta', 
                        'fold' : 3
                        }

variables['Lepton_eta'] = {   'name': 'Lepton_eta[0]',      
                        'range' : (60,-2.5,2.5),  
                        'xaxis' : 'Lepton #eta', 
                        'fold' : 3
                        }


variables['Lepton_pt'] = {   'name': 'Lepton_pt[0]',      
                        'range' : (40,0,500),  
                        'xaxis' : 'Lepton pt', 
                        'fold' : 3
                        }    


#delta angles between the VBS jets
variables['deltaeta_vbs'] = {   'name': 'deltaeta_vbs',      
                        'range' : (18,2.5,9),  
                        'xaxis' : '#Delta#eta VBS jets', 
                        'fold' : 3,
                        }    


variables['deltaphi_vbs'] = {   'name': 'deltaphi_vbs',      
                        'range' : (30,0,3.5),  
                        'xaxis' : '#Delta#phi VBS jets', 
                        'fold' : 3
                        }


#MET
variables['PuppiMET'] = {   'name': 'PuppiMET_pt',      
                        'range' : (30,0,300),  
                        'xaxis' : 'PuppiMET_pt', 
                        'fold' : 3
                        }

variables['PuppiMET_phi'] = {   'name': 'PuppiMET_phi',      
                        'range' : (30,-3.14,3.14),  
                        'xaxis' : 'PuppiMET_phi', 
                        'fold' : 3
                        }


# variables['LHE_HT'] = {'name': 'LHE_HT',      
#                         'range' : (60, 0, 1500),  
#                         'xaxis' : 'LHE HT', 
#                         'fold' : 3
# }

# variables['LHE_HT_zoom'] = {'name': 'LHE_HT',      
#                         'range' : (50, 0, 750),  
#                         'xaxis' : 'LHE HT', 
#                         'fold' : 3
# }

variables['MET_sumEt'] = {'name': 'MET_sumEt',      
                        'range' : (60, 500, 4000),  
                        'xaxis' : 'MET sumEt', 
                        'fold' : 3
}

variables['MET_sumEt_zoom'] = {'name': 'MET_sumEt',      
                        'range' : (50, 500, 2000),  
                        'xaxis' : 'MET sumEt', 
                        'fold' : 3
}

# VBS vars
variables['mjj_vbs'] = {   'name': 'mjj_vbs',      
                        'range' : (20,200,4000) , 
                        'xaxis' : 'M_{jj} VBS', 
                        'fold' : 3,
                        'blind':  [1500,4000]
}


variables['vbs_0_pt_res'] = {   'name': 'vbs_0_pt',      
                        'range' : (40,50,400),  
                        'xaxis' : 'leading VBS jet pt', 
                        'fold' : 3,
                        'cuts': res_cuts
                        }


variables['vbs_1_pt_res'] = {   'name': 'vbs_1_pt',      
                        'range' : (40,30,400),  
                        'xaxis' : 'trailing VBS jet pt', 
                        'fold' : 3,
                        'cuts': res_cuts
                        } 

variables['vbs_0_pt_boost'] = {   'name': 'vbs_0_pt',      
                        'range' : (50,50,700),  
                        'xaxis' : 'leading VBS jet pt', 
                        'fold' : 3,
                        'cuts': boost_cuts
                        }


variables['vbs_1_pt_boost'] = {   'name': 'vbs_1_pt',      
                        'range' : (50,30,700),  
                        'xaxis' : 'trailing VBS jet pt', 
                        'fold' : 3,
                        'cuts': boost_cuts
                        } 


variables['vjet_0_pt'] = {   'name': 'vjet_0_pt',      
                        'range' : (40,30,400),  
                        'xaxis' : 'leading V-jet pt', 
                        'fold' : 3,
                        'cuts': res_cuts
                        }

variables['vjet_1_pt'] = {   'name': 'vjet_1_pt',      
                        'range' : (40,30,400),  
                        'xaxis' : 'trailing V-jet pt', 
                        'fold' : 3,
                        'cuts': res_cuts
                        }


variables['Mtw_lep'] = {   'name': 'Mtw_lep',      
                        'range' : (40,0,200),  
                        'xaxis' : 'Mass T W leptonic', 
                        'fold' : 3
                        }


variables['whad_pt_boost'] = {
            'name': "w_had_pt",
            'range': (50, 0, 200),
            'xaxis': 'W hadronic Pt',
            'fold': 3 ,
            'cuts': boost_cuts
}

variables['whad_pt_boost'] = {
            'name': "w_had_pt",
            'range': (60, 200, 800),
            'xaxis': 'W hadronic Pt',
            'fold': 3 ,
            'cuts': boost_cuts
}

variables['whad_pt_boost_zoom'] = {
            'name': "w_had_pt",
            'range': (60, 200, 400),
            'xaxis': 'W hadronic Pt',
            'fold': 3 ,
            'cuts': boost_cuts
}


variables['mjj_vjet'] = {   'name': 'mjj_vjet',      
                        'range' : (60,40,250),  
                        'xaxis' : 'Whad reco mass', 
                        'fold' : 3
                        }


variables['vjet_0_eta'] = {   'name': 'vjet_0_eta',      
                        'range' : (40,-5,5),  
                        'xaxis' : 'leading Vjet #eta', 
                        'fold' : 3
                        }

variables['vjet_1_eta'] = {   'name': 'vjet_1_eta',      
                        'range' : (40,-5,5),  
                        'xaxis' : 'trailing Vjet #eta', 
                        'fold' : 3,
                        'cuts': res_cuts
                        }

variables['vjet_0_eta_abs'] = {   'name': 'abs(vjet_0_eta)',      
                        'range' : (30,0,5),  
                        'xaxis' : 'leading Vjet #eta', 
                        'fold' : 3
                        }

variables['vjet_1_eta_abs'] = {   'name': 'abs(vjet_1_eta)',      
                        'range' : (30,0,5),  
                        'xaxis' : 'trailing Vjet #eta', 
                        'fold' : 3,
                        'cuts': res_cuts
                        }


# # #
variables['vbs_0_eta'] = {   'name': 'vbs_0_eta',      
                        'range' : (40,-5,5),  
                        'xaxis' : 'leading VBS jet #eta', 
                        'fold' : 3
                        }

variables['vbs_1_eta'] = {   'name': 'vbs_1_eta',      
                        'range' : (40,-5,5),  
                        'xaxis' : 'trailing VBS jet #eta', 
                        'fold' : 3
                        }

variables['vbs_0_eta_abs'] = {   'name': 'abs(vbs_0_eta)',      
                        'range' : (30,0,5),  
                        'xaxis' : 'leading VBS jet #eta', 
                        'fold' : 3
                        }

variables['vbs_1_eta_abs'] = {   'name': 'abs(vbs_1_eta)',      
                        'range' : (30,0,5),  
                        'xaxis' : 'trailing VBS jet #eta', 
                        'fold' : 3
                        }



variables['Zlep'] = {   'name': 'Zlep',      
                        'range' : (50,-1.2,1.2),  
                        'xaxis' : 'Zepp. lepton', 
                        'fold' : 3
                        }


# variables['deltaR_lep_vbs'] = {   'name': 'deltaR_lep_vbs',      
#                         'range' : (30,0,4),  
#                         'xaxis' : '#Delta R Lepton VBS jet', 
#                         'fold' : 3
#                         }

# variables['deltaR_lep_vjet'] = {   'name': 'deltaR_lep_vjet',      
#                         'range' : (30,0,4),  
#                         'xaxis' : '#Delta R Lepton V-jet', 
#                         'fold' : 3
#                         }

# variables['deltaR_lep_nu'] = {   'name': 'deltaR_lep_nu',      
#                         'range' : (30,0,4),  
#                         'xaxis' : '#Delta R Lepton neutrino', 
#                         'fold' : 3
#                         }


# # variables['MET_pt'] = {   'name': 'MET_pt',      
# #                         'range' : (30,0,300),  
# #                         'xaxis' : 'MET_pt', 
# #                         'fold' : 3


# # variables['recoMET_pz'] = {   'name': 'recoMET_pz',      
# #                         'range' : (40,-700,700),  
# #                         'xaxis' : 'recoMET pz', 
# #                         'fold' : 3
# #                         }
                

#jets 
variables['nJets'] = {   'name': 'Sum$(CleanJet_pt[CleanJetNotFat_jetIdx] >= 30)',      
                        'range' : (8,2,10),  
                        'xaxis' : 'nJets cleaned from Ak8 >= 30 GeV', 
                        'fold' : 3
                        }

# # # Minimum pt 20 GeV in NanoGardening step
# variables['N_jets_central'] = {   'name': 'N_jets_central',      
#                         'range' : (10,0,10),  
#                         'xaxis' : '#jets between VBS jets', 
#                         'fold' : 3
#                         }


# variables['N_jets_forward'] = {   'name': 'N_jets_forward',      
#                         'range' : (10,0,10),  
#                         'xaxis' : '#jets outside VBS jets', 
#                         'fold' : 3
#                     }



# variables['vbs_etaprod'] = {   'name': 'vbs_0_eta*vbs_1_eta',      
#                         'range' : (30,-10,10),  
#                         'xaxis' : 'VBS jets #eta1#eta2', 
#                         'fold' : 3
#                          }



# variables["vbs_index_0"] = {   'name': 'VBS_jets_maxmjj_massWZ[0]',      
#                         'range' : (10,0,10),  
#                         'xaxis' : 'Index leading VBS jet', 
#                         'fold' : 3
#                         }

# variables["vbs_index_1"] = {   'name': 'VBS_jets_maxmjj_massWZ[1]',      
#                         'range' : (10,0,10),  
#                         'xaxis' : 'Index trailing VBS jet', 
#                         'fold' : 3
#                         }

# variables["vjet_index_0"] = {   'name': 'V_jets_maxmjj_massWZ[0]',      
#                         'range' : (10,0,10),  
#                         'xaxis' : 'Index leading V-jet', 
#                         'fold' : 3
#                         }

# variables["vjet_index_1"] = {   'name': 'V_jets_maxmjj_massWZ[1]',      
#                         'range' : (10,0,10),  
#                         'xaxis' : 'Index trailing V-jet', 
#                         'fold' : 3
#                         }

# # # #Zvjets_high
# variables['Zvjets_0'] = {   'name': 'Zvjets_0',      
#                         'range' : (30,-3,3),  
#                         'xaxis' : 'Zep. leading V-jet ', 
#                         'fold' : 3
#                         }

# variables['Zvjets_1'] = {   'name': 'Zvjets_1',      
#                         'range' : (30,-3,3),  
#                         'xaxis' : 'Zep. trailing V-jet ', 
#                         'fold' : 3
#                         }

# # #Zlep


# # # #Asym
# variables['Asym_vbs'] = {   'name': 'Asym_vbs',      
#                         'range' : (30,0,1),  
#                         'xaxis' : 'Pt asymmetry VBS jets', 
#                         'fold' : 3
#                         }

# variables['Asym_vjet'] = {   'name': 'Asym_vjet',      
#                         'range' : (30,0,1),  
#                         'xaxis' : 'Pt asymmetry V-jets', 
#                         'fold' : 3
#                         }

 
variables['Mw_lep_reco'] = {   'name': 'Mw_lep',      
                        'range' : (40,0,250),  
                        'xaxis' : 'Mass W leptonic', 
                        'fold' : 3
                        }

variables['w_lep_pt'] = {   'name': 'w_lep_pt',      
                        'range' : (40,0,600),  
                        'xaxis' : 'Pt W leptonic', 
                        'fold' : 3
                        }

variables['Mww'] = {   'name': 'Mww',      
                        'range' : (30,0,2000),  
                        'xaxis' : 'Mww', 
                        'fold' : 3,
                         'blind': [1000,2000]
                        }

# variables['R_ww'] = {   'name': 'R_ww',      
#                         'range' : (30,0,80),  
#                         'xaxis' : 'R_ww', 
#                         'fold' : 3
#                         }

# variables['R_mw'] = {   'name': 'R_mw',      
#                         'range' : (30,0,0.6),  
#                         'xaxis' : 'R_mw', 
#                         'fold' : 3
#                         }

# variables['A_ww'] = {   'name': 'A_ww',      
#                         'range' : (30,0,1.1),  
#                         'xaxis' : 'A_ww', 
#                         'fold' : 3
#                         }

# # #Centrality variables
# variables['Centr_vbs'] = {   'name': 'Centr_vbs',      
#                         'range' : (30,0,3),  
#                         'xaxis' : 'VBS centrality', 
#                         'fold' : 3
#                         }

# variables['Centr_ww'] = {   'name': 'Centr_ww',      
#                         'range' : (30,-6,5),  
#                         'xaxis' : 'W boson centrality', 
#                         'fold' : 3
#                         }


variables['nvtx_good'] = {  'name': 'PV_npvsGood',
                        'range': (100, 0,100),
                        'xaxis': 'N. primary vertices (good)',
                        'fold': 3
                }

############# 
# new fat jet vars

# variables['fatjet_TvsQCD'] = {  'name': 'fatjet_TvsQCD',
#                         'range': (40,0,1),
#                         'xaxis': 'fatjet T vs QCD',
#                         'fold': 3,
#                         'cuts': boost_cuts
#                 }


# variables['fatjet_ZvsQCD'] = {  'name': 'fatjet_ZvsQCD',
#                         'range': (40,0,1),
#                         'xaxis': 'fatjet Z vs QCD',
#                         'fold': 3,
#                         'cuts': boost_cuts
#                 }


# variables['fatjet_WvsQCD'] = {  'name': 'fatjet_WvsQCD',
#                         'range': (40,0,1),
#                         'xaxis': 'fatjet T vs QCD',
#                         'fold': 3,
#                         'cuts': boost_cuts
# #                 }

# variables['fatjet_subjet1_pt'] = {  'name': 'fatjet_subjet1_pt',
#                         'range': (40,30,400),
#                         'xaxis': 'FatJet leading subjet pt',
#                         'fold': 3,
#                         'cuts': boost_cuts
#                 }

# variables['fatjet_subjet2_pt'] = {  'name': 'fatjet_subjet2_pt',
#                         'range': (40,30,400),
#                         'xaxis': 'FatJet subleading subjet pt',
#                         'fold': 3,
#                         'cuts': boost_cuts
#                 }

# variables['fatjet_subjet_ptratio'] = {  'name': 'fatjet_subjet_ptratio',
#                         'range': (50,0.,1.),
#                         'xaxis': 'FatJet subleading/leading subjet pt',
#                         'fold': 3,
#                         'cuts': boost_cuts
#                 }

#######
# QGL vars 

variables['vbs_0_qgl_boost'] = {  'name': 'vbs_0_qgl_boost',
                        'range': (40,0.,1.),
                        'xaxis': 'Qgl VBS 0 jet',
                        'fold': 3,
                        'cuts': boost_cuts
                }

variables['vbs_1_qgl_boost'] = {  'name': 'vbs_1_qgl_boost',
                        'range': (40,0.,1.),
                        'xaxis': 'Qgl VBS 1 jet',
                        'fold': 3,
                        'cuts': boost_cuts
                }

variables['vbs_0_qgl_res'] = {  'name': 'vbs_0_qgl_res',
                        'range': (40,0.,1.),
                        'xaxis': 'Qgl VBS 0 jet',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vbs_1_qgl_res'] = {  'name': 'vbs_1_qgl_res',
                        'range': (40,0.,1.),
                        'xaxis': 'Qgl VBS 1 jet',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vjet_0_qgl_res'] = {  'name': 'vjet_0_qgl_res',
                        'range': (40,0.,1.),
                        'xaxis': 'Qgl Vjet 0 jet',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vjet_1_qgl_res'] = {  'name': 'vjet_1_qgl_res',
                        'range': (40,0.,1.),
                        'xaxis': 'Qgl Vjet 1 jet',
                        'fold': 3,
                        'cuts': res_cuts
                }