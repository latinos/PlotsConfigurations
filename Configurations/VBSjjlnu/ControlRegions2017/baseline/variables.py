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

variables['Jet1_eta'] = {   'name': 'abs(CleanJet_eta[0])',      
                        'range' : (50,0,5),  
                        'xaxis' : 'Jet1 #eta', 
                        'fold' : 3
                        }

variables['Jet2_eta'] = {   'name': 'abs(CleanJet_eta[1])',      
                        'range' : (50,0,5),  
                        'xaxis' : 'Jet2 #eta', 
                        'fold' : 3
                        }

variables['Jet3_eta'] = {   'name': 'abs(CleanJet_eta[2])',      
                        'range' : (50,0,5),  
                        'xaxis' : 'Jet3 #eta', 
                        'fold' : 3
                        }


variables['Jet1_pt'] = {   'name': 'abs(CleanJet_pt[0])',      
                        'range' : (60,0,500),  
                        'xaxis' : 'Jet1 pt', 
                        'fold' : 3
                        }

variables['Jet2_pt'] = {   'name': 'abs(CleanJet_pt[1])',      
                        'range' : (60,0,500),  
                        'xaxis' : 'Jet2 pt', 
                        'fold' : 3
                        }

variables['Jet3_pt'] = {   'name': 'abs(CleanJet_pt[2])',      
                        'range' : (60,0,500),  
                        'xaxis' : 'Jet3 pt', 
                        'fold' : 3
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

# #new variables


# variables['Ht'] = {   'name': 'ht', # formula from latini
#                         'range' : (60,0,1800),  
#                         'xaxis' : 'Ht', 
#                         'fold' : 3
#                         }


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


# mjj
variables['max_mjj'] = {     
                        'range' : (60,0,2000),  
                        'xaxis' : 'max mjj', 
                        'fold' : 3,
                        'linesToAdd' : [
                            'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
                            '.L /afs/cern.ch/work/d/dvalsecc/private/CMSSW_10_2_0/src/PlotsConfigurations/Configurations/VBSjjlnu/ControlRegions2017/max_mjj.cc+'
                        ],
                        'class':'MaxMjj',
                        'args': (30)  # pt min
                    }    

variables['max_deta'] = {     
                        'range' : (30,0,10),  
                        'xaxis' : 'max #Delta#eta', 
                        'fold' : 3,
                        'linesToAdd' : [
                            'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
                            '.L /afs/cern.ch/work/d/dvalsecc/private/CMSSW_10_2_0/src/PlotsConfigurations/Configurations/VBSjjlnu/ControlRegions2017/max_deta.cc+'
                        ],
                        'class':'MaxDEta',
                        'args': (30)
                    }      