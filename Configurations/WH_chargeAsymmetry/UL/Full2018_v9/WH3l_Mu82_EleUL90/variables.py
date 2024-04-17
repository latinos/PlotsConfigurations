# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow

variables['events'] = {
    'name'  : '1',
    'range' : (1,0,2),
    'xaxis' : 'events',
    'fold'  : 3
}

# New training considering Top and Z+jets as Fakes
variables['BDT_WH3l_OSSF_new_v9'] = { 
    'name'     : 'BDT_WH3l_OSSF_new_v9',
    'range'    : (40,-1.,1.),
    # 'doWeight' : 1,
    # 'binX'     : 1,
    # 'binY'     : 40,
    'xaxis'    : 'MVA discriminant',
    'yaxis'    : 'Events',
    'fold'     : 3,
}

variables['BDT_WH3l_SSSF_new_v9'] = { 
    'name'     : 'BDT_WH3l_SSSF_new_v9',
    'range'    : (40,-1.,1.),
    # 'doWeight' : 1,
    # 'binX'     : 1,
    # 'binY'     : 40,
    'xaxis'    : 'MVA discriminant',
    'yaxis'    : 'Events',
    'fold'     : 3,
}

# variables['BDT_WH3l_OSSF_new_v9_100_bins'] = { 
#     'name': 'BDT_WH3l_OSSF_new_v9',
#     'range' : (100,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
# }

# variables['BDT_WH3l_SSSF_new_v9_100_bins'] = { 
#     'name': 'BDT_WH3l_SSSF_new_v9',
#     'range' : (100,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
# }

# Training considering also VVV as background
variables['BDT_WH3l_OSSF_VVV_v9'] = { 
    'name'     : 'BDT_WH3l_OSSF_VVV_v9',
    'range'    : (40,-1.,1.),
    'xaxis'    : 'MVA discriminant',
    'yaxis'    : 'Events',
    'fold'     : 3,
}

variables['BDT_WH3l_SSSF_VVV_v9'] = { 
    'name'     : 'BDT_WH3l_SSSF_VVV_v9',
    'range'    : (40,-1.,1.),
    'xaxis'    : 'MVA discriminant',
    'yaxis'    : 'Events',
    'fold'     : 3,
}

###################
# Control variables
###################

variables['Jet_pt1'] = {
    'name': 'Alt$(Jet_pt[0],0)',
    'range' : (10,0.,200),
    'xaxis' : 'jet1_p_{T} [GeV]',
    'fold' : 0
}

variables['pt1'] = {
    'name': 'Alt$(Lepton_pt[0],0)',
    'range' : (10,0.,200),
    'xaxis' : 'lept1_p_{T} [GeV]',
    'fold' : 0
}

variables['pt2'] = {
    'name': 'Alt$(Lepton_pt[1],0)',
    'range' : (10,0.,200),
    'xaxis' : 'lept2_p_{T} [GeV]',
    'fold' : 0
}

variables['pt3'] = {
    'name': 'Alt$(Lepton_pt[2],0)',
    'range' : (7,0.,100),
    'xaxis' : 'lept3_p_{T} [GeV]',
    'fold' : 0
}

variables['MET_pt'] = {
    'name'  : 'MET_pt',
    'range' : (10,0,400),
    'xaxis' : 'MET_pt',
    'fold'  : 0
}

variables['WH3l_ptlll'] = {
    'name'  : 'WH3l_ptlll',
    'range' : (10,0,400),
    'xaxis' : 'WH3l_ptlll',
    'fold'  : 0
}

# DeltaPhi(l,met)
variables['WH3l_dphilmet0'] = {
    'name': 'Alt$(WH3l_dphilmet[0],0)',
    'range' : (10,0,5),
    'xaxis' : '#Delta #Phi_{l1,met}',
    'fold' : 0
}

variables['WH3l_dphilmet1'] = {
    'name': 'Alt$(WH3l_dphilmet[1],0)',
    'range' : (10,0,5),
    'xaxis' : '#Delta #Phi_{l2,met}',
    'fold' : 0
}

variables['WH3l_dphilmet2'] = {
    'name': 'Alt$(WH3l_dphilmet[2],0)',
    'range' : (10,0,5),
    'xaxis' : '#Delta #Phi_{l3,met}',
    'fold' : 0
}

