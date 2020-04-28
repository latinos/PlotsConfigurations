## variabeadines
import numpy as np
## variabeadines
from itertools import chain


phase_spaces_boost = []
phase_spaces_res = []

for fl in ["ele", "mu"]:
    for d in ["high", "low"]:
        for cat in ["sig", "wjetcr", "topcr"]:
            phase_spaces_boost.append("boost_{}_dnn{}_{}".format(cat, d,fl))
            phase_spaces_res.append("res_{}_dnn{}_{}".format(cat, d, fl))



variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }


variables['DNNoutput_low'] = {
    'name': 'DNNoutput',
    'range': (10,0.,0.3),
    'xaxis': 'DNN output',
    'fold': 0 ,
    'cuts': list(filter(lambda c: "dnnlow" in c, phase_spaces_boost+phase_spaces_res))
}

'''
[0.30, 0.334 , 0.375, 0.405, 
0.43, 0.465, 0.495, 0.53,
 0.595 , 0.62, 0.63, 0.73, 
 0.785, 0.825, 0.88, 0.935, 0.98]
'''

variables['DNNoutput_high_res_ele'] = {
    'name': 'DNNoutput_resolved',
    'range': ([0.30, 0.35,0.4,0.45,0.5,0.55,0.6,0.645,
            0.68, 0.74,  0.785, 0.825, 0.88, 0.935, 0.98, 1. ],
            ),
    'xaxis': 'DNN',
    'fold': 0 ,
    'cuts': list(filter(lambda c: "dnnhigh" in c and "ele" in c, phase_spaces_res)),
    #'divideByBinWidth' : 1,
    'blind': {
        "res_sig_dnnhigh_mu": [0.6,1], 
        "res_sig_dnnhigh_ele": [0.6,1],
        "boost_sig_dnnhigh_mu": [0.6,1], 
        "boost_sig_dnnhigh_ele": [0.6,1],
    }
}

'''
Original ones
([0.30, 0.315, 0.335, 0.345, 0.38, 0.41, 0.43, 0.45, 0.475, 0.5, 0.53, 
                 0.565, 0.615, 0.645, 0.68, 0.725, 0.74, 0.765, 0.785, 0.815,
                 0.85, 0.91, 0.945, 0.97, 1.],
             ),
'''
variables['DNNoutput_high_res_mu'] = {
    'name': 'DNNoutput_resolved',
    'range': ([0.30, 0.35,0.4,0.45,0.5,0.55,0.6, 
                0.645, 0.68, 0.725, 0.74, 0.765, 0.785, 0.815,
                0.85, 0.91, 0.945, 0.97, 1.],
             ),
    'xaxis': 'DNN',
    'fold': 0 ,
    #'divideByBinWidth' : 1,
    'cuts': list(filter(lambda c: "dnnhigh" in c and "mu" in c, phase_spaces_res)),
    'blind': {
        "res_sig_dnnhigh_mu": [0.6,1], 
        "res_sig_dnnhigh_ele": [0.6,1],
        "boost_sig_dnnhigh_mu": [0.6,1], 
        "boost_sig_dnnhigh_ele": [0.6,1],
    }
}

'''
0.374, 0.47, 0.57, 0.665, 0.79, 0.91
'''

variables['DNNoutput_high_boost_ele'] = {
    'name': 'DNNoutput_boosted',
    'range': ([0.3,0.374, 0.47, 0.57, 0.665, 0.79, 0.91,1.],),
    'xaxis': 'DNN',
    'fold': 0 ,
    #'divideByBinWidth' : 1,
    'cuts': list(filter(lambda c: "dnnhigh" in c and "ele" in c, phase_spaces_boost)),
    'blind': {
        "res_sig_dnnhigh_mu": [0.6,1], 
        "res_sig_dnnhigh_ele": [0.6,1],
        "boost_sig_dnnhigh_mu": [0.6,1], 
        "boost_sig_dnnhigh_ele": [0.6,1],
    }
}

'''
[0.34, 0.44, 0.505, 0.58, 0.685, 0.775, 0.875, 0.945]
'''
variables['DNNoutput_high_boost_mu'] = {
    'name': 'DNNoutput_boosted',
    'range': ([0.3,0.34, 0.44, 0.505, 0.58, 0.685, 0.775, 0.875, 0.945, 1.0],),
    'xaxis': 'DNN output, boosted mu',
    'fold': 0 ,
    #'divideByBinWidth' : 1,
    'cuts': list(filter(lambda c: "dnnhigh" in c and "mu" in c, phase_spaces_boost)),
    'blind': {
        "res_sig_dnnhigh_mu": [0.6,1], 
        "res_sig_dnnhigh_ele": [0.6,1],
        "boost_sig_dnnhigh_mu": [0.6,1], 
        "boost_sig_dnnhigh_ele": [0.6,1],
    }
}



# #leptons

