# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow


variables['events']  = {   
    'name': '1',      
    'range' : (1, 0, 2),  
    'xaxis' : 'events', 
    'fold' : 3
}

# Variable to create reco-level categories corresponding to the gen-level bins
variables['dphijj_sgn']  = {  
    'name': 'DeltaPhi',
    'range': (8, -3.2, 3.2),
    'xaxis': 'dphijj',
    'fold': 3
}

# Variable for signal extraction - SM VBF
variables['classvbf'] = { 
     'name': 'vbfdnn',
     'range' : ([0.25,0.4,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,1.0],),
     'xaxis' : 'DNN discriminant vbf',
     'fold'  : 3,
}

# Variable for signal extraction - SM VBF
variables['classvbf_merged'] = { 
     'name': 'vbfdnn',
     'range' : ([0.25,0.4,0.5,0.55,0.6,0.65,0.7,0.75,1.0],),
     'xaxis' : 'DNN discriminant vbf',
     'fold'  : 3,
}

# Variable for signal extraction - CPV
variables['mll']  = { 
    'name': 'mll',
    'range' : (25, 0, 250),
    'xaxis' : 'mll [GeV]',
    'fold' : 3,
}

# # DeltaPhi (jet1, jet2)

# variables['dphijj_finest']  = {  
#     'name': 'dphijj',
#     'range': (64, 0.0, 3.2),
#     'xaxis': 'dphijj',
#     'fold': 3
# }

# variables['dphijj_sgn_finest']  = {  
#     'name': 'delta_phi(CleanJet_phi[0], CleanJet_phi[1], CleanJet_eta[0], CleanJet_eta[1])',
#     'range': (64, -3.2, 3.2),
#     'xaxis': 'dphijj',
#     'linesToAdd': ['.L $CMSSW_BASE/src/PlotsConfigurations/Configurations/VBF/Snowmass/extended/delta_phi.C+'],
#     'fold': 3
# }

# # More variables

# variables['dphill']  = {  
#     'name': 'dphill',
#     'range': (32, 0.0, 3.2),
#     'xaxis': 'dphill',
#     'fold': 3
# }

# variables['detall']  = {  
#     'name': 'detall',
#     'range': (35, 0.0, 3.5),
#     'xaxis': 'detall',
#     'fold': 3
# }

# variables['drll']  = { 
#     'name': 'drll',     
#     'range' : (50, 0, 5),   
#     'xaxis' : '#Delta R_{ll}',
#     'fold'  : 3                         
# }


# variables['dphijj']  = {  
#     'name': 'dphijj',
#     'range': (32, 0.0, 3.2),
#     'xaxis': 'dphijj',
#     'fold': 3
# }

# variables['detajj']  = {  
#     'name': 'detajj',
#     'range': (25, 0.0, 9.4),
#     'xaxis': 'detajj',
#     'fold': 3
# }


# variables['dphilljet']  = {  
#     'name': 'dphilljet',
#     'range': (32, 0.0, 3.2),
#     'xaxis': 'dphilljet',
#     'fold': 3
# }

# variables['dphilljetjet']  = {  
#     'name': 'dphilljetjet',
#     'range': (32, 0.0, 3.2),
#     'xaxis': 'dphilljetjet',
#     'fold': 3
# }


# variables['dphillmet']  = {  
#     'name': 'dphillmet',
#     'range': (32, 0.0, 3.2),
#     'xaxis': 'dphillmet',
#     'fold': 3
# }

# variables['dphilmet']  = {  
#     'name': 'dphilmet',
#     'range': (32, 0.0, 3.2),
#     'xaxis': 'dphilmet',
#     'fold': 3
# }

# variables['dphilmet1']  = {  
#     'name': 'dphilmet1',
#     'range': (32, 0.0, 3.2),
#     'xaxis': 'dphilmet1',
#     'fold': 3
# }

# variables['dphilmet2']  = {  
#     'name': 'dphilmet2',
#     'range': (32, 0.0, 3.2),
#     'xaxis': 'dphilmet2',
#     'fold': 3
# }

# variables['dphijet1met']  = {  
#     'name': 'dphijet1met',
#     'range': (32, 0.0, 3.2),
#     'xaxis': 'dphijet1met',
#     'fold': 3
# }

