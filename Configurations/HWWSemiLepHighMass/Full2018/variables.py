# variables

#variables = {}
    


variables['events']  = {
    'name' : '1',      
    'range': (1,0,2),  
    'xaxis': 'events', 
    'fold' : 3
}

variables['leptonpt']  = {   
    'name' : 'Lepton_pt[0]',      
    'range': (60,0,600),  
    'xaxis': '1st lep pt', 
    'fold' : 3
}

variables['metpt']  = {   
    'name' : 'PuppiMET_pt',      
    'range': (60,0,600),  
    'xaxis': 'missing pt', 
    'fold' : 3
}

# variables['leptonicWmt']  = {  
#     'name': 'leptonicWmt',      
#     'range': (40,0,90),  
#     'xaxis': 'leptonic W mt', 
#     'fold': 3
# }

# variables['leptonpt_leptoneta'] = {
#     'name' : 'Lepton_pt[0], -1:Lepton_eta[0]',            #   variable name    
#     'range': ([100, 0, 1000],[30, 0, 3],),            #   variable range
#     'xaxis': '1st lep pt : 1st lep eta',      #   x axis name
#     'fold' : 3
# }


variables['jet0pt'] = {
   'name' : '$Alt(CleanJet_pt[0], -1)',            #   variable name    
   'range': (100, 0, 1000),            #   variable range
   'xaxis': '1st jet pt',      #   x axis name
   'fold' : 3
}


# variables['higgsGenM'] = {
#     'name' : 'higgsGenMass',
#     'range': (100),
#     'xaxis': 'higgsGenMass',
#     'fold' : 3
# }

# variables['higgsMass'] = {
#     'name' : 'Hlnjj_mass',
#     'range': (100),
#     'xaxis': 'reconstr. H mass',
#     'fold' : 3
# }

# variables['higgsMt'] = {
#     'name' : 'Hlnjj_mt',
#     'range': (100),
#     'xaxis': 'reconstr. H mt',
#     'fold' : 3
# }
