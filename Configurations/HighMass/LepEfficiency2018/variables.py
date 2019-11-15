# variables

#variables = {}
    


variables['events']  = {
    'name' : '1',      
    'range': (1,0,2),  
    'xaxis': 'events', 
    'fold' : 3
}

variables['firstLeptonPt']  = {   
    'name' : 'Lepton_pt[0]',
    'range': (40,0,500),
    'xaxis': '1st lep pt', 
    'fold' : 0
}

variables['secondLeptonPt_tag']  = {   
    'name' : 'Lepton_pt[1]',      
    'range': ([10, 20, 35, 50, 90, 150, 500],),
    'xaxis': '2nd lep pt', 
    'fold' : 0,
}


variables['secondLeptonPt_probe']  = {   
    'name' : 'Lepton_pt[1] * probe',      
    'range': ([10, 20, 35, 50, 90, 150, 500],),
    'xaxis': '2nd lep pt', 
    'fold' : 0
}