variables['min_WH3l_dphilmet'] = {
    'name': 'MinIf$( WH3l_dphilmet[], WH3l_dphilmet[Iteration$] > 0)',
    'range' : (10,0,5),
    'xaxis' : 'min #Delta #Phi_{l,met}',
    'fold' : 0
}

# DeltaPhi(OS leptons)
variables['WH3l_drOSll0'] = {
    'name': 'Alt$(WH3l_drOSll[0],0)',
    'range' : (10,0,5),
    'xaxis' : '#Delta R_{l1,l2}',
    'fold' : 0
}

variables['WH3l_drOSll1'] = {
    'name': 'Alt$(WH3l_drOSll[1],0)',
    'range' : (10,0,5),
    'xaxis' : '#Delta R_{l2,l3}',
    'fold' : 0
}

variables['WH3l_drOSll2'] = {
    'name': 'Alt$(WH3l_drOSll[2],0)',
    'range' : (10,0,5),
    'xaxis' : '#Delta R_{l2,l3}',
    'fold' : 0
}

variables['min_WH3l_drOSll'] = {
    'name': 'MinIf$( WH3l_drOSll[], WH3l_drOSll[Iteration$] > 0)',
    'range' : (10,0,5),
    'xaxis' : 'min #Delta R(OS lepton pairs)',
    'fold' : 0
}

# m(OS lepton pairs)
variables['WH3l_mOSll0'] = {
    'name': 'Alt$(WH3l_mOSll[0],0)',
    'range' : (10,0,400),
    'xaxis' : 'm_{l1,l2}',
    'fold' : 0
}

variables['WH3l_mOSll1'] = {
    'name': 'Alt$(WH3l_mOSll[1],0)',
    'range' : (10,0,400),
    'xaxis' : 'm_{l2,l3}',
    'fold' : 0
}

variables['WH3l_mOSll2'] = {
    'name': 'Alt$(WH3l_mOSll[2],0)',
    'range' : (10,0,400),
    'xaxis' : 'm_{l2,l3}',
    'fold' : 0
}

variables['min_WH3l_mOSll'] = {
    'name': 'MinIf$( WH3l_mOSll[], WH3l_mOSll[Iteration$] > 0)',
    'range' : (10,0,400),
    'xaxis' : 'min m(OS lepton pairs)',
    'fold' : 0
}

# pT(OS lepton pairs)
variables['WH3l_ptOSll0'] = {
    'name': 'Alt$(WH3l_ptOSll[0],0)',
    'range' : (10,0,400),
    'xaxis' : 'p_T^{l1,l2}',
    'fold' : 0
}

variables['WH3l_ptOSll1'] = {
    'name': 'Alt$(WH3l_ptOSll[1],0)',
    'range' : (10,0,400),
    'xaxis' : 'p_T^{l2,l3}',
    'fold' : 0
}

variables['WH3l_ptOSll2'] = {
    'name': 'Alt$(WH3l_ptOSll[2],0)',
    'range' : (10,0,400),
    'xaxis' : 'p_T^{l2,l3}',
    'fold' : 0
}

variables['min_WH3l_ptOSll'] = {
    'name': 'MinIf$( WH3l_ptOSll[], WH3l_ptOSll[Iteration$] > 0)',
    'range' : (10,0,400),
    'xaxis' : 'min p_T(OS lepton pairs)',
    'fold' : 0
}

# mT(l, met)
variables['WH3l_mtlmet0'] = {
    'name': 'Alt$(WH3l_mtlmet[0],0)',
    'range' : (10,0,400),
    'xaxis' : 'm_T^{l1,met}',
    'fold' : 0
}

variables['WH3l_mtlmet1'] = {
    'name': 'Alt$(WH3l_mtlmet[1],0)',
    'range' : (10,0,400),
    'xaxis' : 'm_T^{l2,met}',
    'fold' : 0
}

variables['WH3l_mtlmet2'] = {
    'name': 'Alt$(WH3l_mtlmet[2],0)',
    'range' : (10,0,400),
    'xaxis' : 'm_T^{l3,met}',
    'fold' : 0
}

variables['min_WH3l_mtlmet'] = {
    'name': 'MinIf$( WH3l_mtlmet[], WH3l_mtlmet[Iteration$] > 0)',
    'range' : (10,0,400),
    'xaxis' : 'min m_T(l,met)',
    'fold' : 0
}

