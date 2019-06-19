# variables
#variables = {}
    


variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }
#
#variables['nvtx']  = {   'name': 'PV_npvsGood',      
#                        'range' : (50,0,50),  
#                        'xaxis' : 'nvtx', 
#                         'fold' : 3
#                      }
#
##MJJ
#variables['mjj']  = {   'name': 'mjj',            #   variable name    
#                        'range' : (18, 0,180),    #   variable range
#                        'xaxis' : 'm_{jj} [GeV]',  #   x axis name
#                         'fold' : 0
#                        }

##
#variables['mll_morebins']  = {   'name': 'mll',            #   variable name    
#                        'range' : (16, 0,200),    #   variable range
#                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
#                         'fold' : 0
#                        }
#
##variables['mllpeak'] = {   'name': 'mll',            #   variable name
#                           'range' : (20,80,100),    #   variable range
#                           'xaxis' : 'm_{ll} [GeV]',  #   x axis name
#                           'fold' : 0
#                        }
#
#variables['ptll']  = {   'name': 'ptll',     
#                        'range' : (40, 0,200),   
#                        'xaxis' : 'p_{T}^{ll} [GeV]',
#                        'fold' : 0
#                        }
#
#variables['pt1']  = {   'name': 'Lepton_pt[0]',     
#                        'range' : (40,0,300),   
#                        'xaxis' : 'p_{T} 1st lep',
#                        'fold'  : 3                         
#                        }
#
#variables['pt2']  = {   'name': 'Lepton_pt[1]',     
#                        'range' : (40,0,200),   
#                        'xaxis' : 'p_{T} 2nd lep',
#                        'fold'  : 3                         
#                        }
#
#variables['eta1']  = {  'name': 'Lepton_eta[0]',     
#                        'range' : (40,-3,3),   
#                        'xaxis' : '#eta 1st lep',
#                        'fold'  : 3                         
#                        }
#
#variables['eta2']  = {  'name': 'Lepton_eta[1]',     
#                        'range' : (40,-3,3),   
#                        'xaxis' : '#eta 2nd lep',
#                        'fold'  : 3                         
#                        }
#                        
#variables['phi1']  = {  'name': 'Lepton_phi[0]',
#                        'range' : (40,-3.2,3.2),
#                        'xaxis' : '#phi 1st lep',
#                        'fold'  : 3
#                        }
#
#variables['phi2']  = {  'name': 'Lepton_phi[1]',
#                        'range' : (40,-3.2,3.2),
#                        'xaxis' : '#phi 2nd lep',
#                        'fold'  : 3
#                        }
#
#variables['pfmet']  = { 
#                        'name': 'MET_pt',     
#                        'range' : (40,0,150),   
#                        'xaxis' : 'PFMET [GeV]',
#                        'fold'  : 3                         
#                        }
#
#
#variables['rawmet']  = { 
#                        'name': 'RawMET_pt',     
#                        'range' : (40,0,150),   
#                        'xaxis' : 'RawMET [GeV]',
#                        'fold'  : 3                         
#                        }
#
#variables['TkMET']  = { 
#                        'name': 'TkMET_pt',     
#                        'range' : (40,0,150),   
#                        'xaxis' : 'TkMET [GeV]',
#                        'fold'  : 3                         
#                        }
#
#
#variables['mpmet']  = {   'name': 'mpmet',      
#                         'range' : (40,0,150),  
#                         'xaxis' : 'min. (proj. tk. E_{T}^{miss}, proj. E_{T}^{miss})', 
#                         'fold' : 3
#                         }
#
#
#variables['puppimet']  = {
#                        'name': 'PuppiMET_pt',
#                        'range' : (40,0,150),
#                        'xaxis' : 'puppimet [GeV]',
#                        'fold'  : 3
#                        }
#
#variables['njet']  = {
#                        'name': 'Sum$(CleanJet_pt>30)',     
#                        'range' : (5,0,5),   
#                        'xaxis' : 'Number of jets',
#                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
#                        }
#
#variables['jetpt1']  = {
#                        'name': 'CleanJet_pt[0]*(CleanJet_pt[0]>30)',     
#                        'range' : (40,30,200),   
#                        'xaxis' : 'p_{T} 1st jet',
#                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
#                        }
#
#variables['jetpt1_0j']  = {
#                        'name': 'CleanJet_pt[0]*(CleanJet_pt[0]<30)',     
#                        'range' : (40,0,30),   
#                        'xaxis' : 'p_{T} 1st jet (p_{T} < 30 GeV) ',
#                        'fold' : 0  # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
#                        }
#
#
#variables['jetphi1']  = {  'name': 'CleanJet_phi[0]',
#                        'range' : (40,-3.2,3.2),
#                        'xaxis' : '#phi 1st jet',
#                        'fold'  : 0
#                        }
#
#
#variables['jeteta1']  = {  'name': 'CleanJet_eta[0]',
#                        'range' : (80,-5.0,5.0),
#                        'xaxis' : '#eta 1st jet',
#                        'fold'  : 0
#                        }
#
#
#variables['mth']  = {   'name': 'mth',            #   variable name    
#                        'range' : (40,0,200),    #   variable range
#                        'xaxis' : 'm_{T}^{H} [GeV]',  #   x axis name
#                         'fold' : 0
#                        }
#
#variables['dphill']  = {   'name': 'abs(dphill)',     
#                        'range' : (20,0,3.14),   
#                        'xaxis' : '#Delta#phi_{ll}',
#                        'fold' : 3
#}
##Added 9/4/19
#variables['dphilljetjet']  = {   'name': 'abs(dphilljetjet)',     
#                        'range' : (20,0,3.14),   
#                        'xaxis' : '#Delta#phi_{} l l j j',
#                        'fold' : 3
#}
#
#variables['dphilljet']  = {   'name': 'abs(dphilljet)',     
#                        'range' : (20,0,3.14),   
#                        'xaxis' : '#Delta#phi_{} l l j',
#                        'fold' : 3
#}
#
#variables['dphijjmet']  = {   'name': 'abs(dphijjmet)',     
#                        'range' : (20,0,3.14),   
#                        'xaxis' : '#Delta#phi_{} j j met',
#                        'fold' : 3
#}
#
##test
#variables['dphijj']  = {  'name': 'abs(-(abs(CleanJet_phi[0]-CleanJet_phi[1])-3.14))',
#                           'range' : (20,0,3.14),
#                        'xaxis' : '#dphi jet 1,2',
#                        'fold'  : 3
#                        }
#
#variables['qgl0']  = {'name': 'Jet_qgl[CleanJet_jetIdx[0]]',
#                        'range' : (10,0,1),
#                        'xaxis' : 'Quark-Gluon Discrim Jet1',
#                        'fold'  : 0
#                        }
#
#variables['qgl1']  = {'name': 'Jet_qgl[CleanJet_jetIdx[1]]',
#                        'range' : (10,0,1),
#                        'xaxis' : 'Quark-Gluon Discrim Jet2',
#                        'fold'  : 0
#                        }

