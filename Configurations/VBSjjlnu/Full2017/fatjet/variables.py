# variabeadines

#variables = {}
    

variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }


# FatJet variables
variables['fatjet_pt'] = {   'name': 'CleanFatJet_pt[0]',      
                        'range' : (30,0,800),  
                        'xaxis' : 'FatJet Pt [GeV]', 
                        'fold' : 3
                        }

variables['fatjet_eta'] = {   'name': 'abs(CleanFatJet_eta[0])',      
                        'range' : (30,0,2.5),  
                        'xaxis' : 'FatJet eta', 
                        'fold' : 3
                        }

variables['fatjet_mass'] = {   'name': 'CleanFatJet_mass[0]',      
                        'range' : (40,50,150),  
                        'xaxis' : 'FatJet mass [GeV]', 
                        'fold' : 3
                        }

variables['fatjet_tau21'] = {   'name': 'CleanFatJet_tau21[0]',      
                        'range' : (35,0,1),  
                        'xaxis' : 'FatJet #tau_{21}', 
                        'fold' : 3
                        }

variables['fatjet_tau32'] = {   'name': 'FatJet_tau3[CleanFatJet_jetIdx[0]] / FatJet_tau2[CleanFatJet_jetIdx[0]] ',      
                        'range' : (40,0,1),  
                        'xaxis' : 'FatJet #tau_{32}', 
                        'fold' : 3
                        }

variables['fatjet_btag'] = {   'name': 'FatJet_btagDeepB[CleanFatJet_jetIdx[0]]',      
                        'range' : (30,0,1),  
                        'xaxis' : 'FatJet DeepCSV b+bb discriminator', 
                        'fold' : 3
                        }

variables['fatjet_tag_WvsQCD'] = {   'name': 'FatJet_deepTag_WvsQCD[CleanFatJet_jetIdx[0]]',      
                        'range' : (30,0,1),  
                        'xaxis' : 'DeepBoostedJet tagger W vs QCD discriminator', 
                        'fold' : 3
                        }

variables['fatjet_tagMD_WvsQCD'] = {   'name': 'FatJet_deepTagMD_WvsQCD[CleanFatJet_jetIdx[0]]',      
                        'range' : (30,0,1),  
                        'xaxis' : 'Mass-decorrelated DeepBoostedJet tagger W vs QCD discriminator', 
                        'fold' : 3
                        }

variables['fatjet_tag_ZvsQCD'] = {   'name': 'FatJet_deepTag_ZvsQCD[CleanFatJet_jetIdx[0]]',      
                        'range' : (30,0,1),  
                        'xaxis' : 'DeepBoostedJet tagger Z vs QCD discriminator', 
                        'fold' : 3
                        }

variables['fatjet_tagMD_ZvsQCD'] = {   'name': 'FatJet_deepTagMD_ZvsQCD[CleanFatJet_jetIdx[0]]',      
                        'range' : (30,0,1),  
                        'xaxis' : 'Mass-decorrelated DeepBoostedJet tagger Z vs QCD discriminator', 
                        'fold' : 3
                        }

variables['fatjet_Zep'] = {     
                        'name'  : "Zepp(CleanFatJet_eta[0],CleanJet_eta[CleanJetNotFat_jetIdx[0]],CleanJet_eta[CleanJetNotFat_jetIdx[1]])",
                        'range' : (30,-10,10),  
                        'xaxis' : 'Zeppenfeld Fatjet', 
                        'fold' : 3,
                        'linesToAdd' : [
                            'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
                            '.L /afs/cern.ch/work/d/dvalsecc/private/CMSSW_10_2_0/src/PlotsConfigurations/Configurations/VBSjjlnu/Full2017/functions.C'
                        ],
                    }  

variables['fatjet_minDRjets'] = {   'name': 'Min$(CleanJetNotFat_deltaR)',      
                        'range' : (30,0,5),  
                        'xaxis' : 'FatJet min #DeltaR from jets', 
                        'fold' : 3
                        }

variables['fatjet_maxDRjets'] = {   'name': 'Max$(CleanJetNotFat_deltaR)',      
                        'range' : (30,0,7),  
                        'xaxis' : 'FatJet max #DeltaR from jets', 
                        'fold' : 3
                        }


