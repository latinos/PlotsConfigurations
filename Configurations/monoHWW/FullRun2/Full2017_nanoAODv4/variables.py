# variables

#variables = {}
variables['bdt']  = {   'name': 'df2HDMa_TMVAReader(Entry$)',      
#                        'range' : (200,-1,1),  
                        'range' : ([-0.999,-0.297,-0.083,0.153,0.289,0.465,1],),  
                        'xaxis' : 'BDT discriminant', 
                         'fold' : 3,
                        'linesToAdd':['.L /afs/cern.ch/work/f/fernanpe/framework_forEXOworkshop/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/MonoH_EXOworkshop/Full2017/df2HDMa_TMVAReader.C+']
                      }

# variables['nvtx']  = {   'name': 'PV_npvsGood',      
#                         'range' : (40,0,100),  
#                         'xaxis' : 'nvtx', 
#                          'fold' : 3
#                       }

# variables['mll']  = {   'name': 'mll',
#                         'range' : (40, 12,150),
#                         'xaxis' : 'm_{ll} [GeV]',
#                         'fold' : 3
#                         }

# # variables['pt2divht']  = { 'name': 'Lepton_pt[1]/ht',
# #                            'range' : (40, 0, 0.5),
# #                            'xaxis' : 'pt2divHt',
# #                            'fold' : 3
# #                         }

# # variables['pt1divjetpt']  = { 'name': 'Lepton_pt[0]/((Sum$(CleanJet_pt>15)>0)*(Alt$(CleanJet_pt[0], 0)) - (Sum$(CleanJet_pt>15)==0)*99)',
# #                               'range' : (40, 0, 10),
# #                            'xaxis' : 'pt1divjetpt',
# #                            'fold' : 0
# #                         }

# variables['drll']  = {   'name': 'drll',
#                         'range' : (40, 0, 3),
#                         'xaxis' : 'dr_{ll} [GeV]',
#                         'fold' : 3
#                         }


# # variables['drll_zoom']  = {   'name': 'drll',
# #                         'range' : (40, 0, 1),
# #                         'xaxis' : 'zoom dr_{ll} [GeV]',
# #                         'fold' : 3
# #                         }


# variables['mth']  = {   'name': 'mth',
#                         'range' : (40, 40,300),
#                         'xaxis' : 'm_{T}^{H} [GeV]',
#                         'fold' : 3
#                         }

# variables['mT2']  = {   'name': 'mT2',
#                         'range' : (40, 20,300),
#                         'xaxis' : 'm_{T}^{2} [GeV]',
#                         'fold' : 0
#                         }


# variables['mTi']  = {   'name': 'mTi',
#                         'range' : (40, 20,300),
#                         'xaxis' : 'm_{ll+MET} [GeV]',
#                         'fold' : 0
#                         }

# variables['ptll']  = {   'name': 'ptll',     
#                         'range' : (40, 30,300),   
#                         'xaxis' : 'p_{T}^{ll} [GeV]',
#                         'fold' : 3
#                         }

# variables['pt1']  = {   'name': 'Lepton_pt[0]',     
#                         'range' : (40,20,250),   
#                         'xaxis' : 'p_{T} 1st lep',
#                         'fold'  : 3
#                         }

# variables['pt2']  = {   'name': 'Lepton_pt[1]',     
#                         'range' : (40,10,150),   
#                         'xaxis' : 'p_{T} 2nd lep',
#                         'fold'  : 3 
#                         }

# variables['eta1']  = {  'name': 'Lepton_eta[0]',     
#                         'range' : (40,-3,3),   
#                         'xaxis' : '#eta 1st lep',
#                         'fold'  : 3                         
#                         }

# # variables['eta2']  = {  'name': 'Lepton_eta[1]',     
# #                         'range' : (40,-3,3),   
# #                         'xaxis' : '#eta 2nd lep',
# #                         'fold'  : 3                         
# #                         }

                        
# # variables['phi1']  = {  'name': 'Lepton_phi[0]',
# #                         'range' : (40,-3.2,3.2),
# #                         'xaxis' : '#phi 1st lep',
# #                         'fold'  : 3
# #                         }

# # variables['phi2']  = {  'name': 'Lepton_phi[1]',
# #                         'range' : (40,-3.2,3.2),
# #                         'xaxis' : '#phi 2nd lep',
# #                         'fold'  : 3
# #                         }

# variables['puppimet']  = {
#                         'name': 'PuppiMET_pt',
#                         'range' : (40,0,200),
#                         'xaxis' : 'puppimet [GeV]',
#                         'fold'  : 3
#                         }


# # variables['pfmet']  = {
# #                         'name': 'MET_pt',
# #                         'range' : (40,0,200),
# #                         'xaxis' : 'pfmet [GeV]',
# #                         'fold'  : 3
# #                         }


# # variables['Fixedpfmet']  = {
# #                         'name': 'METFixEE2017_pt',
# #                         'range' : (40,0,200),
# #                         'xaxis' : 'Fixedpfmet [GeV]',
# #                         'fold'  : 3
# #                         }

# variables['mpmet']  = {
#                         'name': 'mpmet',
#                         'range' : (40,0,200),
#                         'xaxis' : 'mpmet [GeV]',
#                         'fold'  : 3
#                         }

# # variables['njet']  = {
# #                         'name': 'Sum$(CleanJet_pt>30)',     
# #                         'range' : (5,0,5),   
# #                         'xaxis' : 'Number of jets',
# #                         'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
# #                         }

# # variables['jetpt1']  = {
# #                         'name': '(Sum$(CleanJet_pt>30)>0)*(Alt$(CleanJet_pt[0], 0)) - (Sum$(CleanJet_pt>30)==0)*99',
# #                         'range' : (40,0,200),
# #                         'xaxis' : 'p_{T} 1st jet',
# #                         'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
# #                         }

# # variables['jetpt2']  = {
# #                         'name': '(Sum$(CleanJet_pt>30)>0)*(Alt$(CleanJet_pt[1], 0)) - (Sum$(CleanJet_pt>30)==0)*99',
# #                         'range' : (40,0,200),
# #                         'xaxis' : 'p_{T} 2nd jet',
# #                         'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
# #                         }

# # variables['jeteta1']  = {  'name': '(Sum$(CleanJet_pt>30)>0)*(Alt$(CleanJet_eta[0], 0)) - (Sum$(CleanJet_pt>30)==0)*99',
# #                         'range' : (40,-5.0,5.0),
# #                         'xaxis' : '#eta 1st jet',
# #                         'fold'  : 0
# #                         }

# # variables['jeteta2']  = {  'name': '(Sum$(CleanJet_pt>30)>1)*(Alt$(CleanJet_eta[1], 0)) - (Sum$(CleanJet_pt>30)<=1)*99',
# #                         'range' : (40,-5.0,5.0),
# #                         'xaxis' : '#eta 2nd jet',
# #                         'fold'  : 0
# #                         }

# # variables['trkMet']  = {   'name': 'TkMET_pt',
# #                         'range' : (40,0,200),
# #                         'xaxis' : 'trk met [GeV]',
# #                          'fold' : 3
# #                         }

# variables['dphill']  = {   'name': 'abs(dphill)',     
#                         'range' : (40,0,3.14),   
#                         'xaxis' : '#Delta#phi_{ll}',
#                         'fold' : 3
#                         }


# # variables['dphillmet']  = {   'name': 'dphillmet',     
# #                         'range' : (40,0,3.14),   
# #                         'xaxis' : '#Delta#phi_{ll, MET}',
# #                         'fold' : 3
# #                         }