#PTH

#variables['vht_pt']  = {'name': 'vht_pt',
#                        'range' : (12,0,240),
#                        'xaxis' : 'vht_pt',
#                        'fold'  : 3
#                        }


#Jet Flavor
#
#variables['LeadingJetFlavor']  = {'name': 'Alt$(abs(Jet_hadronFlavour[CleanJet_jetIdx[0]]),-2)',
#                                  'range' : (6,0,6),
#                        'xaxis' : 'Leading Jet Flavor',
#                        'fold'  : 0
#                        }
#
#variables['SubleadingJetFlavor']  = {'name': 'Alt$(abs(Jet_hadronFlavour[CleanJet_jetIdx[1]]),-2)',
#                                     'range' : (6,0,6),
#                        'xaxis' : 'Subleading Jet Flavor',
#                        'fold'  : 0
#                        }

#variables['vht_phi']  = {  'name': 'vht_phi',
#                        'range' : (40,-3.2,3.2),
#                        'xaxis' : 'vht_phi',
#                        'fold'  : 3
#                        
#}
#variables['LeadingJet_Constituents']  = {
#                        'name': 'Jet_Constituents[0]',     
#                        'range' : (50,0,50),   
#                        'xaxis' : 'Constituents Leading jet',
#                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
#                        }
#
#variables['SubleadingJet_Constituents']  = {
#                        'name': 'Jet_Constituents[CleanJet_jetIdx[1]]',     
#                        'range' : (50,0,50),   
#                        'xaxis' : 'Constituents subleading jet',
#                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
#                        }
#
#variables['LeadingJet_muons']  = {
#                        'name': 'Jet_nMuons[CleanJet_jetIdx[0]]',     
#                        'range' : (4,0,4),   
#                        'xaxis' : 'Muons on Leading jet',
#                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
#                        }
#
#variables['detajj']  = {  'name': 'detajj',
#                           'range' : (20,0,4),
#                        'xaxis' : '#deta jj',
#                        'fold'  : 2
#                        }
#variables['ptWW']  = {
#                        'name': 'pTWW',     
#                        'range' : (40,0,200),   
#                       'xaxis' : 'p_{T}^{WW}',
#                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
#                        }
#
#variables['dphijj2']  = {
#                       'name': 'CleanJet_phi[0]-CleanJet_phi[1]',     
#                       'range' : (30,-6.5,6.5),   
#                        'xaxis' : 'delta phi jj',
#                        'fold' : 3   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
#                        }