# mT(WWW)
variables['WH3l_mtWWW'] = {
    'name': 'Alt$(WH3l_mtWWW,0)',
    'range' : (10,0,400),
    'xaxis' : 'm_T^{WWW}',
    'fold' : 0
}

# pT(WWW)
variables['WH3l_ptWWW'] = {
    'name': 'Alt$(WH3l_ptWWW,0)',
    'range' : (10,0,400),
    'xaxis' : 'p_T^{WWW}',
    'fold' : 0
}

# pT(W) -- considers the W least likely to come from the Higgs
variables['WH3l_ptW'] = {
    'name': 'Alt$(WH3l_ptW,0)',
    'range' : (10,0,400),
    'xaxis' : 'p_T^{W}',
    'fold' : 0
}

# DeltaPhi between the tri-lepton system and the met
variables['WH3l_dphilllmet'] = {
    'name': 'Alt$(WH3l_dphilllmet,0)',
    'range' : (10,0,5),
    'xaxis' : '#Delta #Phi(lll,met)',
    'fold' : 0
}

# m(lll)
variables['WH3l_mlll'] = {
    'name': 'Alt$(WH3l_mlll,0)',
    'range' : (10,0,400),
    'xaxis' : 'm_{lll}',
    'fold' : 0
}

# Variable specifically used for WZ CR
variables['dphillmet'] = {
    'name'  : 'dphillmet',
    'range' : (20,0,3.2),
    'xaxis' : 'dphillmet',
    'fold'  : 3
}

variables['mlljj20_whss_bin2'] = {
    'name'  : 'mlljj20_whss',
    'range' : ([60.,100.,110.,120.,130.,140.,150.,160.,170.,180.,190.,200.,250.,300.],),
    'xaxis' : 'mlljj20_whss [GeV]',
    'fold'  : 3
}

variables['dphilep1jet1'] = {
    'name'  : 'dphilep1jet1',
    'range' : (20,0,3.2),
    'xaxis' : 'dphilep1jet1',
    'fold'  : 3
}

variables['BDTG6_TT'] = {
    'name'     : 'BDT_WHSS_TopSemileptonic_v9',     
    'range'    : (40,-1,1),   
    # 'doWeight' : 1,
    # 'binX'     : 1,
    # 'binY'     : 40,
    'xaxis'    : 'BDT discriminant',
    'fold'     : 3
}

variables['mll'] = {
    'name'  : 'mll',
    'range' : (20, 40,120),
    'xaxis' : 'm_{ll} [GeV]',
    'fold'  : 0
}

variables['mtw1'] = {
    'name'  : 'mtw1',
    'range' : (40,0,200),
    'xaxis' : 'm_{T}^{W_{1}} [GeV]',
    'fold'  : 3
}

variables['dphill']  = {  
    'name'  : 'abs(dphill)',     
    'range' : (20,0,3.14),   
    'xaxis' : '#Delta#phi_{ll}',
    'fold'  : 3
}



#########################
### OLD, unused variables
#########################

# variables['BDT_WH3l_OSSF_v9_LegacyBinning'] = { 
#     'name': 'BDT_WH3l_OSSF_v9',
#     'range' : ([-1.0,-0.2,0.,0.2,0.4,0.6,1.0],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
# }

# variables['BDT_WH3l_SSSF_v9_LegacyBinning'] = {
#     'name': 'BDT_WH3l_SSSF_v9',
#     'range' : ([-1.0,-0.2,0.,0.2,0.4,0.6,1.0],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
# }

# variables['BDT_WH3l_OSSF_v9_0_7'] = { 
#     'name': 'BDT_WH3l_OSSF_v9',
#     'range' : ([-1.0,-0.2,0.,0.2,0.4,0.7,1.0],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
# }

# variables['BDT_WH3l_SSSF_v9_0_7'] = {
#     'name': 'BDT_WH3l_SSSF_v9',
#     'range' : ([-1.0,-0.2,0.,0.2,0.4,0.7,1.0],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
# }

# variables['BDT_WH3l_OSSF_v9_OptimizedBinning'] = { 
#     'name': 'BDT_WH3l_OSSF_v9',
#     'range' : ([-1.0,-0.2,0.,0.2,0.4,0.6,0.8,1.0],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
# }

