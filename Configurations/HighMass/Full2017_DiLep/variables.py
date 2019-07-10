# variables

#variables = {}
    


variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3,
                        'linesToAdd' : ['.L /afs/cern.ch/work/d/dmroy/CMSSW_9_4_9/src/PlotsConfigurations/Configurations/HighMass/Full2017/cleanJetIndex.C+','.L /afs/cern.ch/work/d/dmroy/CMSSW_9_4_9/src/PlotsConfigurations/Configurations/HighMass/Full2017/deltaRMatch.C+ ', '.L /afs/cern.ch/work/d/dmroy/CMSSW_9_4_9/src/PlotsConfigurations/Configurations/HighMass/Full2017/mjjGen.C+'],
                        }

#Leptons
variables['pt1']  = {   'name': 'Lepton_pt[0]',     
                        'range' : (40,0,200),   
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 1                       
                        }

variables['pt2']  = {   'name': 'Lepton_pt[1]',     
                        'range' : (40,0,100),   
                        'xaxis' : 'p_{T} 2nd lep',
                        'fold'  : 1                        
                        }

variables['elept1']  = {   'name': 'Lepton_pt[0]*(((abs(Lepton_pdgId[0])==11)-0.5)*2)',     
                        'range' : (40,0,200),   
                        'xaxis' : 'p_{T} 1st Ele',
                        'fold'  : 1                       
                        }

variables['elept2']  = {   'name': 'Lepton_pt[1]*(((abs(Lepton_pdgId[1])==11)-0.5)*2)',     
                        'range' : (40,0,100),   
                        'xaxis' : 'p_{T} 2nd Ele',
                        'fold'  : 1                        
                        }
variables['mupt1']  = {   'name': 'Lepton_pt[0]*(((abs(Lepton_pdgId[0])==13)-0.5)*2)',     
                        'range' : (40,0,200),   
                        'xaxis' : 'p_{T} 1st Mu',
                        'fold'  : 1                       
                        }

variables['mupt2']  = {   'name': 'Lepton_pt[1]*(((abs(Lepton_pdgId[1])==13)-0.5)*2)',     
                        'range' : (40,0,100),   
                        'xaxis' : 'p_{T} 2nd Mu',
                        'fold'  : 1                        
                        }

#variables['eta1']  = {  'name': 'Lepton_eta[0]',     
#                        'range' : (40,-3,3),   
#                        'xaxis' : '#eta 1st lep',
#                        'fold'  : 3                         
#                        }

#variables['eta2']  = {  'name': 'Lepton_eta[1]',     
#                        'range' : (40,-3,3),   
#                        'xaxis' : '#eta 2nd lep',
#                        'fold'  : 3                         
#                        }

#variables['phi1']  = {  'name': 'Lepton_phi[0]',     
#                        'range' : (40,-3.2,3.2),   
#                        'xaxis' : '#phi 1st lep',
#                        'fold'  : 3                         
#                        }

#variables['phi2']  = {  'name': 'Lepton_phi[1]',     
#                        'range' : (40,-3.2,3.2),   
#                        'xaxis' : '#phi 2nd lep',
#                        'fold'  : 3                         
#                        }

#variables['nlep']  = {
#                        'name': 'nLepton',     
#                        'range' : (6,-0.5,5.5),   
#                        'xaxis' : 'Number of leptons',
#                        'fold' : 1   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
#                        }

#Jets
variables['jetpt1']  = {
                        'name': 'CleanJet_pt[0]',     
                        'range' : (40,0,250),   
                        'xaxis' : 'p_{T} 1st jet',
                        'fold' : 1   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }

variables['jetpt2']  = {
                        'name': 'CleanJet_pt[1]',     
                        'range' : (40,0,160),   
                        'xaxis' : 'p_{T} 2nd jet',
                        'fold' : 1   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }

#variables['jeteta1']  = {  'name': 'CleanJet_eta[0]',
#                        'range' : (40,-5.0,5.0),
#                        'xaxis' : '#eta 1st jet',
#                        'fold'  : 0
#                        }

#variables['jeteta2']  = {  'name': 'CleanJet_eta[1]',
#                        'range' : (40,-5.0,5.0),
#                        'xaxis' : '#eta 2nd jet',
#                        'fold'  : 0
#                        }

#variables['jetphi1']  = {  'name': 'CleanJet_phi[0]',
#                        'range' : (40,-3.2,3.2),
#                        'xaxis' : '#phi 1st jet',
#                        'fold'  : 0
#                        }

#variables['jetphi2']  = {  'name': 'CleanJet_phi[1]',
#                        'range' : (40,-3.2,3.2),
#                        'xaxis' : '#phi 2nd jet',
#                        'fold'  : 0
#                        }

#variables['jetmass1']  = {  'name': 'Jet_mass[CleanJet_jetIdx[0]]',
#                        'range' : (40,0,40),
#                        'xaxis' : 'mass 1st jet',
#                        'fold'  : 1
#                        }

#variables['jetmass2']  = {  'name': 'Jet_mass[CleanJet_jetIdx[1]]',
#                        'range' : (40,0,40),
#                        'xaxis' : 'mass 2nd jet',
#                        'fold'  : 1
#                        }

