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
                  
variables['mll']  = {   
    'name': 'mll',
    'range' : (11,105,160),
    'xaxis' : 'm_{ll} [GeV]',
    'fold' : 0
}
                       
variables['mll_test']  = {   
    'name': 'mll',
    'range' : (55,105,160),
    'xaxis' : 'm_{ll} [GeV]',
    'fold' : 0
}
                       
variables['drll']  = {  
    'name': 'drll',
    'range' : (100,0,5),
    'xaxis' : 'DR_{ll}',
    'fold' : 3
}

variables['ptll']  = {  
    'name': 'ptll',
    'range' : (40,0,200),
    'xaxis' : 'pt_{ll}',
    'fold' : 3
}

variables['pt1']  = {  
    'name': 'Lepton_pt[0]',
    'range' : (20,0,200),
    'xaxis' : 'pt_{1} [GeV]',
    'fold' : 0
}

variables['pt2']  = {   
    'name': 'Lepton_pt[1]',
    'range' : (20,0,200),
    'xaxis' : 'pt_{2} [GeV]',
    'fold' : 0
}

variables['eta1']  = {  
    'name': 'Lepton_eta[0]',
    'range' : (24,-2.4,2.4),
    'xaxis' : '#eta_{1} [GeV]',
    'fold' : 0
}

variables['eta2']  = {  
    'name': 'Lepton_eta[2]',
    'range' : (24,-2.4,2.4),
    'xaxis' : '#eta_{2} [GeV]',
    'fold' : 0
}

variables['jetpt1']  = {  
    'name': 'CleanJet_pt[0]*(CleanJet_pt[0]>30)',
    'range' : (20,0,200),
    'xaxis' : 'jet pt_{1} [GeV]',
    'fold' : 0
}

variables['jetpt1_0j']  = {  
    'name': 'CleanJet_pt[0]*(CleanJet_pt[0]<30)',
    'range' : (20,0,200),
    'xaxis' : 'jet pt_{1} [GeV]',
    'fold' : 0
}

variables['jeteta1']  = {  
    'name': 'CleanJet_eta[0]*(CleanJet_eta[0]>30)',
    'range' : (24,-4.8,4.8),
    'xaxis' : 'jet #eta_{1} [GeV]',
    'fold' : 0
}

variables['jeteta1_0j']  = {  
    'name': 'CleanJet_eta[0]*(CleanJet_eta[0]<30)',
    'range' : (24,-4.8,4.8),
    'xaxis' : 'jet #eta_{1} [GeV]',
    'fold' : 0
}

variables['jetpt2']  = {  
    'name': 'CleanJet_pt[1]*(CleanJet_pt[1]>30)',
    'range' : (20,0,200),
    'xaxis' : 'jet pt_{2} [GeV]',
    'fold' : 0
}

variables['jetpt2_0j']  = {  
    'name': 'CleanJet_pt[1]*(CleanJet_pt[1]<30)',
    'range' : (20,0,200),
    'xaxis' : 'jet pt_{2} [GeV]',
    'fold' : 0
}

variables['jeteta2']  = {  
    'name': 'CleanJet_eta[1]*(CleanJet_eta[1]>30)',
    'range' : (24,-4.8,4.8),
    'xaxis' : 'jet #eta_{2} [GeV]',
    'fold' : 0
}

variables['jeteta2_0j']  = {  
    'name': 'CleanJet_eta[1]*(CleanJet_eta[1]<30)',
    'range' : (24,-4.8,4.8),
    'xaxis' : 'jet #eta_{2} [GeV]',
    'fold' : 0
}

variables['njet']  = {
    'name': 'Sum$(CleanJet_pt>30)',     
    'range' : (5,0,5),   
    'xaxis' : 'Number of jets',
    'fold' : 2
}

variables['nvtx']  = {   
    'name': 'PV_npvsGood',      
    'range' : (40,0,40),  
    'xaxis' : 'nvtx', 
    'fold' : 3
}


variables['puppimet']  = {
    'name': 'PuppiMET_pt',
    'range' : (20,0,200),
    'xaxis' : 'puppimet [GeV]',
    'fold'  : 3
}

variables['met']  = {  
    'name': 'MET_pt',
    'range' : (20,0,200),
    'xaxis' : 'pfmet [GeV]',
    'fold' : 0
}