# variables['BDT_WH3l_SSSF_v9_OptimizedBinning'] = {
#     'name': 'BDT_WH3l_SSSF_v9',
#     'range' : ([-1.0,-0.2,0.,0.2,0.4,0.6,0.8,1.0],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
# }

# variables['BDT_WH3l_OSSF_v9_0_9'] = { 
#     'name': 'BDT_WH3l_OSSF_v9',
#     'range' : ([-1.0,-0.2,0.,0.2,0.4,0.7,0.8,0.9,1.0],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
# }

# variables['BDT_WH3l_SSSF_v9_0_9'] = {
#     'name': 'BDT_WH3l_SSSF_v9',
#     'range' : ([-1.0,-0.2,0.,0.2,0.4,0.7,0.8,0.9,1.0],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
# }

# variables['BDT_WH3l_OSSF_new_v9_LegacyBinning'] = { 
#     'name': 'BDT_WH3l_OSSF_new_v9',
#     'range' : ([-1.0,-0.2,0.,0.2,0.4,0.6,1.0],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
# }

# variables['BDT_WH3l_SSSF_new_v9_LegacyBinning'] = {
#     'name': 'BDT_WH3l_SSSF_new_v9',
#     'range' : ([-1.0,-0.2,0.,0.2,0.4,0.6,1.0],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
# }

# variables['BDT_WH3l_OSSF_new_v9_0_7'] = { 
#     'name': 'BDT_WH3l_OSSF_new_v9',
#     'range' : ([-1.0,-0.2,0.,0.2,0.4,0.7,1.0],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
# }

# variables['BDT_WH3l_SSSF_new_v9_0_7'] = {
#     'name': 'BDT_WH3l_SSSF_new_v9',
#     'range' : ([-1.0,-0.2,0.,0.2,0.4,0.7,1.0],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
# }

# variables['BDT_WH3l_OSSF_new_v9_OptimizedBinning'] = { 
#     'name': 'BDT_WH3l_OSSF_new_v9',
#     'range' : ([-1.0,-0.2,0.,0.2,0.4,0.6,0.8,1.0],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
# }

# variables['BDT_WH3l_SSSF_new_v9_OptimizedBinning'] = {
#     'name': 'BDT_WH3l_SSSF_new_v9',
#     'range' : ([-1.0,-0.2,0.,0.2,0.4,0.6,0.8,1.0],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
# }

# variables['BDT_WH3l_OSSF_new_v9_0_9'] = { 
#     'name': 'BDT_WH3l_OSSF_new_v9',
#     'range' : ([-1.0,-0.2,0.,0.2,0.4,0.7,0.8,0.9,1.0],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
# }

# variables['BDT_WH3l_SSSF_new_v9_0_9'] = {
#     'name': 'BDT_WH3l_SSSF_new_v9',
#     'range' : ([-1.0,-0.2,0.,0.2,0.4,0.7,0.8,0.9,1.0],),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
# }


# variables['BDT_WH3l_OSSF_new_v9_more'] = { 
#     'name': 'BDT_WH3l_OSSF_new_v9',
#     'range' : (1000,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
# }

# variables['BDT_WH3l_SSSF_new_v9_more'] = { 
#     'name': 'BDT_WH3l_SSSF_new_v9',
#     'range' : (1000,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
# }


# # Default trainings in AN-22-120_v1
# variables['BDT_WH3l_OSSF_v9'] = { 
#     'name': 'BDT_WH3l_OSSF_v9',
#     'range' : (40,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
# }

# variables['BDT_WH3l_SSSF_v9'] = { 
#     'name': 'BDT_WH3l_SSSF_v9',
#     'range' : (40,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
# }

# variables['BDT_WH3l_OSSF_v9_more'] = { 
#     'name': 'BDT_WH3l_OSSF_v9',
#     'range' : (1000,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
# }

# variables['BDT_WH3l_SSSF_v9_more'] = { 
#     'name': 'BDT_WH3l_SSSF_v9',
#     'range' : (1000,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
# }

# variables['BDT_WH3l_OSSF_v9_100_bins'] = { 
#     'name': 'BDT_WH3l_OSSF_v9',
#     'range' : (100,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
# }

# variables['BDT_WH3l_SSSF_v9_100_bins'] = { 
#     'name': 'BDT_WH3l_SSSF_v9',
#     'range' : (100,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
# }