#variables['jetcsvv21']  = {  'name': 'Jet_btagCSVV2[CleanJet_jetIdx[0]]',
#                        'range' : (40,0,1),
#                        'xaxis' : 'bTag 1st jet',
#                        'fold'  : 0
#                        }

#variables['jetcsvv22']  = {  'name': 'Jet_btagCSVV2[CleanJet_jetIdx[1]]',
#                        'range' : (40,0,1),
#                        'xaxis' : 'bTag 2nd jet',
#                        'fold'  : 0
#                        }

#variables['jetdeepb1']  = {  'name': 'Jet_btagDeepB[CleanJet_jetIdx[0]]',
#                        'range' : (40,0,1),
#                        'xaxis' : 'bTag 1st jet',
#                        'fold'  : 0
#                        }

#variables['jetdeepb2']  = {  'name': 'Jet_btagDeepB[CleanJet_jetIdx[1]]',
#                        'range' : (40,0,1),
#                        'xaxis' : 'bTag 2nd jet',
#                        'fold'  : 0
#                        }

#variables['njet30']  = {
#                        'name': 'Sum$(CleanJet_pt>30)',     
#                        'range' : (6,-0.5,5.5),   
#                        'xaxis' : 'Number of jets (pt>30)',
#                        'fold' : 1   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
#                        }
#Other

variables['pfmet_pt']  = { 
                        'name': 'MET_pt',     
                        'range' : (40,0,300),   
                        'xaxis' : 'pfmet [GeV]',
                        'fold'  : 1                       
                        }

#variables['pfmet_sumet']  = { 
#                        'name': 'MET_sumEt',     
#                        'range' : (40,0,4000),   
#                        'xaxis' : 'sumET of pfmet [GeV]',
#                        'fold'  : 1                  
#                        }

variables['puppimet_pt']  = {
                        'name': 'PuppiMET_pt',    
                        'range' : (40,0,300),
                        'xaxis' : 'PUPPImet [GeV]',
                        'fold'  : 1
                        }    

#variables['puppimet_sumet']  = {
#                        'name': 'PuppiMET_sumEt',    
#                        'range' : (40,0,1000),
#                        'xaxis' : 'sumET of PUPPImet [GeV]',
#                        'fold'  : 1
#                        }  

#variables['trackmet_pt']  = {
#                        'name': 'TkMET_pt',    
#                        'range' : (40,0,200),
#                        'xaxis' : 'Trackermet [GeV]',
#                        'fold'  : 1
#                        }    

#variables['trackmet_sumet']  = {
#                        'name': 'TkMET_sumEt',    
#                        'range' : (40,0,1000),
#                        'xaxis' : 'sumET of Trackermet [GeV]',
#                        'fold'  : 1
#                        }  

#variables['pvz']  = {   'name': 'PV_z',      
#                        'range' : (40,-15,15),  
#                        'xaxis' : 'PV_z', 
#                         'fold' : 3
#                      }

#variables['ht']  = {   'name': 'ht',            #   variable name    
#                        'range' : (40, 0,1000),    #   variable range
#                        'xaxis' : 'ht [GeV]',  #   x axis name
#                         'fold' : 1
#                        }
variables['detajj']  = {   'name': 'detajj',     
                        'range' : (40,0,10),   
                        'xaxis' : '#Delta#eta_{jj}',
                        'fold' : 1
                        }
#variables['dphijet1met']  = {   'name': 'dphijet1met',     
#                        'range' : (40,0,3.2),   
#                        'xaxis' : '#Delta#phi_{j1MET}',
#                        'fold' : 0
#                        }
#variables['dphijet2met']  = {   'name': 'dphijet2met',     
#                        'range' : (40,0,3.2),   
#                        'xaxis' : '#Delta#phi_{j2MET}',
#                        'fold' : 0
#                        }
#variables['dphilep1jet1']  = {   'name': 'dphilep1jet1',     
#                        'range' : (40,0,3.2),   
#                        'xaxis' : '#Delta#phi_{l1j1}',
#                        'fold' : 0
#                        }
#variables['dphilep1jet2']  = {   'name': 'dphilep1jet2',     
#                        'range' : (40,0,3.2),   
#                        'xaxis' : '#Delta#phi_{l1j2}',
#                        'fold' : 0
#                        }
#variables['dphilep2jet1']  = {   'name': 'dphilep2jet1',     
#                        'range' : (40,0,3.2),   
#                        'xaxis' : '#Delta#phi_{l2j1}',
#                        'fold' : 0
#                        }
#variables['dphilep2jet2']  = {   'name': 'dphilep2jet2',     
#                        'range' : (40,0,3.2),   
#                        'xaxis' : '#Delta#phi_{l2j2}',
#                        'fold' : 0
#                        }
#variables['dphill']  = {   'name': 'dphill',     
#                        'range' : (40,0,3.2),   
#                        'xaxis' : '#Delta#phi_{ll}',
#                        'fold' : 0
#                        }
#variables['dphillmet']  = {   'name': 'dphillmet',     
#                        'range' : (40,0,3.2),   
#                        'xaxis' : '#Delta#phi_{llMET}',
#                        'fold' : 0
#                        }
#variables['drll']  = {   'name': 'drll',     
#                        'range' : (40,0,4),   
#                        'xaxis' : '#Delta R_{ll}',
#                        'fold' : 3
#                        }
#variables['dphilmet']  = {   'name': 'dphilmet',     
#                        'range' : (40,0,3.2),   
#                        'xaxis' : '#Delta#phi_{lMET}',
#                        'fold' : 0
#                        }
#variables['dphilmet1']  = {   'name': 'dphilmet1',     
#                        'range' : (40,0,3.2),   
#                        'xaxis' : '#Delta#phi_{l1MET}',
#                        'fold' : 0
#                        }
#variables['dphilmet2']  = {   'name': 'dphilmet2',     
#                        'range' : (40,0,3.2),   
#                        'xaxis' : '#Delta#phi_{l2MET}',
#                        'fold' : 0
#                        }
variables['mjj']  = {   'name': 'mjj',            #   variable name    
                        'range' : (40, 0,1000),    #   variable range
                        'xaxis' : 'm_{jj} [GeV]',  #   x axis name
                         'fold' : 1
                        }
