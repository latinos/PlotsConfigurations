# variabeadines

#variables = {}
    

variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }


#leptons

variables['Lepton_eta'] = {   'name': 'abs(Lepton_eta[0])',      
                        'range' : (30,0,2.5),  
                        'xaxis' : 'Lepton #eta', 
                        'fold' : 3
                        }


variables['Lepton_pt'] = {   'name': 'Lepton_pt[0]',      
                        'range' : (30,0,500),  
                        'xaxis' : 'Lepton pt', 
                        'fold' : 3
                        }                       

#MET
variables['PuppiMET'] = {   'name': 'PuppiMET_pt',      
                        'range' : (30,0,500),  
                        'xaxis' : 'PuppiMET_pt', 
                        'fold' : 3
                        }

variables['PuppiMET_phi'] = {   'name': 'PuppiMET_phi',      
                        'range': (30,-3.14, 3.14),  
                        'xaxis' : 'PuppiMET #phi', 
                        'fold' : 3
                        }


variables['MET_pt'] = {   'name': 'MET_pt',      
                        'range' : (30,0,500),  
                        'xaxis' : 'MET_pt', 
                        'fold' : 3
                        }


variables['recoMET_pz'] = {   'name': 'recoMET_pz',      
                        'range' : (40,-700,700),  
                        'xaxis' : 'recoMET pz', 
                        'fold' : 3
                        }
                

#jets 
variables['nJets'] = {   'name': 'Sum$(CleanJet_pt >= 30)',      
                        'range' : (10,0,10),  
                        'xaxis' : 'nJets >= 30 GeV', 
                        'fold' : 3
                        }

# Minimum pt 20 GeV in NanoGardening step
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


# VBS vars
variables['mjj_vbs'] = {   'name': 'mjj_vbs',      
                        'range' : ([200,300,400,500,600,700,800,900,1000,1200,1400,1600,1800,2000,4000],) , 
                        'xaxis' : 'M_{jj} VBS', 
                        'fold' : 3,
                        'blind' : {
                            "lowen_SR_tightVBS_ele" : (1000,4000),
                            "lowen_CR_looseVBS_ele" : (1000,4000),
                            "lowen_SR_tightVBS_mu" : (1000,4000),
                            "lowen_CR_looseVBS_mu" : (1000,4000),
                            "boost_SR_tightVBS_ele" : (1000,4000),
                            "boost_CR_looseVBS_ele" : (1000,4000),
                            "boost_SR_tightVBS_mu" : (1000,4000),
                            "boost_CR_looseVBS_mu" : (1000,4000),
                            }
                        }

#delta angles between the VBS jets
variables['deltaeta_vbs'] = {   'name': 'deltaeta_vbs',      
                        'range' : (30,2,8),  
                        'xaxis' : '#Delta#eta VBS jets', 
                        'fold' : 3,
                        'blind': {
                            "lowen_SR_tightVBS_ele" : (4,9),
                            "lowen_CR_looseVBS_ele" : (4,9),
                            "lowen_SR_tightVBS_mu" : (4,9),
                            "lowen_CR_looseVBS_mu" : (4,9),
                            "boost_SR_tightVBS_ele" : (4,9),
                            "boost_CR_looseVBS_ele" : (4,9),
                            "boost_SR_tightVBS_mu" : (4,9),
                            "boost_CR_looseVBS_mu" : (4,9)
                            }
                        }



variables['mjj_vjet'] = {   'name': 'mjj_vjet',      
                        'range' : (25,65,105),  
                        'xaxis' : 'Whad reco mass', 
                        'fold' : 3
                        }


# vjet jets
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

variables['vbs_etaprod'] = {   'name': 'vbs_0_eta*vbs_1_eta',      
                        'range' : (30,-10,10),  
                        'xaxis' : 'VBS jets #eta1#eta2', 
                        'fold' : 3
                        }

variables['vbs_0_pt'] = {   'name': 'vbs_0_pt',      
                        'range' : (30,0,500),  
                        'xaxis' : 'leading VBS jet pt', 
                        'fold' : 3
                        }


variables['vbs_1_pt'] = {   'name': 'vbs_1_pt',      
                        'range' : (30,0,500),  
                        'xaxis' : 'trailing VBS jet pt', 
                        'fold' : 3
                        } 

#
variables['vbs_0_eta'] = {   'name': 'vbs_0_eta',      
                        'range' : (30,0,5),  
                        'xaxis' : 'leading VBS jet #eta', 
                        'fold' : 3
                        }

variables['vbs_1_eta'] = {   'name': 'vbs_1_eta',      
                        'range' : (30,0,5),  
                        'xaxis' : 'trailing VBS jet #eta', 
                        'fold' : 3
                        }


variables['vjet_0_eta'] = {   'name': 'vjet_0_eta',      
                        'range' : (30,0,5),  
                        'xaxis' : 'leading Vjet #eta', 
                        'fold' : 3
                        }

variables['vjet_1_eta'] = {   'name': 'vjet_1_eta',      
                        'range' : (30,0,5),  
                        'xaxis' : 'trailing Vjet #eta', 
                        'fold' : 3
                        }


variables['deltaphi_vbs'] = {   'name': 'deltaphi_vbs',      
                        'range' : (30,0,3.5),  
                        'xaxis' : '#Delta#phi VBS jets', 
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

#Zvjets_high
variables['Zvjets_0'] = {   'name': 'Zvjets_0',      
                        'range' : (30,-3,3),  
                        'xaxis' : 'Zep. leading V-jet ', 
                        'fold' : 3
                        }

variables['Zvjets_0'] = {   'name': 'Zvjets_0',      
                        'range' : (30,-3,3),  
                        'xaxis' : 'Zep. trailing V-jet ', 
                        'fold' : 3
                        }

#Zlep
variables['Zlep'] = {   'name': 'Zlep',      
                        'range' : (30,-3,3),  
                        'xaxis' : 'Zepp. lepton', 
                        'fold' : 3
                        }

#Asym
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

#Mw_lep 
variables['Mw_lep_reco'] = {   'name': 'Mw_lep',      
                        'range' : (40,0,250),  
                        'xaxis' : 'Mass W leptonic', 
                        'fold' : 3
                        }

variables['Mtw_lep'] = {   'name': 'Mtw_lep',      
                        'range' : (30,0,300),  
                        'xaxis' : 'Mass T W leptonic', 
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
                        'blind' : {
                            "lowen_SR_tightVBS_ele" : (1000,2000),
                            "lowen_CR_looseVBS_ele" : (1000,2000),
                            "lowen_SR_tightVBS_mu" : (1000,2000),
                            "lowen_CR_looseVBS_mu" : (1000,2000),
                            "boost_SR_tightVBS_ele" : (1000,2000),
                            "boost_CR_looseVBS_ele" : (1000,2000),
                            "boost_SR_tightVBS_mu" : (1000,2000),
                            "boost_CR_looseVBS_mu" : (1000,2000)
                            }
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

#Centrality variables
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

variables["qgl"] = { 'name': 'Jet_qgl[CleanJet_jetIdx[0]]',
                    'range': (40, 0,1),
                    'xaxis': 'Quark/gluon discriminator',
                    'fold': 3
}



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