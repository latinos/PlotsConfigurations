# variables

#variables = {}
    


variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }

variables["FatJet_eta"] = {   
                        'name': 'FatJet_eta[0]',      
                        'range' : (40,-5,5),  
                        'xaxis' : 'FatJet #eta', 
                        'fold' : 3  # both underflow and overflow bin are moved inside the histogram
                }

variables['nFatJet'] = {   'name': 'nFatJet',      
                        'range' : (5,0,4),  
                        'xaxis' : 'nFatJet', 
                        'fold' : 3
                        }

variables['FatJet_pt'] = {   'name': 'FatJet_pt[0]',      
                        'range' : (40,150,350),  
                        'xaxis' : 'FatJet_pt', 
                        'fold' : 3
                        }

#variables['FatJet_tau2'] = {   'name': 'FatJet_pt[0]',      

