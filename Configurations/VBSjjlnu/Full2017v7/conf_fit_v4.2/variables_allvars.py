
##############################################
# now variables to plot
# Include also variables to be plotted

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
                        'range' : (50,-2.5,2.5),  
                        'xaxis' : 'Lepton #eta', 
                        'fold' : 3
                        }


variables['Lepton_pt'] = {   'name': 'Lepton_pt[0]',      
                        'range' : (40,0,500),  
                        'xaxis' : 'Lepton pt', 
                        'fold' : 3
                        }    

variables['Lepton_pt_zoom'] = {   'name': 'Lepton_pt[0]',      
                        'range' : (40,0,200),  
                        'xaxis' : 'Lepton pt', 
                        'fold' : 3
                        }   

# #delta angles between the VBS jets
# variables['deltaeta_vbs'] = {   'name': 'deltaeta_vbs',      
#                         'range' : (18,2.5,9),  
#                         'xaxis' : '#Delta#eta VBS jets', 
#                         'fold' : 3,
#                         }    


variables['deltaphi_vbs'] = {   'name': 'deltaphi_vbs',      
                        'range' : (30,0,3.5),  
                        'xaxis' : '#Delta#phi VBS jets', 
                        'fold' : 3
                        }


#MET
variables['PuppiMET'] = {   'name': 'PuppiMET_pt',      
                        'range' : (40,30,300),  
                        'xaxis' : 'PuppiMET_pt', 
                        'fold' : 3
                        }

variables['PuppiMET_phi'] = {   'name': 'PuppiMET_phi',      
                        'range' : (30,-3.14,3.14),  
                        'xaxis' : 'PuppiMET_phi', 
                        'fold' : 3
                        }


# # VBS vars
# variables['mjj_vbs'] = {   'name': 'mjj_vbs',      
#                         'range' : (50,200,4000) , 
#                         'xaxis' : 'M_{jj} VBS', 
#                         'fold' : 3,
#                         'blind':  [1500,4000]
# }


variables['vbs_0_pt_res'] = {   'name': 'vbs_0_pt',      
                        'range' : (40,50,400),  
                        'xaxis' : 'leading VBS jet pt', 
                        'fold' : 3, 
                        'cuts': res_cuts
                        }


variables['vbs_0_pt_boost'] = {   'name': 'vbs_0_pt',      
                        'range' : (50,50,600),  
                        'xaxis' : 'leading VBS jet pt', 
                        'fold' : 3, 
                        'cuts': boost_cuts
                        }


variables['vbs_1_pt'] = {   'name': 'vbs_1_pt',      
                        'range' : (40,30,400),  
                        'xaxis' : 'trailing VBS jet pt', 
                        'fold' : 3
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
                        'range' : (40,0,185),  
                        'xaxis' : 'Mass T W leptonic', 
                        'fold' : 3
                        }


variables['whad_pt_res'] = {
            'name': "w_had_pt",
            'range': (30, 0, 200),
            'xaxis': 'W hadronic Pt',
            'fold': 3 ,
            'cuts': res_cuts
}

# variables['whad_pt_boost'] = {
#             'name': "w_had_pt",
#             'range': (40, 200, 900),
#             'xaxis': 'W hadronic Pt',
#             'fold': 3 ,
#             'cuts': boost_cuts
# }


# variables['mjj_vjet'] = {   'name': 'mjj_vjet',      
#                         'range' : (60,40,200),  
#                         'xaxis' : 'Whad reco mass', 
#                         'fold' : 3
#                         }


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
                        'range' : (50,-1.1,1.1),  
                        'xaxis' : 'Zepp. lepton', 
                        'fold' : 3
                        }


#jets 
variables['nJets'] = {   'name': 'nJets30',      
                        'range' : (8,2,10),  
                        'xaxis' : 'nJets cleaned from Ak8 >= 30 GeV', 
                        'fold' : 3
                        }


# # #Zvjets_high
variables['Zvjets_0'] = {   'name': 'Zvjets_0',      
                        'range' : (50,-1.1,1.1),  
                        'xaxis' : 'Zep. leading V-jet ', 
                        'fold' : 3
                        }

# variables['Zvjets_1'] = {   'name': 'Zvjets_1',      
#                         'range' : (30,-3,3),  
#                         'xaxis' : 'Zep. trailing V-jet ', 
#                         'fold' : 3
#                         }

# #Zlep


# # #Asym
variables['Asym_vbs'] = {   'name': 'Asym_vbs',      
                        'range' : (30,0,1),  
                        'xaxis' : 'Pt asymmetry VBS jets', 
                        'fold' : 3
                        }

# variables['Asym_vjet'] = {   'name': 'Asym_vjet',      
#                         'range' : (30,0,1),  
#                         'xaxis' : 'Pt asymmetry V-jets', 
#                         'fold' : 3
#                         }

 
# variables['Mw_lep_reco'] = {   'name': 'Mw_lep',      
#                         'range' : (40,0,250),  
#                         'xaxis' : 'Mass W leptonic', 
#                         'fold' : 3
#                         }

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

# #Centrality variables
# variables['Centr_vbs'] = {   'name': 'Centr_vbs',      
#                         'range' : (30,0,3),  
#                         'xaxis' : 'VBS centrality', 
#                         'fold' : 3
#                         }

variables['Centr_ww'] = {   'name': 'Centr_ww',      
                        'range' : (40,-4,4),  
                        'xaxis' : 'W boson centrality', 
                        'fold' : 3
                        }


variables['nvtx_good'] = {  'name': 'PV_npvsGood',
                        'range': (100, 0,100),
                        'xaxis': 'N. primary vertices (good)',
                        'fold': 3
                }

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



#######
# QGL vars  morphed

variables['vbs_0_qglmorphed_boost'] = {  'name': 'vbs_0_qglmorphed_boost',
                        'range': (40,0.,1.),
                        'xaxis': 'Qgl VBS 0 jet',
                        'fold': 3,
                        'cuts': boost_cuts
                }

variables['vbs_1_qglmorphed_boost'] = {  'name': 'vbs_1_qglmorphed_boost',
                        'range': (40,0.,1.),
                        'xaxis': 'Qgl VBS 1 jet',
                        'fold': 3,
                        'cuts': boost_cuts
                }

variables['vbs_0_qglmorphed_res'] = {  'name': 'vbs_0_qglmorphed_res',
                        'range': (40,0.,1.),
                        'xaxis': 'Qgl VBS 0 jet',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vbs_1_qglmorphed_res'] = {  'name': 'vbs_1_qglmorphed_res',
                        'range': (40,0.,1.),
                        'xaxis': 'Qgl VBS 1 jet',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vjet_0_qglmorphed_res'] = {  'name': 'vjet_0_qglmorphed_res',
                        'range': (40,0.,1.),
                        'xaxis': 'Qgl Vjet 0 jet',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vjet_1_qglmorphed_res'] = {  'name': 'vjet_1_qglmorphed_res',
                        'range': (40,0.,1.),
                        'xaxis': 'Qgl Vjet 1 jet',
                        'fold': 3,
                        'cuts': res_cuts
                }


#############
variables['vbs_jets_pt'] = {  'name': 'tag_jets_systems_pt[0]',
                        'range': (40,0.,600),
                        'xaxis': 'Pt of VBS jets system',
                        'fold': 3
                }