variables['mll_low']  = {   'name': 'mll',            #   variable name    
                        'range' : (40, 0,200),    #   variable range
                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                         'fold' : 1
                        }
variables['mll_high']  = {   'name': 'mll',            #   variable name    
                        'range' : (40, 0,400),    #   variable range
                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                         'fold' : 1
                        }
variables['mth']  = {   'name': 'mth',            #   variable name    
                        'range' : (40,0,300),    #   variable range
                        'xaxis' : 'm_{T}^{H} [GeV]',  #   x axis name
                         'fold' : 1
                        }
variables['mTi']  = {   'name': 'mTi',            #   variable name    
                        'range' : (40,0,600),    #   variable range
                        'xaxis' : 'm_{T}^{i} [GeV]',  #   x axis name
                         'fold' : 1
                        }
variables['mTi_binning']  = {   'name': 'mTi',            #   variable name    
                        #'range' : ([0,50,100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,900,1000,2000],),    #   variable range
                        #'range' : ([0,20,40,60,80,100,120,140,160,180,200,250,300,350,400,500,700,4000],),    #   variable range
                        #'range' : ([0,20,40,60,80,100,120,140,160,180,200,220,240,260,280,300,350,400,450,500,550,600,650,700,800,900, 1000,1200,1400,1600,1800,2000,2300,2600,2900,3200],),    #   variable range
                        'range' : ([0,20,40,60,80,100,120,140,160,180,200,220,240,260,280,300,350,400,450,500,550,600,650,700,800,900, 1000,1250,1500,2000,2500,3500],),   
                        'xaxis' : 'm_{T}^{i} [GeV]',  #   x axis name
                         'fold' : 1
                        }
variables['mtw1']  = {   'name': 'mtw1',            #   variable name    
                        'range' : (40,0,300),    #   variable range
                        'xaxis' : 'm_{T}^{W_{1}} [GeV]',  #   x axis name
                         'fold' : 1
                        }
variables['mtw2']  = {   'name': 'mtw2',            #   variable name    
                        'range' : (40,0,200),    #   variable range
                        'xaxis' : 'm_{T}^{W_{2}} [GeV]',  #   x axis name
                         'fold' : 1
                        }
variables['ptWW']  = {   'name': 'pTWW',     
                        'range' : (40, 0,200),   
                        'xaxis' : 'p_{T}^{WW} [GeV]',
                        'fold' : 1
                        }
variables['ptll']  = {   'name': 'ptll',     
                        'range' : (40, 0,200),   
                        'xaxis' : 'p_{T}^{ll} [GeV]',
                        'fold' : 1
                        }


#variables['nvtx']  = {   'name': 'PV_npvsGood',      
#                        'range' : (50,0,100),  
#                        'xaxis' : 'nvtx', 
#                         'fold' : 3
#                      }









                        
                    








'''
variables['mtw1']  = {  'name': 'mtw1',
                        'range' : (40,0,200),
                        'xaxis' : 'm_{T}^{W_{1}} [GeV]',
                         'fold' : 3
                        }

variables['mtw2']  = {  'name': 'mtw2',
                        'range' : (40,0,200),
                        'xaxis' : 'm_{T}^{W_{2}} [GeV]',
                         'fold' : 3
                        }

variables['trkMet']  = {   'name': 'metTtrk',
                        'range' : (40,0,200),
                        'xaxis' : 'trk met [GeV]',
                         'fold' : 3
                        }

variables['mpmet']  = { 'name': 'mpmet',
                        'range' : (40,0,200),
                        'xaxis' : 'min proj met [GeV]',
                        'fold' : 3
                        }

variables['dymvaggh']  = { 'name': 'dymvaggh',
                        'range' : (40,-1,1),
                        'xaxis' : 'DY MVA',
                        'fold' : 3
                        }

'''
                        

