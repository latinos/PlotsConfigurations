# variabeadines

#variables = {}
    

variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }


# FatJet variables
variables['fatjet_pt'] = {   'name': 'CleanFatJet_pt[0]',      
                        'range' : (60,0,800),  
                        'xaxis' : 'FatJet Pt GeV', 
                        'fold' : 3
                        }

variables['fatjet_eta'] = {   'name': 'abs(CleanFatJet_eta[0])',      
                        'range' : (50,0,2.5),  
                        'xaxis' : 'FatJet eta', 
                        'fold' : 3
                        }

variables['fatjet_tau21'] = {   'name': 'CleanFatJet_tau21[0]',      
                        'range' : (50,0,1),  
                        'xaxis' : 'FatJet #tau_{21}', 
                        'fold' : 3
                        }

variables['fatjet_tau32'] = {   'name': 'FatJet_tau3[CleanFatJet_jetIdx[0]] / FatJet_tau2[CleanFatJet_jetIdx[0]] ',      
                        'range' : (50,0,1),  
                        'xaxis' : 'FatJet #tau_{32}', 
                        'fold' : 3
                        }

variables['fatjet_Zep'] = {     
                        'name'  : "Zepp(CleanFatJet_eta[0],CleanJet_eta[CleanJetNotFat_jetIdx[0]],CleanJet_eta[CleanJetNotFat_jetIdx[1]])",
                        'range' : (50,-10,10),  
                        'xaxis' : 'Zeppenfeld Fatjet', 
                        'fold' : 3,
                        'linesToAdd' : [
                            'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
                            '.L /afs/cern.ch/work/d/dvalsecc/private/CMSSW_10_2_0/src/PlotsConfigurations/Configurations/VBSjjlnu/ControlRegions2017/functions.C'
                        ],
                    }  

variables['fatjet_minDRjets'] = {   'name': 'Min$(CleanJetNotFat_deltaR)',      
                        'range' : (40,0,5),  
                        'xaxis' : 'FatJet min #DeltaR from jets', 
                        'fold' : 3
                        }

variables['fatjet_maxDRjets'] = {   'name': 'Max$(CleanJetNotFat_deltaR)',      
                        'range' : (40,0,5),  
                        'xaxis' : 'FatJet max #DeltaR from jets', 
                        'fold' : 3
                        }


variables['deltaR_lep_FatJet'] = {   'name': 'deltaR_lep_vjet',      
                        'range' : (80,0,6),  
                        'xaxis' : '#DeltaR FatJet-lepton', 
                        'fold' : 3
                        }

#jets 
# Njets not Fat with more than 30 GeV
variables['nJets'] = {   'name': 'Sum$(CleanJet_pt[CleanJetNotFat_jetIdx] >= 30)',      
                        'range' : (10,0,10),  
                        'xaxis' : 'nJets >= 30 GeV', 
                        'fold' : 3
                        }

variables['Jet2_eta'] = {   'name': 'abs(CleanJet_eta[CleanJetNotFat_jetIdx[0]])',      
                        'range' : (50,0,5),  
                        'xaxis' : 'Jet2 #eta', 
                        'fold' : 3
                        }

variables['Jet3_eta'] = {   'name': 'abs(CleanJet_eta[CleanJetNotFat_jetIdx[1]])',      
                        'range' : (50,0,5),  
                        'xaxis' : 'Jet3 #eta', 
                        'fold' : 3
                        }


variables['Jet2_pt'] = {   'name': 'abs(CleanJet_pt[CleanJetNotFat_jetIdx[0]])',      
                        'range' : (60,0,500),  
                        'xaxis' : 'Jet2 pt', 
                        'fold' : 3
                        }

variables['Jet3_pt'] = {   'name': 'abs(CleanJet_pt[CleanJetNotFat_jetIdx[1]])',      
                        'range' : (60,0,500),  
                        'xaxis' : 'Jet3 pt', 
                        'fold' : 3
                        } 