#variables['dphijjVar']  = {
#                       'name': 'dphijj',     
#                       'range' : (15,0,3.2),   
#                        'xaxis' : 'dphijj',
#                        'fold' : 3   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
#                        }
#
#variables['FatJetPt1']  = {
#                        'name': 'FatJet_pt[0]',     
#                        'range' : (40,0,600),   
#                        'xaxis' : 'p_{T} 1st fatjet',
#                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
#                        }
#
#variables['FatJetPhi']  = {  'name': 'FatJet_phi[0]',
#                        'range' : (30,-3.2,3.2),
#                        'xaxis' : 'phi 1st fat jet',
#                        'fold'  : 3
#}
#variables['FatJetEta']  = {  'name': 'FatJet_eta[0]',
#                             'range' : (30,-5,5),
#                        'xaxis' : 'eta 1st fat jet',
#                        'fold'  : 3
#}
#
#variables['nFatJets'] = { 'name': 'Alt$(nFatJet,0)',
#                          'range' : (5,0,5),
#                       'xaxis' : "nFatJets",
#                       'fold' : 0
#                    }
#

#Variables with a macro
#variables['dphijj'] = { 'name': 'dphijj(CleanJet_pt[0],CleanJet_eta[0],CleanJet_phi[0],CleanJet_pt[1],CleanJet_eta[1],CleanJet_phi[1])',
#                        'range' : (20,0,3.5),
#                       'xaxis' : "dphijj",
#                       'fold' : 3,
#                       'linesToAdd' : ['.L /afs/cern.ch/user/g/gcamacho/CMSSW_9_4_9/src/PlotsConfigurations/Configurations/WW/Full2017/dphijj.C+'] 
#  }
#
#
#variables['ptjjlong'] = { 'name': 'ptjj(CleanJet_pt[0], CleanJet_eta[0], CleanJet_phi[0], CleanJet_pt[1], CleanJet_eta[1], CleanJet_phi[1])',
#                        'range' : (40,0,500),
#                        'xaxis' : "p_{T}^{jj}",
#                        'fold' : 2,
#                        'linesToAdd' : ['.L /afs/cern.ch/user/g/gcamacho/CMSSW_9_4_9/src/PlotsConfigurations/Configurations/WW/Full2017/ptjj.C+'] 
#                    }
#
#variables['ptjjshort'] = { 'name': 'ptjj(CleanJet_pt[0], CleanJet_eta[0], CleanJet_phi[0], CleanJet_pt[1], CleanJet_eta[1], CleanJet_phi[1])',
#                        'range' : (20,0,200),
#                        'xaxis' : "p_{T}^{jj}",
#                        'fold' : 2,
#                        'linesToAdd' : ['.L /afs/cern.ch/user/g/gcamacho/CMSSW_9_4_9/src/PlotsConfigurations/Configurations/WW/Full2017/ptjj.C+'] 
#                    }


### J.Piedra ### variables['dphijjllmet'] = { 'name': 'dphijjllmet(CleanJet_pt[0],CleanJet_eta[0],CleanJet_phi[0],CleanJet_pt[1],CleanJet_eta[1],CleanJet_phi[1],Lepton_pt[0],Lepton_eta[0],Lepton_phi[0],Lepton_pt[1],Lepton_eta[1],Lepton_phi[1], MET_pt, MET_phi)',
### J.Piedra ###                         'range' : (20,0,3.5),
### J.Piedra ###                        'xaxis' : "dphijjllmet",
### J.Piedra ###                        'fold' : 2,
### J.Piedra ###                        'linesToAdd' : ['.L /afs/cern.ch/user/g/gcamacho/CMSSW_9_4_9/src/PlotsConfigurations/Configurations/WW/Full2017/dphijjllmet.C+'] 
### J.Piedra ###   }


#variables['dphijjllmet'] = { 'name': 'dphijjllmet(CleanJet_pt[0],CleanJet_eta[0],CleanJet_phi[0],CleanJet_pt[1],CleanJet_eta[1],CleanJet_phi[1],Lepton_pt[0],Lepton_eta[0],Lepton_phi[0],Lepton_pt[1],Lepton_eta[1],Lepton_phi[1],MET_pt,MET_phi)',
#                        'range' : (20,0,3.5),
#                       'xaxis' : "dphijjllmet",
#                       'fold' : 2,
#                       'linesToAdd' : ['.L /afs/cern.ch/user/g/gcamacho/CMSSW_9_4_9/src/PlotsConfigurations/Configurations/WW/Full2017/dphijjllmet.C+'] 
#  }