# variables['Lepton_eta_abs'] = {   'name': 'abs(Lepton_eta[0])',      
#                         'range' : (30,0,2.5),  
#                         'xaxis' : 'Lepton #eta', 
#                         'fold' : 3
#                         }

variables['Lepton_eta'] = {   'name': 'Lepton_eta[0]',      
                        'range' : (40,-2.5,2.5),  
                        'xaxis' : 'Lepton #eta', 
                        'fold' : 3
                        }


# variables['Lepton_pt'] = {   'name': 'Lepton_pt[0]',      
#                         'range' : (40,0,500),  
#                         'xaxis' : 'Lepton pt', 
#                         'fold' : 3
#                         }    


#delta angles between the VBS jets
variables['deltaeta_vbs'] = {   'name': 'deltaeta_vbs',      
                        'range' : (16,2,8),  
                        'xaxis' : '#Delta#eta VBS jets', 
                        'fold' : 3,
                        }    
        


variables["deta_jetpt_CR_res"] = {
            'name': 'detavbs_jetpt_bin',
            'range': (5, 2.5, 7.5),
            'axis': '#Delta#eta VBS jets : VBS trailing jet Pt bins (resolved)',
            'fold': 0,
            'cuts': phase_spaces_res
}

variables["deta_CR_boost"] = {
            'name': 'detavbs_jetpt_bin',
            'range': (2, 0.5, 2.5),
            'axis': '#Delta#eta VBS jets : VBS trailing jet Pt bins (boosted)',
            'fold': 0,
            'cuts': phase_spaces_boost
}

# #MET
# variables['PuppiMET'] = {   'name': 'PuppiMET_pt',      
#                         'range' : (30,0,300),  
#                         'xaxis' : 'PuppiMET_pt', 
#                         'fold' : 3
#                         }


# VBS vars
variables['mjj_vbs_morebins'] = {   'name': 'mjj_vbs',      
                        'range' : (20,200,4000) , 
                        'xaxis' : 'M_{jj} VBS', 
                        'fold' : 3,
                        'blind' : {
                            "res_sig_dnnhigh_ele": [1000,4000], 
                            "res_sig_dnnhigh_mu": [1000,4000], 
                            "boost_sig_dnnhigh_ele": [1000,4000], 
                            "boost_sig_dnnhigh_mu": [1000,4000], 
                            }
                         }

variables['mjj_vbs'] = {   'name': 'mjj_vbs',      
                        'range' : ([200,300,400,500,600,700,800,900,1000,1200,1400,1600,1800,2000,4000],) , 
                        'xaxis' : 'M_{jj} VBS', 
                        'fold' : 3,
                        #'divideByBinWidth' : 1,
                        'blind' : {
                            "res_sig_dnnhigh_ele" :(1000,4000),
                            "res_sig_dnnhigh_mu" : (1000,4000),
                            "boost_sig_dnnhigh_ele" :(1000,4000),
                            "boost_sig_dnnhigh_mu" : (1000,4000),
                            }
                        }

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


# variables['Mtw_lep'] = {   'name': 'Mtw_lep',      
#                         'range' : (30,0,300),  
#                         'xaxis' : 'Mass T W leptonic', 
#                         'fold' : 3
#                         }

variables['whad_pt'] = {
            'name': "whad_pt",
            'range': (30, 0, 200),
            'xaxis': 'W hadronic Pt',
            'fold': 3 ,
            'cuts': phase_spaces_res
}




# variables['deltaphi_vbs'] = {   'name': 'deltaphi_vbs',      
#                         'range' : (30,0,3.5),  
#                         'xaxis' : '#Delta#phi VBS jets', 
#                         'fold' : 3
#                         }

# variables['mjj_vjet'] = {   'name': 'mjj_vjet',      
#                         'range' : (50,0,500),  
#                         'xaxis' : 'Whad reco mass', 
#                         'fold' : 3
#                         }


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


# variables['vjet_0_eta'] = {   'name': 'vjet_0_eta',      
#                         'range' : (30,0,5),  
#                         'xaxis' : 'leading Vjet #eta', 
#                         'fold' : 3
#                         }

# variables['vjet_1_eta'] = {   'name': 'vjet_1_eta',      
#                         'range' : (30,0,5),  
#                         'xaxis' : 'trailing Vjet #eta', 
#                         'fold' : 3
#                         }


# # #
# variables['vbs_0_eta'] = {   'name': 'vbs_0_eta',      
#                         'range' : (30,0,5),  
#                         'xaxis' : 'leading VBS jet #eta', 
#                         'fold' : 3
#                         }

# variables['vbs_1_eta'] = {   'name': 'vbs_1_eta',      
#                         'range' : (30,0,5),  
#                         'xaxis' : 'trailing VBS jet #eta', 
#                         'fold' : 3
#                         }



