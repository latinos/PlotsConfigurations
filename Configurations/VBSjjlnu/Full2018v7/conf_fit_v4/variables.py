# ## variabeadines
import numpy as np
## variabeadines
from itertools import chain


phase_spaces_boost = []
phase_spaces_res = []

for fl in ["ele", "mu"]:
    for cat in ["sig", "wjetcr", "topcr"]:
        phase_spaces_boost.append("boost_{}_{}".format(cat, fl))
        phase_spaces_res.append("res_{}_{}".format(cat, fl))

phase_spaces_tot = phase_spaces_boost + phase_spaces_res

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
                        'range' : (16,2,8),  
                        'xaxis' : '#Delta#eta VBS jets', 
                        'fold' : 3,
                        }    
        

# variables["deta_jetpt_CR_res"] = {
#             'name': 'detavbs_jetpt_bin',
#             'range': (5, 2.5, 7.5),
#             'axis': '#Delta#eta VBS jets : VBS trailing jet Pt bins (resolved)',
#             'fold': 0,
#             'cuts': phase_spaces_res
# }

# variables["deta_CR_boost"] = {
#             'name': 'detavbs_jetpt_bin',
#             'range': (2, 0.5, 2.5),
#             'axis': '#Delta#eta VBS jets : VBS trailing jet Pt bins (boosted)',
#             'fold': 0,
#             'cuts': phase_spaces_boost
# }

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


# VBS vars
variables['mjj_vbs_morebins'] = {   'name': 'mjj_vbs',      
                        'range' : (20,200,4000) , 
                        'xaxis' : 'M_{jj} VBS', 
                        'fold' : 3,
                        'blind': { c:[1000,4000] for c in phase_spaces_tot if "_sig_" in c}
}

# variables['mjj_vbs'] = {   'name': 'mjj_vbs',      
#                         'range' : ([200,300,400,500,600,700,800,900,1000,1200,1400,1600,1800,2000,4000],) , 
#                         'xaxis' : 'M_{jj} VBS', 
#                         'fold' : 3,
#                         'blind': { c:[1000,4000] for c in phase_spaces_tot if "_sig_" in c}
#                         }

variables['vbs_0_pt'] = {   'name': 'vbs_0_pt',      
                        'range' : (30,0,400),  
                        'xaxis' : 'leading VBS jet pt', 
                        'fold' : 3
                        }


variables['vbs_1_pt'] = {   'name': 'vbs_1_pt',      
                        'range' : (30,0,400),  
                        'xaxis' : 'trailing VBS jet pt', 
                        'fold' : 3
                        } 



variables['Mtw_lep'] = {   'name': 'Mtw_lep',      
                        'range' : (30,0,300),  
                        'xaxis' : 'Mass T W leptonic', 
                        'fold' : 3
                        }

variables['whad_pt'] = {
            'name': "w_had_pt",
            'range': (30, 0, 200),
            'xaxis': 'W hadronic Pt',
            'fold': 3 ,
            'cuts': phase_spaces_res
}



variables['deltaphi_vbs'] = {   'name': 'deltaphi_vbs',      
                        'range' : (30,0,3.5),  
                        'xaxis' : '#Delta#phi VBS jets', 
                        'fold' : 3
                        }


# variables['mjj_vjet'] = {   'name': 'mjj_vjet',      
#                         'range' : (42,40,250),  
#                         'xaxis' : 'Whad reco mass', 
#                         'fold' : 3
#                         }

variables['mjj_vjet_morebins'] = {   'name': 'mjj_vjet',      
                        'range' : (50,40,200),  
                        'xaxis' : 'Whad reco mass', 
                        'fold' : 3
                        }


variables['vjet_0_pt'] = {   'name': 'vjet_0_pt',      
                        'range' : (30,30,400),  
                        'xaxis' : 'leading V-jet pt', 
                        'fold' : 3
                        }

variables['vjet_1_pt'] = {   'name': 'vjet_1_pt',      
                        'range' : (30,30,200),  
                        'xaxis' : 'trailing V-jet pt', 
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
                        'fold' : 3
                        }

variables['vjet_0_eta_abs'] = {   'name': 'abs(vjet_0_eta)',      
                        'range' : (30,0,5),  
                        'xaxis' : 'leading Vjet #eta', 
                        'fold' : 3
                        }

