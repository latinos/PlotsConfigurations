# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow

variables['events'] = {
    'name'  : '1',
    'range' : (1,0,2),
    'xaxis' : 'events',
    'fold'  : 3
}

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


# variables['BDTG_OSSF_bin2'] = { 'name': 'BDT_OSSF1718',
#                         'range' : ([-1.0,-0.2,0.,0.2,0.4,0.6,1.0],),    #   variable range
#                         'xaxis' : 'MVA discriminant',
#                         'fold' : 3,
#                       }
# variables['BDTG_SSSF_bin2'] = { 'name': 'BDT_SSSF1718',
#                         'range' : ([-1.0,-0.2,0.,0.2,0.4,0.6,1.0],),    #   variable range
#                         'xaxis' : 'MVA discriminant',
#                         'fold' : 3,
#                       }


# variables['WH3l_ZVeto']  = {'name'  : 'WH3l_ZVeto_test',
#                         'range' : (24,0,120),
#                         'xaxis' : 'WH3l_ZVeto',
#                         'fold'  : 0
#                         }
# variables['WH3l_drOSll_min']  = {   'name': 'WH3l_drOSll_min_test',
#                          'range' : ([0.,0.75,1.0,1.25,1.5,1.75,2.5,4.0],),    #   variable range
#                          'xaxis' : 'min #Delta R_{ll}',  #   x axis name
#                          'fold' : 0
#                         }

# variables['WH3l_dphilllmet']  = {'name'  : 'WH3l_dphilllmet_test',
#                         'range' : (5,0,5),
#                         'xaxis' : 'WH3l_dphilllmet',
#                         'fold'  : 0
#                         }
# variables['WH3l_ptlll']  = {'name'  : 'WH3l_ptlll_test',
#                         'range' : (50,0,500),
#                         'xaxis' : 'WH3l_ptlll',
#                         'fold'  : 0
#                         }
# variables['WH3l_ptWWW']  = {'name'  : 'WH3l_ptWWW_test',
#                         'range' : (40,0,200),
#                         'xaxis' : 'WH3l_ptWWW',
#                         'fold'  : 0
#                         }
# variables['WH3l_mtWWW']  = {'name'  : 'WH3l_mtWWW_test',
#                         'range' : (40,0,200),
#                         'xaxis' : 'WH3l_mtWWW',
#                         'fold'  : 0
#                         }
# variables['WH3l_mlll']  = {'name'  : 'WH3l_mlll_test',
#                         'range' : (40,0,200),
#                         'xaxis' : 'WH3l_mlll',
#                         'fold'  : 0
#                         }

# variables['WH3l_mOSll_min']  = {   'name': 'WH3l_mOSll_min_test',
#                          'range' : (40,0,200),
#                          'xaxis' : 'min #Delta R_{ll}',  #   x axis name
#                          'fold' : 0
#                         }

# variables['WH3l_ptOSll_min']  = {   'name': 'WH3l_ptOSll_min_test',
#                          'range' : (40,0,200),
#                          'xaxis' : 'min #Delta R_{ll}',  #   x axis name
#                          'fold' : 0
#                         }

# variables['WH3l_mtlmet0']  = {   'name': 'WH3l_mtlmet0_test',
#                          'range' : (40,0,200),
#                          'xaxis' : 'min #Delta R_{ll}',  #   x axis name
#                          'fold' : 0
#                         }

# variables['WH3l_mtlmet1']  = {   'name': 'WH3l_mtlmet1_test',
#                          'range' : (40,0,200),
#                          'xaxis' : 'min #Delta R_{ll}',  #   x axis name
#                          'fold' : 0
#                         }

# variables['WH3l_mtlmet2']  = {   'name': 'WH3l_mtlmet2_test',
#                          'range' : (40,0,200),
#                          'xaxis' : 'min #Delta R_{ll}',  #   x axis name
#                          'fold' : 0
#                         }

# variables['WH3l_dphilmet0']  = {   'name': 'WH3l_dphilmet0_test',
#                         'range' : (5,0,5),
#                          'xaxis' : 'min #Delta R_{ll}',  #   x axis name
#                          'fold' : 0
#                         }

# variables['WH3l_dphilmet1']  = {   'name': 'WH3l_dphilmet1_test',
#                         'range' : (5,0,5),
#                          'xaxis' : 'min #Delta R_{ll}',  #   x axis name
#                          'fold' : 0
#                         }

# variables['WH3l_dphilmet2']  = {   'name': 'WH3l_dphilmet2_test',
#                         'range' : (5,0,5),
#                          'xaxis' : 'min #Delta R_{ll}',  #   x axis name
#                          'fold' : 0
#                         }

