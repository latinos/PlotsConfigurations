# ## variabeadines
import numpy as np
## variabeadines
from itertools import chain


variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }




#delta angles between the VBS jets
# variables['deltaeta_vbs'] = {   'name': 'deltaeta_vbs',      
#                         'range' : (16,2,8),  
#                         'xaxis' : '#Delta#eta VBS jets', 
#                         'fold' : 3,
#                         }    
        

# variables['mjj_vbs_morebins'] = {   'name': 'mjj_vbs',      
#                         'range' : (20,200,4000) , 
#                         'xaxis' : 'M_{jj} VBS', 
#                         'fold' : 3,
# }

# variables['mjj_vbs'] = {   'name': 'mjj_vbs',      
#                         'range' : ([200,300,400,500,600,700,800,900,1000,1200,1400,1600,1800,2000,4000],) , 
#                         'xaxis' : 'M_{jj} VBS', 
#                         'fold' : 3,
#                         'blind': { c:[1000,4000] for c in phase_spaces_tot if "_sig_" in c}
#                         }

variables['jet_1_pt'] = {   'name': 'CleanJet_pt[0]',      
                        'range' : (40,30,500),  
                        'xaxis' : 'Jet 1 Pt', 
                        'fold' : 3
                        } 

variables['jet_2_pt'] = {   'name': 'CleanJet_pt[1]',      
                        'range' : (30,30,300),  
                        'xaxis' : 'Jet 2 Pt', 
                        'fold' : 3
} 

variables['jet_3_pt'] = {   'name': 'CleanJet_pt[2]',      
                        'range' : (30,30,300),  
                        'xaxis' : 'Jet 3 Pt', 
                        'fold' : 3
} 

variables['jet_4_pt'] = {   'name': 'CleanJet_pt[3]',      
                        'range' : (30,30,300),  
                        'xaxis' : 'Jet 4 Pt', 
                        'fold' : 3
}

variables['jet_1_eta'] = {   'name': 'abs(CleanJet_eta[0])',      
                        'range' : (40,0,5),  
                        'xaxis' : 'Jet 1 Pt', 
                        'fold' : 3
                        } 

variables['jet_2_eta'] = {   'name': 'abs(CleanJet_eta[1])',      
                        'range' : (40,0,5),  
                        'xaxis' : 'Jet 2 Eta', 
                        'fold' : 3
} 

variables['jet_3_eta'] = {   'name': 'abs(CleanJet_eta[2])',      
                        'range' : (40,0,5),  
                        'xaxis' : 'Jet 3 Eta', 
                        'fold' : 3
} 

variables['jet_4_eta'] = {   'name': 'abs(CleanJet_eta[3])',      
                        'range' : (40,0,5),  
                        'xaxis' : 'Jet 4 Eta', 
                        'fold' : 3
}



variables['Zlep'] = {   'name': 'Zlep',      
                        'range' : (40,-1.5,1.5),  
                        'xaxis' : 'Zepp. lepton', 
                        'fold' : 3
                        }





variables['electron_eta_abs'] = {   'name': 'abs(Lepton_eta[0])',      
                        'range' : (60,0,2.5),  
                        'xaxis' : 'Electron #eta', 
                        'fold' : 3
                        }


variables['electron_eta'] = {   'name': 'Lepton_eta[0]',      
                        'range' : (60,-2.5,2.5),  
                        'xaxis' : 'Electron #eta', 
                        'fold' : 3
                        }


variables['electron_phi'] = {   'name': 'Lepton_phi[0]',      
                        'range' : (50,-3.14,3.14),  
                        'xaxis' : 'Electron #phi', 
                        'fold' : 3
                        }

variables['electron_etaphi'] = {   'name': 'Lepton_eta[0]:Lepton_phi[0]',      
                        'range' : (20,-3.14,3.14, 20, -2.5 , 2.5),  
                        'xaxis' : 'Electron #phi', 
                        'fold' : 3
                        }

variables['electron_etaphi_EB'] = {   'name': 'Lepton_eta[0]:Lepton_phi[0]',      
                        'range' : (20,-3.14,3.14, 20, -1.49 , 1.49),  
                        'xaxis' : 'Electron #eta : #phi in EB', 
                        'fold' : 0
                        }

variables['electron_etaphi_EE'] = {   'name': 'abs(Lepton_eta[0]):Lepton_phi[0]',      
                        'range' : (20,-3.14,3.14, 20, 1.49, 2.5),  
                        'xaxis' : 'Electron #eta : #phi in EE', 
                        'fold' : 0
                        }

