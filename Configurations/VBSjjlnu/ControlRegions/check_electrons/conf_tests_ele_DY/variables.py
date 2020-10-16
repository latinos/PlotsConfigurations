# variables
#variables = {}

variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }
                        
variables['nvtx']  = {   'name': 'PV_npvsGood',      
                        'range' : (100,0,100),  
                        'xaxis' : 'nvtx', 
                         'fold' : 3
                      }

variables['mll'] = {   'name': 'mll',            #   variable name
                           'range' : (40,0,250),    #   variable range
                           'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                           'fold' : 0
                        }


variables['ptll']  = {   'name': 'ptll',     
                        'range' : (40,0,500),   
                        'xaxis' : 'p_{T}ll',
                        'fold'  : 3                         
                        }


variables['jetpt']  = {
                        'name': 'CleanJet_pt[0]',     
                        'range' : (30,0,500),   
                        'xaxis' : 'p_{T} 1st jet',
                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }

variables['jeteta']  = {  'name': 'CleanJet_eta[0]',
                        'range' : (40,-5.0,5.0),
                        'xaxis' : '#eta 1st jet',
                        'fold'  : 2
                        }


variables['electron_eta_abs'] = {   'name': '(Lepton_pdgId[0]==11)*abs(Lepton_eta[0]) + (Lepton_pdgId[1]==11)*abs(Lepton_eta[1])',      
                        'range' : (60,0,2.5),  
                        'xaxis' : 'Electron #eta', 
                        'fold' : 3
                        }

variables['muon_eta_abs'] = {   'name': '(Lepton_pdgId[0]==13)*abs(Lepton_eta[0]) + (Lepton_pdgId[1]==13)*abs(Lepton_eta[1])',      
                        'range' : (60,0,2.5),  
                        'xaxis' : 'Electron #eta', 
                        'fold' : 3
                        }


variables['electron_eta'] = {   'name': '(Lepton_pdgId[0]==11)*Lepton_eta[0] + (Lepton_pdgId[1]==11)*Lepton_eta[1]',      
                        'range' : (60,-2.5,2.5),  
                        'xaxis' : 'Electron #eta', 
                        'fold' : 3
                        }

variables['electron_eta_zoom'] = {   'name': '(Lepton_pdgId[0]==11)*abs(Lepton_eta[0]) + (Lepton_pdgId[1]==11)*abs(Lepton_eta[1])',      
                        'range' : (60,2,2.5),  
                        'xaxis' : 'Electron #eta', 
                        'fold' : 3
                        }


variables['muon_eta_zoom'] = {   'name': '(Lepton_pdgId[0]==13)*abs(Lepton_eta[0]) + (Lepton_pdgId[1]==13)*abs(Lepton_eta[1])',      
                        'range' : (60,2,2.5),  
                        'xaxis' : 'Electron #eta', 
                        'fold' : 3
                        }

variables['muon_eta'] = {   'name': '(Lepton_pdgId[0]==13)*Lepton_eta[0] + (Lepton_pdgId[1]==13)*Lepton_eta[1]',      
                        'range' : (60,-2.5,2.5),  
                        'xaxis' : 'Muon #eta', 
                        'fold' : 3
                        }


variables['electron_pt'] = {   'name': '(Lepton_pdgId[0]==11)*Lepton_pt[0] + (Lepton_pdgId[1]==11)*Lepton_pt[1]',      
                        'range' : (50,0,150),  
                        'xaxis' : 'Electron pt', 
                        'fold' : 3
                        } 

variables['electron_pt_zoom'] = {   'name': '(Lepton_pdgId[0]==11)*Lepton_pt[0] + (Lepton_pdgId[1]==11)*Lepton_pt[1]',      
                        'range' : (50,0,100),  
                        'xaxis' : 'Electron pt', 
                        'fold' : 3
                        } 

variables['muon_pt'] = {   'name': '(Lepton_pdgId[0]==13)*Lepton_pt[0] + (Lepton_pdgId[1]==13)*Lepton_pt[1]',      
                        'range' : (50,0,150),  
                        'xaxis' : 'Muon pt', 
                        'fold' : 3
                        }   


variables['Electron_deltaEtaSC'] = { 'name': '(Lepton_pdgId[0]==11)*Electron_deltaEtaSC[Lepton_electronIdx[0]] + (Lepton_pdgId[1]==11)*Electron_deltaEtaSC[Lepton_electronIdx[1]]',
                                    'range' : (30,-0.1,0.1),  
                                    'xaxis' : 'Electron #Delta#eta SuperCluster', 
                                    'fold' : 3,
                                    'cuts': list(filter(lambda c: "ele" in c, cuts.keys()))
                        }    


variables['Electron_dxy'] = { 'name': '(Lepton_pdgId[0]==11)*Electron_dxy[Lepton_electronIdx[0]] + (Lepton_pdgId[1]==11)*Electron_dxy[Lepton_electronIdx[1]]',
                                    'range' : (40,-0.15,0.15),  
                                    'xaxis' : 'Electron dxy', 
                                    'fold' : 3,
                                    'cuts': list(filter(lambda c: "ele" in c, cuts.keys()))
                        }    

