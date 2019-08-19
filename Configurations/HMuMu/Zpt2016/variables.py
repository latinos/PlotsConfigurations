# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
variables['events']  = {   
    'name': '1',
    'range' : (1,0,2),
    'xaxis' : 'events',
    'fold' : 3
}

 
## just for fun plots:
                  
variables['ptll']  = {  
    'name': 'ptll',
    'range' : (40,0,200),
    'xaxis' : 'pt_{ll}',
    'fold' : 3
}

variables['nvtx']  = {   
    'name': 'PV_npvsGood',      
    'range' : (40,0,40),  
    'xaxis' : 'nvtx', 
    'fold' : 3
}

variables['mll']  = {   
    'name': 'mll',
    'range' : (30,76,106),
    'xaxis' : 'm_{ll} [GeV]',
    'fold' : 0
}
                       
# variables['drll']  = {  
#     'name': 'drll',
#     'range' : (100,0,5),
#     'xaxis' : 'DR_{ll}',
#     'fold' : 3
# }

# variables['pt1']  = {  
#     'name': 'Lepton_pt[0]',
#     'range' : (20,0,200),
#     'xaxis' : 'pt_{1} [GeV]',
#     'fold' : 0
# }

# variables['pt2']  = {   
#     'name': 'Lepton_pt[1]',
#     'range' : (20,0,200),
#     'xaxis' : 'pt_{2} [GeV]',
#     'fold' : 0
# }

# variables['jetpt1']  = {  
#     'name': 'CleanJet_pt[0]*(CleanJet_pt[0]>30)',
#     'range' : (20,0,200),
#     'xaxis' : 'jet pt_{1} [GeV]',
#     'fold' : 0
# }

# variables['jetpt1_0j']  = {  
#     'name': 'CleanJet_pt[0]*(CleanJet_pt[0]<30)',
#     'range' : (20,0,200),
#     'xaxis' : 'jet pt_{1} [GeV]',
#     'fold' : 0
# }

# variables['njet']  = {
#     'name': 'Sum$(CleanJet_pt>30)',     
#     'range' : (5,0,5),   
#     'xaxis' : 'Number of jets',
#     'fold' : 2
# }

# variables['muon_lepton1']  = {
#     'name': 'Muon_pt[0] - Lepton_pt[0]',     
#     'range' : (50,-10,10),   
#     'xaxis' : 'Test1',
#     'fold' : 2
# }

# variables['muon_lepton2']  = {
#     'name': 'Muon_pt[1] - Lepton_pt[1]',     
#     'range' : (50,-10,10),   
#     'xaxis' : 'Test2',
#     'fold' : 2
# }

# variables['mth']  = {   'name': 'mth',
#                        'range' : (10,60,200),
#                        'xaxis' : 'm_{T}^{H} [GeV]',
#                        'fold' : 0
#                        }

# variables['ptll']  = {   'name': 'ptll',
#                        'range' : (20,0,200),
#                        'xaxis' : 'pt_{ll} [GeV]',
#                        'fold' : 0
#                        }

# variables['pt1']  = {   'name': 'Lepton_pt[0]',
#                         'range' : (20,0,200),
#                         'xaxis' : 'pt_{1} [GeV]',
#                         'fold' : 0
#                     }