#variables['detajjllmet'] = { 'name': 'detajjllmet(CleanJet_pt[0],CleanJet_eta[0],CleanJet_phi[0],CleanJet_pt[1],CleanJet_eta[1],CleanJet_phi[1],Lepton_pt[0],Lepton_eta[0],Lepton_phi[0],Lepton_pt[1],Lepton_eta[1],Lepton_phi[1],MET_pt[0],MET_phi[0])',
#                             'range' : (20,0,4),
#                       'xaxis' : "#Delta#eta_{jj-llmet}",
#                       'fold' : 2,
#                       'linesToAdd' : ['.L /afs/cern.ch/user/g/gcamacho/CMSSW_9_4_9/src/PlotsConfigurations/Configurations/WW/Full2017/detajjllmet.C+'] 
#  }
#
#
#variables['dRjjllmet'] = { 'name': 'dRjjllmet(CleanJet_pt[0],CleanJet_eta[0],CleanJet_phi[0],CleanJet_pt[1],CleanJet_eta[1],CleanJet_phi[1],Lepton_pt[0],Lepton_eta[0],Lepton_phi[0],Lepton_pt[1],Lepton_eta[1],Lepton_phi[1],MET_pt[0],MET_phi[0])',
#                           'range' : (20,0,3.2),
#                       'xaxis' : "#Delta R_{jj-llmet}",
#                       'fold' : 2,
#                       'linesToAdd' : ['.L /afs/cern.ch/user/g/gcamacho/CMSSW_9_4_9/src/PlotsConfigurations/Configurations/WW/Full2017/dRjjllmet.C+'] 
#  }

#variables['ptjjoverptWW'] = { 'name': 'ptjj(CleanJet_pt[0], CleanJet_eta[0], CleanJet_phi[0], CleanJet_pt[1], CleanJet_eta[1], CleanJet_phi[1])/pTWW',
#                        'range' : (20,0,400),
#                        'xaxis' : "p_{T}^{jj}/p_{T}^{WW}",
#                        'fold' : 2,
#                        'linesToAdd' : ['.L /afs/cern.ch/user/g/gcamacho/CMSSW_9_4_9/src/PlotsConfigurations/Configurations/WW/Full2017/ptjj.C+'] 
#                    }


####Macros 2
#
#variables['hww_dphijjllmet'] = { 'name': 'hww_dphijjllmet(Entry$)',
#                                 'range' : (20,0,3.2),
#                             'xaxis' : "#Delta#phi_{jj-llmet}",
#                             'fold' : 2,
#                             'linesToAdd' : ['.L /afs/cern.ch/user/g/gcamacho/CMSSW_9_4_9/src/PlotsConfigurations/Configurations/WW/Full2017/hww_dphijjllmet.C+'] 
#  }
#
#variables['hww_detajjllmet'] = { 'name': 'hww_detajjllmet(Entry$)',
#                             'range' : (20,0,4),
#                             'xaxis' : "#Delta#eta_{jj-llmet}",
#                             'fold' : 2,
#                             'linesToAdd' : ['.L /afs/cern.ch/user/g/gcamacho/CMSSW_9_4_9/src/PlotsConfigurations/Configurations/WW/Full2017/hww_detajjllmet.C+'] 
#  }
#
#variables['hww_dRjjllmet'] = { 'name': 'hww_dRjjllmet(Entry$)',
#                                 'range' : (20,0,3.2),
#                             'xaxis' : "#Delta R_{jj-llmet}",
#                             'fold' : 2,
#                             'linesToAdd' : ['.L /afs/cern.ch/user/g/gcamacho/CMSSW_9_4_9/src/PlotsConfigurations/Configurations/WW/Full2017/hww_dRjjllmet.C+'] 
#  }
#
#
#variables['detaLeptonJet0']  = {  'name': 'Lepton_eta[0]-CleanJet_eta[0]',     
#                                  'range' : (40,-4,4),   
#                                  'xaxis' : '#eta 1st lep - #eta 1st Jet',
#                                  'fold'  : 3                         
#                              }
#
#variables['detaLeptonJet1']  = {  'name': 'Lepton_eta[1]-CleanJet_eta[1]',     
#                                  'range' : (40,-4,4),   
#                                  'xaxis' : '#eta 2nd lep - #eta 2nd Jet',
#                                  'fold'  : 3                         
#                              }
#
#
##puppiMET/METsum, from 21/5 presentation
#variables['puppimetoversum']  = {
#                        'name': 'PuppiMET_pt/MET_sumEt',
#                        'range' : (40,0,1),
#                        'xaxis' : 'puppimet/METsum',
#                        'fold'  : 3
#                        }
