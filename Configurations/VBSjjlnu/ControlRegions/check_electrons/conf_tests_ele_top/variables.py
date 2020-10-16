# ## variabeadines
import numpy as np
## variabeadines
from itertools import chain



variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }


# # #leptons

variables['electron_eta_abs'] = {   'name': '(abs(Lepton_pdgId[0])==11)*abs(Lepton_eta[0]) + (abs(Lepton_pdgId[1])==11)*abs(Lepton_eta[1])',      
                        'range' : (60,0,2.5),  
                        'xaxis' : 'Electron #eta', 
                        'fold' : 3
                        }

variables['muon_eta_abs'] = {   'name': '(abs(Lepton_pdgId[0])==13)*abs(Lepton_eta[0]) + (abs(Lepton_pdgId[1])==13)*abs(Lepton_eta[1])',      
                        'range' : (60,0,2.5),  
                        'xaxis' : 'Muon #eta', 
                        'fold' : 3
                        }

variables['electron_eta'] = {   'name': '(abs(Lepton_pdgId[0])==11)*Lepton_eta[0] + (abs(Lepton_pdgId[1])==11)*Lepton_eta[1]',      
                        'range' : (60,-2.5,2.5),  
                        'xaxis' : 'Electron #eta', 
                        'fold' : 3
                        }

variables['electron_eta_zoom'] = {   'name': '(abs(Lepton_pdgId[0])==11)*abs(Lepton_eta[0]) + (abs(Lepton_pdgId[1])==11)*abs(Lepton_eta[1])',      
                        'range' : (20,2,2.5),  
                        'xaxis' : 'Electron #eta', 
                        'fold' : 3
                        }

variables['muon_eta'] = {   'name': '(abs(Lepton_pdgId[0])==13)*Lepton_eta[0] + (abs(Lepton_pdgId[1])==13)*Lepton_eta[1]',      
                        'range' : (60,-2.5,2.5),  
                        'xaxis' : 'Muon #eta', 
                        'fold' : 3
                        }


variables['electron_pt'] = {   'name': '(abs(Lepton_pdgId[0])==11)*Lepton_pt[0] + (abs(Lepton_pdgId[1])==11)*Lepton_pt[1]',      
                        'range' : (50,35,150),  
                        'xaxis' : 'Electron pt', 
                        'fold' : 3
                        } 

variables['electron_zoom'] = {   'name': '(abs(Lepton_pdgId[0])==11)*Lepton_pt[0] + (abs(Lepton_pdgId[1])==11)*Lepton_pt[1]',      
                        'range' : (50,35,100),  
                        'xaxis' : 'Electron pt', 
                        'fold' : 3
                        } 

variables['muon_pt'] = {   'name': '(abs(Lepton_pdgId[0])==13)*Lepton_pt[0] + (abs(Lepton_pdgId[1])==13)*Lepton_pt[1]',      
                        'range' : (50,0,150),  
                        'xaxis' : 'Muon pt', 
                        'fold' : 3
                        }   


variables['Electron_deltaEtaSC'] = { 'name': 'Electron_deltaEtaSC[0]',
                                    'range' : (30,-0.1,0.1),  
                                    'xaxis' : 'Electron #Delta#eta SuperCluster', 
                                    'fold' : 3
                        }    


variables['Electron_dxy'] = { 'name': 'Electron_dxy[0]',
                                    'range' : (40,-0.15,0.15),  
                                    'xaxis' : 'Electron dxy', 
                                    'fold' : 3
                        }    

variables['Electron_dz'] = { 'name': 'Electron_dz[0]',
                                    'range' : (40,-0.5, 0.5),  
                                    'xaxis' : 'Electron dz', 
                                    'fold' : 3
                        }    

variables['Electron_eInvMinusPInv'] = { 'name': 'Electron_eInvMinusPInv[0]',
                                    'range' : (40,-0.15,0),  
                                    'xaxis' : 'Electron 1/E_SC - 1/p_trk', 
                                    'fold' : 3
                        }    

variables['Electron_hoe'] = { 'name': 'Electron_hoe[0]',
                                    'range' : (60,0,0.2),  
                                    'xaxis' : 'Electron H over E', 
                                    'fold' : 3
                        }    

variables['Electron_jetPtRelv2'] = { 'name': 'Electron_jetPtRelv2[0]',
                                    'range' : (50,0,60),  
                                    'xaxis' : 'Rel. lep Pt wrt closest jet after lep subtract.', 
                                    'fold' : 3
                        }    

variables['Electron_lostHits'] = { 'name': 'Electron_lostHits[0]',
                                    'range' : (8,0,8),  
                                    'xaxis' : 'Electron Lost hits', 
                                    'fold' : 3
                        }    


variables['Electron_pfRelIso03_all'] = { 'name': 'Electron_pfRelIso03_all[0]',
                                    'range' : (60,0,0.6),  
                                    'xaxis' : 'PF relative iso R=0.3', 
                                    'fold' : 3
                        }    

variables['Electron_pfRelIso03_chg'] = { 'name': 'Electron_pfRelIso03_chg[0]',
                                    'range' : (60,0,0.6),  
                                    'xaxis' : 'PF relative iso R=0.3, charged', 
                                    'fold' : 3
                        } 

variables['Electron_r9'] = { 'name': 'Electron_r9[0]',
                                    'range' : (40,0,1),  
                                    'xaxis' : 'Electron R9', 
                                    'fold' : 3
                        } 


variables['Electron_sieie'] = { 'name': 'Electron_sieie[0]',
                                    'range' : (40,0,0.05),  
                                    'xaxis' : 'Sigma iEtaiEta supercluster full5x5', 
                                    'fold' : 3
                        } 
 
variables['Electron_sip3d'] = { 'name': 'Electron_sip3d[0]',
                                    'range' : (50,0,25),  
                                    'xaxis' : '3D impact parameter significance wrt first PV, in cm', 
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


variables["nearest_ele_jet_dR"] = {'name':'nearestEleJet',
                        'range':(40,0,4),
                        'xaxis':"DeltaR electron to nearest jet",
                        'fold':3
                        }