variables['Electron_dz'] = { 'name': '(Lepton_pdgId[0]==11)*Electron_dz[Lepton_electronIdx[0]] + (Lepton_pdgId[1]==11)*Electron_dz[Lepton_electronIdx[1]]',
                                    'range' : (40,-0.5, 0.5),  
                                    'xaxis' : 'Electron dz', 
                                    'fold' : 3,
                                    'cuts': list(filter(lambda c: "ele" in c, cuts.keys()))
                        }    

variables['Electron_eInvMinusPInv'] = { 'name': '(Lepton_pdgId[0]==11)*Electron_eInvMinusPInv[Lepton_electronIdx[0]] + (Lepton_pdgId[1]==11)*Electron_eInvMinusPInv[Lepton_electronIdx[1]]',
                                    'range' : (40,-0.15,0),  
                                    'xaxis' : 'Electron 1/E_SC - 1/p_trk', 
                                    'fold' : 3,
                                    'cuts': list(filter(lambda c: "ele" in c, cuts.keys()))
                        }    

variables['Electron_hoe'] = { 'name': '(Lepton_pdgId[0]==11)*Electron_hoe[Lepton_electronIdx[0]] + (Lepton_pdgId[1]==11)*Electron_hoe[Lepton_electronIdx[1]]',
                                    'range' : (60,0,0.2),  
                                    'xaxis' : 'Electron H over E', 
                                    'fold' : 3,
                                    'cuts': list(filter(lambda c: "ele" in c, cuts.keys()))
                        }    

variables['Electron_jetPtRelv2'] = { 'name': '(Lepton_pdgId[0]==11)*Electron_jetPtRelv2[Lepton_electronIdx[0]] + (Lepton_pdgId[1]==11)*Electron_jetPtRelv2[Lepton_electronIdx[1]]',
                                    'range' : (50,0,60),  
                                    'xaxis' : 'Rel. lep Pt wrt closest jet after lep subtract.', 
                                    'fold' : 3,
                                    'cuts': list(filter(lambda c: "ele" in c, cuts.keys()))
                        }    

variables['Electron_lostHits'] = { 'name': '(Lepton_pdgId[0]==11)*Electron_lostHits[Lepton_electronIdx[0]] + (Lepton_pdgId[1]==11)*Electron_lostHits[Lepton_electronIdx[1]]',
                                    'range' : (8,0,8),  
                                    'xaxis' : 'Electron Lost hits', 
                                    'fold' : 3,
                                    'cuts': list(filter(lambda c: "ele" in c, cuts.keys()))
                        }    


variables['Electron_pfRelIso03_all'] = { 'name': '(Lepton_pdgId[0]==11)*Electron_pfRelIso03_all[Lepton_electronIdx[0]] + (Lepton_pdgId[1]==11)*Electron_pfRelIso03_all[Lepton_electronIdx[1]]',
                                    'range' : (60,0,0.6),  
                                    'xaxis' : 'PF relative iso R=0.3', 
                                    'fold' : 3,
                                    'cuts': list(filter(lambda c: "ele" in c, cuts.keys()))
                        }    

variables['Electron_pfRelIso03_chg'] = { 'name': '(Lepton_pdgId[0]==11)*Electron_pfRelIso03_chg[Lepton_electronIdx[0]] + (Lepton_pdgId[1]==11)*Electron_pfRelIso03_chg[Lepton_electronIdx[1]]',
                                    'range' : (60,0,0.6),  
                                    'xaxis' : 'PF relative iso R=0.3, charged', 
                                    'fold' : 3,
                                    'cuts': list(filter(lambda c: "ele" in c, cuts.keys()))
                        } 

variables['Electron_r9'] = { 'name': '(Lepton_pdgId[0]==11)*Electron_r9[Lepton_electronIdx[0]] + (Lepton_pdgId[1]==11)*Electron_r9[Lepton_electronIdx[1]]',
                                    'range' : (40,0,1),  
                                    'xaxis' : 'Electron R9', 
                                    'fold' : 3,
                                    'cuts': list(filter(lambda c: "ele" in c, cuts.keys()))
                        } 


variables['Electron_sieie'] = { 'name': '(Lepton_pdgId[0]==11)*Electron_sieie[Lepton_electronIdx[0]] + (Lepton_pdgId[1]==11)*Electron_sieie[Lepton_electronIdx[1]]',
                                    'range' : (40,0,0.05),  
                                    'xaxis' : 'Sigma iEtaiEta supercluster full5x5', 
                                    'fold' : 3,
                                    'cuts': list(filter(lambda c: "ele" in c, cuts.keys()))
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
                        'range':(60,-2,4),
                        'xaxis':"DeltaR electron to nearest jet",
                        'fold':3
                        }