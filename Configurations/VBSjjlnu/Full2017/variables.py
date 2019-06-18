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

