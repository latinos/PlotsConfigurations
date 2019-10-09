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

#leptons

variables['Lepton_eta'] = {   'name': 'abs(Lepton_eta[0])',      
                        'range' : (40,0,2.5),  
                        'xaxis' : 'Lepton #eta', 
                        'fold' : 3
                        }


variables['Lepton_pt'] = {   'name': 'Lepton_pt[0]',      
                        'range' : (40,0,300),  
                        'xaxis' : 'Lepton pt', 
                        'fold' : 3
                        }                       

#MET
variables['PuppiMET'] = {   'name': 'PuppiMET_pt',      
                        'range' : (40,0,500),  
                        'xaxis' : 'PuppiMET_pt', 
                        'fold' : 3
                        }

variables['PuppiMET_phi'] = {   'name': 'PuppiMET_phi',      
                        'range' : (40,0,360),  
                        'xaxis' : 'PuppiMET_phi', 
                        'fold' : 3
                        }

variables['MET_pt'] = {   'name': 'MET_pt',      
                        'range' : (40,0,500),  
                        'xaxis' : 'MET_pt', 
                        'fold' : 3
                        }

variables['recoMET'] = {   'name': 'recoMET',      
                        'range' : (40,0,300),  
                        'xaxis' : 'recoMET', 
                        'fold' : 3
                        }

variables['recoMET_pz'] = {   'name': 'recoMET_pz',      
                        'range' : (40,-700,700),  
                        'xaxis' : 'recoMET pz', 
                        'fold' : 3
                        }
  
variables['recoMET_pz_nearlep'] = {   'name': 'recoMET_pz_nearlep',      
                        'range' : (40,-700,700),  
                        'xaxis' : 'recoMET_pz (close lep)', 
                        'fold' : 3
                        }

# VBS vars
variables['mjj_vbs'] = {   'name': 'mjj_vbs',      
                        'range' : (40,200,2700),  
                        'xaxis' : 'mjj VBS jets', 
                        'fold' : 3
                        }

variables['mjj_vjet'] = {   'name': 'mjj_vjet',      
                        'range' : (40,0,200),  
                        'xaxis' : 'mjj V-jets', 
                        'fold' : 3
                        }



# vjet jets
variables['vjet_pt_high'] = {   'name': 'vjet_pt_high',      
                        'range' : (60,0,700),  
                        'xaxis' : 'leading V-jet pt', 
                        'fold' : 3
                        }

variables['vjet_pt_low'] = {   'name': 'vjet_pt_low',      
                        'range' : (60,15,200),  
                        'xaxis' : 'trailing V-jet pt', 
                        'fold' : 3
                        }

variables['vbs_etaprod'] = {   'name': 'vbs_etaprod',      
                        'range' : (40,-10,10),  
                        'xaxis' : 'VBS jets #eta1#eta2', 
                        'fold' : 3
                        }

variables['vbs_pt_high'] = {   'name': 'vbs_pt_high',      
                        'range' : (60,0,500),  
                        'xaxis' : 'leading VBS jet pt', 
                        'fold' : 3
                        }


variables['vbs_pt_low'] = {   'name': 'vbs_pt_low',      
                        'range' : (60,0,500),  
                        'xaxis' : 'trailing VBS jet pt', 
                        'fold' : 3
                        } 

#
variables['vbs_eta_high'] = {   'name': 'vbs_eta_high',      
                        'range' : (40,0,5),  
                        'xaxis' : 'leading VBS jet #eta', 
                        'fold' : 3
                        }

variables['vbs_eta_low'] = {   'name': 'vbs_eta_low',      
                        'range' : (40,0,5),  
                        'xaxis' : 'trailing VBS jet #eta', 
                        'fold' : 3
                        }


variables['vjet_eta_high'] = {   'name': 'vjet_eta_high',      
                        'range' : (40,0,5),  
                        'xaxis' : 'leading Vjet #eta', 
                        'fold' : 3
                        }

variables['vjet_eta_low'] = {   'name': 'vjet_eta_low',      
                        'range' : (40,0,5),  
                        'xaxis' : 'trailing Vjet #eta', 
                        'fold' : 3
                        }

#delta angles between the VBS jets
variables['deltaeta_vbs'] = {   'name': 'deltaeta_vbs',      
                        'range' : (40,0,9),  
                        'xaxis' : '#Delta#eta VBS jets', 
                        'fold' : 3
                        }

variables['deltaphi_vbs'] = {   'name': 'deltaphi_vbs',      
                        'range' : (40,0,3.5),  
                        'xaxis' : '#Delta#phi VBS jets', 
                        'fold' : 3
                        }


variables["vbs_index_high"] = {   'name': 'VBS_jets_maxmjj_massWZ[0]',      
                        'range' : (10,0,10),  
                        'xaxis' : 'Index leading VBS jet', 
                        'fold' : 3
                        }

variables["vbs_index_low"] = {   'name': 'VBS_jets_maxmjj_massWZ[1]',      
                        'range' : (10,0,10),  
                        'xaxis' : 'Index trailing VBS jet', 
                        'fold' : 3
                        }

variables["vjet_index_high"] = {   'name': 'V_jets_maxmjj_massWZ[0]',      
                        'range' : (10,0,10),  
                        'xaxis' : 'Index leading V-jet', 
                        'fold' : 3
                        }

variables["vjet_index_low"] = {   'name': 'V_jets_maxmjj_massWZ[1]',      
                        'range' : (10,0,10),  
                        'xaxis' : 'Index trailing V-jet', 
                        'fold' : 3
                        }