# variables['dphijet2met']  = {  
#     'name': 'dphijet2met',
#     'range': (32, 0.0, 3.2),
#     'xaxis': 'dphijet2met',
#     'fold': 3
# }

# variables['dphijjmet']  = {  
#     'name': 'dphijjmet',
#     'range': (32, 0.0, 3.2),
#     'xaxis': 'dphijjmet',
#     'fold': 3
# }


# variables['dphilep1jet1']  = {  
#     'name': 'dphilep1jet1',
#     'range': (32, 0.0, 3.2),
#     'xaxis': 'dphilep1jet1',
#     'fold': 3
# }

# variables['dphilep1jet2']  = {  
#     'name': 'dphilep1jet2',
#     'range': (32, 0.0, 3.2),
#     'xaxis': 'dphilep1jet2',
#     'fold': 3
# }

# variables['dphilep2jet1']  = {  
#     'name': 'dphilep2jet1',
#     'range': (32, 0.0, 3.2),
#     'xaxis': 'dphilep2jet1',
#     'fold': 3
# }

# variables['dphilep2jet2']  = {  
#     'name': 'dphilep2jet2',
#     'range': (32, 0.0, 3.2),
#     'xaxis': 'dphilep2jet2',
#     'fold': 3
# }

# variables['PuppiMET_pt']  = {  
#     'name': 'PuppiMET_pt',
#     'range': (40, 0.0, 800),
#     'xaxis': 'PuppiMET_pt',
#     'fold': 3
# }

# variables['PuppiMET_phi']  = {  
#     'name': 'PuppiMET_phi',
#     'range': (32, -3.2, 3.2),
#     'xaxis': 'PuppiMET_phi',
#     'fold': 3
# }


# # Centrality
# variables['Ctot'] = {
#      'name': 'log((abs(2*Lepton_eta[0]-CleanJet_eta[0]-CleanJet_eta[1])+abs(2*Lepton_eta[1]-CleanJet_eta[0]-CleanJet_eta[1]))/detajj)',
#      'range' : (20, -4, 6),
#      'xaxis' : 'Ctot',
#      'fold'  : 3,
# }


# variables['mlj12'] = {
#      'name': 'mlj(Lepton_pt[0], Lepton_eta[0], Lepton_phi[0], CleanJet_pt[0], CleanJet_eta[0], CleanJet_phi[0])',
#      'range' : (28, 0, 1400),
#      'xaxis' : 'mlj12',
#     'linesToAdd': ['.L $CMSSW_BASE/src/PlotsConfigurations/Configurations/VBF/Snowmass/extended/evaluate_multiclass.cc+'],
#      'fold'  : 3,
# }


# variables['mll']  = { 
#     'name': 'mll',
#     'range' : (25, 0, 250),
#     'xaxis' : 'mll [GeV]',
#     'fold' : 3,
# }

# variables['mjj']  = {  
#     'name': 'mjj',
#     'range': (20, 200, 1000),
#     'xaxis': 'mjj [GeV]',
#     'fold': 0
# }

# variables['mR']  = { 
#     'name': 'mR',
#     'range' : (25, 0, 250),
#     'xaxis' : 'mR [GeV]',
#     'fold' : 3,
# }

# variables['mTi']  = { 
#     'name': 'mTi',
#     'range' : (25, 0, 500),
#     'xaxis' : 'mTi [GeV]',
#     'fold' : 3,
# }

# variables['mTH']  = { 
#     'name': 'mth',
#     'range' : (25, 0, 500),
#     'xaxis' : 'mth [GeV]',
#     'fold' : 3,
# }


# variables['pt1']  = {   
#     'name': 'Lepton_pt[0]',     
#     'range' : (40,0,200),   
#     'xaxis' : 'p_{T} 1st lep',
#     'fold'  : 3                         
# }

# variables['pt2']  = { 
#     'name': 'Lepton_pt[1]',     
#     'range' : (40,0,100),   
#     'xaxis' : 'p_{T} 2nd lep',
#     'fold'  : 3                         
# }

# variables['ptll']  = {  
#     'name': 'ptll',
#     'range' : (20,30,200),
#     'xaxis' : 'ptll [GeV]',
#     'fold' : 3
# }


# variables['jetpt1']  = {   
#     'name': 'CleanJet_pt[0]',     
#     'range' : (20, 30, 410),   
#     'xaxis' : 'p_{T} 1st jet',
#     'fold'  : 3                        
# }

