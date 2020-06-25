# variabeadines

#variables = {}
    

variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }


#jets 

variables['nJets'] = {   'name': 'Sum$(CleanJet_pt >= 30)',      
                        'range' : (10,0,10),  
                        'xaxis' : 'nJets >= 30 GeV', 
                        'fold' : 3
                        }

#leptons

variables['Lepton_eta'] = {   'name': 'abs(Lepton_eta[0])',      
                        'range' : (50,0,2.5),  
                        'xaxis' : 'Lepton #eta', 
                        'fold' : 3
                        }


variables['Lepton_pt'] = {   'name': 'Lepton_pt[0]',      
                        'range' : (50,0,300),  
                        'xaxis' : 'Lepton_pt', 
                        'fold' : 3
                        }                       

#MET

variables['PuppiMET'] = {   'name': 'PuppiMET_pt',      
                        'range' : (60,0,500),  
                        'xaxis' : 'PuppiMET_pt', 
                        'fold' : 3
                        }

variables['MET_pt'] = {   'name': 'MET_pt',      
                        'range' : (60,0,500),  
                        'xaxis' : 'MET_pt', 
                        'fold' : 3
                        }
 
# recontructed MET
variables['recoMET'] = {   'name': 'recoMET',      
                        'range' : (60,0,300),  
                        'xaxis' : 'recoMET', 
                        'fold' : 3
                        }

variables['recoMET_pz'] = {   'name': 'recoMET_pz',      
                        'range' : (60,-700,700),  
                        'xaxis' : 'recoMET_pz', 
                        'fold' : 3
                        }

# VBS vars
variables['mjj_vbs'] = {   'name': 'mjj_vbs',      
                        'range' : (80,200,2700),  
                        'xaxis' : 'mjj_vbs', 
                        'fold' : 3
                        }

variables['mjj_vjet'] = {   'name': 'mjj_vjet',      
                        'range' : (80,0,200),  
                        'xaxis' : 'mjj_vjet', 
                        'fold' : 3
                        }


#vbs jets pt
variables['vbs_pt_high'] = {   'name': 'vbs_pt_high',      
                        'range' : (80,0,700),  
                        'xaxis' : 'vbs_pt_high', 
                        'fold' : 3
                        }

variables['vbs_pt_low'] = {   'name': 'vbs_pt_low',      
                        'range' : (80,15,200),  
                        'xaxis' : 'vbs_pt_low', 
                        'fold' : 3
                        }

# vjet jets
variables['vjet_pt_high'] = {   'name': 'vjet_pt_high',      
                        'range' : (80,0,700),  
                        'xaxis' : 'vjet_pt_high', 
                        'fold' : 3
                        }

variables['vjet_pt_low'] = {   'name': 'vjet_pt_low',      
                        'range' : (80,15,200),  
                        'xaxis' : 'vbs_pt_low', 
                        'fold' : 3
                        }

#
variables['vbs_etaprod'] = {   'name': 'vbs_etaprod',      
                        'range' : (70,-10,10),  
                        'xaxis' : 'vbs_etaprod', 
                        'fold' : 3
                        }

#vbs etas
variables['vbs_eta_high'] = {   'name': 'vbs_eta_high',      
                        'range' : (50,0,5),  
                        'xaxis' : 'vbs_#eta_high', 
                        'fold' : 3
                        }

variables['vbs_eta_low'] = {   'name': 'vbs_eta_low',      
                        'range' : (50,0,5),  
                        'xaxis' : 'vbs_#eta_low', 
                        'fold' : 3
                        }

variables['vjet_eta_high'] = {   'name': 'vjet_eta_high',      
                        'range' : (50,0,5),  
                        'xaxis' : 'vjet_#eta_high', 
                        'fold' : 3
                        }

variables['vjet_eta_low'] = {   'name': 'vjet_eta_low',      
                        'range' : (50,0,5),  
                        'xaxis' : 'vjet_#eta_low', 
                        'fold' : 3
                        }

#delta angles between the VBS jets
variables['deltaeta_vbs'] = {   'name': 'deltaeta_vbs',      
                        'range' : (60,0,9),  
                        'xaxis' : '#Delta#eta_vbs', 
                        'fold' : 3
                        }

variables['deltaphi_vbs'] = {   'name': 'deltaphi_vbs',      
                        'range' : (40,0,3.5),  
                        'xaxis' : '#Delta#phi_vbs', 
                        'fold' : 3
                        }

# #delta angles between the VBS jets and lepton
# variables['deltaphi_lep_vbs_high'] = {   'name': 'deltaphi_lep_vbs_high',      
#                         'range' : (40,0,3.5),  
#                         'xaxis' : '#Delta#phi_lep_vbs_high', 
#                         'fold' : 3
#                         }

# variables['deltaphi_lep_vbs_low'] = {   'name': 'deltaphi_lep_vbs_low',      
#                         'range' : (35,0,3.5),  
#                         'xaxis' : '#Delta#phi_lep_vbs_low', 
#                         'fold' : 3
#                         }

# variables['deltaeta_lep_vbs_high'] = {   'name': 'deltaeta_lep_vbs_high',      
#                         'range' : (60,0,6.5),  
#                         'xaxis' : '#Delta#eta_lep_vbs_high', 
#                         'fold' : 3
#                         }                        