#Zvjets_high
variables['Zvjets_high'] = {   'name': 'Zvjets_high',      
                        'range' : (40,-3,3),  
                        'xaxis' : 'Zep. leading V-jet ', 
                        'fold' : 3
                        }

variables['Zvjets_low'] = {   'name': 'Zvjets_low',      
                        'range' : (40,-3,3),  
                        'xaxis' : 'Zep. trailing V-jet ', 
                        'fold' : 3
                        }

#Zlep
variables['Zlep'] = {   'name': 'Zlep',      
                        'range' : (40,-3,3),  
                        'xaxis' : 'Zepp. lepton', 
                        'fold' : 3
                        }

#Asym
variables['Asym_vbs'] = {   'name': 'Asym_vbs',      
                        'range' : (40,0,1),  
                        'xaxis' : 'Pt asymmetry VBS jets', 
                        'fold' : 3
                        }

variables['Asym_vjet'] = {   'name': 'Asym_vjet',      
                        'range' : (40,0,1),  
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
                        'range' : (40,0,300),  
                        'xaxis' : 'Mass T W leptonic', 
                        'fold' : 3
                        }

variables['w_lep_pt'] = {   'name': 'w_lep_pt',      
                        'range' : (40,0,600),  
                        'xaxis' : 'Pt W leptonic', 
                        'fold' : 3
                        }

variables['Mww'] = {   'name': 'Mww',      
                        'range' : (40,0,1800),  
                        'xaxis' : 'Mww', 
                        'fold' : 3
                        }

variables['R_ww'] = {   'name': 'R_ww',      
                        'range' : (40,0,80),  
                        'xaxis' : 'R_ww', 
                        'fold' : 3
                        }

variables['R_mw'] = {   'name': 'R_mw',      
                        'range' : (40,0,0.6),  
                        'xaxis' : 'R_mw', 
                        'fold' : 3
                        }

variables['A_ww'] = {   'name': 'A_ww',      
                        'range' : (40,0,1.1),  
                        'xaxis' : 'A_ww', 
                        'fold' : 3
                        }

#Centrality variables
variables['Centr_vbs'] = {   'name': 'Centr_vbs',      
                        'range' : (40,0,3),  
                        'xaxis' : 'VBS centrality', 
                        'fold' : 3
                        }

variables['Centr_ww'] = {   'name': 'Centr_ww',      
                        'range' : (40,-6,5),  
                        'xaxis' : 'W boson centrality', 
                        'fold' : 3
                        }

variables['Ht'] = {   'name': 'Ht',      
                        'range' : (40,0,1800),  
                        'xaxis' : 'Ht', 
                        'fold' : 3
                        }


variables['mll'] = {   'name': 'mll',      
                        'range' : (40,0,300),  
                        'xaxis' : 'Invariant mass of two leptons', 
                        'fold' : 3
                        }


variables['nvtx'] = {  'name': 'PV_npvs',
                        'range': (60, 0,60),
                        'xaxis': 'N. primary vertices',
                        'fold': 3
                }

variables['fourj_lep_deltaphi'] = {
            'name': "fourj_lep_deltaphi",
            'range': (40, 0, 3.5),
            'xaxis': '#Delta#phi (lepton, sum 4 jets)',
            'fold': 3      
}

variables['fourj_met_deltaphi'] = {
            'name': "fourj_met_deltaphi",
            'range': (40, 0, 3.5),
            'xaxis': '#Delta#phi (lepton, sum 4 jets)',
            'fold': 3
}

variables['fourj_lep_ptratio'] = {
            'name': "fourj_lep_ptratio",
            'range': (40, 0, 3.5),
            'xaxis': '#Delta#phi (met, sum 4 jets)',
            'fold': 3
}

variables['fourj_pmet'] = {
            'name': "fourj_pmet",
            'range': (40, 0, 200),
            'xaxis': 'PMET with (sum 4 jets)',
            'fold': 3
}

variables['lep_pmet'] = {
            'name': "lep_pmet",
            'range': (40, 0, 200),
            'xaxis': 'lepton pmet',
            'fold': 3
}

variables['fourj_lep_ptratio'] = {
            'name': "fourj_lep_ptratio",
            'range': (40, 0, 10),
            'xaxis': 'Pt (sum 4 jets) / Pt lepton',
            'fold': 3 
}

variables['fourj_pt'] = {
            'name': "fourj_pt",
            'range': (40, 0, 800),
            'xaxis': 'Pt (sum 4 jets)',
            'fold': 3
}

variables['lep_jet_ptratio1'] = {
            'name': 'Lepton_pt[0] / CleanJet_pt[0]',
            'range': (40, 0, 10),
            'xaxis': 'Pt lepton / Pt Jet1',
            'fold': 3
}

variables['lep_jet_ptratio2'] = {
            'name': 'Lepton_pt[0] / CleanJet_pt[1]',
            'range': (40, 0, 10),
            'xaxis': 'Pt lepton / Pt Jet2',
            'fold': 3
}

variables['lep_jet_ptratio3'] = {
            'name': 'Lepton_pt[0] / Alt$(CleanJet_pt[2], -1)',
            'range': (40, 0, 10),
            'xaxis': 'Pt lepton / Pt Jet3',
            'fold': 3
}

variables['lep_jet_ptratio4'] = {
            'name': 'Lepton_pt[0] / Alt$(CleanJet_pt[3],-1)',
            'range': (40, 0, 10),
            'xaxis': 'Pt lepton / Pt Jet4',
            'fold': 3
}