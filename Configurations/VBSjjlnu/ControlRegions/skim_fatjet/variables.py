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
                        'fold' : 3
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


# combined variabled Jet 2,3 (not fat)
variables["deltaeta_jj23"] =  {
                        'name': 'abs(CleanJet_eta[CleanJetNotFat_jetIdx[0]] -CleanJet_eta[CleanJetNotFat_jetIdx[1]])',      
                        'range' : (50,0,10),  
                        'xaxis' : '#Delta#eta jets 2-3', 
                        'fold' : 3
}


variables['mjj23'] = {     
                        'name'  : "mjj(CleanJet_pt[CleanJetNotFat_jetIdx[0]],CleanJet_eta[CleanJetNotFat_jetIdx[0]],\
                            CleanJet_phi[CleanJetNotFat_jetIdx[0]],Jet_mass[CleanJet_jetIdx[CleanJetNotFat_jetIdx[0]]],\
                            CleanJet_pt[CleanJetNotFat_jetIdx[1]],CleanJet_eta[CleanJetNotFat_jetIdx[1]],\
                            CleanJet_phi[CleanJetNotFat_jetIdx[1]],Jet_mass[CleanJet_jetIdx[CleanJetNotFat_jetIdx[1]]])",
                        'range' : (60,0,2000),  
                        'xaxis' : 'Mjj jets 2-3', 
                        'fold' : 3,
                        'linesToAdd' : [
                            'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
                            '.L /afs/cern.ch/work/d/dvalsecc/private/CMSSW_10_2_0/src/PlotsConfigurations/Configurations/VBSjjlnu/ControlRegions2017/functions.C'
                        ],
                    }    
 