# 4th jet
variables["Jet4_eta"] = {   'name': 'Alt$(abs(CleanJet_eta[CleanJetNotFat_jetIdx[2]]),-1)',      
                        'range' : (60,0,5),  
                        'xaxis' : 'Jet4 #eta', 
                        'fold' : 3
                        }

variables["Jet4_pt"] = {   'name': 'Alt$(abs(CleanJet_pt[CleanJetNotFat_jetIdx[2]]),-1)',      
                        'range' : (60,0,500),  
                        'xaxis' : 'Jet4 Pt', 
                        'fold' : 3
                        }


variables['Jet4_Zep'] = {     
                        'name'  : "Alt$(Zepp(CleanJet_eta[CleanJetNotFat_jetIdx[2]],CleanJet_eta[CleanJetNotFat_jetIdx[0]],CleanJet_eta[CleanJetNotFat_jetIdx[1]]),-999)",
                        'range' : (50,-10,10),  
                        'xaxis' : 'Zeppenfeld 4th jet', 
                        'fold' : 3,
                        'linesToAdd' : [
                            'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
                            '.L /afs/cern.ch/work/d/dvalsecc/private/CMSSW_10_2_0/src/PlotsConfigurations/Configurations/VBSjjlnu/ControlRegions2017/functions.C'
                        ],
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

variables['Lepton_Zep'] = {     
                        'name'  : "Zepp(Lepton_eta[0],CleanJet_eta[CleanJetNotFat_jetIdx[0]],CleanJet_eta[CleanJetNotFat_jetIdx[1]])",
                        'range' : (50,-10,10),  
                        'xaxis' : 'Lepton Zeppenfeld', 
                        'fold' : 3,
                        'linesToAdd' : [
                            'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
                            '.L /afs/cern.ch/work/d/dvalsecc/private/CMSSW_10_2_0/src/PlotsConfigurations/Configurations/VBSjjlnu/ControlRegions2017/functions.C'
                        ],
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

################################
#### VBS variables

variables["vbs_index_high"] = {   'name': 'VBS_jets[0]',      
                        'range' : (10,0,10),  
                        'xaxis' : 'Index leading VBS jet', 
                        'fold' : 3
                        }

variables["vbs_index_low"] = {   'name': 'VBS_jets[1]',      
                        'range' : (10,0,10),  
                        'xaxis' : 'Index trailing VBS jet', 
                        'fold' : 3
                        }

variables['vbs_eta_high'] = {   'name': 'vbs_eta_high',      
                        'range' : (50,0,5),  
                        'xaxis' : 'leading VBS jet #eta', 
                        'fold' : 3
                        }

variables['vbs_eta_low'] = {   'name': 'vbs_eta_low',      
                        'range' : (50,0,5),  
                        'xaxis' : 'trailing VBS jet #eta', 
                        'fold' : 3
                        }

variables['vbs_etaprod'] = {   'name': 'vbs_etaprod',      
                        'range' : (70,-10,10),  
                        'xaxis' : 'vbs_etaprod', 
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

variables['mjj_vbs'] = {   'name': 'mjj_vbs',      
                        'range' : (80,200,2500),  
                        'xaxis' : 'mjj_vbs', 
                        'fold' : 3
                        }


#delta angles between the VBS jets
variables['deltaeta_vbs'] = {   'name': 'deltaeta_vbs',      
                        'range' : (60,0,9),  
                        'xaxis' : '#Delta#eta VBS jets', 
                        'fold' : 3
                        }

variables['deltaphi_vbs'] = {   'name': 'deltaphi_vbs',      
                        'range' : (40,0,3.5),  
                        'xaxis' : '#Delta#phi VBS jets', 
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


variables['Ht'] = {   'name': 'Ht',      
                        'range' : (60,0,1800),  
                        'xaxis' : 'Ht', 
                        'fold' : 3
                        }