variables['electron_eta_zoom'] = {   'name': 'abs(Lepton_eta[0])',      
                        'range' : (20,2,2.5),  
                        'xaxis' : 'Electron #eta', 
                        'fold' : 3
                        }


variables['electron_pt'] = {   'name': 'Lepton_pt[0]',      
                        'range' : (50,35,150),  
                        'xaxis' : 'Electron pt', 
                        'fold' : 3
                        } 


variables['Electron_deltaEtaSC'] = { 'name': 'Electron_deltaEtaSC[Lepton_electronIdx[0]]',
                                    'range' : (30,-0.1,0.1),  
                                    'xaxis' : 'Electron #Delta#eta SuperCluster', 
                                    'fold' : 3
                        }    


variables['Electron_dxy'] = { 'name': 'Electron_dxy[Lepton_electronIdx[0]]',
                                    'range' : (40,-0.05,0.05),  
                                    'xaxis' : 'Electron dxy', 
                                    'fold' : 3
                        }    

variables['Electron_dxyErr'] = { 'name': 'Electron_dxyErr[Lepton_electronIdx[0]]',
                                    'range' : (50,0,4),  
                                    'xaxis' : 'Electron dxy Error in cm', 
                                    'fold' : 3
                        }    

variables['Electron_dz'] = { 'name': 'Electron_dz[Lepton_electronIdx[0]]',
                                    'range' : (40,-0.1, 0.1),  
                                    'xaxis' : 'Electron dz', 
                                    'fold' : 3
                        }   

variables['Electron_dzErr'] = { 'name': 'Electron_dzErr[Lepton_electronIdx[0]]',
                                    'range' : (50,0,4),  
                                    'xaxis' : 'Electron dz Err in cm', 
                                    'fold' : 3
                        }     

variables['Electron_eInvMinusPInv'] = { 'name': 'Electron_eInvMinusPInv[Lepton_electronIdx[0]]',
                                    'range' : (40,-0.025,0),  
                                    'xaxis' : 'Electron 1/E_SC - 1/p_trk', 
                                    'fold' : 3
                        }    

variables['Electron_energyErr'] = { 'name': 'Electron_energyErr[Lepton_electronIdx[0]]',
                                    'range' : (50,0,50),  
                                    'xaxis' : 'Energy error of the cluster-track combination', 
                                    'fold' : 3
                        }   

variables['Electron_hoe'] = { 'name': 'Electron_hoe[Lepton_electronIdx[0]]',
                                    'range' : (60,0,0.08),  
                                    'xaxis' : 'Electron H over E', 
                                    'fold' : 3
                        }    

# variables['Electron_jetPtRelv2'] = { 'name': 'Electron_jetPtRelv2[0]',
#                                     'range' : (50,0,60),  
#                                     'xaxis' : 'Rel. lep Pt wrt closest jet after lep subtract.', 
#                                     'fold' : 3
#                         }    

variables['Electron_lostHits'] = { 'name': 'Electron_lostHits[Lepton_electronIdx[0]]',
                                    'range' : (8,0,2),  
                                    'xaxis' : 'Electron Lost hits', 
                                    'fold' : 3
                        }    


variables['Electron_pfRelIso03_all'] = { 'name': 'Electron_pfRelIso03_all[Lepton_electronIdx[0]]',
                                    'range' : (60,0,0.2),  
                                    'xaxis' : 'PF relative iso R=0.3', 
                                    'fold' : 3
                        }    

variables['Electron_pfRelIso03_chg'] = { 'name': 'Electron_pfRelIso03_chg[Lepton_electronIdx[0]]',
                                    'range' : (60,0,0.2),  
                                    'xaxis' : 'PF relative iso R=0.3, charged', 
                                    'fold' : 3
                        } 

variables['Electron_r9'] = { 'name': 'Electron_r9[Lepton_electronIdx[0]]',
                                    'range' : (40,0.2,1),  
                                    'xaxis' : 'Electron R9', 
                                    'fold' : 3
                        } 


variables['Electron_sieie'] = { 'name': 'Electron_sieie[Lepton_electronIdx[0]]',
                                    'range' : (40,0,0.03),  
                                    'xaxis' : 'Sigma iEtaiEta supercluster full5x5', 
                                    'fold' : 3
                        } 
 
variables['Electron_ip3d'] = { 'name': 'Electron_ip3d[Lepton_electronIdx[0]]',
                                    'range' : (50,0,10),  
                                    'xaxis' : '3D impact parameter wrt first PV, in cm', 
                                    'fold' : 3
                        } 

  
variables['Electron_sip3d'] = { 'name': 'Electron_sip3d[Lepton_electronIdx[0]]',
                                    'range' : (50,0,20),  
                                    'xaxis' : '3D impact parameter significance wrt first PV', 
                                    'fold' : 3
                        } 

 
  