# variables['PuppiMET_phi'] = {   'name': 'PuppiMET_phi',      
#                         'range': (30,-3.14, 3.14),  
#                         'xaxis' : 'PuppiMET #phi', 
#                         'fold' : 3
#                         }


# variables['MET_pt'] = {   'name': 'MET_pt',      
#                         'range' : (30,0,300),  
#                         'xaxis' : 'MET_pt', 
#                         'fold' : 3


# variables['recoMET_pz'] = {   'name': 'recoMET_pz',      
#                         'range' : (40,-700,700),  
#                         'xaxis' : 'recoMET pz', 
#                         'fold' : 3
#                         }
                

# #jets 
# variables['nJets'] = {   'name': 'Sum$(CleanJet_pt >= 30)',      
#                         'range' : (6,4,10),  
#                         'xaxis' : 'nJets >= 30 GeV', 
#                         'fold' : 3
#                         }

# # Minimum pt 20 GeV in NanoGardening step
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
# #                         }






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

# #Zvjets_high
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

# #Zlep
variables['Zlep'] = {   'name': 'Zlep',      
                        'range' : (30,-3,3),  
                        'xaxis' : 'Zepp. lepton', 
                        'fold' : 3
                        }

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

#Mw_lep 
# variables['Mw_lep_reco'] = {   'name': 'Mw_lep',      
#                         'range' : (40,0,250),  
#                         'xaxis' : 'Mass W leptonic', 
#                         'fold' : 3
# #                         }



# variables['w_lep_pt'] = {   'name': 'w_lep_pt',      
#                         'range' : (30,0,600),  
#                         'xaxis' : 'Pt W leptonic', 
#                         'fold' : 3
#                         }

# variables['Mww'] = {   'name': 'Mww',      
#                         'range' : (30,0,2000),  
#                         'xaxis' : 'Mww', 
#                         'fold' : 3,
#                         'blind' : {
#                             "res_sig_dnnhigh_ele" :(1000,2000),
#                             "res_sig_dnnhigh_mu" : (1000,2000),
#                             "boost_sig_dnnhigh_ele" :(1000,2000),
#                             "boost_sig_dnnhigh_mu" : (1000,2000),
#                             }
#                         }

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

# variables['Centr_ww'] = {   'name': 'Centr_ww',      
#                         'range' : (30,-6,5),  
#                         'xaxis' : 'W boson centrality', 
#                         'fold' : 3
#                         }


# variables['mll'] = {   'name': 'mll',      
#                         'range' : (15,0,105),  
#                         'xaxis' : 'Invariant mass of two leptons', 
#                         'fold' : 3
#                         }


# variables['nvtx'] = {  'name': 'PV_npvs',
#                         'range': (100, 0,100),
#                         'xaxis': 'N. primary vertices',
#                         'fold': 3
#                 }

# variables["qgl"] = { 'name': 'Jet_qgl[CleanJet_jetIdx[0]]',
#                     'range': (40, 0,1),
#                     'xaxis': 'Quark/gluon discriminator',
#                     'fold': 3
# }


# variables['deltaphi_lep_whad'] = {
#             'name': "deltaphi_lep_whad",
#             'range': (30, 0, 3.5),
#             'xaxis': '#Delta#phi (lepton, W had)',
#             'fold': 3      
# }

# variables['deltaphi_lep_jet0'] = {
#             'name': "deltaphi_lep_jet0",
#             'range': (30, 0, 3.5),
#             'xaxis': '#Delta#phi (lepton, leading jet)',
#             'fold': 3      
# }

# variables['deltaphi_lep_vbsjets'] = {
#             'name': "deltaphi_lep_vbsjets",
#             'range': (30, 0, 3.5),
#             'xaxis': '#Delta#phi (lepton, VBS jets syst.)',
#             'fold': 3      
# }

# variables['deltaphi_lep_ww'] = {
#             'name': "deltaphi_lep_ww",
#             'range': (30, 0, 3.5),
#             'xaxis': '#Delta#phi (lepton, WW syst.)',
#             'fold': 3      
# }

# ## BTag shape

# variables['Jet_btagDeepB'] = {
#     'name': 'Jet_btagDeepB[CleanJet_jetIdx]',
#     'range': (30,0,1),
#     'xaxis': "DeepCSV bTag shape", 
#     'fold': 0
# }

# variables["fake_weight_tight"] = {
#             'name': 'fake_weight_corrected*(Lepton_isTightElectron_mvaFall17V1Iso_WP90[0]==1)',
#             'range': (30,-2,2),
#             'xaxis': 'Corrected fake weight',
#             'fold' : 3
# }

# variables["fake_weight_loose"] = {
#             'name': 'fake_weight_corrected*(Lepton_isTightElectron_mvaFall17V1Iso_WP90[0]==0)',
#             'range': (30,-2,2),
#             'xaxis': 'Corrected fake weight',
#             'fold' : 3
# }