variables['vjet_1_eta_abs'] = {   'name': 'abs(vjet_1_eta)',      
                        'range' : (30,0,5),  
                        'xaxis' : 'trailing Vjet #eta', 
                        'fold' : 3
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
                        'range' : (40,-1.5,1.5),  
                        'xaxis' : 'Zepp. lepton', 
                        'fold' : 3
                        }


variables['deltaR_lep_vbs'] = {   'name': 'deltaR_lep_vbs',      
                        'range' : (30,0,4),  
                        'xaxis' : '#Delta R Lepton VBS jet', 
                        'fold' : 3
                        }

variables['deltaR_lep_vjet'] = {   'name': 'deltaR_lep_vjet',      
                        'range' : (30,0,4),  
                        'xaxis' : '#Delta R Lepton V-jet', 
                        'fold' : 3
                        }

variables['deltaR_lep_nu'] = {   'name': 'deltaR_lep_nu',      
                        'range' : (30,0,4),  
                        'xaxis' : '#Delta R Lepton neutrino', 
                        'fold' : 3
                        }


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
variables['N_jets_central'] = {   'name': 'N_jets_central',      
                        'range' : (10,0,10),  
                        'xaxis' : '#jets between VBS jets', 
                        'fold' : 3
                        }


variables['N_jets_forward'] = {   'name': 'N_jets_forward',      
                        'range' : (10,0,10),  
                        'xaxis' : '#jets outside VBS jets', 
                        'fold' : 3
                    }



variables['vbs_etaprod'] = {   'name': 'vbs_0_eta*vbs_1_eta',      
                        'range' : (30,-10,10),  
                        'xaxis' : 'VBS jets #eta1#eta2', 
                        'fold' : 3
                         }



variables["vbs_index_0"] = {   'name': 'VBS_jets_maxmjj_massWZ[0]',      
                        'range' : (10,0,10),  
                        'xaxis' : 'Index leading VBS jet', 
                        'fold' : 3
                        }

variables["vbs_index_1"] = {   'name': 'VBS_jets_maxmjj_massWZ[1]',      
                        'range' : (10,0,10),  
                        'xaxis' : 'Index trailing VBS jet', 
                        'fold' : 3
                        }

variables["vjet_index_0"] = {   'name': 'V_jets_maxmjj_massWZ[0]',      
                        'range' : (10,0,10),  
                        'xaxis' : 'Index leading V-jet', 
                        'fold' : 3
                        }

variables["vjet_index_1"] = {   'name': 'V_jets_maxmjj_massWZ[1]',      
                        'range' : (10,0,10),  
                        'xaxis' : 'Index trailing V-jet', 
                        'fold' : 3
                        }

# # #Zvjets_high
variables['Zvjets_0'] = {   'name': 'Zvjets_0',      
                        'range' : (30,-3,3),  
                        'xaxis' : 'Zep. leading V-jet ', 
                        'fold' : 3
                        }

variables['Zvjets_1'] = {   'name': 'Zvjets_1',      
                        'range' : (30,-3,3),  
                        'xaxis' : 'Zep. trailing V-jet ', 
                        'fold' : 3
                        }

# #Zlep


# # #Asym
variables['Asym_vbs'] = {   'name': 'Asym_vbs',      
                        'range' : (30,0,1),  
                        'xaxis' : 'Pt asymmetry VBS jets', 
                        'fold' : 3
                        }

variables['Asym_vjet'] = {   'name': 'Asym_vjet',      
                        'range' : (30,0,1),  
                        'xaxis' : 'Pt asymmetry V-jets', 
                        'fold' : 3
                        }

 
variables['Mw_lep_reco'] = {   'name': 'Mw_lep',      
                        'range' : (40,0,250),  
                        'xaxis' : 'Mass W leptonic', 
                        'fold' : 3
                        }

variables['w_lep_pt'] = {   'name': 'w_lep_pt',      
                        'range' : (30,0,600),  
                        'xaxis' : 'Pt W leptonic', 
                        'fold' : 3
                        }

variables['Mww'] = {   'name': 'Mww',      
                        'range' : (30,0,2000),  
                        'xaxis' : 'Mww', 
                        'fold' : 3,
                         'blind': { c:[1000,2000] for c in phase_spaces_tot if "_sig_" in c}
                        }