variables['Electron_sip3d_zoom'] = { 'name': 'Electron_sip3d[Lepton_electronIdx[0]]',
                                    'range' : (30,0,3),  
                                    'xaxis' : '3D impact parameter significance wrt first PV', 
                                    'fold' : 0
                        } 



variables['eta_sip3d'] = { 'name': 'Electron_sip3d[Lepton_electronIdx[0]]:abs(Electron_eta[Lepton_electronIdx[0]])',
                                    'range' : (20, 0, 2.5, 25,0,5),  
                                    'xaxis' : 'Sip3d : |eta|', 
                                    'fold' : 0
                        } 


variables['eta_sip3d_EB'] = { 'name': 'Electron_sip3d[Lepton_electronIdx[0]]:abs(Electron_eta[Lepton_electronIdx[0]])',
                                    'range' : (10, 0, 1.49, 25,0,5),  
                                    'xaxis' : 'Sip3d : |eta|', 
                                    'fold' : 0
                        } 

variables['eta_sip3d_EE'] = { 'name': 'Electron_sip3d[Lepton_electronIdx[0]]:abs(Electron_eta[Lepton_electronIdx[0]])',
                                    'range' : (10, 1.49, 2.5, 25,0,5),  
                                    'xaxis' : 'Sip3d : |eta|', 
                                    'fold' : 0
                        } 


variables['eta_sip3d_less'] = { 'name': 'Electron_sip3d[Lepton_electronIdx[0]]:abs(Electron_eta[Lepton_electronIdx[0]])',
                                    'range' : (10, 0, 2.5, 25,0,5),  
                                    'xaxis' : 'Sip3d : |eta|', 
                                    'fold' : 0
                        } 


variables['eta_sip3d_EB_less'] = { 'name': 'Electron_sip3d[Lepton_electronIdx[0]]:abs(Electron_eta[Lepton_electronIdx[0]])',
                                    'range' : (5, 0, 1.49, 25,0,5),  
                                    'xaxis' : 'Sip3d : |eta|', 
                                    'fold' : 0
                        } 

variables['eta_sip3d_EE_less'] = { 'name': 'Electron_sip3d[Lepton_electronIdx[0]]:abs(Electron_eta[Lepton_electronIdx[0]])',
                                    'range' : (5, 1.49, 2.5, 25,0,5),  
                                    'xaxis' : 'Sip3d : |eta|', 
                                    'fold' : 0
                        } 


variables['PV_chi2'] = {   'name': 'PV_chi2',
                        'range' : (40,0.3,1.3),  
                        'xaxis' : 'PV chi2', 
                        'fold' : 3
}
        
variables['goodNvtx'] = {   'name': 'PV_npvsGood',
                        'range' : (100,0,100),  
                        'xaxis' : 'Number of good PVs', 
                        'fold' : 3
}

variables['PV_score'] = {   'name': 'log10(PV_score)',
                        'range' : (50,2,10),  
                        'xaxis' : 'log10(PV score). i.e. sum pt2 of clustered objects', 
                        'fold' : 3
}

variables['PV_score_zoom'] = {   'name': 'log10(PV_score)',
                        'range' : (50,2,6),  
                        'xaxis' : 'log10(PV score) i.e. sum pt2 of clustered objects', 
                        'fold' : 0
}

variables['HT'] = {'name': "MET_sumEt",
                'range' : (60,0,4000),  
                'xaxis' : 'Sum of Et', 
                'fold' : 3

 }

        

#MET
variables['PuppiMET'] = {   'name': 'PuppiMET_pt',      
                        'range' : (30,30,300),  
                        'xaxis' : 'PuppiMET_pt', 
                        'fold' : 3
                        }


variables['PuppiMET_phi'] = {   'name': 'PuppiMET_phi',      
                        'range': (30,-3.14, 3.14),  
                        'xaxis' : 'PuppiMET #phi', 
                        'fold' : 3
                        }


#jets 
variables['nJets'] = {   'name': 'Sum$(CleanJet_pt >= 30)',      
                        'range' : (6,4,10),  
                        'xaxis' : 'nJets >= 30 GeV', 
                        'fold' : 3
                        }


variables['nvtx'] = {  'name': 'PV_npvs',
                        'range': (100, 0,100),
                        'xaxis': 'N. primary vertices',
                        'fold': 3
                }


# variables["nearest_ele_jet_dR"] = {'name':'nearestEleJet',
#                         'range':(60,-2,4),
#                         'xaxis':"DeltaR electron to nearest jet",
#                         'fold':3
#                         }