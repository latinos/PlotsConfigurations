# variables

# variables = {}

# Control plots for ttHMVAUL
variables['mvaTTH_UL_1'] = {
    'name'  : 'Alt$(Lepton_mvaTTH_UL[0],-1)',
    'range' : (40,0,1),
    'xaxis' : 'Leading electron ttHMVA UL discriminant',
    'fold'  : 3
}

variables['mvaTTH_UL_2'] = {
    'name'  : 'Alt$(Lepton_mvaTTH_UL[1],-1)',
    'range' : (40,0,1),
    'xaxis' : 'Sub-leading electron ttHMVA UL discriminant',
    'fold'  : 3
}


variables['pt1']  = { 
    'name'  : 'Lepton_pt[0]',     
    'range' : (20,0,100),
    'xaxis' : 'p_{T} 1st lep',
    'fold'  : 3                         
}

variables['pt2']  = {
    'name'  : 'Lepton_pt[1]',     
    'range' : (20,0,100),   
    'xaxis' : 'p_{T} 2nd lep',
    'fold'  : 3                         
}

variables['eta1']  = {
    'name'  : 'Lepton_eta[0]',     
    'range' : (20,-3,3),   
    'xaxis' : '#eta 1st lep',
    'fold'  : 3                         
}

variables['eta2']  = {
    'name'  : 'Lepton_eta[1]',     
    'range' : (20,-3,3),   
    'xaxis' : '#eta 2nd lep',
    'fold'  : 3                         
}


variables['Ele_pfRelIso_1']  = {
    'name'  : 'Ele_pfRelIso_1',
    'range' : (40,0,1),   
    'xaxis' : 'Leading electron P.F. Rel. Iso.',
    'fold'  : 3                         
}

variables['Ele_pfRelIso_2']  = {
    'name'  : 'Ele_pfRelIso_2',
    'range' : (40,0,1),   
    'xaxis' : 'Sub-leading electron P.F. Rel. Iso.',
    'fold'  : 3                         
}

variables['Ele_miniPFRelIso_chg_1']  = {
    'name'  : 'Ele_miniPFRelIso_chg_1',
    'range' : (40,0,1),   
    'xaxis' : 'Leading electron Mini P.F. Rel. Iso. charged',
    'fold'  : 3                         
}

variables['Ele_miniPFRelIso_chg_2']  = {
    'name'  : 'Ele_miniPFRelIso_chg_2',
    'range' : (40,0,1),   
    'xaxis' : 'Sub-leading electron Mini P.F. Rel. Iso. charged',
    'fold'  : 3                         
}

variables['Ele_miniRelIsoNeutral_1']  = {
    'name'  : 'Ele_miniRelIsoNeutral_1',
    'range' : (40,0,1),   
    'xaxis' : 'Leading electron Mini Rel. Iso. Neutral',
    'fold'  : 3                         
}

variables['Ele_miniRelIsoNeutral_2']  = {
    'name'  : 'Ele_miniRelIsoNeutral_2',
    'range' : (40,0,1),   
    'xaxis' : 'Sub-leading electron Mini Rel. Iso. Neutral',
    'fold'  : 3                         
}

variables['Ele_jetNDauCharged_1']  = {
    'name'  : 'Ele_jetNDauCharged_1',
    'range' : (10,0,10),   
    'xaxis' : 'Leading electron Jet number of charged daughter',
    'fold'  : 3                         
}

variables['Ele_jetNDauCharged_2']  = {
    'name'  : 'Ele_jetNDauCharged_2',
    'range' : (10,0,10),   
    'xaxis' : 'Sub-leading electron Jet number of charged daughter',
    'fold'  : 3                         
}

variables['Ele_jetPtRelv2_1']  = {
    'name'  : 'Ele_jetPtRelv2_1',
    'range' : (40,0,1),   
    'xaxis' : 'Leading electron Jet relative pT',
    'fold'  : 3                         
}

variables['Ele_jetPtRelv2_2']  = {
    'name'  : 'Ele_jetPtRelv2_2',
    'range' : (40,0,1),
    'xaxis' : 'Sub-leading electron Jet relative pT',
    'fold'  : 3
}

variables['Ele_jetBTagDeepFlavB_1']  = {
    'name'  : 'Ele_jetBTagDeepFlavB_1',
    'range' : (40,0,1),   
    'xaxis' : 'Leading electron Jet DeepFlavB',
    'fold'  : 3                         
}

variables['Ele_jetBTagDeepFlavB_2']  = {
    'name'  : 'Ele_jetBTagDeepFlavB_2',
    'range' : (40,0,1),
    'xaxis' : 'Sub-leading electron Jet DeepFlavB',
    'fold'  : 3
}

variables['Ele_sip3d_1']  = {
    'name'  : 'Ele_sip3d_1',
    'range' : (40,0,5),   
    'xaxis' : 'Leading electron sip3d',
    'fold'  : 3                         
}

variables['Ele_sip3d_2']  = {
    'name'  : 'Ele_sip3d_2',
    'range' : (40,0,5),   
    'xaxis' : 'Sub-leading electron sip3d',
    'fold'  : 3                         
}

variables['Ele_dxy_1']  = {
    'name'  : 'Ele_dxy_1',
    'range' : (40,-0.1,0.1),   
    'xaxis' : 'Leading electron dxy',
    'fold'  : 3                         
}

variables['Ele_dxy_2']  = {
    'name'  : 'Ele_dxy_2',
    'range' : (40,-0.1,0.1),   
    'xaxis' : 'Sub-leading electron dxy',
    'fold'  : 3                         
}

variables['Ele_dz_1']  = {
    'name'  : 'Ele_dz_1',
    'range' : (40,-0.2,0.2),   
    'xaxis' : 'Leading electron dz',
    'fold'  : 3                         
}

variables['Ele_dz_2']  = {
    'name'  : 'Ele_dz_2',
    'range' : (40,-0.2,0.2),   
    'xaxis' : 'Sub-leading electron dz',
    'fold'  : 3                         
}

variables['Ele_mvaFall17V2noIso_1']  = {
    'name'  : 'Ele_mvaFall17V2noIso_1',
    'range' : (40,-1,1),   
    'xaxis' : 'Leading electron dz',
    'fold'  : 3                         
}

variables['Ele_mvaFall27V2noIso_2']  = {
    'name'  : 'Ele_mvaFall17V2noIso_2',
    'range' : (40,-1,1),   
    'xaxis' : 'Sub-leading electron dz',
    'fold'  : 3                         
}

# Additional variables
variables['mll'] = {
    'name': 'mll',
    'range' : (30,0,150),
    'xaxis' : 'm_{ll} [GeV]',
    'fold' : 0
}

variables['ptll']  = {  
    'name': 'ptll',     
    'range' : (20, 0,200),   
    'xaxis' : 'p_{T}^{ll} [GeV]',
    'fold' : 0
}

variables['ptll_more']  = {
    'name': 'ptll',
    'range' : (50, 0,100),
    'xaxis' : 'p_{T}^{ll} [GeV]',
    'fold' : 0
}

variables['puppimet']  = {
    'name': 'PuppiMET_pt',
    'range' : (40,0,400),
    'xaxis' : 'PUPPI MET [GeV]',
    'fold'  : 3
}