# variables['deltaeta_lep_vbs_low'] = {   'name': 'deltaeta_lep_vbs_low',      
#                         'range' : (50,0,7),  
#                         'xaxis' : '#Delta#eta_lep_vbs_low', 
#                         'fold' : 3
#                         }

# #delta R between the nearest VBS/fat jet and lepton
# variables['deltaR_lep_vbs'] = {   'name': 'deltaR_lep_vbs',      
#                         'range' : (60,0,5.5),  
#                         'xaxis' : '#Delta_R_lep_vbs', 
#                         'fold' : 3
#                         }

# variables['deltaR_lep_FatJet'] = {   'name': 'deltaR_lep_vjet',      
#                         'range' : (80,0,6),  
#                         'xaxis' : '#Delta_R_lep_FatJet', 
#                         'fold' : 3
#                         }
# #angle nu lep
# variables['deltaphi_lep_nu'] = {   'name': 'deltaphi_lep_nu',      
#                         'range' : (40,0,3.5),  
#                         'xaxis' : '#Delta#phi_lep_nu', 
#                         'fold' : 3
#                         }

# variables['deltaeta_lep_nu'] = {   'name': 'deltaeta_lep_nu',      
#                         'range' : (60,0,7),  
#                         'xaxis' : '#Delta#eta_lep_nu', 
#                         'fold' : 3
#                         }

# variables['deltaR_lep_nu'] = {   'name': 'deltaR_lep_nu',      
#                         'range' : (60,0,7.5),  
#                         'xaxis' : '#Delta_R_lep_nu', 
#                         'fold' : 3
#                         }

# #deltaR_vbs
# variables['deltaR_vbs'] = {   'name': 'deltaR_vbs',      
#                         'range' : (80,0,9.5),  
#                         'xaxis' : '#Delta_R_vbs', 
#                         'fold' : 3
#                         }

# #Rvjets_high
# variables['Rvjets_high'] = {   'name': 'Rvjets_high',      
#                         'range' : (50,0,80),  
#                         'xaxis' : 'Rvjets_high', 
#                         'fold' : 3
#                         }

#Zvjets_high
variables['Zvjets_high'] = {   'name': 'Zvjets_high',      
                        'range' : (60,-3,3),  
                        'xaxis' : 'Zep. leading V-jet ', 
                        'fold' : 3
                        }

variables['Zvjets_low'] = {   'name': 'Zvjets_low',      
                        'range' : (60,-3,3),  
                        'xaxis' : 'Zep. trailing V-jet ', 
                        'fold' : 3
                        }

#Zlep
variables['Zlep'] = {   'name': 'Zlep',      
                        'range' : (60,-3,3),  
                        'xaxis' : 'Zlep', 
                        'fold' : 3
                        }

#Asym
variables['Asym_vbs'] = {   'name': 'Asym_vbs',      
                        'range' : (45,0,1),  
                        'xaxis' : 'Asym_vbs', 
                        'fold' : 3
                        }

#Mw_lep ??
variables['Mw_lep'] = {   'name': 'Mw_lep',      
                        'range' : (60,0,250),  
                        'xaxis' : 'Mw_lep', 
                        'fold' : 3
                        }

variables['w_lep_pt'] = {   'name': 'w_lep_pt',      
                        'range' : (50,0,600),  
                        'xaxis' : 'w_lep_pt', 
                        'fold' : 3
                        }

variables['Mww'] = {   'name': 'Mww',      
                        'range' : (60,0,1800),  
                        'xaxis' : 'Mww', 
                        'fold' : 3
                        }

variables['R_ww'] = {   'name': 'R_ww',      
                        'range' : (80,0,80),  
                        'xaxis' : 'R_ww', 
                        'fold' : 3
                        }

variables['R_mw'] = {   'name': 'R_mw',      
                        'range' : (80,0,0.6),  
                        'xaxis' : 'R_mw', 
                        'fold' : 3
                        }

variables['A_ww'] = {   'name': 'A_ww',      
                        'range' : (60,0,1.1),  
                        'xaxis' : 'A_ww', 
                        'fold' : 3
                        }

#???
variables['Centr_vbs'] = {   'name': 'Centr_vbs',      
                        'range' : (50,0,3),  
                        'xaxis' : 'Centr_vbs', 
                        'fold' : 3
                        }

variables['Centr_ww'] = {   'name': 'Centr_ww',      
                        'range' : (70,-6,5),  
                        'xaxis' : 'Centr_ww', 
                        'fold' : 3
                        }

# variables['Lep_proj'] = {   'name': 'Lep_proj',      
#                         'range' : (50,-50,500),  
#                         'xaxis' : 'Lep_proj', 
#                         'fold' : 3
#                         }

# variables['Lep_projw'] = {   'name': 'Lep_projw',      
#                         'range' : (50,0,1),  
#                         'xaxis' : 'Lep_projw', 
#                         'fold' : 3
#                         }

variables['Ht'] = {   'name': 'Ht',      
                        'range' : (60,0,1800),  
                        'xaxis' : 'Ht', 
                        'fold' : 3
                        }


#