# variables['jetpt2']  = { 
#     'name': 'CleanJet_pt[1]',     
#     'range' : (20, 30, 410),   
#     'xaxis' : 'p_{T} 2nd jet',
#     'fold'  : 3                        
# }

# variables['jeteta1']  = {   
#     'name': 'CleanJet_eta[0]',     
#     'range' : (30, -5., 5.),   
#     'xaxis' : '#eta 1st jet',
#     'fold'  : 3                        
# }

# variables['jeteta2']  = { 
#     'name': 'CleanJet_eta[1]',     
#     'range' : (30, -5., 5.),   
#     'xaxis' : '#eta 2nd jet',
#     'fold'  : 3                        
# }

# variables['jet_qgl1']  = {   
#     'name': 'Jet_qgl[0]',     
#     'range' : (20, 0., 1.),   
#     'xaxis' : 'qgl 1st jet',
#     'fold'  : 3                        
# }

# variables['jet_qgl2']  = { 
#     'name': 'Jet_qgl[1]',     
#     'range' : (20, 0., 1.),   
#     'xaxis' : 'qgl 2nd jet',
#     'fold'  : 3                        
# }


# variables['ht']  = { 
#     'name': 'ht',     
#     'range' : (50, 0., 1500.),   
#     'xaxis' : 'ht',
#     'fold'  : 3            
# }


# # DNN classes

# variables['classvbf'] = { 
#      'name': 'vbfdnn',
#      # 'range' : ([0.25, 0.4, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 0.95, 1.0],),
#      'range' : (40, 0., 1.),
#      'xaxis' : 'DNN discriminant vbf',
#      'fold'  : 3,
# }


# variables['classtop'] = { 
#      'name': 'topdnn',
#      #'range' : (15,0.25,1.),
#      'range' : (40, 0., 1.),
#      'xaxis' : 'DNN discriminant top',
#      'fold'  : 3,
# }


# variables['classww'] = { 
#      'name': 'wwdnn',
#      #'range' : (15,0.25,1.),
#      'range' : (40, 0., 1.),
#      'xaxis' : 'DNN discriminant ww',
#      'fold'  : 3,
# }


# variables['classggh'] = { 
#      'name': 'gghdnn',
#      #'range' : ([0.25, 0.4, 0.5, 0.55, 0.6, 0.65, 0.7, 0.75, 0.8, 0.85, 0.9, 1.0],),
#      'range' : (40, 0., 1.),
#      'xaxis' : 'DNN discriminant ggh',
#      'fold'  : 3,
# }



# # OLD

# # variables['class0'] = {
# #      'name': 'evaluate_multiclass(Entry$,0)',
# #      'range' : ([0.25,0.4,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,1.0],),
# #      'xaxis' : 'MVA discriminant vbf',
# #      'fold' : 3,
# #      'linesToAdd' : ['.L /afs/cern.ch/work/r/rceccare/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/VBF/Keras_2017_v6/evaluate_multiclass.C+']
# # }
# #
# # variables['class1'] = {
# #      'name': 'evaluate_multiclass(Entry$,1)',
# #      'range' : (15,0.25,1.),
# #      'xaxis' : 'MVA discriminant top',
# #      'fold' : 3,
# #      'linesToAdd' : ['.L /afs/cern.ch/work/r/rceccare/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/VBF/Keras_2017_v6/evaluate_multiclass.C+']
# # }
# # variables['class2'] = {
# #      'name': 'evaluate_multiclass(Entry$,2)',
# #      'range' : (15,0.25,1.),
# #      'xaxis' : 'MVA discriminant ww',
# #      'fold' : 3,
# #      'linesToAdd' : ['.L /afs/cern.ch/work/r/rceccare/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/VBF/Keras_2017_v6/evaluate_multiclass.C+']
# # }
# # variables['class3'] = {
# #      'name': 'evaluate_multiclass(Entry$,3)',
# #      'range' : (15,0.25,1.),
# #      'xaxis' : 'MVA discriminant ggh',
# #      'fold' : 3,
# #      'linesToAdd' : ['.L /afs/cern.ch/work/r/rceccare/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/VBF/Keras_2017_v6/evaluate_multiclass.C+']
# # }
# #