variables['R_ww'] = {   'name': 'R_ww',      
                        'range' : (30,0,80),  
                        'xaxis' : 'R_ww', 
                        'fold' : 3
                        }

variables['R_mw'] = {   'name': 'R_mw',      
                        'range' : (30,0,0.6),  
                        'xaxis' : 'R_mw', 
                        'fold' : 3
                        }

variables['A_ww'] = {   'name': 'A_ww',      
                        'range' : (30,0,1.1),  
                        'xaxis' : 'A_ww', 
                        'fold' : 3
                        }

# #Centrality variables
variables['Centr_vbs'] = {   'name': 'Centr_vbs',      
                        'range' : (30,0,3),  
                        'xaxis' : 'VBS centrality', 
                        'fold' : 3
                        }

variables['Centr_ww'] = {   'name': 'Centr_ww',      
                        'range' : (30,-6,5),  
                        'xaxis' : 'W boson centrality', 
                        'fold' : 3
                        }


variables['mll'] = {   'name': 'mll',      
                        'range' : (15,0,105),  
                        'xaxis' : 'Invariant mass of two leptons', 
                        'fold' : 3
                        }


variables['nvtx'] = {  'name': 'PV_npvs',
                        'range': (100, 0,100),
                        'xaxis': 'N. primary vertices',
                        'fold': 3
                }

variables['nvtx_good'] = {  'name': 'PV_npvsGood',
                        'range': (100, 0,100),
                        'xaxis': 'N. primary vertices (good)',
                        'fold': 3
                }


##############################
# standard variables

variables['jet_0_pt'] = {   'name': 'Alt$(CleanJet_pt[CleanJetNotFat_jetIdx[0]], -1)',      
                        'range' : (40,0,400),  
                        'xaxis' : 'Jet 1 pt', 
                        'fold' : 2
                        }

variables['jet_1_pt'] = {   'name': 'Alt$(CleanJet_pt[CleanJetNotFat_jetIdx[1]], -1)',      
                        'range' : (40,0,400),  
                        'xaxis' : 'Jet 2 pt', 
                        'fold' : 2
                        }

variables['jet_2_pt'] = {   'name': 'Alt$(CleanJet_pt[CleanJetNotFat_jetIdx[2]], -1)',      
                        'range' : (40,0,200),  
                        'xaxis' : 'Jet 3 pt', 
                        'fold' : 2
                        }

variables['jet_3_pt'] = {   'name': 'Alt$(CleanJet_pt[CleanJetNotFat_jetIdx[3]], -1)',      
                        'range' : (40,0,200),  
                        'xaxis' : 'Jet 4 pt', 
                        'fold' : 2
                        }

variables['jet_4_pt'] = {   'name': 'Alt$(CleanJet_pt[CleanJetNotFat_jetIdx[4]], -1)',      
                        'range' : (30,0,100),  
                        'xaxis' : 'Jet 5 pt', 
                        'fold' : 2
                        }


variables['jet_0_eta'] = {   'name': 'abs(Alt$(CleanJet_eta[CleanJetNotFat_jetIdx[0]], -999))',      
                        'range' : (40,0,5),  
                        'xaxis' : 'Jet 1 eta', 
                        'fold' : 0
                        }

variables['jet_1_eta'] = {   'name': 'abs(Alt$(CleanJet_eta[CleanJetNotFat_jetIdx[1]], -999))',      
                        'range' :  (40,0,5),  
                        'xaxis' : 'Jet 2 eta', 
                        'fold' : 2
                        }

variables['jet_2_eta'] = {   'name': 'abs(Alt$(CleanJet_eta[CleanJetNotFat_jetIdx[2]], -999))',      
                        'range' :  (40,0,5),  
                        'xaxis' : 'Jet 3 eta', 
                        'fold' : 0
                        }

variables['jet_3_eta'] = {   'name': 'abs(Alt$(CleanJet_eta[CleanJetNotFat_jetIdx[3]], -999))',      
                        'range' :  (40,0,5),  
                        'xaxis' : 'Jet 4 eta', 
                        'fold' : 0
                        }

variables['jet_4_eta'] = {   'name': 'abs(Alt$(CleanJet_eta[CleanJetNotFat_jetIdx[4]], -999))',      
                        'range' :  (40,0,5),  
                        'xaxis' : 'Jet 5 eta', 
                        'fold' : 0
                        }