variables['deltaR_lep_FatJet'] = {   'name': 'deltaR_lep_vjet',      
                        'range' : (40,0,6),  
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
                        
# Minimum pt 20 GeV in NanoGardening step
variables['N_jets_central'] = {   'name': 'N_jets_central',      
                        'range' : (10,0,10),  
                        'xaxis' : '#jets between VBS jets', 
                        'fold' : 3
                        }


variables['N_jets_forward'] = {   'name': 'Ht',      
                        'range' : (10,0,10),  
                        'xaxis' : '#jets outside VBS jets', 
                        'fold' : 3
                    }

variables['Jet2_eta'] = {   'name': 'abs(CleanJet_eta[CleanJetNotFat_jetIdx[0]])',      
                        'range' : (30,0,5),  
                        'xaxis' : 'Jet2 #eta', 
                        'fold' : 3
                        }

variables['Jet3_eta'] = {   'name': 'abs(CleanJet_eta[CleanJetNotFat_jetIdx[1]])',      
                        'range' : (30,0,5),  
                        'xaxis' : 'Jet3 #eta', 
                        'fold' : 3
                        }


variables['Jet2_pt'] = {   'name': 'abs(CleanJet_pt[CleanJetNotFat_jetIdx[0]])',      
                        'range' : (30,0,500),  
                        'xaxis' : 'Jet2 pt', 
                        'fold' : 3
                        }

variables['Jet3_pt'] = {   'name': 'abs(CleanJet_pt[CleanJetNotFat_jetIdx[1]])',      
                        'range' : (30,0,500),  
                        'xaxis' : 'Jet3 pt', 
                        'fold' : 3
                        } 

# 4th jet
variables["Jet4_eta"] = {   'name': 'Alt$(abs(CleanJet_eta[CleanJetNotFat_jetIdx[2]]),-1)',      
                        'range' : (30,0,5),  
                        'xaxis' : 'Jet4 #eta', 
                        'fold' : 3
                        }

variables["Jet4_pt"] = {   'name': 'Alt$(abs(CleanJet_pt[CleanJetNotFat_jetIdx[2]]),-1)',      
                        'range' : (30,0,500),  
                        'xaxis' : 'Jet4 Pt', 
                        'fold' : 3
                        }


variables['Jet4_Zep'] = {     
                        'name'  : "Alt$(Zepp(CleanJet_eta[CleanJetNotFat_jetIdx[2]],CleanJet_eta[CleanJetNotFat_jetIdx[0]],CleanJet_eta[CleanJetNotFat_jetIdx[1]]),-999)",
                        'range' : (30,-10,10),  
                        'xaxis' : 'Zeppenfeld 4th jet', 
                        'fold' : 3,
                        'linesToAdd' : [
                            'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
                            '.L /afs/cern.ch/work/d/dvalsecc/private/CMSSW_10_2_0/src/PlotsConfigurations/Configurations/VBSjjlnu/Full2017/functions.C'
                        ],
                    }

#leptons

variables['Lepton_eta'] = {   'name': 'abs(Lepton_eta[0])',      
                        'range' : (30,0,2.5),  
                        'xaxis' : 'Lepton #eta', 
                        'fold' : 3
                        }


variables['Lepton_pt'] = {   'name': 'Lepton_pt[0]',      
                        'range' : (30,0,500),  
                        'xaxis' : 'Lepton_pt', 
                        'fold' : 3
                        }  

variables['Lepton_Zep'] = {     
                        'name'  : "Zepp(Lepton_eta[0],CleanJet_eta[CleanJetNotFat_jetIdx[0]],CleanJet_eta[CleanJetNotFat_jetIdx[1]])",
                        'range' : (30,-10,10),  
                        'xaxis' : 'Lepton Zeppenfeld', 
                        'fold' : 3,
                        'linesToAdd' : [
                            'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
                            '.L /afs/cern.ch/work/d/dvalsecc/private/CMSSW_10_2_0/src/PlotsConfigurations/Configurations/VBSjjlnu/Full2017/functions.C'
                        ],
                    }                     


#MET

variables['PuppiMET'] = {   'name': 'PuppiMET_pt',      
                        'range': (30,0, 500),  
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
                        'range' : (30,-700,700),  
                        'xaxis' : 'recoMET pz', 
                        'fold' : 3
                        }


################################
#### VBS variables

variables["vbs_index_high"] = {   'name': 'VBS_jets_maxmjj[0]',      
                        'range' : (10,0,10),  
                        'xaxis' : 'Index leading VBS jet', 
                        'fold' : 3
                        }

variables["vbs_index_low"] = {   'name': 'VBS_jets_maxmjj[1]',      
                        'range' : (10,0,10),  
                        'xaxis' : 'Index trailing VBS jet', 
                        'fold' : 3
                        }

variables['vbs_eta_high'] = {   'name': 'vbs_eta_high',      
                        'range' : (30,0,5),  
                        'xaxis' : 'leading VBS jet #eta', 
                        'fold' : 3
                        }

variables['vbs_eta_low'] = {   'name': 'vbs_eta_low',      
                        'range' : (30,0,5),  
                        'xaxis' : 'trailing VBS jet #eta', 
                        'fold' : 3
                        }

variables['vbs_etaprod'] = {   'name': 'vbs_etaprod',      
                        'range' : (30,-10,10),  
                        'xaxis' : 'vbs_etaprod', 
                        'fold' : 3
                        }

variables['vbs_pt_high'] = {   'name': 'vbs_pt_high',      
                        'range' : (30,0,500),  
                        'xaxis' : 'leading VBS jet pt', 
                        'fold' : 3
                        }

variables['vbs_pt_low'] = {   'name': 'vbs_pt_low',      
                        'range' : (30,0,500),  
                        'xaxis' : 'trailing VBS jet pt', 
                        'fold' : 3
                        } 

variables['mjj_vbs'] = {   'name': 'mjj_vbs',      
                        'range' : (40,200,3000),  
                        'xaxis' : 'mjj_vbs', 
                        'fold' : 3
                        }


#delta angles between the VBS jets
variables['deltaeta_vbs'] = {   'name': 'deltaeta_vbs',      
                        'range' : (30,0,9),  
                        'xaxis' : '#Delta#eta VBS jets', 
                        'fold' : 3
                        }

variables['deltaphi_vbs'] = {   'name': 'deltaphi_vbs',      
                        'range' : (30,0,3.5),  
                        'xaxis' : '#Delta#phi VBS jets', 
                        'fold' : 3
                        }


#Zlep
variables['Zlep'] = {   'name': 'Zlep',      
                        'range' : (30,-3,3),  
                        'xaxis' : 'Zlep', 
                        'fold' : 3
                        }

#Asym
variables['Asym_vbs'] = {   'name': 'Asym_vbs',      
                        'range' : (30,0,1),  
                        'xaxis' : 'Asym_vbs', 
                        'fold' : 3
                        }


variables['Mww'] = {   'name': 'Mww',      
                        'range' : (30,0,2000),  
                        'xaxis' : 'Mww', 
                        'fold' : 3
                        }

variables['Mw_lep_reco'] = {   'name': 'Mw_lep',      
                        'range' : (30,0,200),  
                        'xaxis' : 'Mass W leptonic', 
                        'fold' : 3
                        }

variables['Mtw_lep'] = {   'name': 'Mtw_lep',      
                        'range' : (30,0,300),  
                        'xaxis' : 'Mass T W leptonic', 
                        'fold' : 3
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

variables['Centr_vbs'] = {   'name': 'Centr_vbs',      
                        'range' : (30,0,3),  
                        'xaxis' : 'Centr_vbs', 
                        'fold' : 3
                        }

variables['Centr_ww'] = {   'name': 'Centr_ww',      
                        'range' : (30,-6,5),  
                        'xaxis' : 'Centr_ww', 
                        'fold' : 3
                        }


variables['Ht'] = {   'name': 'Ht',      
                        'range' : (30,0,2000),  
                        'xaxis' : 'Ht', 
                        'fold' : 3
                        }

# Check variables

variables['mll'] = {   'name': 'mll',      
                        'range' : (40,0,300),  
                        'xaxis' : 'Invariant mass of two leptons', 
                        'fold' : 3
                        }

variables['nvtx'] = {  'name': 'PV_npvs',
                        'range': (50, 0,60),
                        'xaxis': 'N. primary vertices',
                        'fold': 3
                }

