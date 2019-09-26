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

variables['Jet1_pt'] = {   'name': 'CleanJet_pt[0]',      
                        'range' : (50,0,600),  
                        'xaxis' : 'Jet 1 pt', 
                        'fold' : 3
                        } 

variables['Jet2_pt'] = {   'name': 'CleanJet_pt[1]',      
                        'range' : (50,0,600),  
                        'xaxis' : 'Jet 2 pt', 
                        'fold' : 3
                        } 

variables['Jet3_pt'] = {   'name': 'CleanJet_pt[2]',      
                        'range' : (50,0,600),  
                        'xaxis' : 'Jet 3 pt', 
                        'fold' : 3
                        } 

variables['Jet4_pt'] = {   'name': 'CleanJet_pt[3]',      
                        'range' : (50,0,600),  
                        'xaxis' : 'Jet 4 pt', 
                        'fold' : 3
                        } 

variables['Jet1_eta'] = {   'name': 'CleanJet_eta[0]',      
                        'range' : (50,0,5),  
                        'xaxis' : 'Jet 1 eta', 
                        'fold' : 3
                        } 

variables['Jet2_eta'] = {   'name': 'CleanJet_eta[1]',      
                        'range' : (50,0,5),  
                        'xaxis' : 'Jet 2 eta', 
                        'fold' : 3
                        } 

variables['Jet3_eta'] = {   'name': 'CleanJet_eta[2]',      
                        'range' : (50,0,5),  
                        'xaxis' : 'Jet 3 eta', 
                        'fold' : 3
                        } 

variables['Jet4_eta'] = {   'name': 'CleanJet_eta[3]',      
                        'range' : (50,0,5),  
                        'xaxis' : 'Jet 4 eta', 
                        'fold': 3
                        }